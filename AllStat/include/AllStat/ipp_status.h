#ifndef __AS_IPP_STATUS__
#define __AS_IPP_STATUS__

#include "AllStat.h"

AS_NAMESPACE_BEGIN()

#if AS_UNDEF_VALUES
#ifdef ippStsNotSupportedModeErr
#undef ippStsNotSupportedModeErr
#endif
#ifdef ippStsCpuNotSupportedErr
#undef ippStsCpuNotSupportedErr
#endif
#ifdef ippStsInplaceModeNotSupportedErr
#undef ippStsInplaceModeNotSupportedErr
#endif
#ifdef ippStsWarpDirectionErr
#undef ippStsWarpDirectionErr
#endif
#ifdef ippStsFilterTypeErr
#undef ippStsFilterTypeErr
#endif
#ifdef ippStsNormErr
#undef ippStsNormErr
#endif
#ifdef ippStsAlgTypeErr
#undef ippStsAlgTypeErr
#endif
#ifdef ippStsMisalignedOffsetErr
#undef ippStsMisalignedOffsetErr
#endif
#ifdef ippStsQuadraticNonResidueErr
#undef ippStsQuadraticNonResidueErr
#endif
#ifdef ippStsBorderErr
#undef ippStsBorderErr
#endif
#ifdef ippStsDitherTypeErr
#undef ippStsDitherTypeErr
#endif
#ifdef ippStsH264BufferFullErr
#undef ippStsH264BufferFullErr
#endif
#ifdef ippStsWrongAffinitySettingErr
#undef ippStsWrongAffinitySettingErr
#endif
#ifdef ippStsLoadDynErr
#undef ippStsLoadDynErr
#endif
#ifdef ippStsPointAtInfinity
#undef ippStsPointAtInfinity
#endif
#ifdef ippStsI18nUnsupportedErr
#undef ippStsI18nUnsupportedErr
#endif
#ifdef ippStsI18nMsgCatalogOpenErr
#undef ippStsI18nMsgCatalogOpenErr
#endif
#ifdef ippStsI18nMsgCatalogCloseErr
#undef ippStsI18nMsgCatalogCloseErr
#endif
#ifdef ippStsUnknownStatusCodeErr
#undef ippStsUnknownStatusCodeErr
#endif
#ifdef ippStsOFBSizeErr
#undef ippStsOFBSizeErr
#endif
#ifdef ippStsLzoBrokenStreamErr
#undef ippStsLzoBrokenStreamErr
#endif
#ifdef ippStsRoundModeNotSupportedErr
#undef ippStsRoundModeNotSupportedErr
#endif
#ifdef ippStsDecimateFractionErr
#undef ippStsDecimateFractionErr
#endif
#ifdef ippStsWeightErr
#undef ippStsWeightErr
#endif
#ifdef ippStsQualityIndexErr
#undef ippStsQualityIndexErr
#endif
#ifdef ippStsIIRPassbandRippleErr
#undef ippStsIIRPassbandRippleErr
#endif
#ifdef ippStsFilterFrequencyErr
#undef ippStsFilterFrequencyErr
#endif
#ifdef ippStsFIRGenOrderErr
#undef ippStsFIRGenOrderErr
#endif
#ifdef ippStsIIRGenOrderErr
#undef ippStsIIRGenOrderErr
#endif
#ifdef ippStsConvergeErr
#undef ippStsConvergeErr
#endif
#ifdef ippStsSizeMatchMatrixErr
#undef ippStsSizeMatchMatrixErr
#endif
#ifdef ippStsCountMatrixErr
#undef ippStsCountMatrixErr
#endif
#ifdef ippStsRoiShiftMatrixErr
#undef ippStsRoiShiftMatrixErr
#endif
#ifdef ippStsResizeNoOperationErr
#undef ippStsResizeNoOperationErr
#endif
#ifdef ippStsSrcDataErr
#undef ippStsSrcDataErr
#endif
#ifdef ippStsMaxLenHuffCodeErr
#undef ippStsMaxLenHuffCodeErr
#endif
#ifdef ippStsCodeLenTableErr
#undef ippStsCodeLenTableErr
#endif
#ifdef ippStsFreqTableErr
#undef ippStsFreqTableErr
#endif
#ifdef ippStsIncompleteContextErr
#undef ippStsIncompleteContextErr
#endif
#ifdef ippStsSingularErr
#undef ippStsSingularErr
#endif
#ifdef ippStsSparseErr
#undef ippStsSparseErr
#endif
#ifdef ippStsBitOffsetErr
#undef ippStsBitOffsetErr
#endif
#ifdef ippStsQPErr
#undef ippStsQPErr
#endif
#ifdef ippStsVLCErr
#undef ippStsVLCErr
#endif
#ifdef ippStsRegExpOptionsErr
#undef ippStsRegExpOptionsErr
#endif
#ifdef ippStsRegExpErr
#undef ippStsRegExpErr
#endif
#ifdef ippStsRegExpMatchLimitErr
#undef ippStsRegExpMatchLimitErr
#endif
#ifdef ippStsRegExpQuantifierErr
#undef ippStsRegExpQuantifierErr
#endif
#ifdef ippStsRegExpGroupingErr
#undef ippStsRegExpGroupingErr
#endif
#ifdef ippStsRegExpBackRefErr
#undef ippStsRegExpBackRefErr
#endif
#ifdef ippStsRegExpChClassErr
#undef ippStsRegExpChClassErr
#endif
#ifdef ippStsRegExpMetaChErr
#undef ippStsRegExpMetaChErr
#endif
#ifdef ippStsStrideMatrixErr
#undef ippStsStrideMatrixErr
#endif
#ifdef ippStsCTRSizeErr
#undef ippStsCTRSizeErr
#endif
#ifdef ippStsJPEG2KCodeBlockIsNotAttached
#undef ippStsJPEG2KCodeBlockIsNotAttached
#endif
#ifdef ippStsNotPosDefErr
#undef ippStsNotPosDefErr
#endif
#ifdef ippStsEphemeralKeyErr
#undef ippStsEphemeralKeyErr
#endif
#ifdef ippStsMessageErr
#undef ippStsMessageErr
#endif
#ifdef ippStsShareKeyErr
#undef ippStsShareKeyErr
#endif
#ifdef ippStsIvalidPublicKey
#undef ippStsIvalidPublicKey
#endif
#ifdef ippStsIvalidPrivateKey
#undef ippStsIvalidPrivateKey
#endif
#ifdef ippStsOutOfECErr
#undef ippStsOutOfECErr
#endif
#ifdef ippStsECCInvalidFlagErr
#undef ippStsECCInvalidFlagErr
#endif
#ifdef ippStsMP3FrameHeaderErr
#undef ippStsMP3FrameHeaderErr
#endif
#ifdef ippStsMP3SideInfoErr
#undef ippStsMP3SideInfoErr
#endif
#ifdef ippStsBlockStepErr
#undef ippStsBlockStepErr
#endif
#ifdef ippStsMBStepErr
#undef ippStsMBStepErr
#endif
#ifdef ippStsAacPrgNumErr
#undef ippStsAacPrgNumErr
#endif
#ifdef ippStsAacSectCbErr
#undef ippStsAacSectCbErr
#endif
#ifdef ippStsAacSfValErr
#undef ippStsAacSfValErr
#endif
#ifdef ippStsAacCoefValErr
#undef ippStsAacCoefValErr
#endif
#ifdef ippStsAacMaxSfbErr
#undef ippStsAacMaxSfbErr
#endif
#ifdef ippStsAacPredSfbErr
#undef ippStsAacPredSfbErr
#endif
#ifdef ippStsAacPlsDataErr
#undef ippStsAacPlsDataErr
#endif
#ifdef ippStsAacGainCtrErr
#undef ippStsAacGainCtrErr
#endif
#ifdef ippStsAacSectErr
#undef ippStsAacSectErr
#endif
#ifdef ippStsAacTnsNumFiltErr
#undef ippStsAacTnsNumFiltErr
#endif
#ifdef ippStsAacTnsLenErr
#undef ippStsAacTnsLenErr
#endif
#ifdef ippStsAacTnsOrderErr
#undef ippStsAacTnsOrderErr
#endif
#ifdef ippStsAacTnsCoefResErr
#undef ippStsAacTnsCoefResErr
#endif
#ifdef ippStsAacTnsCoefErr
#undef ippStsAacTnsCoefErr
#endif
#ifdef ippStsAacTnsDirectErr
#undef ippStsAacTnsDirectErr
#endif
#ifdef ippStsAacTnsProfileErr
#undef ippStsAacTnsProfileErr
#endif
#ifdef ippStsAacErr
#undef ippStsAacErr
#endif
#ifdef ippStsAacBitOffsetErr
#undef ippStsAacBitOffsetErr
#endif
#ifdef ippStsAacAdtsSyncWordErr
#undef ippStsAacAdtsSyncWordErr
#endif
#ifdef ippStsAacSmplRateIdxErr
#undef ippStsAacSmplRateIdxErr
#endif
#ifdef ippStsAacWinLenErr
#undef ippStsAacWinLenErr
#endif
#ifdef ippStsAacWinGrpErr
#undef ippStsAacWinGrpErr
#endif
#ifdef ippStsAacWinSeqErr
#undef ippStsAacWinSeqErr
#endif
#ifdef ippStsAacComWinErr
#undef ippStsAacComWinErr
#endif
#ifdef ippStsAacStereoMaskErr
#undef ippStsAacStereoMaskErr
#endif
#ifdef ippStsAacChanErr
#undef ippStsAacChanErr
#endif
#ifdef ippStsAacMonoStereoErr
#undef ippStsAacMonoStereoErr
#endif
#ifdef ippStsAacStereoLayerErr
#undef ippStsAacStereoLayerErr
#endif
#ifdef ippStsAacMonoLayerErr
#undef ippStsAacMonoLayerErr
#endif
#ifdef ippStsAacScalableErr
#undef ippStsAacScalableErr
#endif
#ifdef ippStsAacObjTypeErr
#undef ippStsAacObjTypeErr
#endif
#ifdef ippStsAacWinShapeErr
#undef ippStsAacWinShapeErr
#endif
#ifdef ippStsAacPcmModeErr
#undef ippStsAacPcmModeErr
#endif
#ifdef ippStsVLCUsrTblHeaderErr
#undef ippStsVLCUsrTblHeaderErr
#endif
#ifdef ippStsVLCUsrTblUnsupportedFmtErr
#undef ippStsVLCUsrTblUnsupportedFmtErr
#endif
#ifdef ippStsVLCUsrTblEscAlgTypeErr
#undef ippStsVLCUsrTblEscAlgTypeErr
#endif
#ifdef ippStsVLCUsrTblEscCodeLengthErr
#undef ippStsVLCUsrTblEscCodeLengthErr
#endif
#ifdef ippStsVLCUsrTblCodeLengthErr
#undef ippStsVLCUsrTblCodeLengthErr
#endif
#ifdef ippStsVLCInternalTblErr
#undef ippStsVLCInternalTblErr
#endif
#ifdef ippStsVLCInputDataErr
#undef ippStsVLCInputDataErr
#endif
#ifdef ippStsVLCAACEscCodeLengthErr
#undef ippStsVLCAACEscCodeLengthErr
#endif
#ifdef ippStsNoiseRangeErr
#undef ippStsNoiseRangeErr
#endif
#ifdef ippStsUnderRunErr
#undef ippStsUnderRunErr
#endif
#ifdef ippStsPaddingErr
#undef ippStsPaddingErr
#endif
#ifdef ippStsCFBSizeErr
#undef ippStsCFBSizeErr
#endif
#ifdef ippStsPaddingSchemeErr
#undef ippStsPaddingSchemeErr
#endif
#ifdef ippStsInvalidCryptoKeyErr
#undef ippStsInvalidCryptoKeyErr
#endif
#ifdef ippStsLengthErr
#undef ippStsLengthErr
#endif
#ifdef ippStsBadModulusErr
#undef ippStsBadModulusErr
#endif
#ifdef ippStsLPCCalcErr
#undef ippStsLPCCalcErr
#endif
#ifdef ippStsRCCalcErr
#undef ippStsRCCalcErr
#endif
#ifdef ippStsIncorrectLSPErr
#undef ippStsIncorrectLSPErr
#endif
#ifdef ippStsNoRootFoundErr
#undef ippStsNoRootFoundErr
#endif
#ifdef ippStsJPEG2KBadPassNumber
#undef ippStsJPEG2KBadPassNumber
#endif
#ifdef ippStsJPEG2KDamagedCodeBlock
#undef ippStsJPEG2KDamagedCodeBlock
#endif
#ifdef ippStsH263CBPYCodeErr
#undef ippStsH263CBPYCodeErr
#endif
#ifdef ippStsH263MCBPCInterCodeErr
#undef ippStsH263MCBPCInterCodeErr
#endif
#ifdef ippStsH263MCBPCIntraCodeErr
#undef ippStsH263MCBPCIntraCodeErr
#endif
#ifdef ippStsNotEvenStepErr
#undef ippStsNotEvenStepErr
#endif
#ifdef ippStsHistoNofLevelsErr
#undef ippStsHistoNofLevelsErr
#endif
#ifdef ippStsLUTNofLevelsErr
#undef ippStsLUTNofLevelsErr
#endif
#ifdef ippStsMP4BitOffsetErr
#undef ippStsMP4BitOffsetErr
#endif
#ifdef ippStsMP4QPErr
#undef ippStsMP4QPErr
#endif
#ifdef ippStsMP4BlockIdxErr
#undef ippStsMP4BlockIdxErr
#endif
#ifdef ippStsMP4BlockTypeErr
#undef ippStsMP4BlockTypeErr
#endif
#ifdef ippStsMP4MVCodeErr
#undef ippStsMP4MVCodeErr
#endif
#ifdef ippStsMP4VLCCodeErr
#undef ippStsMP4VLCCodeErr
#endif
#ifdef ippStsMP4DCCodeErr
#undef ippStsMP4DCCodeErr
#endif
#ifdef ippStsMP4FcodeErr
#undef ippStsMP4FcodeErr
#endif
#ifdef ippStsMP4AlignErr
#undef ippStsMP4AlignErr
#endif
#ifdef ippStsMP4TempDiffErr
#undef ippStsMP4TempDiffErr
#endif
#ifdef ippStsMP4BlockSizeErr
#undef ippStsMP4BlockSizeErr
#endif
#ifdef ippStsMP4ZeroBABErr
#undef ippStsMP4ZeroBABErr
#endif
#ifdef ippStsMP4PredDirErr
#undef ippStsMP4PredDirErr
#endif
#ifdef ippStsMP4BitsPerPixelErr
#undef ippStsMP4BitsPerPixelErr
#endif
#ifdef ippStsMP4VideoCompModeErr
#undef ippStsMP4VideoCompModeErr
#endif
#ifdef ippStsMP4LinearModeErr
#undef ippStsMP4LinearModeErr
#endif
#ifdef ippStsH263PredModeErr
#undef ippStsH263PredModeErr
#endif
#ifdef ippStsH263BlockStepErr
#undef ippStsH263BlockStepErr
#endif
#ifdef ippStsH263MBStepErr
#undef ippStsH263MBStepErr
#endif
#ifdef ippStsH263FrameWidthErr
#undef ippStsH263FrameWidthErr
#endif
#ifdef ippStsH263FrameHeightErr
#undef ippStsH263FrameHeightErr
#endif
#ifdef ippStsH263ExpandPelsErr
#undef ippStsH263ExpandPelsErr
#endif
#ifdef ippStsH263PlaneStepErr
#undef ippStsH263PlaneStepErr
#endif
#ifdef ippStsH263QuantErr
#undef ippStsH263QuantErr
#endif
#ifdef ippStsH263MVCodeErr
#undef ippStsH263MVCodeErr
#endif
#ifdef ippStsH263VLCCodeErr
#undef ippStsH263VLCCodeErr
#endif
#ifdef ippStsH263DCCodeErr
#undef ippStsH263DCCodeErr
#endif
#ifdef ippStsH263ZigzagLenErr
#undef ippStsH263ZigzagLenErr
#endif
#ifdef ippStsFBankFreqErr
#undef ippStsFBankFreqErr
#endif
#ifdef ippStsFBankFlagErr
#undef ippStsFBankFlagErr
#endif
#ifdef ippStsFBankErr
#undef ippStsFBankErr
#endif
#ifdef ippStsNegOccErr
#undef ippStsNegOccErr
#endif
#ifdef ippStsCdbkFlagErr
#undef ippStsCdbkFlagErr
#endif
#ifdef ippStsSVDCnvgErr
#undef ippStsSVDCnvgErr
#endif
#ifdef ippStsJPEGHuffTableErr
#undef ippStsJPEGHuffTableErr
#endif
#ifdef ippStsJPEGDCTRangeErr
#undef ippStsJPEGDCTRangeErr
#endif
#ifdef ippStsJPEGOutOfBufErr
#undef ippStsJPEGOutOfBufErr
#endif
#ifdef ippStsDrawTextErr
#undef ippStsDrawTextErr
#endif
#ifdef ippStsChannelOrderErr
#undef ippStsChannelOrderErr
#endif
#ifdef ippStsZeroMaskValuesErr
#undef ippStsZeroMaskValuesErr
#endif
#ifdef ippStsQuadErr
#undef ippStsQuadErr
#endif
#ifdef ippStsRectErr
#undef ippStsRectErr
#endif
#ifdef ippStsCoeffErr
#undef ippStsCoeffErr
#endif
#ifdef ippStsNoiseValErr
#undef ippStsNoiseValErr
#endif
#ifdef ippStsDitherLevelsErr
#undef ippStsDitherLevelsErr
#endif
#ifdef ippStsNumChannelsErr
#undef ippStsNumChannelsErr
#endif
#ifdef ippStsCOIErr
#undef ippStsCOIErr
#endif
#ifdef ippStsDivisorErr
#undef ippStsDivisorErr
#endif
#ifdef ippStsAlphaTypeErr
#undef ippStsAlphaTypeErr
#endif
#ifdef ippStsGammaRangeErr
#undef ippStsGammaRangeErr
#endif
#ifdef ippStsGrayCoefSumErr
#undef ippStsGrayCoefSumErr
#endif
#ifdef ippStsChannelErr
#undef ippStsChannelErr
#endif
#ifdef ippStsToneMagnErr
#undef ippStsToneMagnErr
#endif
#ifdef ippStsToneFreqErr
#undef ippStsToneFreqErr
#endif
#ifdef ippStsTonePhaseErr
#undef ippStsTonePhaseErr
#endif
#ifdef ippStsTrnglMagnErr
#undef ippStsTrnglMagnErr
#endif
#ifdef ippStsTrnglFreqErr
#undef ippStsTrnglFreqErr
#endif
#ifdef ippStsTrnglPhaseErr
#undef ippStsTrnglPhaseErr
#endif
#ifdef ippStsTrnglAsymErr
#undef ippStsTrnglAsymErr
#endif
#ifdef ippStsHugeWinErr
#undef ippStsHugeWinErr
#endif
#ifdef ippStsJaehneErr
#undef ippStsJaehneErr
#endif
#ifdef ippStsStrideErr
#undef ippStsStrideErr
#endif
#ifdef ippStsEpsValErr
#undef ippStsEpsValErr
#endif
#ifdef ippStsWtOffsetErr
#undef ippStsWtOffsetErr
#endif
#ifdef ippStsAnchorErr
#undef ippStsAnchorErr
#endif
#ifdef ippStsMaskSizeErr
#undef ippStsMaskSizeErr
#endif
#ifdef ippStsShiftErr
#undef ippStsShiftErr
#endif
#ifdef ippStsSampleFactorErr
#undef ippStsSampleFactorErr
#endif
#ifdef ippStsSamplePhaseErr
#undef ippStsSamplePhaseErr
#endif
#ifdef ippStsFIRMRFactorErr
#undef ippStsFIRMRFactorErr
#endif
#ifdef ippStsFIRMRPhaseErr
#undef ippStsFIRMRPhaseErr
#endif
#ifdef ippStsRelFreqErr
#undef ippStsRelFreqErr
#endif
#ifdef ippStsFIRLenErr
#undef ippStsFIRLenErr
#endif
#ifdef ippStsIIROrderErr
#undef ippStsIIROrderErr
#endif
#ifdef ippStsDlyLineIndexErr
#undef ippStsDlyLineIndexErr
#endif
#ifdef ippStsResizeFactorErr
#undef ippStsResizeFactorErr
#endif
#ifdef ippStsInterpolationErr
#undef ippStsInterpolationErr
#endif
#ifdef ippStsMirrorFlipErr
#undef ippStsMirrorFlipErr
#endif
#ifdef ippStsMoment00ZeroErr
#undef ippStsMoment00ZeroErr
#endif
#ifdef ippStsThreshNegLevelErr
#undef ippStsThreshNegLevelErr
#endif
#ifdef ippStsThresholdErr
#undef ippStsThresholdErr
#endif
#ifdef ippStsContextMatchErr
#undef ippStsContextMatchErr
#endif
#ifdef ippStsFftFlagErr
#undef ippStsFftFlagErr
#endif
#ifdef ippStsFftOrderErr
#undef ippStsFftOrderErr
#endif
#ifdef ippStsStepErr
#undef ippStsStepErr
#endif
#ifdef ippStsScaleRangeErr
#undef ippStsScaleRangeErr
#endif
#ifdef ippStsDataTypeErr
#undef ippStsDataTypeErr
#endif
#ifdef ippStsOutOfRangeErr
#undef ippStsOutOfRangeErr
#endif
#ifdef ippStsDivByZeroErr
#undef ippStsDivByZeroErr
#endif
#ifdef ippStsMemAllocErr
#undef ippStsMemAllocErr
#endif
#ifdef ippStsNullPtrErr
#undef ippStsNullPtrErr
#endif
#ifdef ippStsRangeErr
#undef ippStsRangeErr
#endif
#ifdef ippStsSizeErr
#undef ippStsSizeErr
#endif
#ifdef ippStsBadArgErr
#undef ippStsBadArgErr
#endif
#ifdef ippStsNoMemErr
#undef ippStsNoMemErr
#endif
#ifdef ippStsSAReservedErr3
#undef ippStsSAReservedErr3
#endif
#ifdef ippStsErr
#undef ippStsErr
#endif
#ifdef ippStsSAReservedErr1
#undef ippStsSAReservedErr1
#endif
#ifdef ippStsNoErr
#undef ippStsNoErr
#endif
#ifdef ippStsNoOperation
#undef ippStsNoOperation
#endif
#ifdef ippStsMisalignedBuf
#undef ippStsMisalignedBuf
#endif
#ifdef ippStsSqrtNegArg
#undef ippStsSqrtNegArg
#endif
#ifdef ippStsInvZero
#undef ippStsInvZero
#endif
#ifdef ippStsEvenMedianMaskSize
#undef ippStsEvenMedianMaskSize
#endif
#ifdef ippStsDivByZero
#undef ippStsDivByZero
#endif
#ifdef ippStsLnZeroArg
#undef ippStsLnZeroArg
#endif
#ifdef ippStsLnNegArg
#undef ippStsLnNegArg
#endif
#ifdef ippStsNanArg
#undef ippStsNanArg
#endif
#ifdef ippStsJPEGMarker
#undef ippStsJPEGMarker
#endif
#ifdef ippStsResFloor
#undef ippStsResFloor
#endif
#ifdef ippStsOverflow
#undef ippStsOverflow
#endif
#ifdef ippStsLSFLow
#undef ippStsLSFLow
#endif
#ifdef ippStsLSFHigh
#undef ippStsLSFHigh
#endif
#ifdef ippStsLSFLowAndHigh
#undef ippStsLSFLowAndHigh
#endif
#ifdef ippStsZeroOcc
#undef ippStsZeroOcc
#endif
#ifdef ippStsUnderflow
#undef ippStsUnderflow
#endif
#ifdef ippStsSingularity
#undef ippStsSingularity
#endif
#ifdef ippStsDomain
#undef ippStsDomain
#endif
#ifdef ippStsNonIntelCpu
#undef ippStsNonIntelCpu
#endif
#ifdef ippStsCpuMismatch
#undef ippStsCpuMismatch
#endif
#ifdef ippStsNoIppFunctionFound
#undef ippStsNoIppFunctionFound
#endif
#ifdef ippStsDllNotFoundBestUsed
#undef ippStsDllNotFoundBestUsed
#endif
#ifdef ippStsNoOperationInDll
#undef ippStsNoOperationInDll
#endif
#ifdef ippStsInsufficientEntropy
#undef ippStsInsufficientEntropy
#endif
#ifdef ippStsOvermuchStrings
#undef ippStsOvermuchStrings
#endif
#ifdef ippStsOverlongString
#undef ippStsOverlongString
#endif
#ifdef ippStsAffineQuadChanged
#undef ippStsAffineQuadChanged
#endif
#ifdef ippStsWrongIntersectROI
#undef ippStsWrongIntersectROI
#endif
#ifdef ippStsWrongIntersectQuad
#undef ippStsWrongIntersectQuad
#endif
#ifdef ippStsSmallerCodebook
#undef ippStsSmallerCodebook
#endif
#ifdef ippStsSrcSizeLessExpected
#undef ippStsSrcSizeLessExpected
#endif
#ifdef ippStsDstSizeLessExpected
#undef ippStsDstSizeLessExpected
#endif
#ifdef ippStsStreamEnd
#undef ippStsStreamEnd
#endif
#ifdef ippStsDoubleSize
#undef ippStsDoubleSize
#endif
#ifdef ippStsNotSupportedCpu
#undef ippStsNotSupportedCpu
#endif
#ifdef ippStsUnknownCacheSize
#undef ippStsUnknownCacheSize
#endif
#ifdef ippStsSymKernelExpected
#undef ippStsSymKernelExpected
#endif
#ifdef ippStsEvenMedianWeight
#undef ippStsEvenMedianWeight
#endif
#ifdef ippStsWrongIntersectVOI
#undef ippStsWrongIntersectVOI
#endif
#ifdef ippStsI18nMsgCatalogInvalid
#undef ippStsI18nMsgCatalogInvalid
#endif
#ifdef ippStsI18nGetMessageFail
#undef ippStsI18nGetMessageFail
#endif
#ifdef ippStsWaterfall
#undef ippStsWaterfall
#endif
#ifdef ippStsPrevLibraryUsed
#undef ippStsPrevLibraryUsed
#endif
#ifdef ippStsLLADisabled
#undef ippStsLLADisabled
#endif
#ifdef ippStsNoAntialiasing
#undef ippStsNoAntialiasing
#endif
#ifdef ippStsRepetitiveSrcData
#undef ippStsRepetitiveSrcData
#endif
#ifdef ippStsSizeWrn
#undef ippStsSizeWrn
#endif
#ifdef ippStsFeatureNotSupported
#undef ippStsFeatureNotSupported
#endif
#ifdef ippStsUnknownFeature
#undef ippStsUnknownFeature
#endif
#ifdef ippStsFeaturesCombination
#undef ippStsFeaturesCombination
#endif
#endif  // #if AS_UNDEF_VALUES

