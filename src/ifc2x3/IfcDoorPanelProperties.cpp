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

#include "ifc2x3/IfcDoorPanelProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcShapeAspect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDoorPanelProperties::IfcDoorPanelProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_panelDepth = Step::getUnset(m_panelDepth);
    m_panelOperation = IfcDoorPanelOperationEnum_UNSET;
    m_panelWidth = Step::getUnset(m_panelWidth);
    m_panelPosition = IfcDoorPanelPositionEnum_UNSET;
    m_shapeAspectStyle = NULL;
}

IfcDoorPanelProperties::~IfcDoorPanelProperties() {
}

bool IfcDoorPanelProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDoorPanelProperties(this);
}

const std::string &IfcDoorPanelProperties::type() {
    return IfcDoorPanelProperties::s_type.getName();
}

Step::ClassType IfcDoorPanelProperties::getClassType() {
    return IfcDoorPanelProperties::s_type;
}

Step::ClassType IfcDoorPanelProperties::getType() const {
    return IfcDoorPanelProperties::s_type;
}

bool IfcDoorPanelProperties::isOfType(Step::ClassType t) {
    return IfcDoorPanelProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPositiveLengthMeasure IfcDoorPanelProperties::getPanelDepth() {
    if (Step::BaseObject::inited()) {
        return m_panelDepth;
    }
    else {
        return Step::getUnset(m_panelDepth);
    }
}

void IfcDoorPanelProperties::setPanelDepth(IfcPositiveLengthMeasure value) {
    m_panelDepth = value;
}

IfcDoorPanelOperationEnum IfcDoorPanelProperties::getPanelOperation() {
    if (Step::BaseObject::inited()) {
        return m_panelOperation;
    }
    else {
        return IfcDoorPanelOperationEnum_UNSET;
    }
}

void IfcDoorPanelProperties::setPanelOperation(IfcDoorPanelOperationEnum value) {
    m_panelOperation = value;
}

IfcNormalisedRatioMeasure IfcDoorPanelProperties::getPanelWidth() {
    if (Step::BaseObject::inited()) {
        return m_panelWidth;
    }
    else {
        return Step::getUnset(m_panelWidth);
    }
}

void IfcDoorPanelProperties::setPanelWidth(IfcNormalisedRatioMeasure value) {
    m_panelWidth = value;
}

IfcDoorPanelPositionEnum IfcDoorPanelProperties::getPanelPosition() {
    if (Step::BaseObject::inited()) {
        return m_panelPosition;
    }
    else {
        return IfcDoorPanelPositionEnum_UNSET;
    }
}

void IfcDoorPanelProperties::setPanelPosition(IfcDoorPanelPositionEnum value) {
    m_panelPosition = value;
}

IfcShapeAspect *IfcDoorPanelProperties::getShapeAspectStyle() {
    if (Step::BaseObject::inited()) {
        return m_shapeAspectStyle.get();
    }
    else {
        return NULL;
    }
}

void IfcDoorPanelProperties::setShapeAspectStyle(const Step::RefPtr< IfcShapeAspect > &value) {
    m_shapeAspectStyle = value;
}

void IfcDoorPanelProperties::release() {
    IfcPropertySetDefinition::release();
    m_shapeAspectStyle.release();
}

bool IfcDoorPanelProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelDepth = Step::getUnset(m_panelDepth);
    }
    else {
        m_panelDepth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelOperation = IfcDoorPanelOperationEnum_UNSET;
    }
    else {
        if (arg == ".SWINGING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_SWINGING;
        }
        else if (arg == ".DOUBLE_ACTING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_DOUBLE_ACTING;
        }
        else if (arg == ".SLIDING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_SLIDING;
        }
        else if (arg == ".FOLDING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_FOLDING;
        }
        else if (arg == ".REVOLVING.") {
            m_panelOperation = IfcDoorPanelOperationEnum_REVOLVING;
        }
        else if (arg == ".ROLLINGUP.") {
            m_panelOperation = IfcDoorPanelOperationEnum_ROLLINGUP;
        }
        else if (arg == ".USERDEFINED.") {
            m_panelOperation = IfcDoorPanelOperationEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_panelOperation = IfcDoorPanelOperationEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelWidth = Step::getUnset(m_panelWidth);
    }
    else {
        m_panelWidth = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_panelPosition = IfcDoorPanelPositionEnum_UNSET;
    }
    else {
        if (arg == ".LEFT.") {
            m_panelPosition = IfcDoorPanelPositionEnum_LEFT;
        }
        else if (arg == ".MIDDLE.") {
            m_panelPosition = IfcDoorPanelPositionEnum_MIDDLE;
        }
        else if (arg == ".RIGHT.") {
            m_panelPosition = IfcDoorPanelPositionEnum_RIGHT;
        }
        else if (arg == ".NOTDEFINED.") {
            m_panelPosition = IfcDoorPanelPositionEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_shapeAspectStyle = NULL;
    }
    else {
        m_shapeAspectStyle = static_cast< IfcShapeAspect * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcDoorPanelProperties::copy(const IfcDoorPanelProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setPanelDepth(obj.m_panelDepth);
    setPanelOperation(obj.m_panelOperation);
    setPanelWidth(obj.m_panelWidth);
    setPanelPosition(obj.m_panelPosition);
    setShapeAspectStyle(copyop(obj.m_shapeAspectStyle.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDoorPanelProperties::s_type("IfcDoorPanelProperties");
