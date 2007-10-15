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

#include "ifc2x3/IfcDocumentInformation.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorSelect.h"
#include "ifc2x3/IfcCalendarDate.h"
#include "ifc2x3/IfcDateAndTime.h"
#include "ifc2x3/IfcDocumentElectronicFormat.h"
#include "ifc2x3/IfcDocumentInformationRelationship.h"
#include "ifc2x3/IfcDocumentReference.h"
#include "ifc2x3/Visitor.h"
#include <Step/Aggregation.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcDocumentInformation::IfcDocumentInformation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_documentId = Step::getUnset(m_documentId);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_documentReferences.setUnset(true);
    m_documentReferences.setOwner(this);
    m_purpose = Step::getUnset(m_purpose);
    m_intendedUse = Step::getUnset(m_intendedUse);
    m_scope = Step::getUnset(m_scope);
    m_revision = Step::getUnset(m_revision);
    m_documentOwner = NULL;
    m_editors.setUnset(true);
    m_creationTime = NULL;
    m_lastRevisionTime = NULL;
    m_electronicFormat = NULL;
    m_validFrom = NULL;
    m_validUntil = NULL;
    m_confidentiality = IfcDocumentConfidentialityEnum_UNSET;
    m_status = IfcDocumentStatusEnum_UNSET;
    m_isPointedTo.setUnset(true);
    m_isPointer.setUnset(true);
}

IfcDocumentInformation::~IfcDocumentInformation() {
}

bool IfcDocumentInformation::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcDocumentInformation(this);
}

const std::string &IfcDocumentInformation::type() {
    return IfcDocumentInformation::s_type.getName();
}

Step::ClassType IfcDocumentInformation::getClassType() {
    return IfcDocumentInformation::s_type;
}

Step::ClassType IfcDocumentInformation::getType() const {
    return IfcDocumentInformation::s_type;
}

