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

#include "ifc2x3/IfcMotorConnectionType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEnergyConversionDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcMotorConnectionType::IfcMotorConnectionType(Step::Id id, Step::SPFData *args) : IfcEnergyConversionDeviceType(id, args) {
    m_predefinedType = IfcMotorConnectionTypeEnum_UNSET;
}

IfcMotorConnectionType::~IfcMotorConnectionType() {
}

bool IfcMotorConnectionType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcMotorConnectionType(this);
}

const std::string &IfcMotorConnectionType::type() {
    return IfcMotorConnectionType::s_type.getName();
}

Step::ClassType IfcMotorConnectionType::getClassType() {
    return IfcMotorConnectionType::s_type;
}

Step::ClassType IfcMotorConnectionType::getType() const {
    return IfcMotorConnectionType::s_type;
}

bool IfcMotorConnectionType::isOfType(Step::ClassType t) {
    return IfcMotorConnectionType::s_type == t ? true : IfcEnergyConversionDeviceType::isOfType(t);
}

IfcMotorConnectionTypeEnum IfcMotorConnectionType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcMotorConnectionTypeEnum_UNSET;
    }
}

void IfcMotorConnectionType::setPredefinedType(IfcMotorConnectionTypeEnum value) {
    m_predefinedType = value;
}

void IfcMotorConnectionType::release() {
    IfcEnergyConversionDeviceType::release();
}

bool IfcMotorConnectionType::init() {
    bool status = IfcEnergyConversionDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcMotorConnectionTypeEnum_UNSET;
    }
    else {
        if (arg == ".BELTDRIVE.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_BELTDRIVE;
        }
        else if (arg == ".COUPLING.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_COUPLING;
        }
        else if (arg == ".DIRECTDRIVE.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_DIRECTDRIVE;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcMotorConnectionTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcMotorConnectionType::copy(const IfcMotorConnectionType &obj, const CopyOp &copyop) {
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcMotorConnectionType::s_type("IfcMotorConnectionType");
