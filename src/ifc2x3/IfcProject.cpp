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

#include "ifc2x3/IfcProject.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcObject.h"
#include "ifc2x3/IfcRepresentationContext.h"
#include "ifc2x3/IfcUnitAssignment.h"
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

IfcProject::IfcProject(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
    m_longName = Step::getUnset(m_longName);
    m_phase = Step::getUnset(m_phase);
    m_representationContexts.setUnset(true);
    m_unitsInContext = NULL;
}

IfcProject::~IfcProject() {
}

bool IfcProject::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProject(this);
}

const std::string &IfcProject::type() {
    return IfcProject::s_type.getName();
}

Step::ClassType IfcProject::getClassType() {
    return IfcProject::s_type;
}

Step::ClassType IfcProject::getType() const {
    return IfcProject::s_type;
}

bool IfcProject::isOfType(Step::ClassType t) {
    return IfcProject::s_type == t ? true : IfcObject::isOfType(t);
}

IfcLabel IfcProject::getLongName() {
    if (Step::BaseObject::inited()) {
        return m_longName;
    }
    else {
        return Step::getUnset(m_longName);
    }
}

void IfcProject::setLongName(const IfcLabel &value) {
    m_longName = value;
}

IfcLabel IfcProject::getPhase() {
    if (Step::BaseObject::inited()) {
        return m_phase;
    }
    else {
        return Step::getUnset(m_phase);
    }
}

void IfcProject::setPhase(const IfcLabel &value) {
    m_phase = value;
}

Step::Set< Step::RefPtr< IfcRepresentationContext > > &IfcProject::getRepresentationContexts() {
    if (Step::BaseObject::inited()) {
        return m_representationContexts;
    }
    else {
        m_representationContexts.setUnset(true);
        return m_representationContexts;
    }
}

void IfcProject::setRepresentationContexts(const Step::Set< Step::RefPtr< IfcRepresentationContext > > &value) {
    m_representationContexts = value;
}

IfcUnitAssignment *IfcProject::getUnitsInContext() {
    if (Step::BaseObject::inited()) {
        return m_unitsInContext.get();
    }
    else {
        return NULL;
    }
}

void IfcProject::setUnitsInContext(const Step::RefPtr< IfcUnitAssignment > &value) {
    m_unitsInContext = value;
}

void IfcProject::release() {
    IfcObject::release();
    m_representationContexts.clear();
    m_unitsInContext.release();
}

bool IfcProject::init() {
    bool status = IfcObject::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longName = Step::getUnset(m_longName);
    }
    else {
        m_longName = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_phase = Step::getUnset(m_phase);
    }
    else {
        m_phase = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representationContexts.setUnset(true);
    }
    else {
        m_representationContexts.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRepresentationContext > attr2;
                attr2 = static_cast< IfcRepresentationContext * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_representationContexts.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_unitsInContext = NULL;
    }
    else {
        m_unitsInContext = static_cast< IfcUnitAssignment * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcProject::copy(const IfcProject &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcRepresentationContext > >::const_iterator it_m_representationContexts;
    IfcObject::copy(obj, copyop);
    setLongName(obj.m_longName);
    setPhase(obj.m_phase);
    for (it_m_representationContexts = obj.m_representationContexts.begin(); it_m_representationContexts != obj.m_representationContexts.end(); ++it_m_representationContexts) {
        Step::RefPtr< IfcRepresentationContext > copyTarget = copyop((*it_m_representationContexts).get());
        m_representationContexts.insert(copyTarget.get());
    }
    setUnitsInContext(copyop(obj.m_unitsInContext.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProject::s_type("IfcProject");