bool IfcDocumentInformation::isOfType(Step::ClassType t) {
    return IfcDocumentInformation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcDocumentInformation::getDocumentId() {
    if (Step::BaseObject::inited()) {
        return m_documentId;
    }
    else {
        return Step::getUnset(m_documentId);
    }
}

void IfcDocumentInformation::setDocumentId(const IfcIdentifier &value) {
    m_documentId = value;
}

IfcLabel IfcDocumentInformation::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcDocumentInformation::setName(const IfcLabel &value) {
    m_name = value;
}

IfcText IfcDocumentInformation::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

void IfcDocumentInformation::setDescription(const IfcText &value) {
    m_description = value;
}

Step::Set< Step::RefPtr< IfcDocumentReference > > &IfcDocumentInformation::getDocumentReferences() {
    if (Step::BaseObject::inited()) {
        return m_documentReferences;
    }
    else {
        m_documentReferences.setUnset(true);
        return m_documentReferences;
    }
}

IfcText IfcDocumentInformation::getPurpose() {
    if (Step::BaseObject::inited()) {
        return m_purpose;
    }
    else {
        return Step::getUnset(m_purpose);
    }
}

void IfcDocumentInformation::setPurpose(const IfcText &value) {
    m_purpose = value;
}

IfcText IfcDocumentInformation::getIntendedUse() {
    if (Step::BaseObject::inited()) {
        return m_intendedUse;
    }
    else {
        return Step::getUnset(m_intendedUse);
    }
}

void IfcDocumentInformation::setIntendedUse(const IfcText &value) {
    m_intendedUse = value;
}

IfcText IfcDocumentInformation::getScope() {
    if (Step::BaseObject::inited()) {
        return m_scope;
    }
    else {
        return Step::getUnset(m_scope);
    }
}

void IfcDocumentInformation::setScope(const IfcText &value) {
    m_scope = value;
}

IfcLabel IfcDocumentInformation::getRevision() {
    if (Step::BaseObject::inited()) {
        return m_revision;
    }
    else {
        return Step::getUnset(m_revision);
    }
}

void IfcDocumentInformation::setRevision(const IfcLabel &value) {
    m_revision = value;
}

IfcActorSelect *IfcDocumentInformation::getDocumentOwner() {
    if (Step::BaseObject::inited()) {
        return m_documentOwner.get();
    }
    else {
        return NULL;
    }
}

void IfcDocumentInformation::setDocumentOwner(const Step::RefPtr< IfcActorSelect > &value) {
    m_documentOwner = value;
}

Step::Set< Step::RefPtr< IfcActorSelect > > &IfcDocumentInformation::getEditors() {
    if (Step::BaseObject::inited()) {
        return m_editors;
    }
    else {
        m_editors.setUnset(true);
        return m_editors;
    }
}

void IfcDocumentInformation::setEditors(const Step::Set< Step::RefPtr< IfcActorSelect > > &value) {
    m_editors = value;
}

IfcDateAndTime *IfcDocumentInformation::getCreationTime() {
    if (Step::BaseObject::inited()) {
        return m_creationTime.get();
    }
    else {
        return NULL;
    }
}

void IfcDocumentInformation::setCreationTime(const Step::RefPtr< IfcDateAndTime > &value) {
    m_creationTime = value;
}

IfcDateAndTime *IfcDocumentInformation::getLastRevisionTime() {
    if (Step::BaseObject::inited()) {
        return m_lastRevisionTime.get();
    }
    else {
        return NULL;
    }
}

void IfcDocumentInformation::setLastRevisionTime(const Step::RefPtr< IfcDateAndTime > &value) {
    m_lastRevisionTime = value;
}

IfcDocumentElectronicFormat *IfcDocumentInformation::getElectronicFormat() {
    if (Step::BaseObject::inited()) {
        return m_electronicFormat.get();
    }
    else {
        return NULL;
    }
}

void IfcDocumentInformation::setElectronicFormat(const Step::RefPtr< IfcDocumentElectronicFormat > &value) {
    m_electronicFormat = value;
}

IfcCalendarDate *IfcDocumentInformation::getValidFrom() {
    if (Step::BaseObject::inited()) {
        return m_validFrom.get();
    }
    else {
        return NULL;
    }
}

void IfcDocumentInformation::setValidFrom(const Step::RefPtr< IfcCalendarDate > &value) {
    m_validFrom = value;
}

IfcCalendarDate *IfcDocumentInformation::getValidUntil() {
    if (Step::BaseObject::inited()) {
        return m_validUntil.get();
    }
    else {
        return NULL;
    }
}

void IfcDocumentInformation::setValidUntil(const Step::RefPtr< IfcCalendarDate > &value) {
    m_validUntil = value;
}

IfcDocumentConfidentialityEnum IfcDocumentInformation::getConfidentiality() {
    if (Step::BaseObject::inited()) {
        return m_confidentiality;
    }
    else {
        return IfcDocumentConfidentialityEnum_UNSET;
    }
}

void IfcDocumentInformation::setConfidentiality(IfcDocumentConfidentialityEnum value) {
    m_confidentiality = value;
}

IfcDocumentStatusEnum IfcDocumentInformation::getStatus() {
    if (Step::BaseObject::inited()) {
        return m_status;
    }
    else {
        return IfcDocumentStatusEnum_UNSET;
    }
}

void IfcDocumentInformation::setStatus(IfcDocumentStatusEnum value) {
    m_status = value;
}

Step::Set< Step::ObsPtr< IfcDocumentInformationRelationship > > &IfcDocumentInformation::getIsPointedTo() {
    if (Step::BaseObject::inited()) {
        return m_isPointedTo;
    }
    else {
        m_isPointedTo.setUnset(true);
        return m_isPointedTo;
    }
}

Step::Set< Step::ObsPtr< IfcDocumentInformationRelationship > > &IfcDocumentInformation::getIsPointer() {
    if (Step::BaseObject::inited()) {
        return m_isPointer;
    }
    else {
        m_isPointer.setUnset(true);
        return m_isPointer;
    }
}

void IfcDocumentInformation::release() {
    m_documentReferences.clear();
    m_editors.clear();
    m_creationTime.release();
    m_lastRevisionTime.release();
    m_electronicFormat.release();
    m_validFrom.release();
    m_validUntil.release();
}

bool IfcDocumentInformation::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_documentId = Step::getUnset(m_documentId);
    }
    else {
        m_documentId = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_documentReferences.setUnset(true);
    }
    else {
        m_documentReferences.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDocumentReference > attr2;
                attr2 = static_cast< IfcDocumentReference * > (m_expressDataSet->get(atoi(str1.c_str() + 1)));
                m_documentReferences.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_purpose = Step::getUnset(m_purpose);
    }
    else {
        m_purpose = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_intendedUse = Step::getUnset(m_intendedUse);
    }
    else {
        m_intendedUse = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scope = Step::getUnset(m_scope);
    }
    else {
        m_scope = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_revision = Step::getUnset(m_revision);
    }
    else {
        m_revision = Step::spfToString(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_documentOwner = NULL;
    }
    else {
        m_documentOwner = new IfcActorSelect;
        if (arg[0] == '#') {
            m_documentOwner->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_editors.setUnset(true);
    }
    else {
        m_editors.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcActorSelect > attr2;
                attr2 = new IfcActorSelect;
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
                m_editors.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_creationTime = NULL;
    }
    else {
        m_creationTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_lastRevisionTime = NULL;
    }
    else {
        m_lastRevisionTime = static_cast< IfcDateAndTime * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_electronicFormat = NULL;
    }
    else {
        m_electronicFormat = static_cast< IfcDocumentElectronicFormat * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_validFrom = NULL;
    }
    else {
        m_validFrom = static_cast< IfcCalendarDate * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_validUntil = NULL;
    }
    else {
        m_validUntil = static_cast< IfcCalendarDate * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_confidentiality = IfcDocumentConfidentialityEnum_UNSET;
    }
    else {
        if (arg == ".PUBLIC.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_PUBLIC;
        }
        else if (arg == ".RESTRICTED.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_RESTRICTED;
        }
        else if (arg == ".CONFIDENTIAL.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_CONFIDENTIAL;
        }
        else if (arg == ".PERSONAL.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_PERSONAL;
        }
        else if (arg == ".USERDEFINED.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_confidentiality = IfcDocumentConfidentialityEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_status = IfcDocumentStatusEnum_UNSET;
    }
    else {
        if (arg == ".DRAFT.") {
            m_status = IfcDocumentStatusEnum_DRAFT;
        }
        else if (arg == ".FINALDRAFT.") {
            m_status = IfcDocumentStatusEnum_FINALDRAFT;
        }
        else if (arg == ".FINAL.") {
            m_status = IfcDocumentStatusEnum_FINAL;
        }
        else if (arg == ".REVISION.") {
            m_status = IfcDocumentStatusEnum_REVISION;
        }
        else if (arg == ".NOTDEFINED.") {
            m_status = IfcDocumentStatusEnum_NOTDEFINED;
        }
    }
    inverses = m_args->getInverses(IfcDocumentInformationRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_isPointedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isPointedTo.insert(static_cast< IfcDocumentInformationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcDocumentInformationRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_isPointer.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isPointer.insert(static_cast< IfcDocumentInformationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDocumentInformation::copy(const IfcDocumentInformation &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcDocumentReference > >::const_iterator it_m_documentReferences;
    Step::Set< Step::RefPtr< IfcActorSelect > >::const_iterator it_m_editors;
    Step::BaseEntity::copy(obj, copyop);
    setDocumentId(obj.m_documentId);
    setName(obj.m_name);
    setDescription(obj.m_description);
    for (it_m_documentReferences = obj.m_documentReferences.begin(); it_m_documentReferences != obj.m_documentReferences.end(); ++it_m_documentReferences) {
        Step::RefPtr< IfcDocumentReference > copyTarget = copyop((*it_m_documentReferences).get());
        m_documentReferences.insert(copyTarget.get());
    }
    setPurpose(obj.m_purpose);
    setIntendedUse(obj.m_intendedUse);
    setScope(obj.m_scope);
    setRevision(obj.m_revision);
    m_documentOwner = new IfcActorSelect;
    m_documentOwner->copy(*(obj.m_documentOwner.get()), copyop);
    for (it_m_editors = obj.m_editors.begin(); it_m_editors != obj.m_editors.end(); ++it_m_editors) {
        Step::RefPtr< IfcActorSelect > copyTarget = new IfcActorSelect;
        copyTarget->copy(*((*it_m_editors).get()), copyop);
        m_editors.insert(copyTarget.get());
    }
    setCreationTime(copyop(obj.m_creationTime.get()));
    setLastRevisionTime(copyop(obj.m_lastRevisionTime.get()));
    setElectronicFormat(copyop(obj.m_electronicFormat.get()));
    setValidFrom(copyop(obj.m_validFrom.get()));
    setValidUntil(copyop(obj.m_validUntil.get()));
    setConfidentiality(obj.m_confidentiality);
    setStatus(obj.m_status);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcDocumentInformation::s_type("IfcDocumentInformation");
IfcDocumentInformation::Inverted_DocumentReferences_type::Inverted_DocumentReferences_type() {
}

void IfcDocumentInformation::Inverted_DocumentReferences_type::setOwner(IfcDocumentInformation *owner) {
    mOwner = owner;
}

void IfcDocumentInformation::Inverted_DocumentReferences_type::insert(const Step::RefPtr< IfcDocumentReference > &value) {
    IfcDocumentReference *inverse = const_cast< IfcDocumentReference * > (value.get());
    Step::Set< Step::RefPtr< IfcDocumentReference > >::insert(value);
    inverse->m_referenceToDocument.insert(mOwner);
}

