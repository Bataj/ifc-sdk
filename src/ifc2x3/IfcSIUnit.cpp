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

#include "ifc2x3/IfcSIUnit.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcNamedUnit.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSIUnit::IfcSIUnit(Step::Id id, Step::SPFData *args) : IfcNamedUnit(id, args) {
    m_prefix = IfcSIPrefix_UNSET;
    m_name = IfcSIUnitName_UNSET;
}

IfcSIUnit::~IfcSIUnit() {
}

bool IfcSIUnit::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSIUnit(this);
}

const std::string &IfcSIUnit::type() {
    return IfcSIUnit::s_type.getName();
}

Step::ClassType IfcSIUnit::getClassType() {
    return IfcSIUnit::s_type;
}

Step::ClassType IfcSIUnit::getType() const {
    return IfcSIUnit::s_type;
}

bool IfcSIUnit::isOfType(Step::ClassType t) {
    return IfcSIUnit::s_type == t ? true : IfcNamedUnit::isOfType(t);
}

IfcSIPrefix IfcSIUnit::getPrefix() {
    if (Step::BaseObject::inited()) {
        return m_prefix;
    }
    else {
        return IfcSIPrefix_UNSET;
    }
}

void IfcSIUnit::setPrefix(IfcSIPrefix value) {
    m_prefix = value;
}

IfcSIUnitName IfcSIUnit::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return IfcSIUnitName_UNSET;
    }
}

void IfcSIUnit::setName(IfcSIUnitName value) {
    m_name = value;
}

void IfcSIUnit::release() {
    IfcNamedUnit::release();
}

bool IfcSIUnit::init() {
    bool status = IfcNamedUnit::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_prefix = IfcSIPrefix_UNSET;
    }
    else {
        if (arg == ".EXA.") {
            m_prefix = IfcSIPrefix_EXA;
        }
        else if (arg == ".PETA.") {
            m_prefix = IfcSIPrefix_PETA;
        }
        else if (arg == ".TERA.") {
            m_prefix = IfcSIPrefix_TERA;
        }
        else if (arg == ".GIGA.") {
            m_prefix = IfcSIPrefix_GIGA;
        }
        else if (arg == ".MEGA.") {
            m_prefix = IfcSIPrefix_MEGA;
        }
        else if (arg == ".KILO.") {
            m_prefix = IfcSIPrefix_KILO;
        }
        else if (arg == ".HECTO.") {
            m_prefix = IfcSIPrefix_HECTO;
        }
        else if (arg == ".DECA.") {
            m_prefix = IfcSIPrefix_DECA;
        }
        else if (arg == ".DECI.") {
            m_prefix = IfcSIPrefix_DECI;
        }
        else if (arg == ".CENTI.") {
            m_prefix = IfcSIPrefix_CENTI;
        }
        else if (arg == ".MILLI.") {
            m_prefix = IfcSIPrefix_MILLI;
        }
        else if (arg == ".MICRO.") {
            m_prefix = IfcSIPrefix_MICRO;
        }
        else if (arg == ".NANO.") {
            m_prefix = IfcSIPrefix_NANO;
        }
        else if (arg == ".PICO.") {
            m_prefix = IfcSIPrefix_PICO;
        }
        else if (arg == ".FEMTO.") {
            m_prefix = IfcSIPrefix_FEMTO;
        }
        else if (arg == ".ATTO.") {
            m_prefix = IfcSIPrefix_ATTO;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = IfcSIUnitName_UNSET;
    }
    else {
        if (arg == ".AMPERE.") {
            m_name = IfcSIUnitName_AMPERE;
        }
        else if (arg == ".BECQUEREL.") {
            m_name = IfcSIUnitName_BECQUEREL;
        }
        else if (arg == ".CANDELA.") {
            m_name = IfcSIUnitName_CANDELA;
        }
        else if (arg == ".COULOMB.") {
            m_name = IfcSIUnitName_COULOMB;
        }
        else if (arg == ".CUBIC_METRE.") {
            m_name = IfcSIUnitName_CUBIC_METRE;
        }
        else if (arg == ".DEGREE_CELSIUS.") {
            m_name = IfcSIUnitName_DEGREE_CELSIUS;
        }
        else if (arg == ".FARAD.") {
            m_name = IfcSIUnitName_FARAD;
        }
        else if (arg == ".GRAM.") {
            m_name = IfcSIUnitName_GRAM;
        }
        else if (arg == ".GRAY.") {
            m_name = IfcSIUnitName_GRAY;
        }
        else if (arg == ".HENRY.") {
            m_name = IfcSIUnitName_HENRY;
        }
        else if (arg == ".HERTZ.") {
            m_name = IfcSIUnitName_HERTZ;
        }
        else if (arg == ".JOULE.") {
            m_name = IfcSIUnitName_JOULE;
        }
        else if (arg == ".KELVIN.") {
            m_name = IfcSIUnitName_KELVIN;
        }
        else if (arg == ".LUMEN.") {
            m_name = IfcSIUnitName_LUMEN;
        }
        else if (arg == ".LUX.") {
            m_name = IfcSIUnitName_LUX;
        }
        else if (arg == ".METRE.") {
            m_name = IfcSIUnitName_METRE;
        }
        else if (arg == ".MOLE.") {
            m_name = IfcSIUnitName_MOLE;
        }
        else if (arg == ".NEWTON.") {
            m_name = IfcSIUnitName_NEWTON;
        }
        else if (arg == ".OHM.") {
            m_name = IfcSIUnitName_OHM;
        }
        else if (arg == ".PASCAL.") {
            m_name = IfcSIUnitName_PASCAL;
        }
        else if (arg == ".RADIAN.") {
            m_name = IfcSIUnitName_RADIAN;
        }
        else if (arg == ".SECOND.") {
            m_name = IfcSIUnitName_SECOND;
        }
        else if (arg == ".SIEMENS.") {
            m_name = IfcSIUnitName_SIEMENS;
        }
        else if (arg == ".SIEVERT.") {
            m_name = IfcSIUnitName_SIEVERT;
        }
        else if (arg == ".SQUARE_METRE.") {
            m_name = IfcSIUnitName_SQUARE_METRE;
        }
        else if (arg == ".STERADIAN.") {
            m_name = IfcSIUnitName_STERADIAN;
        }
        else if (arg == ".TESLA.") {
            m_name = IfcSIUnitName_TESLA;
        }
        else if (arg == ".VOLT.") {
            m_name = IfcSIUnitName_VOLT;
        }
        else if (arg == ".WATT.") {
            m_name = IfcSIUnitName_WATT;
        }
        else if (arg == ".WEBER.") {
            m_name = IfcSIUnitName_WEBER;
        }
    }
    return true;
}

void IfcSIUnit::copy(const IfcSIUnit &obj, const CopyOp &copyop) {
    IfcNamedUnit::copy(obj, copyop);
    setPrefix(obj.m_prefix);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSIUnit::s_type("IfcSIUnit");
