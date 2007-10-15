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

#include "ifc2x3/IfcStructuralResultGroup.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcGroup.h"
#include "ifc2x3/IfcStructuralAnalysisModel.h"
#include "ifc2x3/IfcStructuralLoadGroup.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralResultGroup::IfcStructuralResultGroup(Step::Id id, Step::SPFData *args) : IfcGroup(id, args) {
    m_theoryType = IfcAnalysisTheoryTypeEnum_UNSET;
    m_resultForLoadGroup = NULL;
    m_isLinear = Step::getUnset(m_isLinear);
    m_resultGroupFor.setUnset(true);
}

IfcStructuralResultGroup::~IfcStructuralResultGroup() {
}

bool IfcStructuralResultGroup::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralResultGroup(this);
}

const std::string &IfcStructuralResultGroup::type() {
    return IfcStructuralResultGroup::s_type.getName();
}

Step::ClassType IfcStructuralResultGroup::getClassType() {
    return IfcStructuralResultGroup::s_type;
}

Step::ClassType IfcStructuralResultGroup::getType() const {
    return IfcStructuralResultGroup::s_type;
}

bool IfcStructuralResultGroup::isOfType(Step::ClassType t) {
    return IfcStructuralResultGroup::s_type == t ? true : IfcGroup::isOfType(t);
}

IfcAnalysisTheoryTypeEnum IfcStructuralResultGroup::getTheoryType() {
    if (Step::BaseObject::inited()) {
        return m_theoryType;
    }
    else {
        return IfcAnalysisTheoryTypeEnum_UNSET;
    }
}

void IfcStructuralResultGroup::setTheoryType(IfcAnalysisTheoryTypeEnum value) {
    m_theoryType = value;
}

IfcStructuralLoadGroup *IfcStructuralResultGroup::getResultForLoadGroup() {
    if (Step::BaseObject::inited()) {
        return m_resultForLoadGroup.get();
    }
    else {
        return NULL;
    }
}

void IfcStructuralResultGroup::setResultForLoadGroup(const Step::RefPtr< IfcStructuralLoadGroup > &value) {
    m_resultForLoadGroup = value;
    m_resultForLoadGroup->m_sourceOfResultGroup.insert(this);
}

Step::Bool IfcStructuralResultGroup::getIsLinear() {
    if (Step::BaseObject::inited()) {
        return m_isLinear;
    }
    else {
        return Step::getUnset(m_isLinear);
    }
}

void IfcStructuralResultGroup::setIsLinear(Step::Bool value) {
    m_isLinear = value;
}

Step::Set< Step::ObsPtr< IfcStructuralAnalysisModel > > &IfcStructuralResultGroup::getResultGroupFor() {
    if (Step::BaseObject::inited()) {
        return m_resultGroupFor;
    }
    else {
        m_resultGroupFor.setUnset(true);
        return m_resultGroupFor;
    }
}

void IfcStructuralResultGroup::release() {
    IfcGroup::release();
    m_resultForLoadGroup.release();
}

bool IfcStructuralResultGroup::init() {
    bool status = IfcGroup::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_theoryType = IfcAnalysisTheoryTypeEnum_UNSET;
    }
    else {
        if (arg == ".FIRST_ORDER_THEORY.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_FIRST_ORDER_THEORY;
        }
        else if (arg == ".SECOND_ORDER_THEORY.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_SECOND_ORDER_THEORY;
        }
        else if (arg == ".THIRD_ORDER_THEORY.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_THIRD_ORDER_THEORY;
        }
        else if (arg == ".FULL_NONLINEAR_THEORY.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_FULL_NONLINEAR_THEORY;
        }
        else if (arg == ".USERDEFINED.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_theoryType = IfcAnalysisTheoryTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_resultForLoadGroup = NULL;
    }
    else {
        m_resultForLoadGroup = static_cast< IfcStructuralLoadGroup * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_isLinear = Step::getUnset(m_isLinear);
    }
    else {
        m_isLinear = Step::spfToBool(arg);
    }
    inverses = m_args->getInverses(IfcStructuralAnalysisModel::getClassType(), 8);
    if (inverses) {
        unsigned int i;
        m_resultGroupFor.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_resultGroupFor.insert(static_cast< IfcStructuralAnalysisModel * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcStructuralResultGroup::copy(const IfcStructuralResultGroup &obj, const CopyOp &copyop) {
    IfcGroup::copy(obj, copyop);
    setTheoryType(obj.m_theoryType);
    setResultForLoadGroup(copyop(obj.m_resultForLoadGroup.get()));
    setIsLinear(obj.m_isLinear);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralResultGroup::s_type("IfcStructuralResultGroup");
