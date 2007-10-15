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

#include "ifc2x3/IfcElementQuantity.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcPhysicalQuantity.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
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

IfcElementQuantity::IfcElementQuantity(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_methodOfMeasurement = Step::getUnset(m_methodOfMeasurement);
    m_quantities.setUnset(true);
}

IfcElementQuantity::~IfcElementQuantity() {
}

bool IfcElementQuantity::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcElementQuantity(this);
}

const std::string &IfcElementQuantity::type() {
    return IfcElementQuantity::s_type.getName();
}

Step::ClassType IfcElementQuantity::getClassType() {
    return IfcElementQuantity::s_type;
}

Step::ClassType IfcElementQuantity::getType() const {
    return IfcElementQuantity::s_type;
}

bool IfcElementQuantity::isOfType(Step::ClassType t) {
    return IfcElementQuantity::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcLabel IfcElementQuantity::getMethodOfMeasurement() {
    if (Step::BaseObject::inited()) {
        return m_methodOfMeasurement;
    }
    else {
        return Step::getUnset(m_methodOfMeasurement);
    }
}

void IfcElementQuantity::setMethodOfMeasurement(const IfcLabel &value) {
    m_methodOfMeasurement = value;
}

Step::Set< Step::RefPtr< IfcPhysicalQuantity > > &IfcElementQuantity::getQuantities() {
    if (Step::BaseObject::inited()) {
        return m_quantities;
    }
    else {
        m_quantities.setUnset(true);
        return m_quantities;
    }
}

void IfcElementQuantity::setQuantities(const Step::Set< Step::RefPtr< IfcPhysicalQuantity > > &value) {
    m_quantities = value;
}

void IfcElementQuantity::release() {
    IfcPropertySetDefinition::release();
    m_quantities.clear();
}

bool IfcElementQuantity::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_methodOfMeasurement = Step::getUnset(m_methodOfMeasurement);
    }
    else {
        m_methodOfMeasurement = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_quantities.setUnset(true);
    }
    else {
        m_quantities.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPhysicalQuantity > attr2;
                attr2 = static_cast< IfcPhysicalQuantity * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_quantities.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcElementQuantity::copy(const IfcElementQuantity &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPhysicalQuantity > >::const_iterator it_m_quantities;
    IfcPropertySetDefinition::copy(obj, copyop);
    setMethodOfMeasurement(obj.m_methodOfMeasurement);
    for (it_m_quantities = obj.m_quantities.begin(); it_m_quantities != obj.m_quantities.end(); ++it_m_quantities) {
        Step::RefPtr< IfcPhysicalQuantity > copyTarget = copyop((*it_m_quantities).get());
        m_quantities.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcElementQuantity::s_type("IfcElementQuantity");
