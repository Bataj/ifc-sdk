/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcShellBasedSurfaceModel.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include "ifc2x3/IfcShell.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcShellBasedSurfaceModel::IfcShellBasedSurfaceModel(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_sbsmBoundary.setUnset(true);
}

IfcShellBasedSurfaceModel::~IfcShellBasedSurfaceModel() {
}

bool IfcShellBasedSurfaceModel::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcShellBasedSurfaceModel(this);
}

const std::string &IfcShellBasedSurfaceModel::type() {
    return IfcShellBasedSurfaceModel::s_type.getName();
}

Step::ClassType IfcShellBasedSurfaceModel::getClassType() {
    return IfcShellBasedSurfaceModel::s_type;
}

Step::ClassType IfcShellBasedSurfaceModel::getType() const {
    return IfcShellBasedSurfaceModel::s_type;
}

bool IfcShellBasedSurfaceModel::isOfType(Step::ClassType t) {
    return IfcShellBasedSurfaceModel::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

Step::Set< Step::RefPtr< IfcShell > > &IfcShellBasedSurfaceModel::getSbsmBoundary() {
    if (Step::BaseObject::inited()) {
        return m_sbsmBoundary;
    }
    else {
        m_sbsmBoundary.setUnset(true);
        return m_sbsmBoundary;
    }
}

void IfcShellBasedSurfaceModel::setSbsmBoundary(const Step::Set< Step::RefPtr< IfcShell > > &value) {
    m_sbsmBoundary = value;
}

void IfcShellBasedSurfaceModel::release() {
    IfcGeometricRepresentationItem::release();
    m_sbsmBoundary.clear();
}

bool IfcShellBasedSurfaceModel::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sbsmBoundary.setUnset(true);
    }
    else {
        m_sbsmBoundary.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcShell > attr2;
                attr2 = new IfcShell;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                m_sbsmBoundary.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcShellBasedSurfaceModel::copy(const IfcShellBasedSurfaceModel &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcShell > >::const_iterator it_m_sbsmBoundary;
    IfcGeometricRepresentationItem::copy(obj, copyop);
    for (it_m_sbsmBoundary = obj.m_sbsmBoundary.begin(); it_m_sbsmBoundary != obj.m_sbsmBoundary.end(); ++it_m_sbsmBoundary) {
        Step::RefPtr< IfcShell > copyTarget = new IfcShell;
        copyTarget->copy(*((*it_m_sbsmBoundary).get()), copyop);
        m_sbsmBoundary.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcShellBasedSurfaceModel::s_type("IfcShellBasedSurfaceModel");
