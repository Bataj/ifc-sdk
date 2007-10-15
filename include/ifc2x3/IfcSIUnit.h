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

#ifndef IFC2X3_IFCSIUNIT_H
#define IFC2X3_IFCSIUNIT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include "ifc2x3/IfcNamedUnit.h"

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcSIUnit : public IfcNamedUnit {
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
        IfcSIPrefix getPrefix();
        /**
         * Sets the value of the explicit attribute 'Prefix'.
         * 
         * @param value
         */
        void setPrefix(IfcSIPrefix value);
        /**
         */
        IfcSIUnitName getName();
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        void setName(IfcSIUnitName value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSIUnit(Step::Id id, Step::SPFData *args);
        virtual ~IfcSIUnit();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSIUnit &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSIPrefix m_prefix;
        /**
         */
        IfcSIUnitName m_name;

    };

}

#endif // IFC2X3_IFCSIUNIT_H
