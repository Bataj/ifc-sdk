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

#include "ifc2x3/IfcJunctionBoxType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFlowFittingType.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcJunctionBoxType::IfcJunctionBoxType(Step::Id id, Step::SPFData *args) : IfcFlowFittingType(id, args) {
    m_predefinedType = IfcJunctionBoxTypeEnum_UNSET;
}

IfcJunctionBoxType::~IfcJunctionBoxType() {
}

bool IfcJunctionBoxType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcJunctionBoxType(this);
}

const std::string &IfcJunctionBoxType::type() {
    return IfcJunctionBoxType::s_type.getName();
}

Step::ClassType IfcJunctionBoxType::getClassType() {
    return IfcJunctionBoxType::s_type;
}

Step::ClassType IfcJunctionBoxType::getType() const {
    return IfcJunctionBoxType::s_type;
}

bool IfcJunctionBoxType::isOfType(Step::ClassType t) {
    return IfcJunctionBoxType::s_type == t ? true : IfcFlowFittingType::isOfType(t);
}

IfcJunctionBoxTypeEnum IfcJunctionBoxType::getPredefinedType() {
    if (Step::BaseObject::inited()) {
        return m_predefinedType;
    }
    else {
        return IfcJunctionBoxTypeEnum_UNSET;
    }
}

void IfcJunctionBoxType::setPredefinedType(IfcJunctionBoxTypeEnum value) {
    m_predefinedType = value;
}

void IfcJunctionBoxType::release() {
    IfcFlowFittingType::release();
}

bool IfcJunctionBoxType::init() {
    bool status = IfcFlowFittingType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_predefinedType = IfcJunctionBoxTypeEnum_UNSET;
    }
    else {
        if (arg == ".USERDEFINED.") {
            m_predefinedType = IfcJunctionBoxTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_predefinedType = IfcJunctionBoxTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcJunctionBoxType::copy(const IfcJunctionBoxType &obj, const CopyOp &copyop) {
    IfcFlowFittingType::copy(obj, copyop);
    setPredefinedType(obj.m_predefinedType);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcJunctionBoxType::s_type("IfcJunctionBoxType");
