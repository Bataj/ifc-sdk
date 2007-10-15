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

#include "ifc2x3/IfcStackTerminalType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowTerminalType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStackTerminalType::IfcStackTerminalType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcStackTerminalTypeEnum_UNSET;
}

IfcStackTerminalType::~IfcStackTerminalType() {
}

bool IfcStackTerminalType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStackTerminalType(this);
}

const std::string &IfcStackTerminalType::type() {
    return IfcStackTerminalType::s_type.getName();
}

Step::ClassType IfcStackTerminalType::getClassType() {
    return IfcStackTerminalType::s_type;
}

Step::ClassType IfcStackTerminalType::getType() const {
    return IfcStackTerminalType::s_type;
}

bool IfcStackTerminalType::isOfType(Step::ClassType t) {
    return IfcStackTerminalType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcStackTerminalTypeEnum IfcStackTerminalType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcStackTerminalTypeEnum_UNSET;
    }
}

void IfcStackTerminalType::setPredefinedType(IfcStackTerminalTypeEnum value) {
    m_predefinedType = value;
}

void IfcStackTerminalType::release() {
    IfcFlowTerminalType::release();
}

bool IfcStackTerminalType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcStackTerminalTypeEnum_UNSET;
    }
    else {
        if (arg == ".BIRDCAGE.") {
            m_predefinedType = IfcStackTerminalTypeEnum_BIRDCAGE;
        }
        else if (arg == ".COWL.") {
            m_predefinedType = IfcStackTerminalTypeEnum_COWL;
        }
        else if (arg == ".RAINWATERHOPPER.") {
            m_predefinedType = IfcStackTerminalTypeEnum_RAINWATERHOPPER;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcStackTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcStackTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcStackTerminalType::copy(const IfcStackTerminalType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStackTerminalType::s_type("IfcStackTerminalType");
