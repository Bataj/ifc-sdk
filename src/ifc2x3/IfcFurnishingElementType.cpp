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

#include "ifc2x3/IfcFurnishingElementType.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElementType.h"
#include "ifc2x3/Visitor.h"
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcFurnishingElementType::IfcFurnishingElementType(Step::Id id, Step::SPFData *args) : IfcElementType(id, args) {
}

IfcFurnishingElementType::~IfcFurnishingElementType() {
}

bool IfcFurnishingElementType::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFurnishingElementType(this);
}

const std::string &IfcFurnishingElementType::type() {
    return IfcFurnishingElementType::s_type.getName();
}

Step::ClassType IfcFurnishingElementType::getClassType() {
    return IfcFurnishingElementType::s_type;
}

Step::ClassType IfcFurnishingElementType::getType() const {
    return IfcFurnishingElementType::s_type;
}

bool IfcFurnishingElementType::isOfType(Step::ClassType t) {
    return IfcFurnishingElementType::s_type == t ? true : IfcElementType::isOfType(t);
}

void IfcFurnishingElementType::release() {
    IfcElementType::release();
}

bool IfcFurnishingElementType::init() {
    bool status = IfcElementType::init();
    std::string arg;
    if (!status) {
        return false;
    }
    return true;
}

void IfcFurnishingElementType::copy(const IfcFurnishingElementType &obj, const CopyOp &copyop) {
    IfcElementType::copy(obj, copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFurnishingElementType::s_type("IfcFurnishingElementType");
