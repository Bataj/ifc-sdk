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

#ifndef IFC2X3_IFCPROPERTYBOUNDEDVALUE_H
#define IFC2X3_IFCPROPERTYBOUNDEDVALUE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcSimpleProperty.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcUnit;
    class IfcValue;

    /**
     */
    class IFC2X3_DLL_DEF IfcPropertyBoundedValue : public IfcSimpleProperty {
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
        IfcValue *getUpperBoundValue();
        /**
         * Sets the value of the explicit attribute 'UpperBoundValue'.
         * 
         * @param value
         */
        void setUpperBoundValue(const Step::RefPtr< IfcValue > &value);
        /**
         */
        IfcValue *getLowerBoundValue();
        /**
         * Sets the value of the explicit attribute 'LowerBoundValue'.
         * 
         * @param value
         */
        void setLowerBoundValue(const Step::RefPtr< IfcValue > &value);
        /**
         */
        IfcUnit *getUnit();
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        void setUnit(const Step::RefPtr< IfcUnit > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPropertyBoundedValue(Step::Id id, Step::SPFData *args);
        virtual ~IfcPropertyBoundedValue();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPropertyBoundedValue &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcValue > m_upperBoundValue;
        /**
         */
        Step::RefPtr< IfcValue > m_lowerBoundValue;
        /**
         */
        Step::RefPtr< IfcUnit > m_unit;

    };

}

#endif // IFC2X3_IFCPROPERTYBOUNDEDVALUE_H
