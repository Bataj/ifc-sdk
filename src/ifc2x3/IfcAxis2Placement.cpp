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

#include "ifc2x3/IfcAxis2Placement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement2D.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcAxis2Placement::IfcAxis2Placement() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcAxis2Placement::IfcAxis2Placement(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcAxis2Placement::~IfcAxis2Placement() {
    deleteUnion();
}

bool IfcAxis2Placement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcAxis2Placement(this);
}

bool IfcAxis2Placement::init() {
    return false;
}

const std::string &IfcAxis2Placement::type() {
    return IfcAxis2Placement::s_type.getName();
}

Step::ClassType IfcAxis2Placement::getClassType() {
    return IfcAxis2Placement::s_type;
}

Step::ClassType IfcAxis2Placement::getType() const {
    return IfcAxis2Placement::s_type;
}

bool IfcAxis2Placement::isOfType(Step::ClassType t) {
    return IfcAxis2Placement::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcAxis2Placement::copy(const IfcAxis2Placement &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCAXIS2PLACEMENT2D:
        setIfcAxis2Placement2D(copyop(obj.m_IfcAxis2Placement_union.m_IfcAxis2Placement2D));
        break;
    case IFCAXIS2PLACEMENT3D:
        setIfcAxis2Placement3D(copyop(obj.m_IfcAxis2Placement_union.m_IfcAxis2Placement3D));
        break;
        }
}

char *IfcAxis2Placement::currentTypeName() {
    switch(m_type) {
    case IFCAXIS2PLACEMENT2D:
        return "IfcAxis2Placement2D";
        break;
    case IFCAXIS2PLACEMENT3D:
        return "IfcAxis2Placement3D";
        break;
    default:
        return "UNSET";
    }
}

IfcAxis2Placement::IfcAxis2Placement_select IfcAxis2Placement::currentType() {
    return m_type;
}

void IfcAxis2Placement::deleteUnion() {
    switch(m_type) {
    case IFCAXIS2PLACEMENT2D:
        m_IfcAxis2Placement_union.m_IfcAxis2Placement2D->unref();
        break;
    case IFCAXIS2PLACEMENT3D:
        m_IfcAxis2Placement_union.m_IfcAxis2Placement3D->unref();
        break;
        }
    m_type = UNSET;
}

IfcAxis2Placement2D *IfcAxis2Placement::getIfcAxis2Placement2D() {
    return m_IfcAxis2Placement_union.m_IfcAxis2Placement2D;
}

void IfcAxis2Placement::setIfcAxis2Placement2D(IfcAxis2Placement2D *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcAxis2Placement_union.m_IfcAxis2Placement2D = value;
    if (value) {
        value->ref();
        m_type = IFCAXIS2PLACEMENT2D;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCAXIS2PLACEMENT2D;
}

IfcAxis2Placement3D *IfcAxis2Placement::getIfcAxis2Placement3D() {
    return m_IfcAxis2Placement_union.m_IfcAxis2Placement3D;
}

void IfcAxis2Placement::setIfcAxis2Placement3D(IfcAxis2Placement3D *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcAxis2Placement_union.m_IfcAxis2Placement3D = value;
    if (value) {
        value->ref();
        m_type = IFCAXIS2PLACEMENT3D;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCAXIS2PLACEMENT3D;
}

void IfcAxis2Placement::set(Step::BaseObject *v) {
    if (v->isOfType(IfcAxis2Placement2D::getClassType())) {
        setIfcAxis2Placement2D(static_cast< IfcAxis2Placement2D* > (v));
    }
    else if (v->isOfType(IfcAxis2Placement3D::getClassType())) {
        setIfcAxis2Placement3D(static_cast< IfcAxis2Placement3D* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcAxis2Placement::s_type("IfcAxis2Placement");
