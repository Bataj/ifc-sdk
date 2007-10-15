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

#include "ifc2x3/IfcTankType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowStorageDeviceType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTankType::IfcTankType(Step::Id id, Step::SPFData *args) : IfcFlowStorageDeviceType(id, args) {
    m_predefinedType = IfcTankTypeEnum_UNSET;
}

IfcTankType::~IfcTankType() {
}

bool IfcTankType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTankType(this);
}

const std::string &IfcTankType::type() {
    return IfcTankType::s_type.getName();
}

Step::ClassType IfcTankType::getClassType() {
    return IfcTankType::s_type;
}

Step::ClassType IfcTankType::getType() const {
    return IfcTankType::s_type;
}

bool IfcTankType::isOfType(Step::ClassType t) {
    return IfcTankType::s_type == t ? true : IfcFlowStorageDeviceType::isOfType(t);
}

IfcTankTypeEnum IfcTankType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcTankTypeEnum_UNSET;
    }
}

void IfcTankType::setPredefinedType(IfcTankTypeEnum value) {
    m_predefinedType = value;
}

void IfcTankType::release() {
    IfcFlowStorageDeviceType::release();
}

bool IfcTankType::init() {
    bool status = IfcFlowStorageDeviceType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcTankTypeEnum_UNSET;
    }
    else {
        if (arg == ".PREFORMED.") {
            m_predefinedType = IfcTankTypeEnum_PREFORMED;
        }
        else if (arg == ".SECTIONAL.") {
            m_predefinedType = IfcTankTypeEnum_SECTIONAL;
        }
        else if (arg == ".EXPANSION.") {
            m_predefinedType = IfcTankTypeEnum_EXPANSION;
        }
        else if (arg == ".PRESSUREVESSEL.") {
            m_predefinedType = IfcTankTypeEnum_PRESSUREVESSEL;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcTankTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcTankTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTankType::copy(const IfcTankType &obj, const CopyOp &copyop) {
    IfcFlowStorageDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTankType::s_type("IfcTankType");