enum AS_DEFINE_NAME(IPP_STATUS)
{
  AS_DEFINE_NAME(ippStsNotSupportedModeErr) = -9999,
  AS_DEFINE_NAME(ippStsCpuNotSupportedErr) = -9998,
  AS_DEFINE_NAME(ippStsInplaceModeNotSupportedErr) = -9997,
  AS_DEFINE_NAME(ippStsWarpDirectionErr) = -231,
  AS_DEFINE_NAME(ippStsFilterTypeErr) = -230,
  AS_DEFINE_NAME(ippStsNormErr) = -229,
  AS_DEFINE_NAME(ippStsAlgTypeErr) = -228,
  AS_DEFINE_NAME(ippStsMisalignedOffsetErr) = -227,
  AS_DEFINE_NAME(ippStsQuadraticNonResidueErr) = -226,
  AS_DEFINE_NAME(ippStsBorderErr) = -225,
  AS_DEFINE_NAME(ippStsDitherTypeErr) = -224,
  AS_DEFINE_NAME(ippStsH264BufferFullErr) = -223,
  AS_DEFINE_NAME(ippStsWrongAffinitySettingErr) = -222,
  AS_DEFINE_NAME(ippStsLoadDynErr) = -221,
  AS_DEFINE_NAME(ippStsPointAtInfinity) = -220,
  AS_DEFINE_NAME(ippStsI18nUnsupportedErr) = -219,
  AS_DEFINE_NAME(ippStsI18nMsgCatalogOpenErr) = -218,
  AS_DEFINE_NAME(ippStsI18nMsgCatalogCloseErr) = -217,
  AS_DEFINE_NAME(ippStsUnknownStatusCodeErr) = -216,
  AS_DEFINE_NAME(ippStsOFBSizeErr) = -215,
  AS_DEFINE_NAME(ippStsLzoBrokenStreamErr) = -214,
  AS_DEFINE_NAME(ippStsRoundModeNotSupportedErr) = -213,
  AS_DEFINE_NAME(ippStsDecimateFractionErr) = -212,
  AS_DEFINE_NAME(ippStsWeightErr) = -211,
  AS_DEFINE_NAME(ippStsQualityIndexErr) = -210,
  AS_DEFINE_NAME(ippStsIIRPassbandRippleErr) = -209,
  AS_DEFINE_NAME(ippStsFilterFrequencyErr) = -208,
  AS_DEFINE_NAME(ippStsFIRGenOrderErr) = -207,
  AS_DEFINE_NAME(ippStsIIRGenOrderErr) = -206,
  AS_DEFINE_NAME(ippStsConvergeErr) = -205,
  AS_DEFINE_NAME(ippStsSizeMatchMatrixErr) = -204,
  AS_DEFINE_NAME(ippStsCountMatrixErr) = -203,
  AS_DEFINE_NAME(ippStsRoiShiftMatrixErr) = -202,
  AS_DEFINE_NAME(ippStsResizeNoOperationErr) = -201,
  AS_DEFINE_NAME(ippStsSrcDataErr) = -200,
  AS_DEFINE_NAME(ippStsMaxLenHuffCodeErr) = -199,
  AS_DEFINE_NAME(ippStsCodeLenTableErr) = -198,
  AS_DEFINE_NAME(ippStsFreqTableErr) = -197,
  AS_DEFINE_NAME(ippStsIncompleteContextErr) = -196,
  AS_DEFINE_NAME(ippStsSingularErr) = -195,
  AS_DEFINE_NAME(ippStsSparseErr) = -194,
  AS_DEFINE_NAME(ippStsBitOffsetErr) = -193,
  AS_DEFINE_NAME(ippStsQPErr) = -192,
  AS_DEFINE_NAME(ippStsVLCErr) = -191,
  AS_DEFINE_NAME(ippStsRegExpOptionsErr) = -190,
  AS_DEFINE_NAME(ippStsRegExpErr) = -189,
  AS_DEFINE_NAME(ippStsRegExpMatchLimitErr) = -188,
  AS_DEFINE_NAME(ippStsRegExpQuantifierErr) = -187,
  AS_DEFINE_NAME(ippStsRegExpGroupingErr) = -186,
  AS_DEFINE_NAME(ippStsRegExpBackRefErr) = -185,
  AS_DEFINE_NAME(ippStsRegExpChClassErr) = -184,
  AS_DEFINE_NAME(ippStsRegExpMetaChErr) = -183,
  AS_DEFINE_NAME(ippStsStrideMatrixErr) = -182,
  AS_DEFINE_NAME(ippStsCTRSizeErr) = -181,
  AS_DEFINE_NAME(ippStsJPEG2KCodeBlockIsNotAttached) = -180,
  AS_DEFINE_NAME(ippStsNotPosDefErr) = -179,
  AS_DEFINE_NAME(ippStsEphemeralKeyErr) = -178,
  AS_DEFINE_NAME(ippStsMessageErr) = -177,
  AS_DEFINE_NAME(ippStsShareKeyErr) = -176,
  AS_DEFINE_NAME(ippStsIvalidPublicKey) = -175,
  AS_DEFINE_NAME(ippStsIvalidPrivateKey) = -174,
  AS_DEFINE_NAME(ippStsOutOfECErr) = -173,
  AS_DEFINE_NAME(ippStsECCInvalidFlagErr) = -172,
  AS_DEFINE_NAME(ippStsMP3FrameHeaderErr) = -171,
  AS_DEFINE_NAME(ippStsMP3SideInfoErr) = -170,
  AS_DEFINE_NAME(ippStsBlockStepErr) = -169,
  AS_DEFINE_NAME(ippStsMBStepErr) = -168,
  AS_DEFINE_NAME(ippStsAacPrgNumErr) = -167,
  AS_DEFINE_NAME(ippStsAacSectCbErr) = -166,
  AS_DEFINE_NAME(ippStsAacSfValErr) = -164,
  AS_DEFINE_NAME(ippStsAacCoefValErr) = -163,
  AS_DEFINE_NAME(ippStsAacMaxSfbErr) = -162,
  AS_DEFINE_NAME(ippStsAacPredSfbErr) = -161,
  AS_DEFINE_NAME(ippStsAacPlsDataErr) = -160,
  AS_DEFINE_NAME(ippStsAacGainCtrErr) = -159,
  AS_DEFINE_NAME(ippStsAacSectErr) = -158,
  AS_DEFINE_NAME(ippStsAacTnsNumFiltErr) = -157,
  AS_DEFINE_NAME(ippStsAacTnsLenErr) = -156,
  AS_DEFINE_NAME(ippStsAacTnsOrderErr) = -155,
  AS_DEFINE_NAME(ippStsAacTnsCoefResErr) = -154,
  AS_DEFINE_NAME(ippStsAacTnsCoefErr) = -153,
  AS_DEFINE_NAME(ippStsAacTnsDirectErr) = -152,
  AS_DEFINE_NAME(ippStsAacTnsProfileErr) = -151,
  AS_DEFINE_NAME(ippStsAacErr) = -150,
  AS_DEFINE_NAME(ippStsAacBitOffsetErr) = -149,
  AS_DEFINE_NAME(ippStsAacAdtsSyncWordErr) = -148,
  AS_DEFINE_NAME(ippStsAacSmplRateIdxErr) = -147,
  AS_DEFINE_NAME(ippStsAacWinLenErr) = -146,
  AS_DEFINE_NAME(ippStsAacWinGrpErr) = -145,
  AS_DEFINE_NAME(ippStsAacWinSeqErr) = -144,
  AS_DEFINE_NAME(ippStsAacComWinErr) = -143,
  AS_DEFINE_NAME(ippStsAacStereoMaskErr) = -142,
  AS_DEFINE_NAME(ippStsAacChanErr) = -141,
  AS_DEFINE_NAME(ippStsAacMonoStereoErr) = -140,
  AS_DEFINE_NAME(ippStsAacStereoLayerErr) = -139,
  AS_DEFINE_NAME(ippStsAacMonoLayerErr) = -138,
  AS_DEFINE_NAME(ippStsAacScalableErr) = -137,
  AS_DEFINE_NAME(ippStsAacObjTypeErr) = -136,
  AS_DEFINE_NAME(ippStsAacWinShapeErr) = -135,
  AS_DEFINE_NAME(ippStsAacPcmModeErr) = -134,
  AS_DEFINE_NAME(ippStsVLCUsrTblHeaderErr) = -133,
  AS_DEFINE_NAME(ippStsVLCUsrTblUnsupportedFmtErr) = -132,
  AS_DEFINE_NAME(ippStsVLCUsrTblEscAlgTypeErr) = -131,
  AS_DEFINE_NAME(ippStsVLCUsrTblEscCodeLengthErr) = -130,
  AS_DEFINE_NAME(ippStsVLCUsrTblCodeLengthErr) = -129,
  AS_DEFINE_NAME(ippStsVLCInternalTblErr) = -128,
  AS_DEFINE_NAME(ippStsVLCInputDataErr) = -127,
  AS_DEFINE_NAME(ippStsVLCAACEscCodeLengthErr) = -126,
  AS_DEFINE_NAME(ippStsNoiseRangeErr) = -125,
  AS_DEFINE_NAME(ippStsUnderRunErr) = -124,
  AS_DEFINE_NAME(ippStsPaddingErr) = -123,
  AS_DEFINE_NAME(ippStsCFBSizeErr) = -122,
  AS_DEFINE_NAME(ippStsPaddingSchemeErr) = -121,
  AS_DEFINE_NAME(ippStsInvalidCryptoKeyErr) = -120,
  AS_DEFINE_NAME(ippStsLengthErr) = -119,
  AS_DEFINE_NAME(ippStsBadModulusErr) = -118,
  AS_DEFINE_NAME(ippStsLPCCalcErr) = -117,
  AS_DEFINE_NAME(ippStsRCCalcErr) = -116,
  AS_DEFINE_NAME(ippStsIncorrectLSPErr) = -115,
  AS_DEFINE_NAME(ippStsNoRootFoundErr) = -114,
  AS_DEFINE_NAME(ippStsJPEG2KBadPassNumber) = -113,
  AS_DEFINE_NAME(ippStsJPEG2KDamagedCodeBlock) = -112,
  AS_DEFINE_NAME(ippStsH263CBPYCodeErr) = -111,
  AS_DEFINE_NAME(ippStsH263MCBPCInterCodeErr) = -110,
  AS_DEFINE_NAME(ippStsH263MCBPCIntraCodeErr) = -109,
  AS_DEFINE_NAME(ippStsNotEvenStepErr) = -108,
  AS_DEFINE_NAME(ippStsHistoNofLevelsErr) = -107,
  AS_DEFINE_NAME(ippStsLUTNofLevelsErr) = -106,
  AS_DEFINE_NAME(ippStsMP4BitOffsetErr) = -105,
  AS_DEFINE_NAME(ippStsMP4QPErr) = -104,
  AS_DEFINE_NAME(ippStsMP4BlockIdxErr) = -103,
  AS_DEFINE_NAME(ippStsMP4BlockTypeErr) = -102,
  AS_DEFINE_NAME(ippStsMP4MVCodeErr) = -101,
  AS_DEFINE_NAME(ippStsMP4VLCCodeErr) = -100,
  AS_DEFINE_NAME(ippStsMP4DCCodeErr) = -99,
  AS_DEFINE_NAME(ippStsMP4FcodeErr) = -98,
  AS_DEFINE_NAME(ippStsMP4AlignErr) = -97,
  AS_DEFINE_NAME(ippStsMP4TempDiffErr) = -96,
  AS_DEFINE_NAME(ippStsMP4BlockSizeErr) = -95,
  AS_DEFINE_NAME(ippStsMP4ZeroBABErr) = -94,
  AS_DEFINE_NAME(ippStsMP4PredDirErr) = -93,
  AS_DEFINE_NAME(ippStsMP4BitsPerPixelErr) = -92,
  AS_DEFINE_NAME(ippStsMP4VideoCompModeErr) = -91,
  AS_DEFINE_NAME(ippStsMP4LinearModeErr) = -90,
  AS_DEFINE_NAME(ippStsH263PredModeErr) = -83,
  AS_DEFINE_NAME(ippStsH263BlockStepErr) = -82,
  AS_DEFINE_NAME(ippStsH263MBStepErr) = -81,
  AS_DEFINE_NAME(ippStsH263FrameWidthErr) = -80,
  AS_DEFINE_NAME(ippStsH263FrameHeightErr) = -79,
  AS_DEFINE_NAME(ippStsH263ExpandPelsErr) = -78,
  AS_DEFINE_NAME(ippStsH263PlaneStepErr) = -77,
  AS_DEFINE_NAME(ippStsH263QuantErr) = -76,
  AS_DEFINE_NAME(ippStsH263MVCodeErr) = -75,
  AS_DEFINE_NAME(ippStsH263VLCCodeErr) = -74,
  AS_DEFINE_NAME(ippStsH263DCCodeErr) = -73,
  AS_DEFINE_NAME(ippStsH263ZigzagLenErr) = -72,
  AS_DEFINE_NAME(ippStsFBankFreqErr) = -71,
  AS_DEFINE_NAME(ippStsFBankFlagErr) = -70,
  AS_DEFINE_NAME(ippStsFBankErr) = -69,
  AS_DEFINE_NAME(ippStsNegOccErr) = -67,
  AS_DEFINE_NAME(ippStsCdbkFlagErr) = -66,
  AS_DEFINE_NAME(ippStsSVDCnvgErr) = -65,
  AS_DEFINE_NAME(ippStsJPEGHuffTableErr) = -64,
  AS_DEFINE_NAME(ippStsJPEGDCTRangeErr) = -63,
  AS_DEFINE_NAME(ippStsJPEGOutOfBufErr) = -62,
  AS_DEFINE_NAME(ippStsDrawTextErr) = -61,
  AS_DEFINE_NAME(ippStsChannelOrderErr) = -60,
  AS_DEFINE_NAME(ippStsZeroMaskValuesErr) = -59,
  AS_DEFINE_NAME(ippStsQuadErr) = -58,
  AS_DEFINE_NAME(ippStsRectErr) = -57,
  AS_DEFINE_NAME(ippStsCoeffErr) = -56,
  AS_DEFINE_NAME(ippStsNoiseValErr) = -55,
  AS_DEFINE_NAME(ippStsDitherLevelsErr) = -54,
  AS_DEFINE_NAME(ippStsNumChannelsErr) = -53,
  AS_DEFINE_NAME(ippStsCOIErr) = -52,
  AS_DEFINE_NAME(ippStsDivisorErr) = -51,
  AS_DEFINE_NAME(ippStsAlphaTypeErr) = -50,
  AS_DEFINE_NAME(ippStsGammaRangeErr) = -49,
  AS_DEFINE_NAME(ippStsGrayCoefSumErr) = -48,
  AS_DEFINE_NAME(ippStsChannelErr) = -47,
  AS_DEFINE_NAME(ippStsToneMagnErr) = -46,
  AS_DEFINE_NAME(ippStsToneFreqErr) = -45,
  AS_DEFINE_NAME(ippStsTonePhaseErr) = -44,
  AS_DEFINE_NAME(ippStsTrnglMagnErr) = -43,
  AS_DEFINE_NAME(ippStsTrnglFreqErr) = -42,
  AS_DEFINE_NAME(ippStsTrnglPhaseErr) = -41,
  AS_DEFINE_NAME(ippStsTrnglAsymErr) = -40,
  AS_DEFINE_NAME(ippStsHugeWinErr) = -39,
  AS_DEFINE_NAME(ippStsJaehneErr) = -38,
  AS_DEFINE_NAME(ippStsStrideErr) = -37,
  AS_DEFINE_NAME(ippStsEpsValErr) = -36,
  AS_DEFINE_NAME(ippStsWtOffsetErr) = -35,
  AS_DEFINE_NAME(ippStsAnchorErr) = -34,
  AS_DEFINE_NAME(ippStsMaskSizeErr) = -33,
  AS_DEFINE_NAME(ippStsShiftErr) = -32,
  AS_DEFINE_NAME(ippStsSampleFactorErr) = -31,
  AS_DEFINE_NAME(ippStsSamplePhaseErr) = -30,
  AS_DEFINE_NAME(ippStsFIRMRFactorErr) = -29,
  AS_DEFINE_NAME(ippStsFIRMRPhaseErr) = -28,
  AS_DEFINE_NAME(ippStsRelFreqErr) = -27,
  AS_DEFINE_NAME(ippStsFIRLenErr) = -26,
  AS_DEFINE_NAME(ippStsIIROrderErr) = -25,
  AS_DEFINE_NAME(ippStsDlyLineIndexErr) = -24,
  AS_DEFINE_NAME(ippStsResizeFactorErr) = -23,
  AS_DEFINE_NAME(ippStsInterpolationErr) = -22,
  AS_DEFINE_NAME(ippStsMirrorFlipErr) = -21,
  AS_DEFINE_NAME(ippStsMoment00ZeroErr) = -20,
  AS_DEFINE_NAME(ippStsThreshNegLevelErr) = -19,
  AS_DEFINE_NAME(ippStsThresholdErr) = -18,
  AS_DEFINE_NAME(ippStsContextMatchErr) = -17,
  AS_DEFINE_NAME(ippStsFftFlagErr) = -16,
  AS_DEFINE_NAME(ippStsFftOrderErr) = -15,
  AS_DEFINE_NAME(ippStsStepErr) = -14,
  AS_DEFINE_NAME(ippStsScaleRangeErr) = -13,
  AS_DEFINE_NAME(ippStsDataTypeErr) = -12,
  AS_DEFINE_NAME(ippStsOutOfRangeErr) = -11,
  AS_DEFINE_NAME(ippStsDivByZeroErr) = -10,
  AS_DEFINE_NAME(ippStsMemAllocErr) = -9,
  AS_DEFINE_NAME(ippStsNullPtrErr) = -8,
  AS_DEFINE_NAME(ippStsRangeErr) = -7,
  AS_DEFINE_NAME(ippStsSizeErr) = -6,
  AS_DEFINE_NAME(ippStsBadArgErr) = -5,
  AS_DEFINE_NAME(ippStsNoMemErr) = -4,
  AS_DEFINE_NAME(ippStsSAReservedErr3) = -3,
  AS_DEFINE_NAME(ippStsErr) = -2,
  AS_DEFINE_NAME(ippStsSAReservedErr1) = -1,
  AS_DEFINE_NAME(ippStsNoErr) = 0,
  AS_DEFINE_NAME(ippStsNoOperation) = 1,
  AS_DEFINE_NAME(ippStsMisalignedBuf) = 2,
  AS_DEFINE_NAME(ippStsSqrtNegArg) = 3,
  AS_DEFINE_NAME(ippStsInvZero) = 4,
  AS_DEFINE_NAME(ippStsEvenMedianMaskSize) = 5,
  AS_DEFINE_NAME(ippStsDivByZero) = 6,
  AS_DEFINE_NAME(ippStsLnZeroArg) = 7,
  AS_DEFINE_NAME(ippStsLnNegArg) = 8,
  AS_DEFINE_NAME(ippStsNanArg) = 9,
  AS_DEFINE_NAME(ippStsJPEGMarker) = 10,
  AS_DEFINE_NAME(ippStsResFloor) = 11,
  AS_DEFINE_NAME(ippStsOverflow) = 12,
  AS_DEFINE_NAME(ippStsLSFLow) = 13,
  AS_DEFINE_NAME(ippStsLSFHigh) = 14,
  AS_DEFINE_NAME(ippStsLSFLowAndHigh) = 15,
  AS_DEFINE_NAME(ippStsZeroOcc) = 16,
  AS_DEFINE_NAME(ippStsUnderflow) = 17,
  AS_DEFINE_NAME(ippStsSingularity) = 18,
  AS_DEFINE_NAME(ippStsDomain) = 19,
  AS_DEFINE_NAME(ippStsNonIntelCpu) = 20,
  AS_DEFINE_NAME(ippStsCpuMismatch) = 21,
  AS_DEFINE_NAME(ippStsNoIppFunctionFound) = 22,
  AS_DEFINE_NAME(ippStsDllNotFoundBestUsed) = 23,
  AS_DEFINE_NAME(ippStsNoOperationInDll) = 24,
  AS_DEFINE_NAME(ippStsInsufficientEntropy) = 25,
  AS_DEFINE_NAME(ippStsOvermuchStrings) = 26,
  AS_DEFINE_NAME(ippStsOverlongString) = 27,
  AS_DEFINE_NAME(ippStsAffineQuadChanged) = 28,
  AS_DEFINE_NAME(ippStsWrongIntersectROI) = 29,
  AS_DEFINE_NAME(ippStsWrongIntersectQuad) = 30,
  AS_DEFINE_NAME(ippStsSmallerCodebook) = 31,
  AS_DEFINE_NAME(ippStsSrcSizeLessExpected) = 32,
  AS_DEFINE_NAME(ippStsDstSizeLessExpected) = 33,
  AS_DEFINE_NAME(ippStsStreamEnd) = 34,
  AS_DEFINE_NAME(ippStsDoubleSize) = 35,
  AS_DEFINE_NAME(ippStsNotSupportedCpu) = 36,
  AS_DEFINE_NAME(ippStsUnknownCacheSize) = 37,
  AS_DEFINE_NAME(ippStsSymKernelExpected) = 38,
  AS_DEFINE_NAME(ippStsEvenMedianWeight) = 39,
  AS_DEFINE_NAME(ippStsWrongIntersectVOI) = 40,
  AS_DEFINE_NAME(ippStsI18nMsgCatalogInvalid) = 41,
  AS_DEFINE_NAME(ippStsI18nGetMessageFail) = 42,
  AS_DEFINE_NAME(ippStsWaterfall) = 43,
  AS_DEFINE_NAME(ippStsPrevLibraryUsed) = 44,
  AS_DEFINE_NAME(ippStsLLADisabled) = 45,
  AS_DEFINE_NAME(ippStsNoAntialiasing) = 46,
  AS_DEFINE_NAME(ippStsRepetitiveSrcData) = 47,
  AS_DEFINE_NAME(ippStsSizeWrn) = 48,
  AS_DEFINE_NAME(ippStsFeatureNotSupported) = 49,
  AS_DEFINE_NAME(ippStsUnknownFeature) = 50,
  AS_DEFINE_NAME(ippStsFeaturesCombination) = 51,
};


AS_NAMESPACE_END()

#endif  // #ifndef __AS_IPP_STATUS__
