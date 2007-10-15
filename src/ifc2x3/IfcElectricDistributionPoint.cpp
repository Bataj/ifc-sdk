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

#include "ifc2x3/IfcElectricDistributionPoint.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowController.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcElectricDistributionPoint::IfcElectricDistributionPoint(Step::Id id, Step::SPFData *args) : IfcFlowController(id, args) {
    m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_UNSET;
    m_userDefinedFunction = Step::getUnset(m_userDefinedFunction);
}

IfcElectricDistributionPoint::~IfcElectricDistributionPoint() {
}

bool IfcElectricDistributionPoint::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElectricDistributionPoint(this);
}

const std::string &IfcElectricDistributionPoint::type() {
    return IfcElectricDistributionPoint::s_type.getName();
}

Step::ClassType IfcElectricDistributionPoint::getClassType() {
    return IfcElectricDistributionPoint::s_type;
}

Step::ClassType IfcElectricDistributionPoint::getType() const {
    return IfcElectricDistributionPoint::s_type;
}

bool IfcElectricDistributionPoint::isOfType(Step::ClassType t) {
    return IfcElectricDistributionPoint::s_type == t ? true : IfcFlowController::isOfType(t);
}

IfcElectricDistributionPointFunctionEnum IfcElectricDistributionPoint::getDistributionPointFunction() {
    if (Step::BaseObject::inited()) {
        return m_distributionPointFunction;
    }
    else {
        return IfcElectricDistributionPointFunctionEnum_UNSET;
    }
}

void IfcElectricDistributionPoint::setDistributionPointFunction(IfcElectricDistributionPointFunctionEnum value) {
    m_distributionPointFunction = value;
}

IfcLabel IfcElectricDistributionPoint::getUserDefinedFunction() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedFunction;
    }
    else {
        return Step::getUnset(m_userDefinedFunction);
    }
}

void IfcElectricDistributionPoint::setUserDefinedFunction(const IfcLabel &value) {
    m_userDefinedFunction = value;
}

void IfcElectricDistributionPoint::release() {
    IfcFlowController::release();
}

bool IfcElectricDistributionPoint::init() {
    bool status = IfcFlowController::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_UNSET;
    }
    else {
        if (arg == ".ALARMPANEL.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_ALARMPANEL;
        }
        else if (arg == ".CONSUMERUNIT.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_CONSUMERUNIT;
        }
        else if (arg == ".CONTROLPANEL.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_CONTROLPANEL;
        }
        else if (arg == ".DISTRIBUTIONBOARD.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_DISTRIBUTIONBOARD;
        }
        else if (arg == ".GASDETECTORPANEL.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_GASDETECTORPANEL;
        }
        else if (arg == ".INDICATORPANEL.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_INDICATORPANEL;
        }
        else if (arg == ".MIMICPANEL.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_MIMICPANEL;
        }
        else if (arg == ".MOTORCONTROLCENTRE.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_MOTORCONTROLCENTRE;
        }
        else if (arg == ".SWITCHBOARD.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_SWITCHBOARD;
        }
        else if (arg == ".USERDEFINED.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_distributionPointFunction = IfcElectricDistributionPointFunctionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedFunction = Step::getUnset(m_userDefinedFunction);
    }
    else {
        m_userDefinedFunction = Step::spfToString(arg);
    }
    return true;
}

void IfcElectricDistributionPoint::copy(const IfcElectricDistributionPoint &obj, const CopyOp &copyop) {
    IfcFlowController::copy(obj, copyop);
    setDistributionPointFunction(obj.m_distributionPointFunction);
    setUserDefinedFunction(obj.m_userDefinedFunction);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElectricDistributionPoint::s_type("IfcElectricDistributionPoint");
