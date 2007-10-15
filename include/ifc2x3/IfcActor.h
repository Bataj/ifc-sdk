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

#ifndef IFC2X3_IFCACTOR_H
#define IFC2X3_IFCACTOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObject.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcRelAssignsToActor;

    /**
     */
    class IFC2X3_DLL_DEF IfcActor : public IfcObject {
    public:
        /**
         * Accepts a read/write DatatypeVisitor.
         * 
         * @param v the read/write DatatypeVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *v);
        /**
         */
        virtual const std::string &type();
        /**
         */
        static Step::ClassType getClassType();
        /**
         */
        virtual Step::ClassType getType() const;
        /**
         * @param t
         */
        virtual bool isOfType(Step::ClassType t);
        /**
         */
        IfcActorSelect *getTheActor();
        /**
         * Sets the value of the explicit attribute 'TheActor'.
         * 
         * @param value
         */
        void setTheActor(const Step::RefPtr< IfcActorSelect > &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelAssignsToActor > > &getIsActingUpon();
        /**
         */
        virtual void release();
        friend class IfcRelAssignsToActor;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcActor(Step::Id id, Step::SPFData *args);
        virtual ~IfcActor();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcActor &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_theActor;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelAssignsToActor > > m_isActingUpon;

    };

}

#endif // IFC2X3_IFCACTOR_H
