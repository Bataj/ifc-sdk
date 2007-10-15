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

#include "ifc2x3/IfcFluidFlowProperties.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDerivedMeasureValue.h"
#include "ifc2x3/IfcMaterial.h"
#include "ifc2x3/IfcPropertySetDefinition.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
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

IfcFluidFlowProperties::IfcFluidFlowProperties(Step::Id id, Step::SPFData *args) : IfcPropertySetDefinition(id, args) {
    m_propertySource = IfcPropertySourceEnum_UNSET;
    m_flowConditionTimeSeries = NULL;
    m_velocityTimeSeries = NULL;
    m_flowrateTimeSeries = NULL;
    m_fluid = NULL;
    m_pressureTimeSeries = NULL;
    m_userDefinedPropertySource = Step::getUnset(m_userDefinedPropertySource);
    m_temperatureSingleValue = Step::getUnset(m_temperatureSingleValue);
    m_wetBulbTemperatureSingleValue = Step::getUnset(m_wetBulbTemperatureSingleValue);
    m_wetBulbTemperatureTimeSeries = NULL;
    m_temperatureTimeSeries = NULL;
    m_flowrateSingleValue = NULL;
    m_flowConditionSingleValue = Step::getUnset(m_flowConditionSingleValue);
    m_velocitySingleValue = Step::getUnset(m_velocitySingleValue);
    m_pressureSingleValue = Step::getUnset(m_pressureSingleValue);
}

IfcFluidFlowProperties::~IfcFluidFlowProperties() {
}

bool IfcFluidFlowProperties::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFluidFlowProperties(this);
}

const std::string &IfcFluidFlowProperties::type() {
    return IfcFluidFlowProperties::s_type.getName();
}

Step::ClassType IfcFluidFlowProperties::getClassType() {
    return IfcFluidFlowProperties::s_type;
}

Step::ClassType IfcFluidFlowProperties::getType() const {
    return IfcFluidFlowProperties::s_type;
}

bool IfcFluidFlowProperties::isOfType(Step::ClassType t) {
    return IfcFluidFlowProperties::s_type == t ? true : IfcPropertySetDefinition::isOfType(t);
}

IfcPropertySourceEnum IfcFluidFlowProperties::getPropertySource() {
    if (Step::BaseObject::inited()) {
        return m_propertySource;
    }
    else {
        return IfcPropertySourceEnum_UNSET;
    }
}

void IfcFluidFlowProperties::setPropertySource(IfcPropertySourceEnum value) {
    m_propertySource = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getFlowConditionTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_flowConditionTimeSeries.get();
    }
    else {
        return NULL;
    }
}

void IfcFluidFlowProperties::setFlowConditionTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_flowConditionTimeSeries = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getVelocityTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_velocityTimeSeries.get();
    }
    else {
        return NULL;
    }
}

void IfcFluidFlowProperties::setVelocityTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_velocityTimeSeries = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getFlowrateTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_flowrateTimeSeries.get();
    }
    else {
        return NULL;
    }
}

void IfcFluidFlowProperties::setFlowrateTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_flowrateTimeSeries = value;
}

IfcMaterial *IfcFluidFlowProperties::getFluid() {
    if (Step::BaseObject::inited()) {
        return m_fluid.get();
    }
    else {
        return NULL;
    }
}

void IfcFluidFlowProperties::setFluid(const Step::RefPtr< IfcMaterial > &value) {
    m_fluid = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getPressureTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_pressureTimeSeries.get();
    }
    else {
        return NULL;
    }
}

void IfcFluidFlowProperties::setPressureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_pressureTimeSeries = value;
}

IfcLabel IfcFluidFlowProperties::getUserDefinedPropertySource() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedPropertySource;
    }
    else {
        return Step::getUnset(m_userDefinedPropertySource);
    }
}

void IfcFluidFlowProperties::setUserDefinedPropertySource(const IfcLabel &value) {
    m_userDefinedPropertySource = value;
}

IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getTemperatureSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_temperatureSingleValue;
    }
    else {
        return Step::getUnset(m_temperatureSingleValue);
    }
}

void IfcFluidFlowProperties::setTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value) {
    m_temperatureSingleValue = value;
}

