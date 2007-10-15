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

#include "ifc2x3/IfcPresentationLayerWithStyle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPresentationLayerAssignment.h"
#include "ifc2x3/IfcPresentationStyleSelect.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPresentationLayerWithStyle::IfcPresentationLayerWithStyle(Step::Id id, Step::SPFData *args) : IfcPresentationLayerAssignment(id, args) {
    m_layerOn = Step::getUnset(m_layerOn);
    m_layerFrozen = Step::getUnset(m_layerFrozen);
    m_layerBlocked = Step::getUnset(m_layerBlocked);
    m_layerStyles.setUnset(true);
}

IfcPresentationLayerWithStyle::~IfcPresentationLayerWithStyle() {
}

bool IfcPresentationLayerWithStyle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPresentationLayerWithStyle(this);
}

const std::string &IfcPresentationLayerWithStyle::type() {
    return IfcPresentationLayerWithStyle::s_type.getName();
}

Step::ClassType IfcPresentationLayerWithStyle::getClassType() {
    return IfcPresentationLayerWithStyle::s_type;
}

Step::ClassType IfcPresentationLayerWithStyle::getType() const {
    return IfcPresentationLayerWithStyle::s_type;
}

bool IfcPresentationLayerWithStyle::isOfType(Step::ClassType t) {
    return IfcPresentationLayerWithStyle::s_type == t ? true : IfcPresentationLayerAssignment::isOfType(t);
}

Step::Logical IfcPresentationLayerWithStyle::getLayerOn() {
    if (Step::BaseObject::inited()) {
        return m_layerOn;
    }
    else {
        return Step::getUnset(m_layerOn);
    }
}

void IfcPresentationLayerWithStyle::setLayerOn(Step::Logical value) {
    m_layerOn = value;
}

Step::Logical IfcPresentationLayerWithStyle::getLayerFrozen() {
    if (Step::BaseObject::inited()) {
        return m_layerFrozen;
    }
    else {
        return Step::getUnset(m_layerFrozen);
    }
}

void IfcPresentationLayerWithStyle::setLayerFrozen(Step::Logical value) {
    m_layerFrozen = value;
}

Step::Logical IfcPresentationLayerWithStyle::getLayerBlocked() {
    if (Step::BaseObject::inited()) {
        return m_layerBlocked;
    }
    else {
        return Step::getUnset(m_layerBlocked);
    }
}

void IfcPresentationLayerWithStyle::setLayerBlocked(Step::Logical value) {
    m_layerBlocked = value;
}

Step::Set< Step::RefPtr< IfcPresentationStyleSelect > > &IfcPresentationLayerWithStyle::getLayerStyles() {
    if (Step::BaseObject::inited()) {
        return m_layerStyles;
    }
    else {
        m_layerStyles.setUnset(true);
        return m_layerStyles;
    }
}

void IfcPresentationLayerWithStyle::setLayerStyles(const Step::Set< Step::RefPtr< IfcPresentationStyleSelect > > &value) {
    m_layerStyles = value;
}

void IfcPresentationLayerWithStyle::release() {
    IfcPresentationLayerAssignment::release();
    m_layerStyles.clear();
}

bool IfcPresentationLayerWithStyle::init() {
    bool status = IfcPresentationLayerAssignment::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerOn = Step::getUnset(m_layerOn);
    }
    else {
        m_layerOn = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerFrozen = Step::getUnset(m_layerFrozen);
    }
    else {
        m_layerFrozen = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerBlocked = Step::getUnset(m_layerBlocked);
    }
    else {
        m_layerBlocked = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_layerStyles.setUnset(true);
    }
    else {
        m_layerStyles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPresentationStyleSelect > attr2;
                attr2 = new IfcPresentationStyleSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                        if (type2 == "IFCNULLSTYLE") {
                            IfcNullStyle tmp_attr2;
                            if (str1 == ".NULL.") {
                                tmp_attr2 = IfcNullStyle_NULL;
                            }
                            attr2->setIfcNullStyle(tmp_attr2);
                        }
                    }
                }
                m_layerStyles.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcPresentationLayerWithStyle::copy(const IfcPresentationLayerWithStyle &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPresentationStyleSelect > >::const_iterator it_m_layerStyles;
    IfcPresentationLayerAssignment::copy(obj, copyop);
    setLayerOn(obj.m_layerOn);
    setLayerFrozen(obj.m_layerFrozen);
    setLayerBlocked(obj.m_layerBlocked);
    for (it_m_layerStyles = obj.m_layerStyles.begin(); it_m_layerStyles != obj.m_layerStyles.end(); ++it_m_layerStyles) {
        Step::RefPtr< IfcPresentationStyleSelect > copyTarget = new IfcPresentationStyleSelect;
        copyTarget->copy(*((*it_m_layerStyles).get()), copyop);
        m_layerStyles.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPresentationLayerWithStyle::s_type("IfcPresentationLayerWithStyle");
