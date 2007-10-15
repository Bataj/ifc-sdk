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

#include "ifc2x3/IfcTimeSeriesReferenceRelationship.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcDocumentSelect.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTimeSeriesReferenceRelationship::IfcTimeSeriesReferenceRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_referencedTimeSeries = NULL;
    m_timeSeriesReferences.setUnset(true);
}

IfcTimeSeriesReferenceRelationship::~IfcTimeSeriesReferenceRelationship() {
}

bool IfcTimeSeriesReferenceRelationship::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTimeSeriesReferenceRelationship(this);
}

const std::string &IfcTimeSeriesReferenceRelationship::type() {
    return IfcTimeSeriesReferenceRelationship::s_type.getName();
}

Step::ClassType IfcTimeSeriesReferenceRelationship::getClassType() {
    return IfcTimeSeriesReferenceRelationship::s_type;
}

Step::ClassType IfcTimeSeriesReferenceRelationship::getType() const {
    return IfcTimeSeriesReferenceRelationship::s_type;
}

bool IfcTimeSeriesReferenceRelationship::isOfType(Step::ClassType t) {
    return IfcTimeSeriesReferenceRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcTimeSeries *IfcTimeSeriesReferenceRelationship::getReferencedTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_referencedTimeSeries.get();
    }
    else {
        return NULL;
    }
}

void IfcTimeSeriesReferenceRelationship::setReferencedTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_referencedTimeSeries = value;
    m_referencedTimeSeries->m_documentedBy.insert(this);
}

Step::Set< Step::RefPtr< IfcDocumentSelect > > &IfcTimeSeriesReferenceRelationship::getTimeSeriesReferences() {
    if (Step::BaseObject::inited()) {
        return m_timeSeriesReferences;
    }
    else {
        m_timeSeriesReferences.setUnset(true);
        return m_timeSeriesReferences;
    }
}

void IfcTimeSeriesReferenceRelationship::setTimeSeriesReferences(const Step::Set< Step::RefPtr< IfcDocumentSelect > > &value) {
    m_timeSeriesReferences = value;
}

void IfcTimeSeriesReferenceRelationship::release() {
    m_referencedTimeSeries.release();
    m_timeSeriesReferences.clear();
}

bool IfcTimeSeriesReferenceRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_referencedTimeSeries = NULL;
    }
    else {
        m_referencedTimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeSeriesReferences.setUnset(true);
    }
    else {
        m_timeSeriesReferences.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDocumentSelect > attr2;
                attr2 = new IfcDocumentSelect;
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
                    }
                }
                m_timeSeriesReferences.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcTimeSeriesReferenceRelationship::copy(const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDocumentSelect > >::const_iterator it_m_timeSeriesReferences;
    Step::BaseEntity::copy(obj, copyop);
    setReferencedTimeSeries(copyop(obj.m_referencedTimeSeries.get()));
    for (it_m_timeSeriesReferences = obj.m_timeSeriesReferences.begin(); it_m_timeSeriesReferences != obj.m_timeSeriesReferences.end(); ++it_m_timeSeriesReferences) {
        Step::RefPtr< IfcDocumentSelect > copyTarget = new IfcDocumentSelect;
        copyTarget->copy(*((*it_m_timeSeriesReferences).get()), copyop);
        m_timeSeriesReferences.insert(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTimeSeriesReferenceRelationship::s_type("IfcTimeSeriesReferenceRelationship");
