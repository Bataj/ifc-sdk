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

#ifndef IFC2X3_IFCBRIDGEPRISMATICELEMENT_H
#define IFC2X3_IFCBRIDGEPRISMATICELEMENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcBridgeElement.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Alignment Elements.
     * 
     */
    class IFC2X3_DLL_DEF IfcBridgePrismaticElement : public IfcBridgeElement {
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
        IfcBridgePrismaticElementType getPredefinedType();
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        void setPredefinedType(IfcBridgePrismaticElementType value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcBridgePrismaticElement(Step::Id id, Step::SPFData *args);
        virtual ~IfcBridgePrismaticElement();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcBridgePrismaticElement &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcBridgePrismaticElementType m_predefinedType;

    };

}

#endif // IFC2X3_IFCBRIDGEPRISMATICELEMENT_H
