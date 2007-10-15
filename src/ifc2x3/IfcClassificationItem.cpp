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

#include "ifc2x3/IfcClassificationItem.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassification.h"
#include "ifc2x3/IfcClassificationItemRelationship.h"
#include "ifc2x3/IfcClassificationNotationFacet.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcClassificationItem::IfcClassificationItem(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_notation = NULL;
    m_itemOf = NULL;
    m_title = Step::getUnset(m_title);
    m_isClassifiedItemIn.setUnset(true);
    m_isClassifyingItemIn.setUnset(true);
}

IfcClassificationItem::~IfcClassificationItem() {
}

bool IfcClassificationItem::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcClassificationItem(this);
}

const std::string &IfcClassificationItem::type() {
    return IfcClassificationItem::s_type.getName();
}

Step::ClassType IfcClassificationItem::getClassType() {
    return IfcClassificationItem::s_type;
}

Step::ClassType IfcClassificationItem::getType() const {
    return IfcClassificationItem::s_type;
}

bool IfcClassificationItem::isOfType(Step::ClassType t) {
    return IfcClassificationItem::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcClassificationNotationFacet *IfcClassificationItem::getNotation() {
    if (Step::BaseObject::inited()) {
        return m_notation.get();
    }
    else {
        return NULL;
    }
}

void IfcClassificationItem::setNotation(const Step::RefPtr< IfcClassificationNotationFacet > &value) {
    m_notation = value;
}

IfcClassification *IfcClassificationItem::getItemOf() {
    if (Step::BaseObject::inited()) {
        return m_itemOf.get();
    }
    else {
        return NULL;
    }
}

void IfcClassificationItem::setItemOf(const Step::RefPtr< IfcClassification > &value) {
    m_itemOf = value;
    m_itemOf->m_contains.insert(this);
}

IfcLabel IfcClassificationItem::getTitle() {
    if (Step::BaseObject::inited()) {
        return m_title;
    }
    else {
        return Step::getUnset(m_title);
    }
}

void IfcClassificationItem::setTitle(const IfcLabel &value) {
    m_title = value;
}

Step::Set< Step::ObsPtr< IfcClassificationItemRelationship > > &IfcClassificationItem::getIsClassifiedItemIn() {
    if (Step::BaseObject::inited()) {
        return m_isClassifiedItemIn;
    }
    else {
        m_isClassifiedItemIn.setUnset(true);
        return m_isClassifiedItemIn;
    }
}

Step::Set< Step::ObsPtr< IfcClassificationItemRelationship > > &IfcClassificationItem::getIsClassifyingItemIn() {
    if (Step::BaseObject::inited()) {
        return m_isClassifyingItemIn;
    }
    else {
        m_isClassifyingItemIn.setUnset(true);
        return m_isClassifyingItemIn;
    }
}

void IfcClassificationItem::release() {
    m_notation.release();
    m_itemOf.release();
}

bool IfcClassificationItem::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_notation = NULL;
    }
    else {
        m_notation = static_cast< IfcClassificationNotationFacet * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_itemOf = NULL;
    }
    else {
        m_itemOf = static_cast< IfcClassification * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_title = Step::getUnset(m_title);
    }
    else {
        m_title = Step::spfToString(arg);
    }
    inverses = m_args->getInverses(IfcClassificationItemRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_isClassifiedItemIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isClassifiedItemIn.insert(static_cast< IfcClassificationItemRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcClassificationItemRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_isClassifyingItemIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isClassifyingItemIn.insert(static_cast< IfcClassificationItemRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcClassificationItem::copy(const IfcClassificationItem &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setNotation(copyop(obj.m_notation.get()));
    setItemOf(copyop(obj.m_itemOf.get()));
    setTitle(obj.m_title);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcClassificationItem::s_type("IfcClassificationItem");