IfcThermodynamicTemperatureMeasure IfcFluidFlowProperties::getWetBulbTemperatureSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_wetBulbTemperatureSingleValue;
    }
    else {
        return Step::getUnset(m_wetBulbTemperatureSingleValue);
    }
}

void IfcFluidFlowProperties::setWetBulbTemperatureSingleValue(IfcThermodynamicTemperatureMeasure value) {
    m_wetBulbTemperatureSingleValue = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getWetBulbTemperatureTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_wetBulbTemperatureTimeSeries.get();
    }
    else {
        return NULL;
    }
}

void IfcFluidFlowProperties::setWetBulbTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_wetBulbTemperatureTimeSeries = value;
}

IfcTimeSeries *IfcFluidFlowProperties::getTemperatureTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_temperatureTimeSeries.get();
    }
    else {
        return NULL;
    }
}

void IfcFluidFlowProperties::setTemperatureTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_temperatureTimeSeries = value;
}

IfcDerivedMeasureValue *IfcFluidFlowProperties::getFlowrateSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_flowrateSingleValue.get();
    }
    else {
        return NULL;
    }
}

void IfcFluidFlowProperties::setFlowrateSingleValue(const Step::RefPtr< IfcDerivedMeasureValue > &value) {
    m_flowrateSingleValue = value;
}

IfcPositiveRatioMeasure IfcFluidFlowProperties::getFlowConditionSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_flowConditionSingleValue;
    }
    else {
        return Step::getUnset(m_flowConditionSingleValue);
    }
}

void IfcFluidFlowProperties::setFlowConditionSingleValue(IfcPositiveRatioMeasure value) {
    m_flowConditionSingleValue = value;
}

IfcLinearVelocityMeasure IfcFluidFlowProperties::getVelocitySingleValue() {
    if (Step::BaseObject::inited()) {
        return m_velocitySingleValue;
    }
    else {
        return Step::getUnset(m_velocitySingleValue);
    }
}

void IfcFluidFlowProperties::setVelocitySingleValue(IfcLinearVelocityMeasure value) {
    m_velocitySingleValue = value;
}

IfcPressureMeasure IfcFluidFlowProperties::getPressureSingleValue() {
    if (Step::BaseObject::inited()) {
        return m_pressureSingleValue;
    }
    else {
        return Step::getUnset(m_pressureSingleValue);
    }
}

void IfcFluidFlowProperties::setPressureSingleValue(IfcPressureMeasure value) {
    m_pressureSingleValue = value;
}

void IfcFluidFlowProperties::release() {
    IfcPropertySetDefinition::release();
    m_flowConditionTimeSeries.release();
    m_velocityTimeSeries.release();
    m_flowrateTimeSeries.release();
    m_fluid.release();
    m_pressureTimeSeries.release();
    m_wetBulbTemperatureTimeSeries.release();
    m_temperatureTimeSeries.release();
}

