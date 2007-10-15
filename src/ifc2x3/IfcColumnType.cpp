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

#include "ifc2x3/IfcColumnType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBuildingElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcColumnType::IfcColumnType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcColumnTypeEnum_UNSET;
}

IfcColumnType::~IfcColumnType() {
}

bool IfcColumnType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcColumnType(this);
}

const std::string &IfcColumnType::type() {
    return IfcColumnType::s_type.getName();
}

Step::ClassType IfcColumnType::getClassType() {
    return IfcColumnType::s_type;
}

Step::ClassType IfcColumnType::getType() const {
    return IfcColumnType::s_type;
}

bool IfcColumnType::isOfType(Step::ClassType t) {
    return IfcColumnType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcColumnTypeEnum IfcColumnType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcColumnTypeEnum_UNSET;
    }
}

void IfcColumnType::setPredefinedType(IfcColumnTypeEnum value) {
    m_predefinedType = value;
}

void IfcColumnType::release() {
    IfcBuildingElementType::release();
}

bool IfcColumnType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcColumnTypeEnum_UNSET;
    }
    else {
        if (arg == ".COLUMN.") {
            m_predefinedType = IfcColumnTypeEnum_COLUMN;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcColumnTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcColumnTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcColumnType::copy(const IfcColumnType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcColumnType::s_type("IfcColumnType");
