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

#ifndef IFC2X3_IFCTIMESERIESREFERENCERELATIONSHIP_H
#define IFC2X3_IFCTIMESERIESREFERENCERELATIONSHIP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include "ifc2x3/IfcDocumentSelect.h"
#include <string>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcTimeSeries;

    /**
     */
    class IFC2X3_DLL_DEF IfcTimeSeriesReferenceRelationship : public Step::BaseEntity {
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
        IfcTimeSeries *getReferencedTimeSeries();
        /**
         * Sets the value of the explicit attribute 'ReferencedTimeSeries'.
         * 
         * @param value
         */
        void setReferencedTimeSeries(const Step::RefPtr< IfcTimeSeries > &value);
        /**
         */
        Step::Set< Step::RefPtr< IfcDocumentSelect > > &getTimeSeriesReferences();
        /**
         * Sets the value of the explicit attribute 'TimeSeriesReferences'.
         * 
         * @param value
         */
        void setTimeSeriesReferences(const Step::Set< Step::RefPtr< IfcDocumentSelect > > &value);
        /**
         */
        virtual void release();
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTimeSeriesReferenceRelationship(Step::Id id, Step::SPFData *args);
        virtual ~IfcTimeSeriesReferenceRelationship();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTimeSeriesReferenceRelationship &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcTimeSeries > m_referencedTimeSeries;
        /**
         */
        Step::Set< Step::RefPtr< IfcDocumentSelect > > m_timeSeriesReferences;

    };

}

#endif // IFC2X3_IFCTIMESERIESREFERENCERELATIONSHIP_H
