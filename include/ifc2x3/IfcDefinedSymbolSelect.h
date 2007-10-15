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

#ifndef IFC2X3_IFCDEFINEDSYMBOLSELECT_H
#define IFC2X3_IFCDEFINEDSYMBOLSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseObject.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcExternallyDefinedSymbol;
    class IfcPreDefinedSymbol;

    /**
     */
    class IFC2X3_DLL_DEF IfcDefinedSymbolSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcDefinedSymbolSelect_select {
            IFCPREDEFINEDSYMBOL,
            IFCEXTERNALLYDEFINEDSYMBOL,
            UNSET,
        };

        union IfcDefinedSymbolSelect_union {
            IfcPreDefinedSymbol *m_IfcPreDefinedSymbol;
            IfcExternallyDefinedSymbol *m_IfcExternallyDefinedSymbol;
        };
        /**
         */
        IfcDefinedSymbolSelect();
        virtual ~IfcDefinedSymbolSelect();
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
        virtual void copy(const IfcDefinedSymbolSelect &obj, const CopyOp &copyop);
        /**
         */
        char *currentTypeName();
        /**
         */
        IfcDefinedSymbolSelect_select currentType();
        /**
         */
        void deleteUnion();
        /**
         */
        IfcPreDefinedSymbol *getIfcPreDefinedSymbol();
        /**
         * @param value
         */
        void setIfcPreDefinedSymbol(IfcPreDefinedSymbol *value);
        /**
         */
        IfcExternallyDefinedSymbol *getIfcExternallyDefinedSymbol();
        /**
         * @param value
         */
        void setIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcDefinedSymbolSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcDefinedSymbolSelect_select m_type;
        /**
         */
        IfcDefinedSymbolSelect_union m_IfcDefinedSymbolSelect_union;

    };

}

#endif // IFC2X3_IFCDEFINEDSYMBOLSELECT_H
