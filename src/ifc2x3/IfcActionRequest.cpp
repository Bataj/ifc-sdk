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

#include "ifc2x3/IfcActionRequest.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcActionRequest::IfcActionRequest(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_requestID = Step::getUnset(m_requestID);
}

IfcActionRequest::~IfcActionRequest() {
}

bool IfcActionRequest::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcActionRequest(this);
}

const std::string &IfcActionRequest::type() {
    return IfcActionRequest::s_type.getName();
}

Step::ClassType IfcActionRequest::getClassType() {
    return IfcActionRequest::s_type;
}

Step::ClassType IfcActionRequest::getType() const {
    return IfcActionRequest::s_type;
}

bool IfcActionRequest::isOfType(Step::ClassType t) {
    return IfcActionRequest::s_type == t ? true : IfcControl::isOfType(t);
}

IfcIdentifier IfcActionRequest::getRequestID() {
    if (Step::BaseObject::inited()) {
        return m_requestID;
    }
    else {
        return Step::getUnset(m_requestID);
    }
}

void IfcActionRequest::setRequestID(const IfcIdentifier &value) {
    m_requestID = value;
}

void IfcActionRequest::release() {
    IfcControl::release();
}

bool IfcActionRequest::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_requestID = Step::getUnset(m_requestID);
    }
    else {
        m_requestID = Step::spfToString(arg);
    }
    return true;
}

void IfcActionRequest::copy(const IfcActionRequest &obj, const CopyOp &copyop) {
    IfcControl::copy(obj, copyop);
    setRequestID(obj.m_requestID);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcActionRequest::s_type("IfcActionRequest");
