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

#include "ifc2x3/IfcStructuralLinearActionVarying.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/IfcStructuralLinearAction.h"
#include "ifc2x3/IfcStructuralLoad.h"
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

IfcStructuralLinearActionVarying::IfcStructuralLinearActionVarying(Step::Id id, Step::SPFData *args) : IfcStructuralLinearAction(id, args) {
    m_varyingAppliedLoadLocation = NULL;
    m_subsequentAppliedLoads.setUnset(true);
}

IfcStructuralLinearActionVarying::~IfcStructuralLinearActionVarying() {
}

bool IfcStructuralLinearActionVarying::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLinearActionVarying(this);
}

const std::string &IfcStructuralLinearActionVarying::type() {
    return IfcStructuralLinearActionVarying::s_type.getName();
}

Step::ClassType IfcStructuralLinearActionVarying::getClassType() {
    return IfcStructuralLinearActionVarying::s_type;
}

Step::ClassType IfcStructuralLinearActionVarying::getType() const {
    return IfcStructuralLinearActionVarying::s_type;
}

bool IfcStructuralLinearActionVarying::isOfType(Step::ClassType t) {
    return IfcStructuralLinearActionVarying::s_type == t ? true : IfcStructuralLinearAction::isOfType(t);
}

IfcShapeAspect *IfcStructuralLinearActionVarying::getVaryingAppliedLoadLocation() {
    if (Step::BaseObject::inited()) {
        return m_varyingAppliedLoadLocation.get();
    }
    else {
        return NULL;
    }
}

void IfcStructuralLinearActionVarying::setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value) {
    m_varyingAppliedLoadLocation = value;
}

Step::List< Step::RefPtr< IfcStructuralLoad > > &IfcStructuralLinearActionVarying::getSubsequentAppliedLoads() {
    if (Step::BaseObject::inited()) {
        return m_subsequentAppliedLoads;
    }
    else {
        m_subsequentAppliedLoads.setUnset(true);
        return m_subsequentAppliedLoads;
    }
}

void IfcStructuralLinearActionVarying::setSubsequentAppliedLoads(const Step::List< Step::RefPtr< IfcStructuralLoad > > &value) {
    m_subsequentAppliedLoads = value;
}

void IfcStructuralLinearActionVarying::release() {
    IfcStructuralLinearAction::release();
    m_varyingAppliedLoadLocation.release();
    m_subsequentAppliedLoads.clear();
}

bool IfcStructuralLinearActionVarying::init() {
    bool status = IfcStructuralLinearAction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_varyingAppliedLoadLocation = NULL;
    }
    else {
        m_varyingAppliedLoadLocation = static_cast< IfcShapeAspect * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_subsequentAppliedLoads.setUnset(true);
    }
    else {
        m_subsequentAppliedLoads.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcStructuralLoad > attr2;
                attr2 = static_cast< IfcStructuralLoad * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_subsequentAppliedLoads.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcStructuralLinearActionVarying::copy(const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcStructuralLoad > >::const_iterator it_m_subsequentAppliedLoads;
    IfcStructuralLinearAction::copy(obj, copyop);
    setVaryingAppliedLoadLocation(copyop(obj.m_varyingAppliedLoadLocation.get()));
    for (it_m_subsequentAppliedLoads = obj.m_subsequentAppliedLoads.begin(); it_m_subsequentAppliedLoads != obj.m_subsequentAppliedLoads.end(); ++it_m_subsequentAppliedLoads) {
        Step::RefPtr< IfcStructuralLoad > copyTarget = copyop((*it_m_subsequentAppliedLoads).get());
        m_subsequentAppliedLoads.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLinearActionVarying::s_type("IfcStructuralLinearActionVarying");
