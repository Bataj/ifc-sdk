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

#include "ifc2x3/IfcBooleanOperand.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBooleanResult.h"
#include "ifc2x3/IfcCsgPrimitive3D.h"
#include "ifc2x3/IfcHalfSpaceSolid.h"
#include "ifc2x3/IfcSolidModel.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBooleanOperand::IfcBooleanOperand() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcBooleanOperand::IfcBooleanOperand(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcBooleanOperand::~IfcBooleanOperand() {
    deleteUnion();
}

bool IfcBooleanOperand::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBooleanOperand(this);
}

bool IfcBooleanOperand::init() {
    return false;
}

const std::string &IfcBooleanOperand::type() {
    return IfcBooleanOperand::s_type.getName();
}

Step::ClassType IfcBooleanOperand::getClassType() {
    return IfcBooleanOperand::s_type;
}

Step::ClassType IfcBooleanOperand::getType() const {
    return IfcBooleanOperand::s_type;
}

bool IfcBooleanOperand::isOfType(Step::ClassType t) {
    return IfcBooleanOperand::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcBooleanOperand::copy(const IfcBooleanOperand &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCSOLIDMODEL:
        setIfcSolidModel(copyop(obj.m_IfcBooleanOperand_union.m_IfcSolidModel));
        break;
    case IFCHALFSPACESOLID:
        setIfcHalfSpaceSolid(copyop(obj.m_IfcBooleanOperand_union.m_IfcHalfSpaceSolid));
        break;
    case IFCBOOLEANRESULT:
        setIfcBooleanResult(copyop(obj.m_IfcBooleanOperand_union.m_IfcBooleanResult));
        break;
    case IFCCSGPRIMITIVE3D:
        setIfcCsgPrimitive3D(copyop(obj.m_IfcBooleanOperand_union.m_IfcCsgPrimitive3D));
        break;
        }
}

char *IfcBooleanOperand::currentTypeName() {
    switch(m_type) {
    case IFCSOLIDMODEL:
        return "IfcSolidModel";
        break;
    case IFCHALFSPACESOLID:
        return "IfcHalfSpaceSolid";
        break;
    case IFCBOOLEANRESULT:
        return "IfcBooleanResult";
        break;
    case IFCCSGPRIMITIVE3D:
        return "IfcCsgPrimitive3D";
        break;
    default:
        return "UNSET";
    }
}

IfcBooleanOperand::IfcBooleanOperand_select IfcBooleanOperand::currentType() {
    return m_type;
}

void IfcBooleanOperand::deleteUnion() {
    switch(m_type) {
    case IFCSOLIDMODEL:
        m_IfcBooleanOperand_union.m_IfcSolidModel->unref();
        break;
    case IFCHALFSPACESOLID:
        m_IfcBooleanOperand_union.m_IfcHalfSpaceSolid->unref();
        break;
    case IFCBOOLEANRESULT:
        m_IfcBooleanOperand_union.m_IfcBooleanResult->unref();
        break;
    case IFCCSGPRIMITIVE3D:
        m_IfcBooleanOperand_union.m_IfcCsgPrimitive3D->unref();
        break;
        }
    m_type = UNSET;
}

IfcSolidModel *IfcBooleanOperand::getIfcSolidModel() {
    return m_IfcBooleanOperand_union.m_IfcSolidModel;
}

void IfcBooleanOperand::setIfcSolidModel(IfcSolidModel *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcBooleanOperand_union.m_IfcSolidModel = value;
    if (value) {
        value->ref();
        m_type = IFCSOLIDMODEL;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCSOLIDMODEL;
}

IfcHalfSpaceSolid *IfcBooleanOperand::getIfcHalfSpaceSolid() {
    return m_IfcBooleanOperand_union.m_IfcHalfSpaceSolid;
}

void IfcBooleanOperand::setIfcHalfSpaceSolid(IfcHalfSpaceSolid *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcBooleanOperand_union.m_IfcHalfSpaceSolid = value;
    if (value) {
        value->ref();
        m_type = IFCHALFSPACESOLID;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCHALFSPACESOLID;
}

IfcBooleanResult *IfcBooleanOperand::getIfcBooleanResult() {
    return m_IfcBooleanOperand_union.m_IfcBooleanResult;
}

void IfcBooleanOperand::setIfcBooleanResult(IfcBooleanResult *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcBooleanOperand_union.m_IfcBooleanResult = value;
    if (value) {
        value->ref();
        m_type = IFCBOOLEANRESULT;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCBOOLEANRESULT;
}

IfcCsgPrimitive3D *IfcBooleanOperand::getIfcCsgPrimitive3D() {
    return m_IfcBooleanOperand_union.m_IfcCsgPrimitive3D;
}

void IfcBooleanOperand::setIfcCsgPrimitive3D(IfcCsgPrimitive3D *value) {
    deleteUnion();
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcBooleanOperand_union.m_IfcCsgPrimitive3D = value;
    if (value) {
        value->ref();
        m_type = IFCCSGPRIMITIVE3D;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCSGPRIMITIVE3D;
}

void IfcBooleanOperand::set(Step::BaseObject *v) {
    if (v->isOfType(IfcSolidModel::getClassType())) {
        setIfcSolidModel(static_cast< IfcSolidModel* > (v));
    }
    else if (v->isOfType(IfcHalfSpaceSolid::getClassType())) {
        setIfcHalfSpaceSolid(static_cast< IfcHalfSpaceSolid* > (v));
    }
    else if (v->isOfType(IfcBooleanResult::getClassType())) {
        setIfcBooleanResult(static_cast< IfcBooleanResult* > (v));
    }
    else if (v->isOfType(IfcCsgPrimitive3D::getClassType())) {
        setIfcCsgPrimitive3D(static_cast< IfcCsgPrimitive3D* > (v));
    }
}

IFC2X3_DLL_DEF Step::ClassType IfcBooleanOperand::s_type("IfcBooleanOperand");