bool IfcFluidFlowProperties::init() {
    bool status = IfcPropertySetDefinition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_propertySource = IfcPropertySourceEnum_UNSET;
    }
    else {
        if (arg == ".DESIGN.") {
            m_propertySource = IfcPropertySourceEnum_DESIGN;
        }
        else if (arg == ".DESIGNMAXIMUM.") {
            m_propertySource = IfcPropertySourceEnum_DESIGNMAXIMUM;
        }
        else if (arg == ".DESIGNMINIMUM.") {
            m_propertySource = IfcPropertySourceEnum_DESIGNMINIMUM;
        }
        else if (arg == ".SIMULATED.") {
            m_propertySource = IfcPropertySourceEnum_SIMULATED;
        }
        else if (arg == ".ASBUILT.") {
            m_propertySource = IfcPropertySourceEnum_ASBUILT;
        }
        else if (arg == ".COMMISSIONING.") {
            m_propertySource = IfcPropertySourceEnum_COMMISSIONING;
        }
        else if (arg == ".MEASURED.") {
            m_propertySource = IfcPropertySourceEnum_MEASURED;
        }
        else if (arg == ".USERDEFINED.") {
            m_propertySource = IfcPropertySourceEnum_USERDEFINED;
        }
        else if (arg == ".NOTKNOWN.") {
            m_propertySource = IfcPropertySourceEnum_NOTKNOWN;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowConditionTimeSeries = NULL;
    }
    else {
        m_flowConditionTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_velocityTimeSeries = NULL;
    }
    else {
        m_velocityTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowrateTimeSeries = NULL;
    }
    else {
        m_flowrateTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_fluid = NULL;
    }
    else {
        m_fluid = static_cast< IfcMaterial * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pressureTimeSeries = NULL;
    }
    else {
        m_pressureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedPropertySource = Step::getUnset(m_userDefinedPropertySource);
    }
    else {
        m_userDefinedPropertySource = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_temperatureSingleValue = Step::getUnset(m_temperatureSingleValue);
    }
    else {
        m_temperatureSingleValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wetBulbTemperatureSingleValue = Step::getUnset(m_wetBulbTemperatureSingleValue);
    }
    else {
        m_wetBulbTemperatureSingleValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wetBulbTemperatureTimeSeries = NULL;
    }
    else {
        m_wetBulbTemperatureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_temperatureTimeSeries = NULL;
    }
    else {
        m_temperatureTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowrateSingleValue = NULL;
    }
    else {
        m_flowrateSingleValue = new IfcDerivedMeasureValue;
        if (arg[0] == '#') {
            m_flowrateSingleValue->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
                if (type1 == "IFCVOLUMETRICFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcVolumetricFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCTIMESTAMP") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_flowrateSingleValue->setIfcTimeStamp(tmp_attr1);
                }
                if (type1 == "IFCTHERMALTRANSMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalTransmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALADMITTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalAdmittanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSFLOWRATEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMassFlowRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMassDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLinearVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCKINEMATICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcKinematicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCINTEGERCOUNTRATEMEASURE") {
                    Step::Integer tmp_attr1;
                    tmp_attr1 = Step::spfToInteger(arg);
                    m_flowrateSingleValue->setIfcIntegerCountRateMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcHeatFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCENERGYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcEnergyMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICVOLTAGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricVoltageMeasure(tmp_attr1);
                }
                if (type1 == "IFCDYNAMICVISCOSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcDynamicViscosityMeasure(tmp_attr1);
                }
                if (type1 == "IFCCOMPOUNDPLANEANGLEMEASURE") {
                    Step::List< Step::Integer > tmp_attr1;
                    tmp_attr1.setUnset(false);
                    while (true) {
                        std::string str2;
                        Step::getSubParameter(arg, str2);
                        if (str2 != "") {
                            Step::Integer attr3;
                            attr3 = Step::spfToInteger(str2);
                            tmp_attr1.push_back(attr3);
                        }
                        else {
                            break;
                        }
                    }
                    m_flowrateSingleValue->setIfcCompoundPlaneAngleMeasure(tmp_attr1);
                }
                if (type1 == "IFCANGULARVELOCITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcAngularVelocityMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALCONDUCTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalConductivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOLECULARWEIGHTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMolecularWeightMeasure(tmp_attr1);
                }
                if (type1 == "IFCVAPORPERMEABILITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcVaporPermeabilityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOISTUREDIFFUSIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMoistureDiffusivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCISOTHERMALMOISTURECAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcIsothermalMoistureCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCSPECIFICHEATCAPACITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSpecificHeatCapacityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMONETARYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMonetaryMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXDENSITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMagneticFluxDensityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMAGNETICFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMagneticFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSFLUXMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLuminousFluxMeasure(tmp_attr1);
                }
                if (type1 == "IFCFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCINDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcInductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCILLUMINANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcIlluminanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICRESISTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricResistanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCONDUCTANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricConductanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCHARGEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricChargeMeasure(tmp_attr1);
                }
                if (type1 == "IFCDOSEEQUIVALENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcDoseEquivalentMeasure(tmp_attr1);
                }
                if (type1 == "IFCELECTRICCAPACITANCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcElectricCapacitanceMeasure(tmp_attr1);
                }
                if (type1 == "IFCABSORBEDDOSEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcAbsorbedDoseMeasure(tmp_attr1);
                }
                if (type1 == "IFCRADIOACTIVITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcRadioActivityMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALFREQUENCYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcRotationalFrequencyMeasure(tmp_attr1);
                }
                if (type1 == "IFCTORQUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcTorqueMeasure(tmp_attr1);
                }
                if (type1 == "IFCACCELERATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcAccelerationMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLinearForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLinearStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcModulusOfSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFELASTICITYMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcModulusOfElasticityMeasure(tmp_attr1);
                }
                if (type1 == "IFCMOMENTOFINERTIAMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMomentOfInertiaMeasure(tmp_attr1);
                }
                if (type1 == "IFCPLANARFORCEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcPlanarForceMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALSTIFFNESSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcRotationalStiffnessMeasure(tmp_attr1);
                }
                if (type1 == "IFCSHEARMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcShearModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCLINEARMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLinearMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcLuminousIntensityDistributionMeasure(tmp_attr1);
                }
                if (type1 == "IFCCURVATUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcCurvatureMeasure(tmp_attr1);
                }
                if (type1 == "IFCMASSPERLENGTHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcMassPerLengthMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcModulusOfLinearSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcModulusOfRotationalSubgradeReactionMeasure(tmp_attr1);
                }
                if (type1 == "IFCROTATIONALMASSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcRotationalMassMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONALAREAINTEGRALMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSectionalAreaIntegralMeasure(tmp_attr1);
                }
                if (type1 == "IFCSECTIONMODULUSMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSectionModulusMeasure(tmp_attr1);
                }
                if (type1 == "IFCTEMPERATUREGRADIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcTemperatureGradientMeasure(tmp_attr1);
                }
                if (type1 == "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcThermalExpansionCoefficientMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGCONSTANTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcWarpingConstantMeasure(tmp_attr1);
                }
                if (type1 == "IFCWARPINGMOMENTMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcWarpingMomentMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPOWERMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSoundPowerMeasure(tmp_attr1);
                }
                if (type1 == "IFCSOUNDPRESSUREMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcSoundPressureMeasure(tmp_attr1);
                }
                if (type1 == "IFCHEATINGVALUEMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcHeatingValueMeasure(tmp_attr1);
                }
                if (type1 == "IFCPHMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcPHMeasure(tmp_attr1);
                }
                if (type1 == "IFCIONCONCENTRATIONMEASURE") {
                    Step::Real tmp_attr1;
                    tmp_attr1 = Step::spfToReal(arg);
                    m_flowrateSingleValue->setIfcIonConcentrationMeasure(tmp_attr1);
                }
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_flowConditionSingleValue = Step::getUnset(m_flowConditionSingleValue);
    }
    else {
        m_flowConditionSingleValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_velocitySingleValue = Step::getUnset(m_velocitySingleValue);
    }
    else {
        m_velocitySingleValue = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pressureSingleValue = Step::getUnset(m_pressureSingleValue);
    }
    else {
        m_pressureSingleValue = Step::spfToReal(arg);
    }
    return true;
}

