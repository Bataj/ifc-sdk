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

#include "ifc2x3/IfcProtectiveDeviceType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowControllerType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcProtectiveDeviceType::IfcProtectiveDeviceType(Step::Id id, Step::SPFData *args) : IfcFlowControllerType(id, args) {
    m_predefinedType = IfcProtectiveDeviceTypeEnum_UNSET;
}

IfcProtectiveDeviceType::~IfcProtectiveDeviceType() {
}

bool IfcProtectiveDeviceType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcProtectiveDeviceType(this);
}

const std::string &IfcProtectiveDeviceType::type() {
    return IfcProtectiveDeviceType::s_type.getName();
}

Step::ClassType IfcProtectiveDeviceType::getClassType() {
    return IfcProtectiveDeviceType::s_type;
}

Step::ClassType IfcProtectiveDeviceType::getType() const {
    return IfcProtectiveDeviceType::s_type;
}

bool IfcProtectiveDeviceType::isOfType(Step::ClassType t) {
    return IfcProtectiveDeviceType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcProtectiveDeviceTypeEnum IfcProtectiveDeviceType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcProtectiveDeviceTypeEnum_UNSET;
    }
}

void IfcProtectiveDeviceType::setPredefinedType(IfcProtectiveDeviceTypeEnum value) {
    m_predefinedType = value;
}

void IfcProtectiveDeviceType::release() {
    IfcFlowControllerType::release();
}

bool IfcProtectiveDeviceType::init() {
    bool status = IfcFlowControllerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcProtectiveDeviceTypeEnum_UNSET;
    }
    else {
        if (arg == ".FUSEDISCONNECTOR.") {
            m_predefinedType = IfcProtectiveDeviceTypeEnum_FUSEDISCONNECTOR;
        }
        else if (arg == ".CIRCUITBREAKER.") {
            m_predefinedType = IfcProtectiveDeviceTypeEnum_CIRCUITBREAKER;
        }
        else if (arg == ".EARTHFAILUREDEVICE.") {
            m_predefinedType = IfcProtectiveDeviceTypeEnum_EARTHFAILUREDEVICE;
        }
        else if (arg == ".RESIDUALCURRENTCIRCUITBREAKER.") {
            m_predefinedType = IfcProtectiveDeviceTypeEnum_RESIDUALCURRENTCIRCUITBREAKER;
        }
        else if (arg == ".RESIDUALCURRENTSWITCH.") {
            m_predefinedType = IfcProtectiveDeviceTypeEnum_RESIDUALCURRENTSWITCH;
        }
        else if (arg == ".VARISTOR.") {
            m_predefinedType = IfcProtectiveDeviceTypeEnum_VARISTOR;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcProtectiveDeviceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcProtectiveDeviceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcProtectiveDeviceType::copy(const IfcProtectiveDeviceType &obj, const CopyOp &copyop) {
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProtectiveDeviceType::s_type("IfcProtectiveDeviceType");
