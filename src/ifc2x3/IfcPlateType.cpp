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

#include "ifc2x3/IfcPlateType.h"

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

IfcPlateType::IfcPlateType(Step::Id id, Step::SPFData *args) : IfcBuildingElementType(id, args) {
    m_predefinedType = IfcPlateTypeEnum_UNSET;
}

IfcPlateType::~IfcPlateType() {
}

bool IfcPlateType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPlateType(this);
}

const std::string &IfcPlateType::type() {
    return IfcPlateType::s_type.getName();
}

Step::ClassType IfcPlateType::getClassType() {
    return IfcPlateType::s_type;
}

Step::ClassType IfcPlateType::getType() const {
    return IfcPlateType::s_type;
}

bool IfcPlateType::isOfType(Step::ClassType t) {
    return IfcPlateType::s_type == t ? true : IfcBuildingElementType::isOfType(t);
}

IfcPlateTypeEnum IfcPlateType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcPlateTypeEnum_UNSET;
    }
}

void IfcPlateType::setPredefinedType(IfcPlateTypeEnum value) {
    m_predefinedType = value;
}

void IfcPlateType::release() {
    IfcBuildingElementType::release();
}

bool IfcPlateType::init() {
    bool status = IfcBuildingElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcPlateTypeEnum_UNSET;
    }
    else {
        if (arg == ".CURTAIN_PANEL.") {
            m_predefinedType = IfcPlateTypeEnum_CURTAIN_PANEL;
        }
        else if (arg == ".SHEET.") {
            m_predefinedType = IfcPlateTypeEnum_SHEET;
        }
        else if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcPlateTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcPlateTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPlateType::copy(const IfcPlateType &obj, const CopyOp &copyop) {
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPlateType::s_type("IfcPlateType");
