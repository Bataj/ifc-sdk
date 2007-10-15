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

#include "ifc2x3/IfcEdgeFeature.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcFeatureElementSubtraction.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcEdgeFeature::IfcEdgeFeature(Step::Id id, Step::SPFData *args) : IfcFeatureElementSubtraction(id, args) {
    m_featureLength = Step::getUnset(m_featureLength);
}

IfcEdgeFeature::~IfcEdgeFeature() {
}

bool IfcEdgeFeature::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEdgeFeature(this);
}

const std::string &IfcEdgeFeature::type() {
    return IfcEdgeFeature::s_type.getName();
}

Step::ClassType IfcEdgeFeature::getClassType() {
    return IfcEdgeFeature::s_type;
}

Step::ClassType IfcEdgeFeature::getType() const {
    return IfcEdgeFeature::s_type;
}

bool IfcEdgeFeature::isOfType(Step::ClassType t) {
    return IfcEdgeFeature::s_type == t ? true : IfcFeatureElementSubtraction::isOfType(t);
}

IfcPositiveLengthMeasure IfcEdgeFeature::getFeatureLength() {
    if (Step::BaseObject::inited()) {
        return m_featureLength;
    }
    else {
        return Step::getUnset(m_featureLength);
    }
}

void IfcEdgeFeature::setFeatureLength(IfcPositiveLengthMeasure value) {
    m_featureLength = value;
}

void IfcEdgeFeature::release() {
    IfcFeatureElementSubtraction::release();
}

bool IfcEdgeFeature::init() {
    bool status = IfcFeatureElementSubtraction::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_featureLength = Step::getUnset(m_featureLength);
    }
    else {
        m_featureLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcEdgeFeature::copy(const IfcEdgeFeature &obj, const CopyOp &copyop) {
    IfcFeatureElementSubtraction::copy(obj, copyop);
    setFeatureLength(obj.m_featureLength);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEdgeFeature::s_type("IfcEdgeFeature");
