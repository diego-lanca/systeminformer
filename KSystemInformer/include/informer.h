/*
 * Copyright (c) 2022 Winsider Seminars & Solutions, Inc.  All rights reserved.
 *
 * This file is part of System Informer.
 *
 * Authors:
 *
 *     jxy-s   2022-2023
 *
 */

#pragma once
#include <kph.h>
#include <kphmsg.h>

#ifdef KPH_INFORMER_P
#define KPH_DEFINE_INFORMER_SETTING(name)                                     \
    const KPH_INFORMER_SETTINGS KphInformer##name = { .##name = TRUE }
#else
#define KPH_DEFINE_INFORMER_SETTING(name)                                     \
    extern const KPH_INFORMER_SETTINGS KphInformer##name
#endif

#ifdef KPH_INFORMER_P
KPH_PROTECTED_DATA_SECTION_RO_PUSH();
#endif

KPH_DEFINE_INFORMER_SETTING(ProcessCreate);
KPH_DEFINE_INFORMER_SETTING(ProcessExit);
KPH_DEFINE_INFORMER_SETTING(ThreadCreate);
KPH_DEFINE_INFORMER_SETTING(ThreadExecute);
KPH_DEFINE_INFORMER_SETTING(ThreadExit);
KPH_DEFINE_INFORMER_SETTING(ImageLoad);
KPH_DEFINE_INFORMER_SETTING(DebugPrint);
KPH_DEFINE_INFORMER_SETTING(ProcessHandlePreCreate);
KPH_DEFINE_INFORMER_SETTING(ProcessHandlePostCreate);
KPH_DEFINE_INFORMER_SETTING(ProcessHandlePreDuplicate);
KPH_DEFINE_INFORMER_SETTING(ProcessHandlePostDuplicate);
KPH_DEFINE_INFORMER_SETTING(ThreadHandlePreCreate);
KPH_DEFINE_INFORMER_SETTING(ThreadHandlePostCreate);
KPH_DEFINE_INFORMER_SETTING(ThreadHandlePreDuplicate);
KPH_DEFINE_INFORMER_SETTING(ThreadHandlePostDuplicate);
KPH_DEFINE_INFORMER_SETTING(DesktopHandlePreCreate);
KPH_DEFINE_INFORMER_SETTING(DesktopHandlePostCreate);
KPH_DEFINE_INFORMER_SETTING(DesktopHandlePreDuplicate);
KPH_DEFINE_INFORMER_SETTING(DesktopHandlePostDuplicate);
KPH_DEFINE_INFORMER_SETTING(EnableStackTraces);
KPH_DEFINE_INFORMER_SETTING(FileEnablePagingIo);
KPH_DEFINE_INFORMER_SETTING(FileEnableSyncPagingIo);
KPH_DEFINE_INFORMER_SETTING(FileEnableIoControlBuffers);
KPH_DEFINE_INFORMER_SETTING(FileEnableFsControlBuffers);
KPH_DEFINE_INFORMER_SETTING(FilePreCreate);
KPH_DEFINE_INFORMER_SETTING(FilePostCreate);
KPH_DEFINE_INFORMER_SETTING(FilePreCreateNamedPipe);
KPH_DEFINE_INFORMER_SETTING(FilePostCreateNamedPipe);
KPH_DEFINE_INFORMER_SETTING(FilePreClose);
KPH_DEFINE_INFORMER_SETTING(FilePostClose);
KPH_DEFINE_INFORMER_SETTING(FilePreRead);
KPH_DEFINE_INFORMER_SETTING(FilePostRead);
KPH_DEFINE_INFORMER_SETTING(FilePreWrite);
KPH_DEFINE_INFORMER_SETTING(FilePostWrite);
KPH_DEFINE_INFORMER_SETTING(FilePreQueryInformation);
KPH_DEFINE_INFORMER_SETTING(FilePostQueryInformation);
KPH_DEFINE_INFORMER_SETTING(FilePreSetInformation);
KPH_DEFINE_INFORMER_SETTING(FilePostSetInformation);
KPH_DEFINE_INFORMER_SETTING(FilePreQueryEa);
KPH_DEFINE_INFORMER_SETTING(FilePostQueryEa);
KPH_DEFINE_INFORMER_SETTING(FilePreSetEa);
KPH_DEFINE_INFORMER_SETTING(FilePostSetEa);
KPH_DEFINE_INFORMER_SETTING(FilePreFlushBuffers);
KPH_DEFINE_INFORMER_SETTING(FilePostFlushBuffers);
KPH_DEFINE_INFORMER_SETTING(FilePreQueryVolumeInformation);
KPH_DEFINE_INFORMER_SETTING(FilePostQueryVolumeInformation);
KPH_DEFINE_INFORMER_SETTING(FilePreSetVolumeInformation);
KPH_DEFINE_INFORMER_SETTING(FilePostSetVolumeInformation);
KPH_DEFINE_INFORMER_SETTING(FilePreDirectoryControl);
KPH_DEFINE_INFORMER_SETTING(FilePostDirectoryControl);
KPH_DEFINE_INFORMER_SETTING(FilePreFileSystemControl);
KPH_DEFINE_INFORMER_SETTING(FilePostFileSystemControl);
KPH_DEFINE_INFORMER_SETTING(FilePreDeviceControl);
KPH_DEFINE_INFORMER_SETTING(FilePostDeviceControl);
KPH_DEFINE_INFORMER_SETTING(FilePreInternalDeviceControl);
KPH_DEFINE_INFORMER_SETTING(FilePostInternalDeviceControl);
KPH_DEFINE_INFORMER_SETTING(FilePreShutdown);
KPH_DEFINE_INFORMER_SETTING(FilePostShutdown);
KPH_DEFINE_INFORMER_SETTING(FilePreLockControl);
KPH_DEFINE_INFORMER_SETTING(FilePostLockControl);
KPH_DEFINE_INFORMER_SETTING(FilePreCleanup);
KPH_DEFINE_INFORMER_SETTING(FilePostCleanup);
KPH_DEFINE_INFORMER_SETTING(FilePreCreateMailslot);
KPH_DEFINE_INFORMER_SETTING(FilePostCreateMailslot);
KPH_DEFINE_INFORMER_SETTING(FilePreQuerySecurity);
KPH_DEFINE_INFORMER_SETTING(FilePostQuerySecurity);
KPH_DEFINE_INFORMER_SETTING(FilePreSetSecurity);
KPH_DEFINE_INFORMER_SETTING(FilePostSetSecurity);
KPH_DEFINE_INFORMER_SETTING(FilePrePower);
KPH_DEFINE_INFORMER_SETTING(FilePostPower);
KPH_DEFINE_INFORMER_SETTING(FilePreSystemControl);
KPH_DEFINE_INFORMER_SETTING(FilePostSystemControl);
KPH_DEFINE_INFORMER_SETTING(FilePreDeviceChange);
KPH_DEFINE_INFORMER_SETTING(FilePostDeviceChange);
KPH_DEFINE_INFORMER_SETTING(FilePreQueryQuota);
KPH_DEFINE_INFORMER_SETTING(FilePostQueryQuota);
KPH_DEFINE_INFORMER_SETTING(FilePreSetQuota);
KPH_DEFINE_INFORMER_SETTING(FilePostSetQuota);
KPH_DEFINE_INFORMER_SETTING(FilePrePnp);
KPH_DEFINE_INFORMER_SETTING(FilePostPnp);
KPH_DEFINE_INFORMER_SETTING(FilePreAcquireForSectionSync);
KPH_DEFINE_INFORMER_SETTING(FilePostAcquireForSectionSync);
KPH_DEFINE_INFORMER_SETTING(FilePreReleaseForSectionSync);
KPH_DEFINE_INFORMER_SETTING(FilePostReleaseForSectionSync);
KPH_DEFINE_INFORMER_SETTING(FilePreAcquireForModWrite);
KPH_DEFINE_INFORMER_SETTING(FilePostAcquireForModWrite);
KPH_DEFINE_INFORMER_SETTING(FilePreReleaseForModWrite);
KPH_DEFINE_INFORMER_SETTING(FilePostReleaseForModWrite);
KPH_DEFINE_INFORMER_SETTING(FilePreAcquireForCcFlush);
KPH_DEFINE_INFORMER_SETTING(FilePostAcquireForCcFlush);
KPH_DEFINE_INFORMER_SETTING(FilePreReleaseForCcFlush);
KPH_DEFINE_INFORMER_SETTING(FilePostReleaseForCcFlush);
KPH_DEFINE_INFORMER_SETTING(FilePreQueryOpen);
KPH_DEFINE_INFORMER_SETTING(FilePostQueryOpen);
KPH_DEFINE_INFORMER_SETTING(FilePreFastIoCheckIfPossible);
KPH_DEFINE_INFORMER_SETTING(FilePostFastIoCheckIfPossible);
KPH_DEFINE_INFORMER_SETTING(FilePreNetworkQueryOpen);
KPH_DEFINE_INFORMER_SETTING(FilePostNetworkQueryOpen);
KPH_DEFINE_INFORMER_SETTING(FilePreMdlRead);
KPH_DEFINE_INFORMER_SETTING(FilePostMdlRead);
KPH_DEFINE_INFORMER_SETTING(FilePreMdlReadComplete);
KPH_DEFINE_INFORMER_SETTING(FilePostMdlReadComplete);
KPH_DEFINE_INFORMER_SETTING(FilePrePrepareMdlWrite);
KPH_DEFINE_INFORMER_SETTING(FilePostPrepareMdlWrite);
KPH_DEFINE_INFORMER_SETTING(FilePreMdlWriteComplete);
KPH_DEFINE_INFORMER_SETTING(FilePostMdlWriteComplete);
KPH_DEFINE_INFORMER_SETTING(FilePreVolumeMount);
KPH_DEFINE_INFORMER_SETTING(FilePostVolumeMount);
KPH_DEFINE_INFORMER_SETTING(FilePreVolumeDismount);
KPH_DEFINE_INFORMER_SETTING(FilePostVolumeDismount);

