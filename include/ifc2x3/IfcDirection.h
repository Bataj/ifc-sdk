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

#ifndef IFC2X3_IFCDIRECTION_H
#define IFC2X3_IFCDIRECTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcDirection : public IfcGeometricRepresentationItem {
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
        Step::List< Step::Real > &getDirectionRatios();
        /**
         * Sets the value of the explicit attribute 'DirectionRatios'.
         * 
         * @param value
         */
        void setDirectionRatios(const Step::List< Step::Real > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcDirection(Step::Id id, Step::SPFData *args);
        virtual ~IfcDirection();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDirection &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::List< Step::Real > m_directionRatios;

    };

}

#endif // IFC2X3_IFCDIRECTION_H
