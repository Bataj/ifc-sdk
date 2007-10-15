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

#ifndef IFC2X3_ALL_H
#define IFC2X3_ALL_H
#include "IfcDocumentSelect.h"
#include "IfcOpticalMaterialProperties.h"
#include "IfcStructuralSurfaceConnection.h"
#include "IfcDirection.h"
#include "IfcPointOnSurface.h"
#include "IfcObjective.h"
#include "IfcTextStyleSelect.h"
#include "IfcStructuralReaction.h"
#include "IfcPlate.h"
#include "IfcHatchLineDistanceSelect.h"
#include "IfcRelDefines.h"
#include "IfcEnergyConversionDevice.h"
#include "IfcBoundaryEdgeCondition.h"
#include "IfcEnergyProperties.h"
#include "IfcCurveStyle.h"
#include "IfcCrewResource.h"
#include "IfcProjectOrderRecord.h"
#include "IfcMember.h"
#include "IfcProductsOfCombustionProperties.h"
#include "IfcFillAreaStyleHatching.h"
#include "IfcPlateType.h"
#include "IfcMechanicalFastener.h"
#include "IfcPreDefinedTerminatorSymbol.h"
#include "IfcLayeredItem.h"
#include "IfcBoxedHalfSpace.h"
#include "IfcRelAssignsToProcess.h"
#include "IfcCurveStyleFontSelect.h"
#include "IfcBridge.h"
#include "IfcWorkPlan.h"
#include "IfcReinforcementBarProperties.h"
#include "fwDecl.h"
#include "IfcBoundaryNodeCondition.h"
#include "IfcPresentationStyleSelect.h"
#include "IfcServiceLifeFactor.h"
#include "IfcRelAssociatesAppliedValue.h"
#include "IfcHeatExchangerType.h"
#include "IfcTable.h"
#include "IfcSystem.h"
#include "IfcSanitaryTerminalType.h"
#include "IfcApprovalActorRelationship.h"
#include "IfcLinearDimension.h"
#include "IfcMaterial.h"
#include "IfcExternallyDefinedTextFont.h"
#include "IfcBridgeStructureElement.h"
#include "IfcRampFlight.h"
#include "IfcObjectDefinition.h"
#include "IfcFlowControllerType.h"
#include "IfcGridAxis.h"
#include "IfcCurtainWallType.h"
#include "IfcApprovalPropertyRelationship.h"
#include "Visitor.h"
#include "IfcBridgePrismaticElement.h"
#include "IfcStructuralLoadPlanarForce.h"
#include "IfcFanType.h"
#include "IfcValue.h"
#include "IfcCsgPrimitive3D.h"
#include "IfcFlowMeterType.h"
#include "IfcStructuralPlanarActionVarying.h"
#include "IfcOwnerHistory.h"
#include "IfcConnectedFaceSet.h"
#include "IfcFacetedBrep.h"
#include "IfcPipeFittingType.h"
#include "IfcExternalReference.h"
#include "IfcAppliedValue.h"
#include "IfcCompositeCurve.h"
#include "IfcPostalAddress.h"
#include "IfcTextureCoordinate.h"
#include "IfcBoilerType.h"
#include "IfcTubeBundleType.h"
#include "IfcDistributionElementType.h"
#include "IfcElectricMotorType.h"
#include "IfcFeatureElement.h"
#include "IfcWorkSchedule.h"
#include "IfcSpaceHeaterType.h"
#include "IfcFailureConnectionCondition.h"
#include "IfcLocalPlacement.h"
#include "IfcClosedShell.h"
#include "IfcTransportElementType.h"
#include "IfcCartesianPoint.h"
#include "IfcUnitaryEquipmentType.h"
#include "IfcFuelProperties.h"
#include "IfcPreDefinedTextFont.h"
#include "IfcActorSelect.h"
#include "IfcCoveringType.h"
#include "IfcColour.h"
#include "IfcRelAssociatesClassification.h"
#include "IfcCurve.h"
#include "IfcAxis2Placement.h"
#include "IfcPropertyEnumeration.h"
#include "IfcFlowMovingDevice.h"
#include "IfcRoundedEdgeFeature.h"
#include "IfcAnnotationFillAreaOccurrence.h"
#include "IfcSurfaceCurveSweptAreaSolid.h"
#include "IfcOpenShell.h"
#include "IfcPersonAndOrganization.h"
#include "IfcCompressorType.h"
#include "IfcCableCarrierSegmentType.h"
#include "IfcRelAssociatesConstraint.h"
#include "IfcReferenceElement.h"
#include "IfcRampFlightType.h"
#include "IfcTransportElement.h"
#include "IfcDistributionControlElementType.h"
#include "IfcRelAssignsToProduct.h"
#include "IfcDoorStyle.h"
#include "IfcCovering.h"
#include "IfcControl.h"
#include "IfcEquipmentStandard.h"
#include "IfcSurfaceStyleElementSelect.h"
#include "IfcRelInteractionRequirements.h"
#include "IfcRelFillsElement.h"
#include "IfcStructuralProfileProperties.h"
#include "IfcConstraintAggregationRelationship.h"
#include "IfcReferencedSectionedSpine.h"
#include "IfcRelAssignsToActor.h"
#include "IfcLoop.h"
#include "IfcConnectionSurfaceGeometry.h"
#include "IfcTask.h"
#include "IfcRoof.h"
#include "IfcCircle.h"
#include "IfcProcedure.h"
#include "IfcDistributionFlowElement.h"
#include "IfcConstraint.h"
#include "IfcWaterProperties.h"
#include "IfcCoordinatedUniversalTimeOffset.h"
#include "IfcDiscreteAccessoryType.h"
#include "IfcFlowSegmentType.h"
#include "IfcColourOrFactor.h"
#include "IfcMove.h"
#include "IfcSectionedSpine.h"
#include "IfcMechanicalConcreteMaterialProperties.h"
#include "IfcSurfaceOfLinearExtrusion.h"
#include "IfcProjectionCurve.h"
#include "IfcFace.h"
#include "IfcMaterialLayerSetUsage.h"
#include "IfcConnectionPortGeometry.h"
#include "IfcStructuralLoadTemperature.h"
#include "IfcLocalTime.h"
#include "IfcPermeableCoveringProperties.h"
#include "IfcCurrencyRelationship.h"
#include "IfcLightDistributionData.h"
#include "IfcStructuralPointAction.h"
#include "IfcPropertySetDefinition.h"
#include "IfcOutletType.h"
#include "IfcStructuralCurveConnection.h"
#include "IfcOrderAction.h"
#include "IfcPlanarBox.h"
#include "IfcAsymmetricIShapeProfileDef.h"
#include "IfcDuctSegmentType.h"
#include "IfcAxis1Placement.h"
#include "IfcGeometricRepresentationSubContext.h"
#include "IfcCenterLineProfileDef.h"
#include "IfcCooledBeamType.h"
#include "IfcRelAssociatesMaterial.h"
#include "IfcVectorOrDirection.h"
#include "IfcPhysicalSimpleQuantity.h"
#include "IfcPath.h"
#include "IfcStructuralSurfaceMemberVarying.h"
#include "IfcSurfaceOfRevolution.h"
#include "IfcFurnitureType.h"
#include "IfcSweptDiskSolid.h"
#include "IfcPresentationLayerAssignment.h"
#include "IfcSoundValue.h"
#include "IfcEnvironmentalImpactValue.h"
#include "IfcStructuralItem.h"
#include "IfcReinforcingMesh.h"
#include "IfcCartesianTransformationOperator2D.h"
#include "IfcStructuralLinearActionVarying.h"
#include "IfcCableSegmentType.h"
#include "IfcBuildingElement.h"
#include "IfcPointOnCurve.h"
#include "IfcStructuralLoad.h"
#include "IfcBoundedSurface.h"
#include "IfcRelDefinesByType.h"
#include "IfcChillerType.h"
#include "IfcJunctionBoxType.h"
#include "IfcLightSourceDirectional.h"
#include "IfcSolidModel.h"
#include "IfcStructuralActivity.h"
#include "IfcPumpType.h"
#include "IfcRoundedRectangleProfileDef.h"
#include "IfcDuctFittingType.h"
#include "IfcClassification.h"
#include "IfcCivilElement.h"
#include "IfcDraughtingPreDefinedCurveFont.h"
#include "IfcSpaceProgram.h"
#include "IfcDefinedSymbol.h"
#include "IfcVertexBasedTextureMap.h"
#include "IfcServiceLife.h"
#include "IfcRelAssignsToControl.h"
#include "IfcDraughtingCallout.h"
#include "IfcProperty.h"
#include "IfcProjectionElement.h"
#include "IfcTopologyRepresentation.h"
#include "IfcRelConnectsElements.h"
#include "IfcStructuralLoadLinearForce.h"
#include "IfcExtendedMaterialProperties.h"
#include "IfcMechanicalSteelMaterialProperties.h"
#include "IfcSimpleProperty.h"
#include "IfcColourSpecification.h"
#include "IfcRelAssociatesProfileProperties.h"
#include "IfcReferenceCurveAlignment2D.h"
#include "IfcDistributionChamberElement.h"
#include "IfcStructuralLoadSingleForceWarping.h"
#include "IfcStructuralCurveMemberVarying.h"
#include "IfcRelConnectsStructuralActivity.h"
#include "IfcSectionProperties.h"
#include "IfcIrregularTimeSeries.h"
#include "IfcCsgSelect.h"
#include "IfcMaterialProperties.h"
#include "IfcFilterType.h"
#include "IfcMemberType.h"
#include "IfcFaceOuterBound.h"
#include "IfcRelationship.h"
#include "IfcSlippageConnectionCondition.h"
#include "IfcFlowStorageDevice.h"
#include "IfcLibraryInformation.h"
#include "IfcLampType.h"
#include "IfcPropertyDependencyRelationship.h"
#include "IfcAnnotation.h"
#include "IfcCalendarDate.h"
#include "IfcSurfaceStyleLighting.h"
#include "IfcFlowSegment.h"
#include "IfcBuildingElementType.h"
#include "IfcDimensionCurveDirectedCallout.h"
#include "IfcRailing.h"
#include "IfcGrid.h"
#include "IfcGroup.h"
#include "IfcSurfaceStyleRefraction.h"
#include "IfcCartesianTransformationOperator2DnonUniform.h"
#include "IfcTextureVertex.h"
#include "IfcTimeSeriesValue.h"
#include "IfcClassificationReference.h"
#include "IfcRectangleHollowProfileDef.h"
#include "IfcLShapeProfileDef.h"
#include "IfcLightIntensityDistribution.h"
#include "IfcOccupant.h"
#include "IfcBlobTexture.h"
#include "IfcColourRgb.h"
#include "IfcUnit.h"
#include "IfcSizeSelect.h"
#include "IfcPolyLoop.h"
#include "IfcCircleProfileDef.h"
#include "IfcQuantityTime.h"
#include "IfcCartesianTransformationOperator3DnonUniform.h"
#include "IfcPhysicalQuantity.h"
#include "IfcProcess.h"
#include "IfcDerivedUnitElement.h"
#include "IfcPile.h"
#include "IfcPropertyConstraintRelationship.h"
#include "IfcRelConnectsWithRealizingElements.h"
#include "IfcDerivedProfileDef.h"
#include "IfcImageTexture.h"
#include "IfcSurfaceStyle.h"
#include "IfcRailingType.h"
#include "IfcProxy.h"
#include "IfcSurfaceStyleWithTextures.h"
#include "IfcPreDefinedPointMarkerSymbol.h"
#include "IfcRelContainedInSpatialStructure.h"
#include "IfcPipeSegmentType.h"
#include "IfcTimeSeries.h"
#include "IfcProject.h"
#include "IfcStyledRepresentation.h"
#include "IfcRelAssignsToResource.h"
#include "IfcElectricalElement.h"
#include "IfcGeometricRepresentationContext.h"
#include "IfcRelDecomposes.h"
#include "IfcRelCoversBldgElements.h"
#include "IfcAxis2Placement2D.h"
#include "IfcFaceSurface.h"
#include "IfcGridPlacement.h"
#include "IfcMaterialSelect.h"
#include "IfcLine.h"
#include "IfcProfileProperties.h"
#include "IfcLaborResource.h"
#include "IfcShapeModel.h"
#include "IfcConstraintClassificationRelationship.h"
#include "IfcReferencePlacement.h"
#include "IfcTimeSeriesReferenceRelationship.h"
#include "IfcMonetaryUnit.h"
#include "IfcRectangularPyramid.h"
#include "IfcVirtualGridIntersection.h"
#include "IfcFooting.h"
#include "IfcAlignmentElement.h"
#include "IfcCondition.h"
#include "IfcFlowTerminalType.h"
#include "IfcDraughtingPreDefinedColour.h"
#include "IfcSpatialStructureElementType.h"
#include "IfcPerson.h"
#include "IfcCostSchedule.h"
#include "IfcConstructionResource.h"
#include "IfcConstructionEquipmentResource.h"
#include "IfcCShapeProfileDef.h"
#include "IfcPreDefinedCurveFont.h"
#include "IfcFillAreaStyle.h"
#include "IfcBuildingStorey.h"
#include "IfcAddress.h"
#include "IfcOpeningElement.h"
#include "IfcFacetedBrepWithVoids.h"
#include "IfcFlowTreatmentDevice.h"
#include "IfcTextStyleFontModel.h"
#include "IfcResource.h"
#include "IfcRelFlowControlElements.h"
#include "IfcHygroscopicMaterialProperties.h"
#include "IfcMaterialClassificationRelationship.h"
#include "IfcElement.h"
#include "IfcDuctSilencerType.h"
#include "IfcQuantityWeight.h"
#include "IfcAnnotationTextOccurrence.h"
#include "IfcApplication.h"
#include "IfcAlarmType.h"
#include "IfcAnnotationFillArea.h"
#include "IfcPropertyBoundedValue.h"
#include "IfcTextureCoordinateGenerator.h"
#include "IfcPreDefinedItem.h"
#include "IfcTextFontSelect.h"
#include "IfcCurveOrEdgeCurve.h"
#include "IfcProductDefinitionShape.h"
#include "IfcBooleanClippingResult.h"
#include "IfcMaterialLayer.h"
#include "IfcRelConnects.h"
#include "IfcSpecularHighlightSelect.h"
#include "IfcBridgePart.h"
#include "IfcFeatureElementSubtraction.h"
#include "IfcPolygonalBoundedHalfSpace.h"
#include "IfcFillAreaStyleTileShapeSelect.h"
#include "IfcObjectReferenceSelect.h"
#include "IfcStructuralCurveMember.h"
#include "IfcDoor.h"
#include "IfcSurface.h"
#include "IfcStructuralLoadStatic.h"
#include "IfcSite.h"
#include "IfcExternallyDefinedHatchStyle.h"
#include "IfcStructuralLoadSingleDisplacementDistortion.h"
#include "IfcTextStyleTextModel.h"
#include "IfcWorkControl.h"
#include "IfcDistributionControlElement.h"
#include "IfcRelConnectsStructuralMember.h"
#include "IfcRelAssociates.h"
#include "IfcCurtainWall.h"
#include "IfcWindowLiningProperties.h"
#include "IfcConnectionPointEccentricity.h"
#include "IfcAirTerminalType.h"
#include "IfcEllipse.h"
#include "IfcFastenerType.h"
#include "IfcPropertySet.h"
#include "IfcMeasureWithUnit.h"
#include "IfcPhysicalComplexQuantity.h"
#include "IfcGeometricCurveSet.h"
#include "IfcSpace.h"
#include "IfcElementComponentType.h"
#include "IfcDimensionCalloutRelationship.h"
#include "IfcCurveStyleFont.h"
#include "IfcRegularTimeSeries.h"
#include "IfcReinforcementDefinitionProperties.h"
#include "IfcDoorPanelProperties.h"
#include "IfcSurfaceStyleShading.h"
#include "IfcBlock.h"
#include "IfcMaterialDefinitionRepresentation.h"
#include "IfcComplexProperty.h"
#include "IfcBooleanOperand.h"
#include "IfcStructuralSteelProfileProperties.h"
#include "IfcTrimmingSelect.h"
#include "IfcRelNests.h"
#include "IfcCurveBoundedPlane.h"
#include "IfcArbitraryProfileDefWithVoids.h"
#include "IfcApproval.h"
#include "IfcFlowStorageDeviceType.h"
#include "IfcFeatureElementAddition.h"
#include "IfcColumnType.h"
#include "IfcProjectOrder.h"
#include "IfcRelConnectsWithEccentricity.h"
#include "IfcFillStyleSelect.h"
#include "IfcElectricalBaseProperties.h"
#include "IfcConnectionGeometry.h"
#include "IfcPreDefinedColour.h"
#include "IfcChamferEdgeFeature.h"
#include "IfcGasTerminalType.h"
#include "IfcRelOverridesProperties.h"
#include "IfcProduct.h"
#include "IfcBoundaryFaceCondition.h"
#include "IfcLibraryReference.h"
#include "IfcAnnotationCurveOccurrence.h"
#include "IfcSystemFurnitureElementType.h"
#include "IfcRelAggregates.h"
#include "IfcFaceBasedSurfaceModel.h"
#include "IfcRelaxation.h"
#include "IfcDoorLiningProperties.h"
#include "IfcWall.h"
#include "IfcRelSequence.h"
#include "IfcClassificationItem.h"
#include "IfcCivilSheath.h"
#include "IfcFlowTreatmentDeviceType.h"
#include "IfcRelDefinesByProperties.h"
#include "IfcSymbolStyleSelect.h"
#include "IfcStyleModel.h"
#include "IfcStructuralSurfaceMember.h"
#include "IfcOneDirectionRepeatFactor.h"
#include "IfcConditionCriterion.h"
#include "IfcGeneralMaterialProperties.h"
#include "IfcRelConnectsPortToElement.h"
#include "IfcAnnotationSurface.h"
#include "IfcAppliedValueSelect.h"
#include "IfcPolyline.h"
#include "IfcElementComponent.h"
#include "IfcReinforcingElement.h"
#include "IfcVertexPoint.h"
#include "IfcRelAssignsToGroup.h"
#include "IfcRelServicesBuildings.h"
#include "IfcMaterialLayerSet.h"
#include "IfcElementType.h"
#include "IfcStructuralPlanarAction.h"
#include "IfcDocumentElectronicFormat.h"
#include "IfcRelAssignsToProjectOrder.h"
#include "IfcSpatialStructureElement.h"
#include "IfcRadiusDimension.h"
#include "IfcDimensionPair.h"
#include "IfcProductRepresentation.h"
#include "IfcDefinedSymbolSelect.h"
#include "IfcLightSourcePositional.h"
#include "IfcDistributionElement.h"
#include "IfcRationalBezierCurve.h"
#include "IfcRelVoidsElement.h"
#include "IfcPropertyReferenceValue.h"
#include "IfcParameterizedProfileDef.h"
#include "IfcTextureMap.h"
#include "IfcShapeRepresentation.h"
#include "IfcZShapeProfileDef.h"
#include "IfcTextStyle.h"
#include "IfcRepresentationItem.h"
#include "IfcPropertyEnumeratedValue.h"
#include "IfcSweptSurface.h"
#include "IfcRelConnectsPorts.h"
#include "IfcPresentationStyleAssignment.h"
#include "IfcMeasureValue.h"
#include "IfcReferenceCurvePlacementSystem.h"
#include "IfcCompositeCurveSegment.h"
#include "IfcFurnishingElementType.h"
#include "IfcAsset.h"
#include "IfcCivilStructureElement.h"
#include "IfcRelSchedulesCostItems.h"
#include "IfcRelOccupiesSpaces.h"
#include "IfcStructuredDimensionCallout.h"
#include "IfcFlowController.h"
#include "IfcEdgeLoop.h"
#include "IfcGeneralProfileProperties.h"
#include "IfcDraughtingCalloutElement.h"
#include "IfcPointOrVertexPoint.h"
#include "IfcStructuralMember.h"
#include "IfcThermalMaterialProperties.h"
#include "IfcFlowFitting.h"
#include "IfcCoilType.h"
#include "IfcTendonAnchor.h"
#include "IfcInventory.h"
#include "IfcOrganizationRelationship.h"
#include "IfcCivilElementPart.h"
#include "IfcSpaceThermalLoadProperties.h"
#include "IfcTelecomAddress.h"
#include "IfcFurnitureStandard.h"
#include "IfcCoolingTowerType.h"
#include "IfcCartesianTransformationOperator.h"
#include "IfcElectricTimeControlType.h"
#include "IfcElementarySurface.h"
#include "IfcRelSpaceBoundary.h"
#include "IfcAnnotationSymbolOccurrence.h"
#include "IfcConstructionProductResource.h"
#include "IfcTwoDirectionRepeatFactor.h"
#include "IfcCharacterStyleSelect.h"
#include "IfcDimensionalExponents.h"
#include "IfcAnnotationSurfaceOccurrence.h"
#include "IfcFillAreaStyleTileSymbolWithStyle.h"
#include "IfcHumidifierType.h"
#include "IfcConnectionPointGeometry.h"
#include "IfcLightSource.h"
#include "IfcBSplineCurve.h"
#include "IfcElementQuantity.h"
#include "IfcTextStyleForDefinedFont.h"
#include "IfcOrientedEdge.h"
#include "IfcVertexLoop.h"
#include "IfcManifoldSolidBrep.h"
#include "IfcHalfSpaceSolid.h"
#include "IfcRelConnectsStructuralElement.h"
#include "IfcExternallyDefinedSymbol.h"
#include "IfcFurnishingElement.h"
#include "IfcProtectiveDeviceType.h"
#include "IfcCraneRailAShapeProfileDef.h"
#include "IfcElectricApplianceType.h"
#include "IfcPerformanceHistory.h"
#include "IfcDraughtingPreDefinedTextFont.h"
#include "IfcVirtualElement.h"
#include "IfcCurveStyleFontAndScaling.h"
#include "IfcBridgeSegmentPart.h"
#include "IfcDraughtingCalloutRelationship.h"
#include "IfcMaterialList.h"
#include "IfcQuantityArea.h"
#include "IfcConversionBasedUnit.h"
#include "IfcArbitraryClosedProfileDef.h"
#include "IfcStructuralAnalysisModel.h"
#include "IfcRelAssigns.h"
#include "IfcRelProjectsElement.h"
#include "IfcDistributionFlowElementType.h"
#include "IfcCostItem.h"
#include "IfcTextStyleWithBoxCharacteristics.h"
#include "IfcBuilding.h"
#include "IfcPropertyListValue.h"
#include "IfcSphere.h"
#include "IfcReferencesValueDocument.h"
#include "IfcFaceBound.h"
#include "IfcPreDefinedDimensionSymbol.h"
#include "IfcRepresentationContext.h"
#include "IfcEllipseProfileDef.h"
#include "IfcRightCircularCone.h"
#include "IfcFluidFlowProperties.h"
#include "IfcDimensionCurveTerminator.h"
#include "IfcPreDefinedSymbol.h"
#include "IfcSlab.h"
#include "IfcClassificationItemRelationship.h"
#include "IfcLightDistributionDataSourceSelect.h"
#include "IfcWindow.h"
#include "IfcBuildingElementProxyType.h"
#include "IfcCompositeProfileDef.h"
#include "Ifc2DCompositeCurve.h"
#include "IfcTypeProduct.h"
#include "IfcSwitchingDeviceType.h"
#include "IfcStackTerminalType.h"
#include "IfcPropertySingleValue.h"
#include "IfcActorRole.h"
#include "IfcLightSourceAmbient.h"
#include "IfcLightSourceGoniometric.h"
#include "IfcEquipmentElement.h"
#include "IfcDerivedMeasureValue.h"
#include "IfcDiameterDimension.h"
#include "IfcRelConnectsPathElements.h"
#include "IfcSubedge.h"
#include "IfcReinforcingBar.h"
#include "IfcEdgeFeature.h"
#include "IfcEdge.h"
#include "IfcProfileDef.h"
#include "IfcRibPlateProfileProperties.h"
#include "IfcTerminatorSymbol.h"
#include "IfcExternallyDefinedSurfaceStyle.h"
#include "IfcLibrarySelect.h"
#include "IfcStair.h"
#include "IfcDateTimeSelect.h"
#include "IfcDiscreteAccessory.h"
#include "IfcPermit.h"
#include "IfcElectricFlowStorageDeviceType.h"
#include "IfcRamp.h"
#include "IfcElectricGeneratorType.h"
#include "IfcDimensionCurve.h"
#include "IfcTextLiteral.h"
#include "IfcPlacement.h"
#include "IfcReferenceCurvePlacement.h"
#include "IfcWasteTerminalType.h"
#include "IfcElementAssembly.h"
#include "IfcRevolvedAreaSolid.h"
#include "IfcEvaporatorType.h"
#include "IfcCsgSolid.h"
#include "IfcFireSuppressionTerminalType.h"
#include "IfcObjectPlacement.h"
#include "IfcCurveFontOrScaledCurveFontSelect.h"
#include "IfcClothoid.h"
#include "IfcOrganization.h"
#include "IfcElementPart.h"
#include "IfcFlowMovingDeviceType.h"
#include "IfcAppliedValueRelationship.h"
#include "IfcFillAreaStyleTiles.h"
#include "IfcConstructionMaterialResource.h"
#include "IfcStructuralConnection.h"
#include "IfcDocumentInformation.h"
#include "IfcControllerType.h"
#include "IfcSoundProperties.h"
#include "IfcSectionReinforcementProperties.h"
#include "IfcFlowTerminal.h"
#include "IfcSymbolStyle.h"
#include "IfcMetricValueSelect.h"
#include "IfcTrimmedCurve.h"
#include "IfcContextDependentUnit.h"
#include "IfcAngularDimension.h"
#include "IfcBuildingElementProxy.h"
#include "IfcMetric.h"
#include "IfcBuildingElementPart.h"
#include "IfcStructuralAction.h"
#include "IfcRectangleProfileDef.h"
#include "IfcStairFlight.h"
#include "IfcDocumentReference.h"
#include "IfcPort.h"
#include "IfcRepresentation.h"
#include "IfcCableCarrierFittingType.h"
#include "IfcCircleHollowProfileDef.h"
#include "IfcAnnotationOccurrence.h"
#include "IfcClassificationNotationFacet.h"
#include "IfcTimeSeriesSchedule.h"
#include "IfcStructuralLoadSingleDisplacement.h"
#include "IfcStyledItem.h"
#include "IfcWindowStyle.h"
#include "IfcDocumentInformationRelationship.h"
#include "IfcCondenserType.h"
#include "IfcPropertyTableValue.h"
#include "IfcPresentationLayerWithStyle.h"
#include "IfcIrregularTimeSeriesValue.h"
#include "IfcSweptAreaSolid.h"
#include "IfcScheduleTimeControl.h"
#include "IfcOffsetCurve3D.h"
#include "IfcQuantityVolume.h"
#include "IfcCartesianTransformationOperator3D.h"
#include "IfcSpaceType.h"
#include "IfcDateAndTime.h"
#include "IfcArbitraryOpenProfileDef.h"
#include "IfcVibrationIsolatorType.h"
#include "IfcStructuralResultGroup.h"
#include "IfcStructuralConnectionCondition.h"
#include "IfcAxis2Placement3D.h"
#include "IfcNamedUnit.h"
#include "IfcPlanarExtent.h"
#include "IfcActionRequest.h"
#include "IfcAirToAirHeatRecoveryType.h"
#include "IfcExtrudedAreaSolid.h"
#include "IfcWallType.h"
#include "IfcTableRow.h"
#include "IfcFastener.h"
#include "IfcElectricHeaterType.h"
#include "IfcRightCircularCylinder.h"
#include "IfcApprovalRelationship.h"
#include "IfcConstraintRelationship.h"
#include "IfcStairFlightType.h"
#include "IfcIShapeProfileDef.h"
#include "IfcSubContractResource.h"
#include "IfcBoundedCurve.h"
#include "IfcTrapeziumProfileDef.h"
#include "IfcMechanicalMaterialProperties.h"
#include "IfcTypeObject.h"
#include "IfcTShapeProfileDef.h"
#include "IfcSlabType.h"
#include "IfcLightSourceSpot.h"
#include "IfcUnitAssignment.h"
#include "IfcPlane.h"
#include "IfcQuantityLength.h"
#include "IfcClassificationNotationSelect.h"
#include "IfcTendon.h"
#include "IfcBoundaryCondition.h"
#include "IfcPropertyDefinition.h"
#include "IfcTransformerType.h"
#include "IfcBeam.h"
#include "IfcCraneRailFShapeProfileDef.h"
#include "IfcMechanicalFastenerType.h"
#include "IfcDistributionChamberElementType.h"
#include "IfcSurfaceOrFaceSurface.h"
#include "IfcVector.h"
#include "IfcValveType.h"
#include "IfcTextLiteralWithExtent.h"
#include "IfcShell.h"
#include <Step/BaseObject.h>
#include "IfcBoundingBox.h"
#include "IfcRelAssociatesLibrary.h"
#include "IfcDerivedUnit.h"
#include "IfcConnectionCurveGeometry.h"
#include "IfcRectangularTrimmedSurface.h"
#include "IfcClassificationNotation.h"
#include "IfcActuatorType.h"
#include "IfcBezierCurve.h"
#include "IfcStructuralLoadSingleForce.h"
#include "IfcReferenceCurve3D.h"
#include "IfcRelCoversSpaces.h"
#include "IfcAirTerminalBoxType.h"
#include "IfcFlowFittingType.h"
#include "IfcVertex.h"
#include "IfcDamperType.h"
#include "IfcBoundaryNodeConditionWarping.h"
#include "IfcSurfaceTexture.h"
#include "IfcStructuralActivityAssignmentSelect.h"
#include "IfcPixelTexture.h"
#include "IfcWindowPanelProperties.h"
#include "IfcEvaporativeCoolerType.h"
#include "IfcZone.h"
#include "IfcSurfaceStyleRendering.h"
#include "IfcReferenceCurve.h"
#include "IfcRelAssociatesApproval.h"
#include "IfcBridgeElement.h"
#include "IfcGeometricSetSelect.h"
#include "IfcShapeAspect.h"
#include "IfcStructuralLinearAction.h"
#include "IfcRelAssociatesDocument.h"
#include "IfcBeamType.h"
#include "IfcConic.h"
#include "IfcBridgeContactElement.h"
#include "IfcGeometricSet.h"
#include "IfcBridgeSegment.h"
#include "IfcLightFixtureType.h"
#include "IfcEnergyConversionDeviceType.h"
#include "IfcStructuralPointReaction.h"
#include "IfcPresentationStyle.h"
#include "IfcObject.h"
#include "IfcConditionCriterionSelect.h"
#include "IfcStructuralLoadGroup.h"
#include "IfcDistributionPort.h"
#include "IfcMappedItem.h"
#include "IfcRepresentationMap.h"
#include "ExpressDataSet.h"
#include "IfcRoot.h"
#include <ifc2x3/DefinedTypes.h>
#include "IfcCivilVoid.h"
#include "IfcTopologicalRepresentationItem.h"
#include "IfcFlowInstrumentType.h"
#include "IfcOffsetCurve2D.h"
#include "IfcPoint.h"
#include "IfcUShapeProfileDef.h"
#include "IfcWallStandardCase.h"
#include "IfcTankType.h"
#include "IfcStructuralPointConnection.h"
#include "IfcRelReferencedInSpatialStructure.h"
#include "IfcBooleanResult.h"
#include "IfcCurveStyleFontPattern.h"
#include "IfcMotorConnectionType.h"
#include "IfcSensorType.h"
#include "IfcSIUnit.h"
#include "IfcQuantityCount.h"
#include "IfcGeometricRepresentationItem.h"
#include "IfcColumn.h"
#include "IfcSimpleValue.h"
#include "IfcCostValue.h"
#include "IfcOrientationSelect.h"
#include "IfcElectricalCircuit.h"
#include "IfcElectricDistributionPoint.h"
#include "IfcShellBasedSurfaceModel.h"
#include "IfcActor.h"
#include "IfcRelAssignsTasks.h"
#include "IfcEdgeCurve.h"

namespace ifc2x3 {

}

#endif // IFC2X3_ALL_H