#ifdef KPH_INFORMER_P
KPH_PROTECTED_DATA_SECTION_RO_POP();
#endif

_Must_inspect_result_
PCKPH_INFORMER_SETTINGS KphInformerForMessageId(
    _In_ KPH_MESSAGE_ID MessageId
    );

_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
BOOLEAN KphInformerIsEnabled(
    _In_ PCKPH_INFORMER_SETTINGS Settings,
    _In_opt_ PKPH_PROCESS_CONTEXT Process
    );

#define KphInformerEnabled(name, proc)                                        \
    KphInformerIsEnabled(&KphInformer##name, proc)

_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
BOOLEAN KphInformerIsEnabled2(
    _In_ PCKPH_INFORMER_SETTINGS Settings,
    _In_opt_ PKPH_PROCESS_CONTEXT ActorProcess,
    _In_opt_ PKPH_PROCESS_CONTEXT TargetProcess
    );

#define KphInformerEnabled2(name, actor, target)                               \
    KphInformerIsEnabled2(&KphInformer##name, actor, target)

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphGetInformerProcessFilter(
    _In_ HANDLE ProcessHandle,
    _Out_ PKPH_INFORMER_SETTINGS Filter,
    _In_ KPROCESSOR_MODE AccessMode
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphSetInformerProcessFilter(
    _In_opt_ HANDLE ProcessHandle,
    _In_ PKPH_INFORMER_SETTINGS Filter,
    _In_ KPROCESSOR_MODE AccessMode
    );

// mini-filter informer

extern PFLT_FILTER KphFltFilter;

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphFltRegister(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPath
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID KphFltUnregister(
    VOID
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphFltInformerStart(
    VOID
    );

// process informer

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphProcessInformerStart(
    VOID
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID KphProcessInformerStop(
    VOID
    );

// thread informer

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphThreadInformerStart(
    VOID
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID KphThreadInformerStop(
    VOID
    );

// image informer

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphImageInformerStart(
    VOID
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID KphImageInformerStop(
    VOID
    );

// object informer

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphObjectInformerStart(
    VOID
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID KphObjectInformerStop(
    VOID
    );

// registry informer

// debug informer

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS KphDebugInformerStart(
    VOID
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID KphDebugInformerStop(
    VOID
    );
