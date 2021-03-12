#ifndef __AS_KERN_RETURN__
#define __AS_KERN_RETURN__

#include "AllStat.h"

AS_NAMESPACE_BEGIN()

#if AS_UNDEF_VALUES
#ifdef kOSReturnSuccess
#undef kOSReturnSuccess
#endif
#ifdef KERN_SUCCESS
#undef KERN_SUCCESS
#endif
#ifdef MACH_MSG_SUCCESS
#undef MACH_MSG_SUCCESS
#endif
#ifdef kOSReturnError
#undef kOSReturnError
#endif
#ifdef KERN_INVALID_ADDRESS
#undef KERN_INVALID_ADDRESS
#endif
#ifdef KERN_PROTECTION_FAILURE
#undef KERN_PROTECTION_FAILURE
#endif
#ifdef KERN_NO_SPACE
#undef KERN_NO_SPACE
#endif
#ifdef KERN_INVALID_ARGUMENT
#undef KERN_INVALID_ARGUMENT
#endif
#ifdef KERN_FAILURE
#undef KERN_FAILURE
#endif
#ifdef KERN_RESOURCE_SHORTAGE
#undef KERN_RESOURCE_SHORTAGE
#endif
#ifdef KERN_NOT_RECEIVER
#undef KERN_NOT_RECEIVER
#endif
#ifdef KERN_NO_ACCESS
#undef KERN_NO_ACCESS
#endif
#ifdef KERN_MEMORY_FAILURE
#undef KERN_MEMORY_FAILURE
#endif
#ifdef KERN_MEMORY_ERROR
#undef KERN_MEMORY_ERROR
#endif
#ifdef KERN_ALREADY_IN_SET
#undef KERN_ALREADY_IN_SET
#endif
#ifdef KERN_NOT_IN_SET
#undef KERN_NOT_IN_SET
#endif
#ifdef KERN_NAME_EXISTS
#undef KERN_NAME_EXISTS
#endif
#ifdef KERN_ABORTED
#undef KERN_ABORTED
#endif
#ifdef KERN_INVALID_NAME
#undef KERN_INVALID_NAME
#endif
#ifdef KERN_INVALID_TASK
#undef KERN_INVALID_TASK
#endif
#ifdef KERN_INVALID_RIGHT
#undef KERN_INVALID_RIGHT
#endif
#ifdef KERN_INVALID_VALUE
#undef KERN_INVALID_VALUE
#endif
#ifdef KERN_UREFS_OVERFLOW
#undef KERN_UREFS_OVERFLOW
#endif
#ifdef KERN_INVALID_CAPABILITY
#undef KERN_INVALID_CAPABILITY
#endif
#ifdef KERN_RIGHT_EXISTS
#undef KERN_RIGHT_EXISTS
#endif
#ifdef KERN_INVALID_HOST
#undef KERN_INVALID_HOST
#endif
#ifdef KERN_MEMORY_PRESENT
#undef KERN_MEMORY_PRESENT
#endif
#ifdef KERN_MEMORY_DATA_MOVED
#undef KERN_MEMORY_DATA_MOVED
#endif
#ifdef KERN_MEMORY_RESTART_COPY
#undef KERN_MEMORY_RESTART_COPY
#endif
#ifdef KERN_INVALID_PROCESSOR_SET
#undef KERN_INVALID_PROCESSOR_SET
#endif
#ifdef KERN_POLICY_LIMIT
#undef KERN_POLICY_LIMIT
#endif
#ifdef KERN_INVALID_POLICY
#undef KERN_INVALID_POLICY
#endif
#ifdef KERN_INVALID_OBJECT
#undef KERN_INVALID_OBJECT
#endif
#ifdef KERN_ALREADY_WAITING
#undef KERN_ALREADY_WAITING
#endif
#ifdef KERN_DEFAULT_SET
#undef KERN_DEFAULT_SET
#endif
#ifdef KERN_EXCEPTION_PROTECTED
#undef KERN_EXCEPTION_PROTECTED
#endif
#ifdef KERN_INVALID_LEDGER
#undef KERN_INVALID_LEDGER
#endif
#ifdef KERN_INVALID_MEMORY_CONTROL
#undef KERN_INVALID_MEMORY_CONTROL
#endif
#ifdef KERN_INVALID_SECURITY
#undef KERN_INVALID_SECURITY
#endif
#ifdef KERN_NOT_DEPRESSED
#undef KERN_NOT_DEPRESSED
#endif
#ifdef KERN_TERMINATED
#undef KERN_TERMINATED
#endif
#ifdef KERN_LOCK_SET_DESTROYED
#undef KERN_LOCK_SET_DESTROYED
#endif
#ifdef KERN_LOCK_UNSTABLE
#undef KERN_LOCK_UNSTABLE
#endif
#ifdef KERN_LOCK_OWNED
#undef KERN_LOCK_OWNED
#endif
#ifdef KERN_LOCK_OWNED_SELF
#undef KERN_LOCK_OWNED_SELF
#endif
#ifdef KERN_SEMAPHORE_DESTROYED
#undef KERN_SEMAPHORE_DESTROYED
#endif
#ifdef KERN_RPC_SERVER_TERMINATED
#undef KERN_RPC_SERVER_TERMINATED
#endif
#ifdef KERN_RPC_TERMINATE_ORPHAN
#undef KERN_RPC_TERMINATE_ORPHAN
#endif
#ifdef KERN_RPC_CONTINUE_ORPHAN
#undef KERN_RPC_CONTINUE_ORPHAN
#endif
#ifdef KERN_NOT_SUPPORTED
#undef KERN_NOT_SUPPORTED
#endif
#ifdef KERN_NODE_DOWN
#undef KERN_NODE_DOWN
#endif
#ifdef KERN_NOT_WAITING
#undef KERN_NOT_WAITING
#endif
#ifdef KERN_OPERATION_TIMED_OUT
#undef KERN_OPERATION_TIMED_OUT
#endif
#ifdef KERN_CODESIGN_ERROR
#undef KERN_CODESIGN_ERROR
#endif
#ifdef KERN_POLICY_STATIC
#undef KERN_POLICY_STATIC
#endif
#ifdef KERN_INSUFFICIENT_BUFFER_SIZE
#undef KERN_INSUFFICIENT_BUFFER_SIZE
#endif
#ifdef KERN_DENIED
#undef KERN_DENIED
#endif
#ifdef MACH_MSG_VM_KERNEL
#undef MACH_MSG_VM_KERNEL
#endif
#ifdef MACH_MSG_IPC_KERNEL
#undef MACH_MSG_IPC_KERNEL
#endif
#ifdef MACH_MSG_VM_SPACE
#undef MACH_MSG_VM_SPACE
#endif
#ifdef MACH_MSG_IPC_SPACE
#undef MACH_MSG_IPC_SPACE
#endif
#ifdef MACH_MSG_MASK
#undef MACH_MSG_MASK
#endif
#ifdef MACH_SEND_IN_PROGRESS
#undef MACH_SEND_IN_PROGRESS
#endif
#ifdef MACH_SEND_INVALID_DATA
#undef MACH_SEND_INVALID_DATA
#endif
#ifdef MACH_SEND_INVALID_DEST
#undef MACH_SEND_INVALID_DEST
#endif
#ifdef MACH_SEND_TIMED_OUT
#undef MACH_SEND_TIMED_OUT
#endif
#ifdef MACH_SEND_INVALID_VOUCHER
#undef MACH_SEND_INVALID_VOUCHER
#endif
#ifdef MACH_SEND_INTERRUPTED
#undef MACH_SEND_INTERRUPTED
#endif
#ifdef MACH_SEND_MSG_TOO_SMALL
#undef MACH_SEND_MSG_TOO_SMALL
#endif
#ifdef MACH_SEND_INVALID_REPLY
#undef MACH_SEND_INVALID_REPLY
#endif
#ifdef MACH_SEND_INVALID_RIGHT
#undef MACH_SEND_INVALID_RIGHT
#endif
#ifdef MACH_SEND_INVALID_NOTIFY
#undef MACH_SEND_INVALID_NOTIFY
#endif
#ifdef MACH_SEND_INVALID_MEMORY
#undef MACH_SEND_INVALID_MEMORY
#endif
#ifdef MACH_SEND_NO_BUFFER
#undef MACH_SEND_NO_BUFFER
#endif
#ifdef MACH_SEND_TOO_LARGE
#undef MACH_SEND_TOO_LARGE
#endif
#ifdef MACH_SEND_INVALID_TYPE
#undef MACH_SEND_INVALID_TYPE
#endif
#ifdef MACH_SEND_INVALID_HEADER
#undef MACH_SEND_INVALID_HEADER
#endif
#ifdef MACH_SEND_INVALID_TRAILER
#undef MACH_SEND_INVALID_TRAILER
#endif
#ifdef MACH_SEND_INVALID_CONTEXT
#undef MACH_SEND_INVALID_CONTEXT
#endif
#ifdef MACH_SEND_INVALID_RT_OOL_SIZE
#undef MACH_SEND_INVALID_RT_OOL_SIZE
#endif
#ifdef MACH_SEND_NO_GRANT_DEST
#undef MACH_SEND_NO_GRANT_DEST
#endif
#ifdef MACH_SEND_MSG_FILTERED
#undef MACH_SEND_MSG_FILTERED
#endif
#ifdef MACH_RCV_IN_PROGRESS
#undef MACH_RCV_IN_PROGRESS
#endif
#ifdef MACH_RCV_INVALID_NAME
#undef MACH_RCV_INVALID_NAME
#endif
#ifdef MACH_RCV_TIMED_OUT
#undef MACH_RCV_TIMED_OUT
#endif
#ifdef MACH_RCV_TOO_LARGE
#undef MACH_RCV_TOO_LARGE
#endif
#ifdef MACH_RCV_INTERRUPTED
#undef MACH_RCV_INTERRUPTED
#endif
#ifdef MACH_RCV_PORT_CHANGED
#undef MACH_RCV_PORT_CHANGED
#endif
#ifdef MACH_RCV_INVALID_NOTIFY
#undef MACH_RCV_INVALID_NOTIFY
#endif
#ifdef MACH_RCV_INVALID_DATA
#undef MACH_RCV_INVALID_DATA
#endif
#ifdef MACH_RCV_PORT_DIED
#undef MACH_RCV_PORT_DIED
#endif
#ifdef MACH_RCV_IN_SET
#undef MACH_RCV_IN_SET
#endif
#ifdef MACH_RCV_HEADER_ERROR
#undef MACH_RCV_HEADER_ERROR
#endif
#ifdef MACH_RCV_BODY_ERROR
#undef MACH_RCV_BODY_ERROR
#endif
#ifdef MACH_RCV_INVALID_TYPE
#undef MACH_RCV_INVALID_TYPE
#endif
#ifdef MACH_RCV_SCATTER_SMALL
#undef MACH_RCV_SCATTER_SMALL
#endif
#ifdef MACH_RCV_INVALID_TRAILER
#undef MACH_RCV_INVALID_TRAILER
#endif
#ifdef MACH_RCV_IN_PROGRESS_TIMED
#undef MACH_RCV_IN_PROGRESS_TIMED
#endif
#ifdef MACH_RCV_INVALID_REPLY
#undef MACH_RCV_INVALID_REPLY
#endif
#ifdef kOSMetaClassInternal
#undef kOSMetaClassInternal
#endif
#ifdef kOSMetaClassHasInstances
#undef kOSMetaClassHasInstances
#endif
#ifdef kOSMetaClassNoInit
#undef kOSMetaClassNoInit
#endif
#ifdef kOSMetaClassNoTempData
#undef kOSMetaClassNoTempData
#endif
#ifdef kOSMetaClassNoDicts
#undef kOSMetaClassNoDicts
#endif
#ifdef kOSMetaClassNoKModSet
#undef kOSMetaClassNoKModSet
#endif
#ifdef kOSMetaClassNoInsKModSet
#undef kOSMetaClassNoInsKModSet
#endif
#ifdef kOSMetaClassNoSuper
#undef kOSMetaClassNoSuper
#endif
#ifdef kOSMetaClassInstNoSuper
#undef kOSMetaClassInstNoSuper
#endif
#ifdef kOSMetaClassDuplicateClass
#undef kOSMetaClassDuplicateClass
#endif
#ifdef kOSMetaClassNoKext
#undef kOSMetaClassNoKext
#endif
#ifdef kOSKextReturnInternalError
#undef kOSKextReturnInternalError
#endif
#ifdef kOSKextReturnNoMemory
#undef kOSKextReturnNoMemory
#endif
#ifdef kOSKextReturnNoResources
#undef kOSKextReturnNoResources
#endif
#ifdef kOSKextReturnNotPrivileged
#undef kOSKextReturnNotPrivileged
#endif
#ifdef kOSKextReturnInvalidArgument
#undef kOSKextReturnInvalidArgument
#endif
#ifdef kOSKextReturnNotFound
#undef kOSKextReturnNotFound
#endif
#ifdef kOSKextReturnBadData
#undef kOSKextReturnBadData
#endif
#ifdef kOSKextReturnSerialization
#undef kOSKextReturnSerialization
#endif
#ifdef kOSKextReturnUnsupported
#undef kOSKextReturnUnsupported
#endif
#ifdef kOSKextReturnDisabled
#undef kOSKextReturnDisabled
#endif
#ifdef kOSKextReturnNotAKext
#undef kOSKextReturnNotAKext
#endif
#ifdef kOSKextReturnValidation
#undef kOSKextReturnValidation
#endif
#ifdef kOSKextReturnAuthentication
#undef kOSKextReturnAuthentication
#endif
#ifdef kOSKextReturnDependencies
#undef kOSKextReturnDependencies
#endif
#ifdef kOSKextReturnArchNotFound
#undef kOSKextReturnArchNotFound
#endif
#ifdef kOSKextReturnCache
#undef kOSKextReturnCache
#endif
#ifdef kOSKextReturnDeferred
#undef kOSKextReturnDeferred
#endif
#ifdef kOSKextReturnBootLevel
#undef kOSKextReturnBootLevel
#endif
#ifdef kOSKextReturnNotLoadable
#undef kOSKextReturnNotLoadable
#endif
#ifdef kOSKextReturnLoadedVersionDiffers
#undef kOSKextReturnLoadedVersionDiffers
#endif
#ifdef kOSKextReturnDependencyLoadError
#undef kOSKextReturnDependencyLoadError
#endif
#ifdef kOSKextReturnLinkError
#undef kOSKextReturnLinkError
#endif
#ifdef kOSKextReturnStartStopError
#undef kOSKextReturnStartStopError
#endif
#ifdef kOSKextReturnInUse
#undef kOSKextReturnInUse
#endif
#ifdef kOSKextReturnTimeout
#undef kOSKextReturnTimeout
#endif
#ifdef kOSKextReturnStopping
#undef kOSKextReturnStopping
#endif
#ifdef kOSKextReturnSystemPolicy
#undef kOSKextReturnSystemPolicy
#endif
#ifdef kOSKextReturnKCLoadFailure
#undef kOSKextReturnKCLoadFailure
#endif
#ifdef kOSKextReturnKCLoadFailureSystemKC
#undef kOSKextReturnKCLoadFailureSystemKC
#endif
#ifdef kOSKextReturnKCLoadFailureAuxKC
#undef kOSKextReturnKCLoadFailureAuxKC
#endif
#ifdef kIOReturnInvalid
#undef kIOReturnInvalid
#endif
#ifdef kIOReturnError
#undef kIOReturnError
#endif
#ifdef kIOReturnNoMemory
#undef kIOReturnNoMemory
#endif
#ifdef kIOReturnNoResources
#undef kIOReturnNoResources
#endif
#ifdef kIOReturnIPCError
#undef kIOReturnIPCError
#endif
#ifdef kIOReturnNoDevice
#undef kIOReturnNoDevice
#endif
#ifdef kIOReturnNotPrivileged
#undef kIOReturnNotPrivileged
#endif
#ifdef kIOReturnBadArgument
#undef kIOReturnBadArgument
#endif
#ifdef kIOReturnLockedRead
#undef kIOReturnLockedRead
#endif
#ifdef kIOReturnLockedWrite
#undef kIOReturnLockedWrite
#endif
#ifdef kIOReturnExclusiveAccess
#undef kIOReturnExclusiveAccess
#endif
#ifdef kIOReturnBadMessageID
#undef kIOReturnBadMessageID
#endif
#ifdef kIOReturnUnsupported
#undef kIOReturnUnsupported
#endif
#ifdef kIOReturnVMError
#undef kIOReturnVMError
#endif
#ifdef kIOReturnInternalError
#undef kIOReturnInternalError
#endif
#ifdef kIOReturnIOError
#undef kIOReturnIOError
#endif
#ifdef kIOReturn???Error
#undef kIOReturn???Error
#endif
#ifdef kIOReturnCannotLock
#undef kIOReturnCannotLock
#endif
#ifdef kIOReturnNotOpen
#undef kIOReturnNotOpen
#endif
#ifdef kIOReturnNotReadable
#undef kIOReturnNotReadable
#endif
#ifdef kIOReturnNotWritable
#undef kIOReturnNotWritable
#endif
#ifdef kIOReturnNotAligned
#undef kIOReturnNotAligned
#endif
#ifdef kIOReturnBadMedia
#undef kIOReturnBadMedia
#endif
#ifdef kIOReturnStillOpen
#undef kIOReturnStillOpen
#endif
#ifdef kIOReturnRLDError
#undef kIOReturnRLDError
#endif
#ifdef kIOReturnDMAError
#undef kIOReturnDMAError
#endif
#ifdef kIOReturnBusy
#undef kIOReturnBusy
#endif
#ifdef kIOReturnTimeout
#undef kIOReturnTimeout
#endif
#ifdef kIOReturnOffline
#undef kIOReturnOffline
#endif
#ifdef kIOReturnNotReady
#undef kIOReturnNotReady
#endif
#ifdef kIOReturnNotAttached
#undef kIOReturnNotAttached
#endif
#ifdef kIOReturnNoChannels
#undef kIOReturnNoChannels
#endif
#ifdef kIOReturnNoSpace
#undef kIOReturnNoSpace
#endif
#ifdef kIOReturnPortExists
#undef kIOReturnPortExists
#endif
#ifdef kIOReturnCannotWire
#undef kIOReturnCannotWire
#endif
#ifdef kIOReturnNoInterrupt
#undef kIOReturnNoInterrupt
#endif
#ifdef kIOReturnNoFrames
#undef kIOReturnNoFrames
#endif
#ifdef kIOReturnMessageTooLarge
#undef kIOReturnMessageTooLarge
#endif
#ifdef kIOReturnNotPermitted
#undef kIOReturnNotPermitted
#endif
#ifdef kIOReturnNoPower
#undef kIOReturnNoPower
#endif
#ifdef kIOReturnNoMedia
#undef kIOReturnNoMedia
#endif
#ifdef kIOReturnUnformattedMedia
#undef kIOReturnUnformattedMedia
#endif
#ifdef kIOReturnUnsupportedMode
#undef kIOReturnUnsupportedMode
#endif
#ifdef kIOReturnUnderrun
#undef kIOReturnUnderrun
#endif
#ifdef kIOReturnOverrun
#undef kIOReturnOverrun
#endif
#ifdef kIOReturnDeviceError
#undef kIOReturnDeviceError
#endif
#ifdef kIOReturnNoCompletion
#undef kIOReturnNoCompletion
#endif
#ifdef kIOReturnAborted
#undef kIOReturnAborted
#endif
#ifdef kIOReturnNoBandwidth
#undef kIOReturnNoBandwidth
#endif
#ifdef kIOReturnNotResponding
#undef kIOReturnNotResponding
#endif
#ifdef kIOReturnIsoTooOld
#undef kIOReturnIsoTooOld
#endif
#ifdef kIOReturnIsoTooNew
#undef kIOReturnIsoTooNew
#endif
#ifdef kIOReturnNotFound
#undef kIOReturnNotFound
#endif
#ifdef kIOUSBCRCErr
#undef kIOUSBCRCErr
#endif
#ifdef kIOUSBBitstufErr
#undef kIOUSBBitstufErr
#endif
#ifdef kIOUSBDataToggleErr
#undef kIOUSBDataToggleErr
#endif
#ifdef kIOUSBPIDCheckErr
#undef kIOUSBPIDCheckErr
#endif
#ifdef kIOUSBWrongPIDErr
#undef kIOUSBWrongPIDErr
#endif
#ifdef kIOUSBReserved1Err
#undef kIOUSBReserved1Err
#endif
#ifdef kIOUSBReserved2Err
#undef kIOUSBReserved2Err
#endif
#ifdef kIOUSBBufferOverrunErr
#undef kIOUSBBufferOverrunErr
#endif
#ifdef kIOUSBBufferUnderrunErr
#undef kIOUSBBufferUnderrunErr
#endif
#ifdef kIOUSBNotSent1Err
#undef kIOUSBNotSent1Err
#endif
#ifdef kIOUSBNotSent2Err
#undef kIOUSBNotSent2Err
#endif
#ifdef kIOUSBLinkErr
#undef kIOUSBLinkErr
#endif
#ifdef kIOUSBTooManyTransactionsPending
#undef kIOUSBTooManyTransactionsPending
#endif
#ifdef kIOUSBInvalidSSEndpoint
#undef kIOUSBInvalidSSEndpoint
#endif
#ifdef kIOUSBStreamsNotSupported
#undef kIOUSBStreamsNotSupported
#endif
#ifdef kIOUSBDeviceCountExceeded
#undef kIOUSBDeviceCountExceeded
#endif
#ifdef kIOUSBEndpointCountExceeded
#undef kIOUSBEndpointCountExceeded
#endif
#ifdef kIOUSBDevicePortWasNotSuspended
#undef kIOUSBDevicePortWasNotSuspended
#endif
#ifdef kIOUSBClearPipeStallNotRecursive
#undef kIOUSBClearPipeStallNotRecursive
#endif
#ifdef kIOUSBDeviceNotHighSpeed
#undef kIOUSBDeviceNotHighSpeed
#endif
#ifdef kIOUSBDeviceTransferredToCompanion
#undef kIOUSBDeviceTransferredToCompanion
#endif
#ifdef kIOUSBSyncRequestOnWLThread
#undef kIOUSBSyncRequestOnWLThread
#endif
#ifdef kIOUSBHighSpeedSplitError
#undef kIOUSBHighSpeedSplitError
#endif
#ifdef kIOUSBLowLatencyFrameListNotPreviouslyAllocated
#undef kIOUSBLowLatencyFrameListNotPreviouslyAllocated
#endif
#ifdef kIOUSBLowLatencyBufferNotPreviouslyAllocated
#undef kIOUSBLowLatencyBufferNotPreviouslyAllocated
#endif
#ifdef kIOUSBInterfaceNotFound
#undef kIOUSBInterfaceNotFound
#endif
#ifdef kIOUSBPipeStalled
#undef kIOUSBPipeStalled
#endif
#ifdef kIOUSBTransactionReturned
#undef kIOUSBTransactionReturned
#endif
#ifdef kIOUSBTransactionTimeout
#undef kIOUSBTransactionTimeout
#endif
#ifdef kIOUSBPortWasSuspended
#undef kIOUSBPortWasSuspended
#endif
#ifdef kIOUSBConfigNotFound
#undef kIOUSBConfigNotFound
#endif
#ifdef kIOUSBEndpointNotFound
#undef kIOUSBEndpointNotFound
#endif
#ifdef kIOUSBNotEnoughPowerErr
#undef kIOUSBNotEnoughPowerErr
#endif
#ifdef kIOUSBNotEnoughPipesErr
#undef kIOUSBNotEnoughPipesErr
#endif
#ifdef kIOUSBNoAsyncPortErr
#undef kIOUSBNoAsyncPortErr
#endif
#ifdef kIOUSBTooManyPipesErr
#undef kIOUSBTooManyPipesErr
#endif
#ifdef kIOUSBUnknownPipeErr
#undef kIOUSBUnknownPipeErr
#endif
#ifdef kIOConfigNoEntry
#undef kIOConfigNoEntry
#endif
#ifdef kIOFireWirePending
#undef kIOFireWirePending
#endif
#ifdef kIOFireWireLastDCLToken
#undef kIOFireWireLastDCLToken
#endif
#ifdef kIOFireWireConfigROMInvalid
#undef kIOFireWireConfigROMInvalid
#endif
#ifdef kIOFireWireAlreadyRegistered
#undef kIOFireWireAlreadyRegistered
#endif
#ifdef kIOFireWireMultipleTalkers
#undef kIOFireWireMultipleTalkers
#endif
#ifdef kIOFireWireChannelActive
#undef kIOFireWireChannelActive
#endif
#ifdef kIOFireWireNoListenerOrTalker
#undef kIOFireWireNoListenerOrTalker
#endif
#ifdef kIOFireWireNoChannels
#undef kIOFireWireNoChannels
#endif
#ifdef kIOFireWireChannelNotAvailable
#undef kIOFireWireChannelNotAvailable
#endif
#ifdef kIOFireWireSeparateBus
#undef kIOFireWireSeparateBus
#endif
#ifdef kIOFireWireBadSelfIDs
#undef kIOFireWireBadSelfIDs
#endif
#ifdef kIOFireWireLowCableVoltage
#undef kIOFireWireLowCableVoltage
#endif
#ifdef kIOFireWireInsufficientPower
#undef kIOFireWireInsufficientPower
#endif
#ifdef kIOFireWireOutOfTLabels
#undef kIOFireWireOutOfTLabels
#endif
#ifdef kIOFireWireBusReset
#undef kIOFireWireBusReset
#endif
#ifdef kIOFireWireBogusDCLProgram
#undef kIOFireWireBogusDCLProgram
#endif
#ifdef kIOFireWireTalkingAndListening
#undef kIOFireWireTalkingAndListening
#endif
#ifdef kIOFireWireHardwareSlept
#undef kIOFireWireHardwareSlept
#endif
#ifdef kIOFireWireCompleting
#undef kIOFireWireCompleting
#endif
#ifdef kIOFireWireInvalidResponseLength
#undef kIOFireWireInvalidResponseLength
#endif
#ifdef kIOFireWireIsochBandwidthNotAvailable
#undef kIOFireWireIsochBandwidthNotAvailable
#endif
#ifdef kIOFWMessageServiceIsRequestingClose
#undef kIOFWMessageServiceIsRequestingClose
#endif
#ifdef kIOFWMessagePowerStateChanged
#undef kIOFWMessagePowerStateChanged
#endif
#ifdef kIOFWMessageTopologyChanged
#undef kIOFWMessageTopologyChanged
#endif
#ifdef kIOBluetoothDeviceResetError
#undef kIOBluetoothDeviceResetError
#endif
#ifdef kIOBluetoothConnectionAlreadyExists
#undef kIOBluetoothConnectionAlreadyExists
#endif
#ifdef kIOBluetoothNoHCIController
#undef kIOBluetoothNoHCIController
#endif
#ifdef kIOBluetoothHCIPowerStatesNotSupported
#undef kIOBluetoothHCIPowerStatesNotSupported
#endif
#endif  // #if AS_UNDEF_VALUES

