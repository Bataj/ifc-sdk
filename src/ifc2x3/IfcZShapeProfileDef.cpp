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

#include "ifc2x3/IfcZShapeProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcParameterizedProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcZShapeProfileDef::IfcZShapeProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_depth = Step::getUnset(m_depth);
    m_flangeWidth = Step::getUnset(m_flangeWidth);
    m_webThickness = Step::getUnset(m_webThickness);
    m_flangeThickness = Step::getUnset(m_flangeThickness);
    m_filletRadius = Step::getUnset(m_filletRadius);
    m_edgeRadius = Step::getUnset(m_edgeRadius);
}

IfcZShapeProfileDef::~IfcZShapeProfileDef() {
}

bool IfcZShapeProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcZShapeProfileDef(this);
}

const std::string &IfcZShapeProfileDef::type() {
    return IfcZShapeProfileDef::s_type.getName();
}

Step::ClassType IfcZShapeProfileDef::getClassType() {
    return IfcZShapeProfileDef::s_type;
}

Step::ClassType IfcZShapeProfileDef::getType() const {
    return IfcZShapeProfileDef::s_type;
}

bool IfcZShapeProfileDef::isOfType(Step::ClassType t) {
    return IfcZShapeProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getDepth() {
    if (Step::BaseObject::inited()) {
        return m_depth;
    }
    else {
        return Step::getUnset(m_depth);
    }
}

void IfcZShapeProfileDef::setDepth(IfcPositiveLengthMeasure value) {
    m_depth = value;
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeWidth() {
    if (Step::BaseObject::inited()) {
        return m_flangeWidth;
    }
    else {
        return Step::getUnset(m_flangeWidth);
    }
}

void IfcZShapeProfileDef::setFlangeWidth(IfcPositiveLengthMeasure value) {
    m_flangeWidth = value;
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getWebThickness() {
    if (Step::BaseObject::inited()) {
        return m_webThickness;
    }
    else {
        return Step::getUnset(m_webThickness);
    }
}

void IfcZShapeProfileDef::setWebThickness(IfcPositiveLengthMeasure value) {
    m_webThickness = value;
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFlangeThickness() {
    if (Step::BaseObject::inited()) {
        return m_flangeThickness;
    }
    else {
        return Step::getUnset(m_flangeThickness);
    }
}

void IfcZShapeProfileDef::setFlangeThickness(IfcPositiveLengthMeasure value) {
    m_flangeThickness = value;
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getFilletRadius() {
    if (Step::BaseObject::inited()) {
        return m_filletRadius;
    }
    else {
        return Step::getUnset(m_filletRadius);
    }
}

void IfcZShapeProfileDef::setFilletRadius(IfcPositiveLengthMeasure value) {
    m_filletRadius = value;
}

IfcPositiveLengthMeasure IfcZShapeProfileDef::getEdgeRadius() {
    if (Step::BaseObject::inited()) {
        return m_edgeRadius;
    }
    else {
        return Step::getUnset(m_edgeRadius);
    }
}

void IfcZShapeProfileDef::setEdgeRadius(IfcPositiveLengthMeasure value) {
    m_edgeRadius = value;
}

void IfcZShapeProfileDef::release() {
    IfcParameterizedProfileDef::release();
}

bool IfcZShapeProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_depth = Step::getUnset(m_depth);
    }
    else {
        m_depth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flangeWidth = Step::getUnset(m_flangeWidth);
    }
    else {
        m_flangeWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_webThickness = Step::getUnset(m_webThickness);
    }
    else {
        m_webThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flangeThickness = Step::getUnset(m_flangeThickness);
    }
    else {
        m_flangeThickness = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_filletRadius = Step::getUnset(m_filletRadius);
    }
    else {
        m_filletRadius = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_edgeRadius = Step::getUnset(m_edgeRadius);
    }
    else {
        m_edgeRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcZShapeProfileDef::copy(const IfcZShapeProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setDepth(obj.m_depth);
    setFlangeWidth(obj.m_flangeWidth);
    setWebThickness(obj.m_webThickness);
    setFlangeThickness(obj.m_flangeThickness);
    setFilletRadius(obj.m_filletRadius);
    setEdgeRadius(obj.m_edgeRadius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcZShapeProfileDef::s_type("IfcZShapeProfileDef");
