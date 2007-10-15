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

#include "ifc2x3/IfcQuantityLength.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPhysicalSimpleQuantity.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcQuantityLength::IfcQuantityLength(Step::Id id, Step::SPFData *args) : IfcPhysicalSimpleQuantity(id, args) {
    m_lengthValue = Step::getUnset(m_lengthValue);
}

IfcQuantityLength::~IfcQuantityLength() {
}

bool IfcQuantityLength::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcQuantityLength(this);
}

const std::string &IfcQuantityLength::type() {
    return IfcQuantityLength::s_type.getName();
}

Step::ClassType IfcQuantityLength::getClassType() {
    return IfcQuantityLength::s_type;
}

Step::ClassType IfcQuantityLength::getType() const {
    return IfcQuantityLength::s_type;
}

bool IfcQuantityLength::isOfType(Step::ClassType t) {
    return IfcQuantityLength::s_type == t ? true : IfcPhysicalSimpleQuantity::isOfType(t);
}

IfcLengthMeasure IfcQuantityLength::getLengthValue() {
    if (Step::BaseObject::inited()) {
        return m_lengthValue;
    }
    else {
        return Step::getUnset(m_lengthValue);
    }
}

void IfcQuantityLength::setLengthValue(IfcLengthMeasure value) {
    m_lengthValue = value;
}

void IfcQuantityLength::release() {
    IfcPhysicalSimpleQuantity::release();
}

bool IfcQuantityLength::init() {
    bool status = IfcPhysicalSimpleQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lengthValue = Step::getUnset(m_lengthValue);
    }
    else {
        m_lengthValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcQuantityLength::copy(const IfcQuantityLength &obj, const CopyOp &copyop) {
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setLengthValue(obj.m_lengthValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcQuantityLength::s_type("IfcQuantityLength");
