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

#ifndef IFC2X3_IFCSIZESELECT_H
#define IFC2X3_IFCSIZESELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcSizeSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcSizeSelect_select {
            IFCRATIOMEASURE,
            IFCLENGTHMEASURE,
            IFCDESCRIPTIVEMEASURE,
            IFCPOSITIVELENGTHMEASURE,
            IFCNORMALISEDRATIOMEASURE,
            IFCPOSITIVERATIOMEASURE,
            UNSET,
        };

        union IfcSizeSelect_union {
            IfcRatioMeasure m_IfcRatioMeasure;
            IfcLengthMeasure m_IfcLengthMeasure;
            IfcDescriptiveMeasure *m_IfcDescriptiveMeasure;
            IfcPositiveLengthMeasure m_IfcPositiveLengthMeasure;
            IfcNormalisedRatioMeasure m_IfcNormalisedRatioMeasure;
            IfcPositiveRatioMeasure m_IfcPositiveRatioMeasure;
        };
        /**
         */
        IfcSizeSelect();
        virtual ~IfcSizeSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSizeSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcSizeSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcRatioMeasure getIfcRatioMeasure();
        /**
         * @param value
         */
        void setIfcRatioMeasure(IfcRatioMeasure value);
        /**
         */
        IfcLengthMeasure getIfcLengthMeasure();
        /**
         * @param value
         */
        void setIfcLengthMeasure(IfcLengthMeasure value);
        /**
         */
        IfcDescriptiveMeasure getIfcDescriptiveMeasure();
        /**
         * @param value
         */
        void setIfcDescriptiveMeasure(const IfcDescriptiveMeasure &value);
        /**
         */
        IfcPositiveLengthMeasure getIfcPositiveLengthMeasure();
        /**
         * @param value
         */
        void setIfcPositiveLengthMeasure(IfcPositiveLengthMeasure value);
        /**
         */
        IfcNormalisedRatioMeasure getIfcNormalisedRatioMeasure();
        /**
         * @param value
         */
        void setIfcNormalisedRatioMeasure(IfcNormalisedRatioMeasure value);
        /**
         */
        IfcPositiveRatioMeasure getIfcPositiveRatioMeasure();
        /**
         * @param value
         */
        void setIfcPositiveRatioMeasure(IfcPositiveRatioMeasure value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcSizeSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcSizeSelect_select m_type;
        /**
         */
        IfcSizeSelect_union m_IfcSizeSelect_union;

    };

}

#endif // IFC2X3_IFCSIZESELECT_H
