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

#include "ifc2x3/IfcCartesianTransformationOperator3DnonUniform.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCartesianTransformationOperator3D.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCartesianTransformationOperator3DnonUniform::IfcCartesianTransformationOperator3DnonUniform(Step::Id id, Step::SPFData *args) : IfcCartesianTransformationOperator3D(id, args) {
    m_scale2 = Step::getUnset(m_scale2);
    m_scale3 = Step::getUnset(m_scale3);
}

IfcCartesianTransformationOperator3DnonUniform::~IfcCartesianTransformationOperator3DnonUniform() {
}

bool IfcCartesianTransformationOperator3DnonUniform::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCartesianTransformationOperator3DnonUniform(this);
}

const std::string &IfcCartesianTransformationOperator3DnonUniform::type() {
    return IfcCartesianTransformationOperator3DnonUniform::s_type.getName();
}

Step::ClassType IfcCartesianTransformationOperator3DnonUniform::getClassType() {
    return IfcCartesianTransformationOperator3DnonUniform::s_type;
}

Step::ClassType IfcCartesianTransformationOperator3DnonUniform::getType() const {
    return IfcCartesianTransformationOperator3DnonUniform::s_type;
}

bool IfcCartesianTransformationOperator3DnonUniform::isOfType(Step::ClassType t) {
    return IfcCartesianTransformationOperator3DnonUniform::s_type == t ? true : IfcCartesianTransformationOperator3D::isOfType(t);
}

Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale2() {
    if (Step::BaseObject::inited()) {
        return m_scale2;
    }
    else {
        return Step::getUnset(m_scale2);
    }
}

void IfcCartesianTransformationOperator3DnonUniform::setScale2(Step::Real value) {
    m_scale2 = value;
}

Step::Real IfcCartesianTransformationOperator3DnonUniform::getScale3() {
    if (Step::BaseObject::inited()) {
        return m_scale3;
    }
    else {
        return Step::getUnset(m_scale3);
    }
}

void IfcCartesianTransformationOperator3DnonUniform::setScale3(Step::Real value) {
    m_scale3 = value;
}

void IfcCartesianTransformationOperator3DnonUniform::release() {
    IfcCartesianTransformationOperator3D::release();
}

bool IfcCartesianTransformationOperator3DnonUniform::init() {
    bool status = IfcCartesianTransformationOperator3D::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scale2 = Step::getUnset(m_scale2);
    }
    else {
        m_scale2 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scale3 = Step::getUnset(m_scale3);
    }
    else {
        m_scale3 = Step::spfToReal(arg);
    }
    return true;
}

void IfcCartesianTransformationOperator3DnonUniform::copy(const IfcCartesianTransformationOperator3DnonUniform &obj, const CopyOp &copyop) {
    IfcCartesianTransformationOperator3D::copy(obj, copyop);
    setScale2(obj.m_scale2);
    setScale3(obj.m_scale3);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCartesianTransformationOperator3DnonUniform::s_type("IfcCartesianTransformationOperator3DnonUniform");
