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

#include "ifc2x3/IfcOutletType.h"

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

IfcOutletType::IfcOutletType(Step::Id id, Step::SPFData *args) : IfcFlowTerminalType(id, args) {
    m_predefinedType = IfcOutletTypeEnum_UNSET;
}

IfcOutletType::~IfcOutletType() {
}

bool IfcOutletType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcOutletType(this);
}

const std::string &IfcOutletType::type() {
    return IfcOutletType::s_type.getName();
}

Step::ClassType IfcOutletType::getClassType() {
    return IfcOutletType::s_type;
}

Step::ClassType IfcOutletType::getType() const {
    return IfcOutletType::s_type;
}

bool IfcOutletType::isOfType(Step::ClassType t) {
    return IfcOutletType::s_type == t ? true : IfcFlowTerminalType::isOfType(t);
}

IfcOutletTypeEnum IfcOutletType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcOutletTypeEnum_UNSET;
    }
}

void IfcOutletType::setPredefinedType(IfcOutletTypeEnum value) {
    m_predefinedType = value;
}

void IfcOutletType::release() {
    IfcFlowTerminalType::release();
}

bool IfcOutletType::init() {
    bool status = IfcFlowTerminalType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcOutletTypeEnum_UNSET;
    }
    else {
        if (arg == ".AUDIOVISUALOUTLET.") {
            m_predefinedType = IfcOutletTypeEnum_AUDIOVISUALOUTLET;
        }
        else if (arg == ".COMMUNICATIONSOUTLET.") {
            m_predefinedType = IfcOutletTypeEnum_COMMUNICATIONSOUTLET;
        }
        else if (arg == ".POWEROUTLET.") {
            m_predefinedType = IfcOutletTypeEnum_POWEROUTLET;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcOutletTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcOutletTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcOutletType::copy(const IfcOutletType &obj, const CopyOp &copyop) {
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcOutletType::s_type("IfcOutletType");