enum AS_DEFINE_NAME(KERN_RETURN)
{
  AS_DEFINE_NAME(kOSReturnSuccess) = 0x00000000,
  AS_DEFINE_NAME(KERN_SUCCESS) = 0,
  AS_DEFINE_NAME(MACH_MSG_SUCCESS) = 0x00000000,
  AS_DEFINE_NAME(kOSReturnError) = 0x00000001,
  AS_DEFINE_NAME(KERN_INVALID_ADDRESS) = 1,
  AS_DEFINE_NAME(KERN_PROTECTION_FAILURE) = 2,
  AS_DEFINE_NAME(KERN_NO_SPACE) = 3,
  AS_DEFINE_NAME(KERN_INVALID_ARGUMENT) = 4,
  AS_DEFINE_NAME(KERN_FAILURE) = 5,
  AS_DEFINE_NAME(KERN_RESOURCE_SHORTAGE) = 6,
  AS_DEFINE_NAME(KERN_NOT_RECEIVER) = 7,
  AS_DEFINE_NAME(KERN_NO_ACCESS) = 8,
  AS_DEFINE_NAME(KERN_MEMORY_FAILURE) = 9,
  AS_DEFINE_NAME(KERN_MEMORY_ERROR) = 10,
  AS_DEFINE_NAME(KERN_ALREADY_IN_SET) = 11,
  AS_DEFINE_NAME(KERN_NOT_IN_SET) = 12,
  AS_DEFINE_NAME(KERN_NAME_EXISTS) = 13,
  AS_DEFINE_NAME(KERN_ABORTED) = 14,
  AS_DEFINE_NAME(KERN_INVALID_NAME) = 15,
  AS_DEFINE_NAME(KERN_INVALID_TASK) = 16,
  AS_DEFINE_NAME(KERN_INVALID_RIGHT) = 17,
  AS_DEFINE_NAME(KERN_INVALID_VALUE) = 18,
  AS_DEFINE_NAME(KERN_UREFS_OVERFLOW) = 19,
  AS_DEFINE_NAME(KERN_INVALID_CAPABILITY) = 20,
  AS_DEFINE_NAME(KERN_RIGHT_EXISTS) = 21,
  AS_DEFINE_NAME(KERN_INVALID_HOST) = 22,
  AS_DEFINE_NAME(KERN_MEMORY_PRESENT) = 23,
  AS_DEFINE_NAME(KERN_MEMORY_DATA_MOVED) = 24,
  AS_DEFINE_NAME(KERN_MEMORY_RESTART_COPY) = 25,
  AS_DEFINE_NAME(KERN_INVALID_PROCESSOR_SET) = 26,
  AS_DEFINE_NAME(KERN_POLICY_LIMIT) = 27,
  AS_DEFINE_NAME(KERN_INVALID_POLICY) = 28,
  AS_DEFINE_NAME(KERN_INVALID_OBJECT) = 29,
  AS_DEFINE_NAME(KERN_ALREADY_WAITING) = 30,
  AS_DEFINE_NAME(KERN_DEFAULT_SET) = 31,
  AS_DEFINE_NAME(KERN_EXCEPTION_PROTECTED) = 32,
  AS_DEFINE_NAME(KERN_INVALID_LEDGER) = 33,
  AS_DEFINE_NAME(KERN_INVALID_MEMORY_CONTROL) = 34,
  AS_DEFINE_NAME(KERN_INVALID_SECURITY) = 35,
  AS_DEFINE_NAME(KERN_NOT_DEPRESSED) = 36,
  AS_DEFINE_NAME(KERN_TERMINATED) = 37,
  AS_DEFINE_NAME(KERN_LOCK_SET_DESTROYED) = 38,
  AS_DEFINE_NAME(KERN_LOCK_UNSTABLE) = 39,
  AS_DEFINE_NAME(KERN_LOCK_OWNED) = 40,
  AS_DEFINE_NAME(KERN_LOCK_OWNED_SELF) = 41,
  AS_DEFINE_NAME(KERN_SEMAPHORE_DESTROYED) = 42,
  AS_DEFINE_NAME(KERN_RPC_SERVER_TERMINATED) = 43,
  AS_DEFINE_NAME(KERN_RPC_TERMINATE_ORPHAN) = 44,
  AS_DEFINE_NAME(KERN_RPC_CONTINUE_ORPHAN) = 45,
  AS_DEFINE_NAME(KERN_NOT_SUPPORTED) = 46,
  AS_DEFINE_NAME(KERN_NODE_DOWN) = 47,
  AS_DEFINE_NAME(KERN_NOT_WAITING) = 48,
  AS_DEFINE_NAME(KERN_OPERATION_TIMED_OUT) = 49,
  AS_DEFINE_NAME(KERN_CODESIGN_ERROR) = 50,
  AS_DEFINE_NAME(KERN_POLICY_STATIC) = 51,
  AS_DEFINE_NAME(KERN_INSUFFICIENT_BUFFER_SIZE) = 52,
  AS_DEFINE_NAME(KERN_DENIED) = 53,
  AS_DEFINE_NAME(MACH_MSG_VM_KERNEL) = 0x00000400,
  AS_DEFINE_NAME(MACH_MSG_IPC_KERNEL) = 0x00000800,
  AS_DEFINE_NAME(MACH_MSG_VM_SPACE) = 0x00001000,
  AS_DEFINE_NAME(MACH_MSG_IPC_SPACE) = 0x00002000,
  AS_DEFINE_NAME(MACH_MSG_MASK) = 0x00003e00,
  AS_DEFINE_NAME(MACH_SEND_IN_PROGRESS) = 0x10000001,
  AS_DEFINE_NAME(MACH_SEND_INVALID_DATA) = 0x10000002,
  AS_DEFINE_NAME(MACH_SEND_INVALID_DEST) = 0x10000003,
  AS_DEFINE_NAME(MACH_SEND_TIMED_OUT) = 0x10000004,
  AS_DEFINE_NAME(MACH_SEND_INVALID_VOUCHER) = 0x10000005,
  AS_DEFINE_NAME(MACH_SEND_INTERRUPTED) = 0x10000007,
  AS_DEFINE_NAME(MACH_SEND_MSG_TOO_SMALL) = 0x10000008,
  AS_DEFINE_NAME(MACH_SEND_INVALID_REPLY) = 0x10000009,
  AS_DEFINE_NAME(MACH_SEND_INVALID_RIGHT) = 0x1000000a,
  AS_DEFINE_NAME(MACH_SEND_INVALID_NOTIFY) = 0x1000000b,
  AS_DEFINE_NAME(MACH_SEND_INVALID_MEMORY) = 0x1000000c,
  AS_DEFINE_NAME(MACH_SEND_NO_BUFFER) = 0x1000000d,
  AS_DEFINE_NAME(MACH_SEND_TOO_LARGE) = 0x1000000e,
  AS_DEFINE_NAME(MACH_SEND_INVALID_TYPE) = 0x1000000f,
  AS_DEFINE_NAME(MACH_SEND_INVALID_HEADER) = 0x10000010,
  AS_DEFINE_NAME(MACH_SEND_INVALID_TRAILER) = 0x10000011,
  AS_DEFINE_NAME(MACH_SEND_INVALID_CONTEXT) = 0x10000012,
  AS_DEFINE_NAME(MACH_SEND_INVALID_RT_OOL_SIZE) = 0x10000015,
  AS_DEFINE_NAME(MACH_SEND_NO_GRANT_DEST) = 0x10000016,
  AS_DEFINE_NAME(MACH_SEND_MSG_FILTERED) = 0x10000017,
  AS_DEFINE_NAME(MACH_RCV_IN_PROGRESS) = 0x10004001,
  AS_DEFINE_NAME(MACH_RCV_INVALID_NAME) = 0x10004002,
  AS_DEFINE_NAME(MACH_RCV_TIMED_OUT) = 0x10004003,
  AS_DEFINE_NAME(MACH_RCV_TOO_LARGE) = 0x10004004,
  AS_DEFINE_NAME(MACH_RCV_INTERRUPTED) = 0x10004005,
  AS_DEFINE_NAME(MACH_RCV_PORT_CHANGED) = 0x10004006,
  AS_DEFINE_NAME(MACH_RCV_INVALID_NOTIFY) = 0x10004007,
  AS_DEFINE_NAME(MACH_RCV_INVALID_DATA) = 0x10004008,
  AS_DEFINE_NAME(MACH_RCV_PORT_DIED) = 0x10004009,
  AS_DEFINE_NAME(MACH_RCV_IN_SET) = 0x1000400a,
  AS_DEFINE_NAME(MACH_RCV_HEADER_ERROR) = 0x1000400b,
  AS_DEFINE_NAME(MACH_RCV_BODY_ERROR) = 0x1000400c,
  AS_DEFINE_NAME(MACH_RCV_INVALID_TYPE) = 0x1000400d,
  AS_DEFINE_NAME(MACH_RCV_SCATTER_SMALL) = 0x1000400e,
  AS_DEFINE_NAME(MACH_RCV_INVALID_TRAILER) = 0x1000400f,
  AS_DEFINE_NAME(MACH_RCV_IN_PROGRESS_TIMED) = 0x10004011,
  AS_DEFINE_NAME(MACH_RCV_INVALID_REPLY) = 0x10004012,
  AS_DEFINE_NAME(kOSMetaClassInternal) = 0xDC004001,
  AS_DEFINE_NAME(kOSMetaClassHasInstances) = 0xDC004002,
  AS_DEFINE_NAME(kOSMetaClassNoInit) = 0xDC004003,
  AS_DEFINE_NAME(kOSMetaClassNoTempData) = 0xDC004004,
  AS_DEFINE_NAME(kOSMetaClassNoDicts) = 0xDC004005,
  AS_DEFINE_NAME(kOSMetaClassNoKModSet) = 0xDC004006,
  AS_DEFINE_NAME(kOSMetaClassNoInsKModSet) = 0xDC004007,
  AS_DEFINE_NAME(kOSMetaClassNoSuper) = 0xDC004008,
  AS_DEFINE_NAME(kOSMetaClassInstNoSuper) = 0xDC004009,
  AS_DEFINE_NAME(kOSMetaClassDuplicateClass) = 0xDC00400A,
  AS_DEFINE_NAME(kOSMetaClassNoKext) = 0xDC00400B,
  AS_DEFINE_NAME(kOSKextReturnInternalError) = 0xDC008001,
  AS_DEFINE_NAME(kOSKextReturnNoMemory) = 0xDC008002,
  AS_DEFINE_NAME(kOSKextReturnNoResources) = 0xDC008003,
  AS_DEFINE_NAME(kOSKextReturnNotPrivileged) = 0xDC008004,
  AS_DEFINE_NAME(kOSKextReturnInvalidArgument) = 0xDC008005,
  AS_DEFINE_NAME(kOSKextReturnNotFound) = 0xDC008006,
  AS_DEFINE_NAME(kOSKextReturnBadData) = 0xDC008007,
  AS_DEFINE_NAME(kOSKextReturnSerialization) = 0xDC008008,
  AS_DEFINE_NAME(kOSKextReturnUnsupported) = 0xDC008009,
  AS_DEFINE_NAME(kOSKextReturnDisabled) = 0xDC00800A,
  AS_DEFINE_NAME(kOSKextReturnNotAKext) = 0xDC00800B,
  AS_DEFINE_NAME(kOSKextReturnValidation) = 0xDC00800C,
  AS_DEFINE_NAME(kOSKextReturnAuthentication) = 0xDC00800D,
  AS_DEFINE_NAME(kOSKextReturnDependencies) = 0xDC00800E,
  AS_DEFINE_NAME(kOSKextReturnArchNotFound) = 0xDC00800F,
  AS_DEFINE_NAME(kOSKextReturnCache) = 0xDC008010,
  AS_DEFINE_NAME(kOSKextReturnDeferred) = 0xDC008011,
  AS_DEFINE_NAME(kOSKextReturnBootLevel) = 0xDC008012,
  AS_DEFINE_NAME(kOSKextReturnNotLoadable) = 0xDC008013,
  AS_DEFINE_NAME(kOSKextReturnLoadedVersionDiffers) = 0xDC008014,
  AS_DEFINE_NAME(kOSKextReturnDependencyLoadError) = 0xDC008015,
  AS_DEFINE_NAME(kOSKextReturnLinkError) = 0xDC008016,
  AS_DEFINE_NAME(kOSKextReturnStartStopError) = 0xDC008017,
  AS_DEFINE_NAME(kOSKextReturnInUse) = 0xDC008018,
  AS_DEFINE_NAME(kOSKextReturnTimeout) = 0xDC008019,
  AS_DEFINE_NAME(kOSKextReturnStopping) = 0xDC00801A,
  AS_DEFINE_NAME(kOSKextReturnSystemPolicy) = 0xDC00801B,
  AS_DEFINE_NAME(kOSKextReturnKCLoadFailure) = 0xDC00801C,
  AS_DEFINE_NAME(kOSKextReturnKCLoadFailureSystemKC) = 0xDC00801D,
  AS_DEFINE_NAME(kOSKextReturnKCLoadFailureAuxKC) = 0xDC00801E,
  AS_DEFINE_NAME(kIOReturnInvalid) = 0xE0000001,
  AS_DEFINE_NAME(kIOReturnError) = 0xE00002BC,
  AS_DEFINE_NAME(kIOReturnNoMemory) = 0xE00002BD,
  AS_DEFINE_NAME(kIOReturnNoResources) = 0xE00002BE,
  AS_DEFINE_NAME(kIOReturnIPCError) = 0xE00002BF,
  AS_DEFINE_NAME(kIOReturnNoDevice) = 0xE00002C0,
  AS_DEFINE_NAME(kIOReturnNotPrivileged) = 0xE00002C1,
  AS_DEFINE_NAME(kIOReturnBadArgument) = 0xE00002C2,
  AS_DEFINE_NAME(kIOReturnLockedRead) = 0xE00002C3,
  AS_DEFINE_NAME(kIOReturnLockedWrite) = 0xE00002C4,
  AS_DEFINE_NAME(kIOReturnExclusiveAccess) = 0xE00002C5,
  AS_DEFINE_NAME(kIOReturnBadMessageID) = 0xE00002C6,
  AS_DEFINE_NAME(kIOReturnUnsupported) = 0xE00002C7,
  AS_DEFINE_NAME(kIOReturnVMError) = 0xE00002C8,
  AS_DEFINE_NAME(kIOReturnInternalError) = 0xE00002C9,
  AS_DEFINE_NAME(kIOReturnIOError) = 0xE00002CA,
  AS_DEFINE_NAME(kIOReturn???Error) = 0xE00002CB,
  AS_DEFINE_NAME(kIOReturnCannotLock) = 0xE00002CC,
  AS_DEFINE_NAME(kIOReturnNotOpen) = 0xE00002CD,
  AS_DEFINE_NAME(kIOReturnNotReadable) = 0xE00002CE,
  AS_DEFINE_NAME(kIOReturnNotWritable) = 0xE00002CF,
  AS_DEFINE_NAME(kIOReturnNotAligned) = 0xE00002D0,
  AS_DEFINE_NAME(kIOReturnBadMedia) = 0xE00002D1,
  AS_DEFINE_NAME(kIOReturnStillOpen) = 0xE00002D2,
  AS_DEFINE_NAME(kIOReturnRLDError) = 0xE00002D3,
  AS_DEFINE_NAME(kIOReturnDMAError) = 0xE00002D4,
  AS_DEFINE_NAME(kIOReturnBusy) = 0xE00002D5,
  AS_DEFINE_NAME(kIOReturnTimeout) = 0xE00002D6,
  AS_DEFINE_NAME(kIOReturnOffline) = 0xE00002D7,
  AS_DEFINE_NAME(kIOReturnNotReady) = 0xE00002D8,
  AS_DEFINE_NAME(kIOReturnNotAttached) = 0xE00002D9,
  AS_DEFINE_NAME(kIOReturnNoChannels) = 0xE00002DA,
  AS_DEFINE_NAME(kIOReturnNoSpace) = 0xE00002DB,
  AS_DEFINE_NAME(kIOReturnPortExists) = 0xE00002DD,
  AS_DEFINE_NAME(kIOReturnCannotWire) = 0xE00002DE,
  AS_DEFINE_NAME(kIOReturnNoInterrupt) = 0xE00002DF,
  AS_DEFINE_NAME(kIOReturnNoFrames) = 0xE00002E0,
  AS_DEFINE_NAME(kIOReturnMessageTooLarge) = 0xE00002E1,
  AS_DEFINE_NAME(kIOReturnNotPermitted) = 0xE00002E2,
  AS_DEFINE_NAME(kIOReturnNoPower) = 0xE00002E3,
  AS_DEFINE_NAME(kIOReturnNoMedia) = 0xE00002E4,
  AS_DEFINE_NAME(kIOReturnUnformattedMedia) = 0xE00002E5,
  AS_DEFINE_NAME(kIOReturnUnsupportedMode) = 0xE00002E6,
  AS_DEFINE_NAME(kIOReturnUnderrun) = 0xE00002E7,
  AS_DEFINE_NAME(kIOReturnOverrun) = 0xE00002E8,
  AS_DEFINE_NAME(kIOReturnDeviceError) = 0xE00002E9,
  AS_DEFINE_NAME(kIOReturnNoCompletion) = 0xE00002EA,
  AS_DEFINE_NAME(kIOReturnAborted) = 0xE00002EB,
  AS_DEFINE_NAME(kIOReturnNoBandwidth) = 0xE00002EC,
  AS_DEFINE_NAME(kIOReturnNotResponding) = 0xE00002ED,
  AS_DEFINE_NAME(kIOReturnIsoTooOld) = 0xE00002EE,
  AS_DEFINE_NAME(kIOReturnIsoTooNew) = 0xE00002EF,
  AS_DEFINE_NAME(kIOReturnNotFound) = 0xE00002F0,
  AS_DEFINE_NAME(kIOUSBCRCErr) = 0xE0004001,
  AS_DEFINE_NAME(kIOUSBBitstufErr) = 0xE0004002,
  AS_DEFINE_NAME(kIOUSBDataToggleErr) = 0xE0004003,
  AS_DEFINE_NAME(kIOUSBPIDCheckErr) = 0xE0004006,
  AS_DEFINE_NAME(kIOUSBWrongPIDErr) = 0xE0004007,
  AS_DEFINE_NAME(kIOUSBReserved1Err) = 0xE000400A,
  AS_DEFINE_NAME(kIOUSBReserved2Err) = 0xE000400B,
  AS_DEFINE_NAME(kIOUSBBufferOverrunErr) = 0xE000400C,
  AS_DEFINE_NAME(kIOUSBBufferUnderrunErr) = 0xE000400D,
  AS_DEFINE_NAME(kIOUSBNotSent1Err) = 0xE000400E,
  AS_DEFINE_NAME(kIOUSBNotSent2Err) = 0xE000400F,
  AS_DEFINE_NAME(kIOUSBLinkErr) = 0xE0004010,
  AS_DEFINE_NAME(kIOUSBTooManyTransactionsPending) = 0xE0004042,
  AS_DEFINE_NAME(kIOUSBInvalidSSEndpoint) = 0xE0004043,
  AS_DEFINE_NAME(kIOUSBStreamsNotSupported) = 0xE0004044,
  AS_DEFINE_NAME(kIOUSBDeviceCountExceeded) = 0xE0004045,
  AS_DEFINE_NAME(kIOUSBEndpointCountExceeded) = 0xE0004046,
  AS_DEFINE_NAME(kIOUSBDevicePortWasNotSuspended) = 0xE0004047,
  AS_DEFINE_NAME(kIOUSBClearPipeStallNotRecursive) = 0xE0004048,
  AS_DEFINE_NAME(kIOUSBDeviceNotHighSpeed) = 0xE0004049,
  AS_DEFINE_NAME(kIOUSBDeviceTransferredToCompanion) = 0xE0004049,
  AS_DEFINE_NAME(kIOUSBSyncRequestOnWLThread) = 0xE000404A,
  AS_DEFINE_NAME(kIOUSBHighSpeedSplitError) = 0xE000404B,
  AS_DEFINE_NAME(kIOUSBLowLatencyFrameListNotPreviouslyAllocated) = 0xE000404C,
  AS_DEFINE_NAME(kIOUSBLowLatencyBufferNotPreviouslyAllocated) = 0xE000404D,
  AS_DEFINE_NAME(kIOUSBInterfaceNotFound) = 0xE000404E,
  AS_DEFINE_NAME(kIOUSBPipeStalled) = 0xE000404F,
  AS_DEFINE_NAME(kIOUSBTransactionReturned) = 0xE0004050,
  AS_DEFINE_NAME(kIOUSBTransactionTimeout) = 0xE0004051,
  AS_DEFINE_NAME(kIOUSBPortWasSuspended) = 0xE0004052,
  AS_DEFINE_NAME(kIOUSBConfigNotFound) = 0xE0004056,
  AS_DEFINE_NAME(kIOUSBEndpointNotFound) = 0xE0004057,
  AS_DEFINE_NAME(kIOUSBNotEnoughPowerErr) = 0xE000405D,
  AS_DEFINE_NAME(kIOUSBNotEnoughPipesErr) = 0xE000405E,
  AS_DEFINE_NAME(kIOUSBNoAsyncPortErr) = 0xE000405F,
  AS_DEFINE_NAME(kIOUSBTooManyPipesErr) = 0xE0004060,
  AS_DEFINE_NAME(kIOUSBUnknownPipeErr) = 0xE0004061,
  AS_DEFINE_NAME(kIOConfigNoEntry) = 0xE0008001,
  AS_DEFINE_NAME(kIOFireWirePending) = 0xE0008002,
  AS_DEFINE_NAME(kIOFireWireLastDCLToken) = 0xE0008003,
  AS_DEFINE_NAME(kIOFireWireConfigROMInvalid) = 0xE0008004,
  AS_DEFINE_NAME(kIOFireWireAlreadyRegistered) = 0xE0008005,
  AS_DEFINE_NAME(kIOFireWireMultipleTalkers) = 0xE0008006,
  AS_DEFINE_NAME(kIOFireWireChannelActive) = 0xE0008007,
  AS_DEFINE_NAME(kIOFireWireNoListenerOrTalker) = 0xE0008008,
  AS_DEFINE_NAME(kIOFireWireNoChannels) = 0xE0008009,
  AS_DEFINE_NAME(kIOFireWireChannelNotAvailable) = 0xE000800A,
  AS_DEFINE_NAME(kIOFireWireSeparateBus) = 0xE000800B,
  AS_DEFINE_NAME(kIOFireWireBadSelfIDs) = 0xE000800C,
  AS_DEFINE_NAME(kIOFireWireLowCableVoltage) = 0xE000800D,
  AS_DEFINE_NAME(kIOFireWireInsufficientPower) = 0xE000800E,
  AS_DEFINE_NAME(kIOFireWireOutOfTLabels) = 0xE000800F,
  AS_DEFINE_NAME(kIOFireWireBusReset) = 0xE0008020,
  AS_DEFINE_NAME(kIOFireWireBogusDCLProgram) = 0xE0008101,
  AS_DEFINE_NAME(kIOFireWireTalkingAndListening) = 0xE0008102,
  AS_DEFINE_NAME(kIOFireWireHardwareSlept) = 0xE0008103,
  AS_DEFINE_NAME(kIOFireWireCompleting) = 0xE0008104,
  AS_DEFINE_NAME(kIOFireWireInvalidResponseLength) = 0xE0008105,
  AS_DEFINE_NAME(kIOFireWireIsochBandwidthNotAvailable) = 0xE0008106,
  AS_DEFINE_NAME(kIOFWMessageServiceIsRequestingClose) = 0xE00087D0,
  AS_DEFINE_NAME(kIOFWMessagePowerStateChanged) = 0xE00087D1,
  AS_DEFINE_NAME(kIOFWMessageTopologyChanged) = 0xE00087D2,
  AS_DEFINE_NAME(kIOBluetoothDeviceResetError) = 0xE0020001,
  AS_DEFINE_NAME(kIOBluetoothConnectionAlreadyExists) = 0xE0020002,
  AS_DEFINE_NAME(kIOBluetoothNoHCIController) = 0xE0020003,
  AS_DEFINE_NAME(kIOBluetoothHCIPowerStatesNotSupported) = 0xE0020004,
};


AS_NAMESPACE_END()

#endif  // #ifndef __AS_KERN_RETURN__
