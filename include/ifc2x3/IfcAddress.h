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

#ifndef IFC2X3_IFCADDRESS_H
#define IFC2X3_IFCADDRESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/Aggregation.h>
#include <string>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcOrganization;
    class IfcPerson;

    /**
     */
    class IFC2X3_DLL_DEF IfcAddress : public Step::BaseEntity {
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
        IfcAddressTypeEnum getPurpose();
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        void setPurpose(IfcAddressTypeEnum value);
        /**
         */
        IfcText getDescription();
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        void setDescription(const IfcText &value);
        /**
         */
        IfcLabel getUserDefinedPurpose();
        /**
         * Sets the value of the explicit attribute 'UserDefinedPurpose'.
         * 
         * @param value
         */
        void setUserDefinedPurpose(const IfcLabel &value);
        /**
         */
        Step::Set< Step::ObsPtr< IfcPerson > > &getOfPerson();
        /**
         */
        Step::Set< Step::ObsPtr< IfcOrganization > > &getOfOrganization();
        /**
         */
        virtual void release();
        friend class IfcPerson;
        friend class ExpressDataSet;
        friend class IfcOrganization;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcAddress();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAddress &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcAddressTypeEnum m_purpose;
        /**
         */
        std::string m_description;
        /**
         */
        std::string m_userDefinedPurpose;
        /**
         */
        Step::Set< Step::ObsPtr< IfcPerson > > m_ofPerson;
        /**
         */
        Step::Set< Step::ObsPtr< IfcOrganization > > m_ofOrganization;

    };

}

#endif // IFC2X3_IFCADDRESS_H