void IfcFluidFlowProperties::copy(const IfcFluidFlowProperties &obj, const CopyOp &copyop) {
    IfcPropertySetDefinition::copy(obj, copyop);
    setPropertySource(obj.m_propertySource);
    setFlowConditionTimeSeries(copyop(obj.m_flowConditionTimeSeries.get()));
    setVelocityTimeSeries(copyop(obj.m_velocityTimeSeries.get()));
    setFlowrateTimeSeries(copyop(obj.m_flowrateTimeSeries.get()));
    setFluid(copyop(obj.m_fluid.get()));
    setPressureTimeSeries(copyop(obj.m_pressureTimeSeries.get()));
    setUserDefinedPropertySource(obj.m_userDefinedPropertySource);
    setTemperatureSingleValue(obj.m_temperatureSingleValue);
    setWetBulbTemperatureSingleValue(obj.m_wetBulbTemperatureSingleValue);
    setWetBulbTemperatureTimeSeries(copyop(obj.m_wetBulbTemperatureTimeSeries.get()));
    setTemperatureTimeSeries(copyop(obj.m_temperatureTimeSeries.get()));
    m_flowrateSingleValue = new IfcDerivedMeasureValue;
    m_flowrateSingleValue->copy(*(obj.m_flowrateSingleValue.get()), copyop);
    setFlowConditionSingleValue(obj.m_flowConditionSingleValue);
    setVelocitySingleValue(obj.m_velocitySingleValue);
    setPressureSingleValue(obj.m_pressureSingleValue);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFluidFlowProperties::s_type("IfcFluidFlowProperties");
