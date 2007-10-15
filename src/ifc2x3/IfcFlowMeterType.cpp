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

#include "ifc2x3/IfcFlowMeterType.h"

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

IfcFlowMeterType::IfcFlowMeterType(Step::Id id, Step::SPFData *args) : IfcFlowControllerType(id, args) {
    m_predefinedType = IfcFlowMeterTypeEnum_UNSET;
}

IfcFlowMeterType::~IfcFlowMeterType() {
}

bool IfcFlowMeterType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFlowMeterType(this);
}

const std::string &IfcFlowMeterType::type() {
    return IfcFlowMeterType::s_type.getName();
}

Step::ClassType IfcFlowMeterType::getClassType() {
    return IfcFlowMeterType::s_type;
}

Step::ClassType IfcFlowMeterType::getType() const {
    return IfcFlowMeterType::s_type;
}

bool IfcFlowMeterType::isOfType(Step::ClassType t) {
    return IfcFlowMeterType::s_type == t ? true : IfcFlowControllerType::isOfType(t);
}

IfcFlowMeterTypeEnum IfcFlowMeterType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcFlowMeterTypeEnum_UNSET;
    }
}

void IfcFlowMeterType::setPredefinedType(IfcFlowMeterTypeEnum value) {
    m_predefinedType = value;
}

void IfcFlowMeterType::release() {
    IfcFlowControllerType::release();
}

bool IfcFlowMeterType::init() {
    bool status = IfcFlowControllerType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcFlowMeterTypeEnum_UNSET;
    }
    else {
        if (arg == ".ELECTRICMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_ELECTRICMETER;
        }
        else if (arg == ".ENERGYMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_ENERGYMETER;
        }
        else if (arg == ".FLOWMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_FLOWMETER;
        }
        else if (arg == ".GASMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_GASMETER;
        }
        else if (arg == ".OILMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_OILMETER;
        }
        else if (arg == ".WATERMETER.") {
            m_predefinedType = IfcFlowMeterTypeEnum_WATERMETER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcFlowMeterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcFlowMeterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFlowMeterType::copy(const IfcFlowMeterType &obj, const CopyOp &copyop) {
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFlowMeterType::s_type("IfcFlowMeterType");
