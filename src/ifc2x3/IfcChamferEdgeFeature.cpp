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

#include "ifc2x3/IfcChamferEdgeFeature.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcEdgeFeature.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcChamferEdgeFeature::IfcChamferEdgeFeature(Step::Id id, Step::SPFData *args) : IfcEdgeFeature(id, args) {
    m_width = Step::getUnset(m_width);
    m_height = Step::getUnset(m_height);
}

IfcChamferEdgeFeature::~IfcChamferEdgeFeature() {
}

bool IfcChamferEdgeFeature::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcChamferEdgeFeature(this);
}

const std::string &IfcChamferEdgeFeature::type() {
    return IfcChamferEdgeFeature::s_type.getName();
}

Step::ClassType IfcChamferEdgeFeature::getClassType() {
    return IfcChamferEdgeFeature::s_type;
}

Step::ClassType IfcChamferEdgeFeature::getType() const {
    return IfcChamferEdgeFeature::s_type;
}

bool IfcChamferEdgeFeature::isOfType(Step::ClassType t) {
    return IfcChamferEdgeFeature::s_type == t ? true : IfcEdgeFeature::isOfType(t);
}

IfcPositiveLengthMeasure IfcChamferEdgeFeature::getWidth() {
    if (Step::BaseObject::inited()) {
        return m_width;
    }
    else {
        return Step::getUnset(m_width);
    }
}

void IfcChamferEdgeFeature::setWidth(IfcPositiveLengthMeasure value) {
    m_width = value;
}

IfcPositiveLengthMeasure IfcChamferEdgeFeature::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

void IfcChamferEdgeFeature::setHeight(IfcPositiveLengthMeasure value) {
    m_height = value;
}

void IfcChamferEdgeFeature::release() {
    IfcEdgeFeature::release();
}

bool IfcChamferEdgeFeature::init() {
    bool status = IfcEdgeFeature::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_width = Step::getUnset(m_width);
    }
    else {
        m_width = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_height = Step::getUnset(m_height);
    }
    else {
        m_height = Step::spfToReal(arg);
    }
    return true;
}

void IfcChamferEdgeFeature::copy(const IfcChamferEdgeFeature &obj, const CopyOp &copyop) {
    IfcEdgeFeature::copy(obj, copyop);
    setWidth(obj.m_width);
    setHeight(obj.m_height);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcChamferEdgeFeature::s_type("IfcChamferEdgeFeature");
