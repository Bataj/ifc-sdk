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

#ifndef IFC2X3_IFCPROCESS_H
#define IFC2X3_IFCPROCESS_H
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
    class IfcRelAssignsToProcess;
    class IfcRelSequence;

    /**
     */
    class IFC2X3_DLL_DEF IfcProcess : public IfcObject {
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
        Step::Set< Step::ObsPtr< IfcRelAssignsToProcess > > &getOperatesOn();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelSequence > > &getIsSuccessorFrom();
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelSequence > > &getIsPredecessorTo();
        /**
         */
        virtual void release();
        friend class IfcRelAssignsToProcess;
        friend class ExpressDataSet;
        friend class IfcRelSequence;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProcess(Step::Id id, Step::SPFData *args);
        virtual ~IfcProcess();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProcess &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelAssignsToProcess > > m_operatesOn;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelSequence > > m_isSuccessorFrom;
        /**
         */
        Step::Set< Step::ObsPtr< IfcRelSequence > > m_isPredecessorTo;

    };

}

#endif // IFC2X3_IFCPROCESS_H
