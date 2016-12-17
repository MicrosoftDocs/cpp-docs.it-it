---
title: "Funzioni e globali CRT interni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__acrt_iob_func"
  - "__AdjustPointer"
  - "_assert"
  - "__badioinfo"
  - "__BuildCatchObject"
  - "__BuildCatchObjectHelper"
  - "_calloc_base"
  - "_chkesp"
  - "_chvalidator"
  - "_chvalidator_l"
  - "_CIacos"
  - "_CIasin"
  - "_CIcosh"
  - "_CIsinh"
  - "_CItanh"
  - "__clean_type_info_names_internal"
  - "_commode"
  - "_configure_narrow_argv"
  - "_configure_wide_argv"
  - "__conio_common_vcprintf"
  - "__conio_common_vcprintf_p"
  - "__conio_common_vcprintf_s"
  - "__conio_common_vcscanf"
  - "__conio_common_vcwprintf"
  - "__conio_common_vcwprintf_p"
  - "__conio_common_vcwprintf_s"
  - "__conio_common_vcwscanf"
  - "__CppXcptFilter"
  - "__create_locale"
  - "_crt_at_quick_exit"
  - "_crt_atexit"
  - "_crtAssertBusy"
  - "_crtBreakAlloc"
  - "__crtCompareStringA"
  - "__crtCompareStringEx"
  - "__crtCompareStringW"
  - "__crtCreateEventExW"
  - "__crtCreateSemaphoreExW"
  - "__crtCreateSymbolicLinkW"
  - "__crtEnumSystemLocalesEx"
  - "__crtFlsAlloc"
  - "__crtFlsFree"
  - "__crtFlsGetValue"
  - "__crtFlsSetValue"
  - "_CrtGetCheckCount"
  - "__crtGetDateFormatEx"
  - "__crtGetFileInformationByHandleEx"
  - "__crtGetLocaleInfoEx"
  - "__crtGetShowWindowMode"
  - "__crtGetTickCount64"
  - "__crtGetTimeFormatEx"
  - "__crtGetUserDefaultLocaleName"
  - "__crtInitializeCriticalSectionEx"
  - "__crtIsPackagedApp"
  - "__crtIsValidLocaleName"
  - "__crtLCMapStringA"
  - "__crtLCMapStringEx"
  - "_CrtSetCheckCount"
  - "_CrtSetDbgBlockType"
  - "__crtSetFileInformationByHandle"
  - "__crtSetThreadStackGuarantee"
  - "__crtSetUnhandledExceptionFilter"
  - "__crtSleep"
  - "__crtTerminateProcess"
  - "__crtUnhandledException"
  - "__CxxDetectRethrow"
  - "__CxxExceptionFilter"
  - "__CxxFrameHandler2"
  - "__CxxFrameHandler3"
  - "__CxxLongjmpUnwind"
  - "__CxxQueryExceptionSize"
  - "__CxxRegisterExceptionObject"
  - "__CxxUnregisterExceptionObject"
  - "__daylight"
  - "_dclass"
  - "__DestructExceptionObject"
  - "__doserrno"
  - "_dosmaperr"
  - "_dpcomp"
  - "_dsign"
  - "__dstbias"
  - "_dtest"
  - "_EH_prolog"
  - "_errno"
  - "_except_handler2"
  - "_except_handler4_common"
  - "_except1"
  - "_fdclass"
  - "_fdpcomp"
  - "_fdsign"
  - "_fdtest"
  - "_filbuf"
  - "_FindAndUnlinkFrame"
  - "_flsbuf"
  - "__fpe_flt_rounds"
  - "_FPE_Raise"
  - "__fpecode"
  - "__FrameUnwindFilter"
  - "_fread_nolock_s"
  - "_free_base"
  - "__free_locale"
  - "_freea_s"
  - "_freefls"
  - "_ftol"
  - "__get_current_locale"
  - "__get_flsindex"
  - "_get_initial_narrow_environment"
  - "_get_initial_wide_environment"
  - "_get_narrow_winmain_command_line"
  - "_get_stream_buffer_pointers"
  - "__get_tlsindex"
  - "_get_wide_winmain_command_line"
  - "_Getdays"
  - "_Getmonths"
  - "__GetPlatformExceptionInfo"
  - "_getptd"
  - "_Gettnames"
  - "_global_unwind2"
  - "_inconsistency"
  - "__initenv"
  - "_initialize_lconv_for_unsigned_char"
  - "_initialize_narrow_environment"
  - "_initialize_wide_environment"
  - "_initptd"
  - "_invalid_parameter"
  - "_invoke_watson"
  - "__iob_func"
  - "_IsExceptionObjectToBeDestroyed"
  - "__lconv"
  - "__lconv_init"
  - "_ldclass"
  - "_ldpcomp"
  - "_ldsign"
  - "_ldtest"
  - "__libm_sse2_acos"
  - "_libm_sse2_acos_precise"
  - "__libm_sse2_acosf"
  - "__libm_sse2_asin"
  - "_libm_sse2_asin_precise"
  - "__libm_sse2_asinf"
  - "__libm_sse2_atan"
  - "_libm_sse2_atan_precise"
  - "__libm_sse2_atan2"
  - "__libm_sse2_atanf"
  - "__libm_sse2_cos"
  - "_libm_sse2_cos_precise"
  - "__libm_sse2_cosf"
  - "__libm_sse2_exp"
  - "_libm_sse2_exp_precise"
  - "__libm_sse2_expf"
  - "__libm_sse2_log"
  - "_libm_sse2_log_precise"
  - "__libm_sse2_log10"
  - "_libm_sse2_log10_precise"
  - "__libm_sse2_log10f"
  - "__libm_sse2_logf"
  - "__libm_sse2_pow"
  - "_libm_sse2_pow_precise"
  - "__libm_sse2_powf"
  - "__libm_sse2_sin"
  - "_libm_sse2_sin_precise"
  - "__libm_sse2_sinf"
  - "_libm_sse2_sqrt_precise"
  - "__libm_sse2_tan"
  - "_libm_sse2_tan_precise"
  - "__libm_sse2_tanf"
  - "_local_unwind4"
  - "_lock_locales"
  - "_longjmpex"
  - "_malloc_base"
  - "_mbctype"
  - "_NLG_Dispatch2"
  - "_NLG_Return"
  - "_NLG_Return2"
  - "__p___argc"
  - "__p___argv"
  - "__p___initenv"
  - "__p___wargv"
  - "__p___winitenv"
  - "__p__acmdln"
  - "__p__crtAssertBusy"
  - "__p__crtBreakAlloc"
  - "__p__crtDbgFlag"
  - "__p__daylight"
  - "__p__dstbias"
  - "__p__environ"
  - "__p__iob"
  - "__p__mbcasemap"
  - "__p__mbctype"
  - "__p__pctype"
  - "__p__pgmptr"
  - "__p__pwctype"
  - "__p__timezone"
  - "__p__tzname"
  - "__p__wcmdln"
  - "__p__wenviron"
  - "__p__wpgmptr"
  - "_pctype"
  - "__pioinfo"
  - "_pwctype"
  - "__pwctype_func"
  - "__pxcptinfoptrs"
  - "_realloc_base"
  - "_register_thread_local_exe_atexit_callback"
  - "__report_gsfailure"
  - "__RTCastToVoid"
  - "__RTtypeid"
  - "_seh_filter_dll"
  - "_seh_filter_exe"
  - "_seh_longjmp_unwind"
  - "_seh_longjmp_unwind4"
  - "_set_malloc_crt_max_wait"
  - "__setlc_active"
  - "_SetWinRTOutOfMemoryExceptionCallback"
  - "_sopen_dispatch"
  - "__stdio_common_vfprintf"
  - "__stdio_common_vfprintf_p"
  - "__stdio_common_vfprintf_s"
  - "__stdio_common_vfscanf"
  - "__stdio_common_vfwprintf"
  - "__stdio_common_vfwprintf_p"
  - "__stdio_common_vfwprintf_s"
  - "__stdio_common_vfwscanf"
  - "__stdio_common_vsnprintf_s"
  - "__stdio_common_vsnwprintf_s"
  - "__stdio_common_vsprintf"
  - "__stdio_common_vsprintf_p"
  - "__stdio_common_vsprintf_s"
  - "__stdio_common_vsscanf"
  - "__stdio_common_vswprintf"
  - "__stdio_common_vswprintf_p"
  - "__stdio_common_vswprintf_s"
  - "__stdio_common_vswscanf"
  - "_Strftime"
  - "__STRINGTOLD"
  - "__STRINGTOLD_L"
  - "__strncnt"
  - "__sys_errlist"
  - "__sys_nerr"
  - "__threadhandle"
  - "__threadid"
  - "__timezone"
  - "__TypeMatch"
  - "__tzname"
  - "__unDName"
  - "__unDNameEx"
  - "__unDNameHelper"
  - "__unguarded_readlc_active"
  - "_unloaddll"
  - "_unlock_locales"
  - "_vacopy"
  - "_ValidateExecute"
  - "_ValidateRead"
  - "_ValidateWrite"
  - "_VCrtDbgReportA"
  - "_VCrtDbgReportW"
  - "_W_Getdays"
  - "_W_Getmonths"
  - "_W_Getnames"
  - "_wassert"
  - "_Wcsftime"
  - "__wcsncnt"
  - "__winitenv"
  - "_wsopen_dispatch"
  - "__C_specific_handler"
apilocation: 
  - "api-ms-win-crt-math-l1-1-0.dll"
  - "api-ms-win-crt-heap-l1-1-0.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
  - "api-ms-win-crt-locale-l1-1-0.dll"
  - "api-ms-win-core-crt-l1-1-0.dll"
  - "api-ms-win-crt-time-l1-1-0.dll"
  - "api-ms-win-crt-process-l1-1-0.dll"
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
  - "api-ms-win-crt-private-l1-1-0.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
  - "api-ms-win-crt-conio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__acrt_iob_func"
  - "__AdjustPointer"
  - "_assert"
  - "__badioinfo"
  - "__BuildCatchObject"
  - "__BuildCatchObjectHelper"
  - "_calloc_base"
  - "_chkesp"
  - "_chvalidator"
  - "_chvalidator_l"
  - "_CIacos"
  - "_CIasin"
  - "_CIcosh"
  - "_CIsinh"
  - "_CItanh"
  - "__clean_type_info_names_internal"
  - "_commode"
  - "_configure_narrow_argv"
  - "_configure_wide_argv"
  - "__conio_common_vcprintf"
  - "__conio_common_vcprintf_p"
  - "__conio_common_vcprintf_s"
  - "__conio_common_vcscanf"
  - "__conio_common_vcwprintf"
  - "__conio_common_vcwprintf_p"
  - "__conio_common_vcwprintf_s"
  - "__conio_common_vcwscanf"
  - "__CppXcptFilter"
  - "__create_locale"
  - "_crt_at_quick_exit"
  - "_crt_atexit"
  - "_crtAssertBusy"
  - "_crtBreakAlloc"
  - "__crtCompareStringA"
  - "__crtCompareStringEx"
  - "__crtCompareStringW"
  - "__crtCreateEventExW"
  - "__crtCreateSemaphoreExW"
  - "__crtCreateSymbolicLinkW"
  - "__crtEnumSystemLocalesEx"
  - "__crtFlsAlloc"
  - "__crtFlsFree"
  - "__crtFlsGetValue"
  - "__crtFlsSetValue"
  - "_CrtGetCheckCount"
  - "__crtGetDateFormatEx"
  - "__crtGetFileInformationByHandleEx"
  - "__crtGetLocaleInfoEx"
  - "__crtGetShowWindowMode"
  - "__crtGetTickCount64"
  - "__crtGetTimeFormatEx"
  - "__crtGetUserDefaultLocaleName"
  - "__crtInitializeCriticalSectionEx"
  - "__crtIsPackagedApp"
  - "__crtIsValidLocaleName"
  - "__crtLCMapStringA"
  - "__crtLCMapStringEx"
  - "_CrtSetCheckCount"
  - "_CrtSetDbgBlockType"
  - "__crtSetFileInformationByHandle"
  - "__crtSetThreadStackGuarantee"
  - "__crtSetUnhandledExceptionFilter"
  - "__crtSleep"
  - "__crtTerminateProcess"
  - "__crtUnhandledException"
  - "__CxxDetectRethrow"
  - "__CxxExceptionFilter"
  - "__CxxFrameHandler2"
  - "__CxxFrameHandler3"
  - "__CxxLongjmpUnwind"
  - "__CxxQueryExceptionSize"
  - "__CxxRegisterExceptionObject"
  - "__CxxUnregisterExceptionObject"
  - "__daylight"
  - "_dclass"
  - "__DestructExceptionObject"
  - "__doserrno"
  - "_dosmaperr"
  - "_dpcomp"
  - "_dsign"
  - "__dstbias"
  - "_dtest"
  - "_EH_prolog"
  - "_errno"
  - "_except_handler2"
  - "_except_handler4_common"
  - "_except1"
  - "_fdclass"
  - "_fdpcomp"
  - "_fdsign"
  - "_fdtest"
  - "_filbuf"
  - "_FindAndUnlinkFrame"
  - "_flsbuf"
  - "__fpe_flt_rounds"
  - "_FPE_Raise"
  - "__fpecode"
  - "__FrameUnwindFilter"
  - "_fread_nolock_s"
  - "_free_base"
  - "__free_locale"
  - "_freea_s"
  - "_freefls"
  - "_ftol"
  - "__get_current_locale"
  - "__get_flsindex"
  - "_get_initial_narrow_environment"
  - "_get_initial_wide_environment"
  - "_get_narrow_winmain_command_line"
  - "_get_stream_buffer_pointers"
  - "__get_tlsindex"
  - "_get_wide_winmain_command_line"
  - "_Getdays"
  - "_Getmonths"
  - "__GetPlatformExceptionInfo"
  - "_getptd"
  - "_Gettnames"
  - "_global_unwind2"
  - "_inconsistency"
  - "__initenv"
  - "_initialize_lconv_for_unsigned_char"
  - "_initialize_narrow_environment"
  - "_initialize_wide_environment"
  - "_initptd"
  - "_invalid_parameter"
  - "_invoke_watson"
  - "__iob_func"
  - "_IsExceptionObjectToBeDestroyed"
  - "__lconv"
  - "__lconv_init"
  - "_ldclass"
  - "_ldpcomp"
  - "_ldsign"
  - "_ldtest"
  - "__libm_sse2_acos"
  - "_libm_sse2_acos_precise"
  - "__libm_sse2_acosf"
  - "__libm_sse2_asin"
  - "_libm_sse2_asin_precise"
  - "__libm_sse2_asinf"
  - "__libm_sse2_atan"
  - "_libm_sse2_atan_precise"
  - "__libm_sse2_atan2"
  - "__libm_sse2_atanf"
  - "__libm_sse2_cos"
  - "_libm_sse2_cos_precise"
  - "__libm_sse2_cosf"
  - "__libm_sse2_exp"
  - "_libm_sse2_exp_precise"
  - "__libm_sse2_expf"
  - "__libm_sse2_log"
  - "_libm_sse2_log_precise"
  - "__libm_sse2_log10"
  - "_libm_sse2_log10_precise"
  - "__libm_sse2_log10f"
  - "__libm_sse2_logf"
  - "__libm_sse2_pow"
  - "_libm_sse2_pow_precise"
  - "__libm_sse2_powf"
  - "__libm_sse2_sin"
  - "_libm_sse2_sin_precise"
  - "__libm_sse2_sinf"
  - "_libm_sse2_sqrt_precise"
  - "__libm_sse2_tan"
  - "_libm_sse2_tan_precise"
  - "__libm_sse2_tanf"
  - "_local_unwind4"
  - "_lock_locales"
  - "_longjmpex"
  - "_malloc_base"
  - "_mbctype"
  - "_NLG_Dispatch2"
  - "_NLG_Return"
  - "_NLG_Return2"
  - "__p___argc"
  - "__p___argv"
  - "__p___initenv"
  - "__p___wargv"
  - "__p___winitenv"
  - "__p__acmdln"
  - "__p__crtAssertBusy"
  - "__p__crtBreakAlloc"
  - "__p__crtDbgFlag"
  - "__p__daylight"
  - "__p__dstbias"
  - "__p__environ"
  - "__p__iob"
  - "__p__mbcasemap"
  - "__p__mbctype"
  - "__p__pctype"
  - "__p__pgmptr"
  - "__p__pwctype"
  - "__p__timezone"
  - "__p__tzname"
  - "__p__wcmdln"
  - "__p__wenviron"
  - "__p__wpgmptr"
  - "_pctype"
  - "__pioinfo"
  - "_pwctype"
  - "__pwctype_func"
  - "__pxcptinfoptrs"
  - "_realloc_base"
  - "_register_thread_local_exe_atexit_callback"
  - "__report_gsfailure"
  - "__RTCastToVoid"
  - "__RTtypeid"
  - "_seh_filter_dll"
  - "_seh_filter_exe"
  - "_seh_longjmp_unwind"
  - "_seh_longjmp_unwind4"
  - "_set_malloc_crt_max_wait"
  - "__setlc_active"
  - "_SetWinRTOutOfMemoryExceptionCallback"
  - "_sopen_dispatch"
  - "__stdio_common_vfprintf"
  - "__stdio_common_vfprintf_p"
  - "__stdio_common_vfprintf_s"
  - "__stdio_common_vfscanf"
  - "__stdio_common_vfwprintf"
  - "__stdio_common_vfwprintf_p"
  - "__stdio_common_vfwprintf_s"
  - "__stdio_common_vfwscanf"
  - "__stdio_common_vsnprintf_s"
  - "__stdio_common_vsnwprintf_s"
  - "__stdio_common_vsprintf"
  - "__stdio_common_vsprintf_p"
  - "__stdio_common_vsprintf_s"
  - "__stdio_common_vsscanf"
  - "__stdio_common_vswprintf"
  - "__stdio_common_vswprintf_p"
  - "__stdio_common_vswprintf_s"
  - "__stdio_common_vswscanf"
  - "_Strftime"
  - "__STRINGTOLD"
  - "__STRINGTOLD_L"
  - "__strncnt"
  - "__sys_errlist"
  - "__sys_nerr"
  - "__threadhandle"
  - "__threadid"
  - "__timezone"
  - "__TypeMatch"
  - "__tzname"
  - "__unDName"
  - "__unDNameEx"
  - "__unDNameHelper"
  - "__unguarded_readlc_active"
  - "_unloaddll"
  - "_unlock_locales"
  - "_vacopy"
  - "_ValidateExecute"
  - "_ValidateRead"
  - "_ValidateWrite"
  - "_VCrtDbgReportA"
  - "_VCrtDbgReportW"
  - "_W_Getdays"
  - "_W_Getmonths"
  - "_W_Getnames"
  - "_wassert"
  - "_Wcsftime"
  - "__wcsncnt"
  - "__winitenv"
  - "_wsopen_dispatch"
  - "__C_specific_handler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__acrt_iob_func"
  - "__AdjustPointer"
  - "_assert"
  - "__badioinfo"
  - "__BuildCatchObject"
  - "__BuildCatchObjectHelper"
  - "_calloc_base"
  - "_chkesp"
  - "_chvalidator"
  - "_chvalidator_l"
  - "_CIacos"
  - "_CIasin"
  - "_CIcosh"
  - "_CIsinh"
  - "_CItanh"
  - "__clean_type_info_names_internal"
  - "_commode"
  - "_configure_narrow_argv"
  - "_configure_wide_argv"
  - "__conio_common_vcprintf"
  - "__conio_common_vcprintf_p"
  - "__conio_common_vcprintf_s"
  - "__conio_common_vcscanf"
  - "__conio_common_vcwprintf"
  - "__conio_common_vcwprintf_p"
  - "__conio_common_vcwprintf_s"
  - "__conio_common_vcwscanf"
  - "__CppXcptFilter"
  - "__create_locale"
  - "_crt_at_quick_exit"
  - "_crt_atexit"
  - "_crtAssertBusy"
  - "_crtBreakAlloc"
  - "__crtCompareStringA"
  - "__crtCompareStringEx"
  - "__crtCompareStringW"
  - "__crtCreateEventExW"
  - "__crtCreateSemaphoreExW"
  - "__crtCreateSymbolicLinkW"
  - "__crtEnumSystemLocalesEx"
  - "__crtFlsAlloc"
  - "__crtFlsFree"
  - "__crtFlsGetValue"
  - "__crtFlsSetValue"
  - "_CrtGetCheckCount"
  - "__crtGetDateFormatEx"
  - "__crtGetFileInformationByHandleEx"
  - "__crtGetLocaleInfoEx"
  - "__crtGetShowWindowMode"
  - "__crtGetTickCount64"
  - "__crtGetTimeFormatEx"
  - "__crtGetUserDefaultLocaleName"
  - "__crtInitializeCriticalSectionEx"
  - "__crtIsPackagedApp"
  - "__crtIsValidLocaleName"
  - "__crtLCMapStringA"
  - "__crtLCMapStringEx"
  - "_CrtSetCheckCount"
  - "_CrtSetDbgBlockType"
  - "__crtSetFileInformationByHandle"
  - "__crtSetThreadStackGuarantee"
  - "__crtSetUnhandledExceptionFilter"
  - "__crtSleep"
  - "__crtTerminateProcess"
  - "__crtUnhandledException"
  - "__CxxDetectRethrow"
  - "__CxxExceptionFilter"
  - "__CxxFrameHandler2"
  - "__CxxFrameHandler3"
  - "__CxxLongjmpUnwind"
  - "__CxxQueryExceptionSize"
  - "__CxxRegisterExceptionObject"
  - "__CxxUnregisterExceptionObject"
  - "__daylight"
  - "_dclass"
  - "__DestructExceptionObject"
  - "__doserrno"
  - "_dosmaperr"
  - "_dpcomp"
  - "_dsign"
  - "__dstbias"
  - "_dtest"
  - "_EH_prolog"
  - "_errno"
  - "_except_handler2"
  - "_except_handler4_common"
  - "_except1"
  - "_fdclass"
  - "_fdpcomp"
  - "_fdsign"
  - "_fdtest"
  - "_filbuf"
  - "_FindAndUnlinkFrame"
  - "_flsbuf"
  - "__fpe_flt_rounds"
  - "_FPE_Raise"
  - "__fpecode"
  - "__FrameUnwindFilter"
  - "_fread_nolock_s"
  - "_free_base"
  - "__free_locale"
  - "_freea_s"
  - "_freefls"
  - "_ftol"
  - "__get_current_locale"
  - "__get_flsindex"
  - "_get_initial_narrow_environment"
  - "_get_initial_wide_environment"
  - "_get_narrow_winmain_command_line"
  - "_get_stream_buffer_pointers"
  - "__get_tlsindex"
  - "_get_wide_winmain_command_line"
  - "_Getdays"
  - "_Getmonths"
  - "__GetPlatformExceptionInfo"
  - "_getptd"
  - "_Gettnames"
  - "_global_unwind2"
  - "_inconsistency"
  - "__initenv"
  - "_initialize_lconv_for_unsigned_char"
  - "_initialize_narrow_environment"
  - "_initialize_wide_environment"
  - "_initptd"
  - "_invalid_parameter"
  - "_invoke_watson"
  - "__iob_func"
  - "_IsExceptionObjectToBeDestroyed"
  - "__lconv"
  - "__lconv_init"
  - "_ldclass"
  - "_ldpcomp"
  - "_ldsign"
  - "_ldtest"
  - "__libm_sse2_acos"
  - "_libm_sse2_acos_precise"
  - "__libm_sse2_acosf"
  - "__libm_sse2_asin"
  - "_libm_sse2_asin_precise"
  - "__libm_sse2_asinf"
  - "__libm_sse2_atan"
  - "_libm_sse2_atan_precise"
  - "__libm_sse2_atan2"
  - "__libm_sse2_atanf"
  - "__libm_sse2_cos"
  - "_libm_sse2_cos_precise"
  - "__libm_sse2_cosf"
  - "__libm_sse2_exp"
  - "_libm_sse2_exp_precise"
  - "__libm_sse2_expf"
  - "__libm_sse2_log"
  - "_libm_sse2_log_precise"
  - "__libm_sse2_log10"
  - "_libm_sse2_log10_precise"
  - "__libm_sse2_log10f"
  - "__libm_sse2_logf"
  - "__libm_sse2_pow"
  - "_libm_sse2_pow_precise"
  - "__libm_sse2_powf"
  - "__libm_sse2_sin"
  - "_libm_sse2_sin_precise"
  - "__libm_sse2_sinf"
  - "_libm_sse2_sqrt_precise"
  - "__libm_sse2_tan"
  - "_libm_sse2_tan_precise"
  - "__libm_sse2_tanf"
  - "_local_unwind4"
  - "_lock_locales"
  - "_longjmpex"
  - "_malloc_base"
  - "_mbctype"
  - "_NLG_Dispatch2"
  - "_NLG_Return"
  - "_NLG_Return2"
  - "__p___argc"
  - "__p___argv"
  - "__p___initenv"
  - "__p___wargv"
  - "__p___winitenv"
  - "__p__acmdln"
  - "__p__crtAssertBusy"
  - "__p__crtBreakAlloc"
  - "__p__crtDbgFlag"
  - "__p__daylight"
  - "__p__dstbias"
  - "__p__environ"
  - "__p__iob"
  - "__p__mbcasemap"
  - "__p__mbctype"
  - "__p__pctype"
  - "__p__pgmptr"
  - "__p__pwctype"
  - "__p__timezone"
  - "__p__tzname"
  - "__p__wcmdln"
  - "__p__wenviron"
  - "__p__wpgmptr"
  - "_pctype"
  - "__pioinfo"
  - "_pwctype"
  - "__pwctype_func"
  - "__pxcptinfoptrs"
  - "_realloc_base"
  - "_register_thread_local_exe_atexit_callback"
  - "__report_gsfailure"
  - "__RTCastToVoid"
  - "__RTtypeid"
  - "_seh_filter_dll"
  - "_seh_filter_exe"
  - "_seh_longjmp_unwind"
  - "_seh_longjmp_unwind4"
  - "_set_malloc_crt_max_wait"
  - "__setlc_active"
  - "_SetWinRTOutOfMemoryExceptionCallback"
  - "_sopen_dispatch"
  - "__stdio_common_vfprintf"
  - "__stdio_common_vfprintf_p"
  - "__stdio_common_vfprintf_s"
  - "__stdio_common_vfscanf"
  - "__stdio_common_vfwprintf"
  - "__stdio_common_vfwprintf_p"
  - "__stdio_common_vfwprintf_s"
  - "__stdio_common_vfwscanf"
  - "__stdio_common_vsnprintf_s"
  - "__stdio_common_vsnwprintf_s"
  - "__stdio_common_vsprintf"
  - "__stdio_common_vsprintf_p"
  - "__stdio_common_vsprintf_s"
  - "__stdio_common_vsscanf"
  - "__stdio_common_vswprintf"
  - "__stdio_common_vswprintf_p"
  - "__stdio_common_vswprintf_s"
  - "__stdio_common_vswscanf"
  - "_Strftime"
  - "__STRINGTOLD"
  - "__STRINGTOLD_L"
  - "__strncnt"
  - "__sys_errlist"
  - "__sys_nerr"
  - "__threadhandle"
  - "__threadid"
  - "__timezone"
  - "__TypeMatch"
  - "__tzname"
  - "__unDName"
  - "__unDNameEx"
  - "__unDNameHelper"
  - "__unguarded_readlc_active"
  - "_unloaddll"
  - "_unlock_locales"
  - "_vacopy"
  - "_ValidateExecute"
  - "_ValidateRead"
  - "_ValidateWrite"
  - "_VCrtDbgReportA"
  - "_VCrtDbgReportW"
  - "_W_Getdays"
  - "_W_Getmonths"
  - "_W_Getnames"
  - "_wassert"
  - "_Wcsftime"
  - "__wcsncnt"
  - "__winitenv"
  - "_wsopen_dispatch"
  - "__C_specific_handler"
ms.assetid: 99a27f11-fa5a-449e-bfbb-aab578d1cc4f
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Funzioni e globali CRT interni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria di runtime C \(CRT\) include funzioni e variabili globali usate solo per il supporto dell'interfaccia della libreria pubblica. Alcune di esse vengono esposte in intestazioni pubbliche come dettagli relativi all'implementazione. Sebbene queste funzioni e variabili globali siano accessibili mediante esportazioni pubbliche, non sono destinate all'uso nel codice da parte degli sviluppatori. È consigliabile modificare eventuale codice che usa queste funzioni e variabili in modo da usare gli equivalenti dalla libreria pubblica. Queste funzioni possono variare a seconda della versione e sono elencate di seguito per facilitarne l'identificazione. Quando esiste documentazione aggiuntiva, vengono specificati i relativi collegamenti, ma in generale questi dettagli di implementazione non vengono documentati.  
  
## Macro di valore e variabili globali interne di CRT  
 Queste variabili globali e definizioni di macro vengono usate per implementare CRT.  
  
|Nome|  
|----------|  
|\_\_badioinfo|  
|[\_acmdln](../c-runtime-library/acmdln-tcmdln-wcmdln.md)|  
|\_commode|  
|\_crtAssertBusy|  
|\_crtBreakAlloc|  
|\_\_initenv|  
|\_\_lconv|  
|[\_\_mb\_cur\_max](../c-runtime-library/mb-cur-max-func-mb-cur-max-l-func-p-mb-cur-max-mb-cur-max.md)|  
|\_\_pioinfo|  
|\_\_unguarded\_readlc\_active|  
|[\_wcmdln](../c-runtime-library/acmdln-tcmdln-wcmdln.md)|  
|\_\_winitenv|  
  
## Funzioni e macro di funzione interne di CRT  
 Queste funzioni e macro di funzione vengono usate per implementare la libreria CRT e la libreria standard di C\+\+ \(STL\).  
  
|Nome|  
|----------|  
|\_\_acrt\_iob\_func|  
|\_\_AdjustPointer|  
|\_assert|  
|\_\_BuildCatchObject|  
|\_\_BuildCatchObjectHelper|  
|\_\_C\_specific\_handler|  
|\_calloc\_base|  
|\_chkesp|  
|\_chvalidator|  
|\_chvalidator\_l|  
|\_CIacos|  
|\_CIasin|  
|[\_CIatan](../c-runtime-library/ciatan.md)|  
|[\_CIatan2](../c-runtime-library/ciatan2.md)|  
|[\_CIcos](../c-runtime-library/cicos.md)|  
|\_CIcosh|  
|[\_CIexp](../c-runtime-library/ciexp.md)|  
|[\_CIfmod](../c-runtime-library/cifmod.md)|  
|[\_CIlog](../c-runtime-library/cilog.md)|  
|[\_CIlog10](../c-runtime-library/cilog10.md)|  
|[\_CIpow](../c-runtime-library/cipow.md)|  
|[\_CIsin](../c-runtime-library/cisin.md)|  
|\_CIsinh|  
|[\_CIsqrt](../c-runtime-library/cisqrt.md)|  
|[\_CItan](../c-runtime-library/citan.md)|  
|\_CItanh|  
|\_\_clean\_type\_info\_names\_internal|  
|\_configure\_narrow\_argv|  
|\_configure\_wide\_argv|  
|\_\_conio\_common\_vcprintf|  
|\_\_conio\_common\_vcprintf\_p|  
|\_\_conio\_common\_vcprintf\_s|  
|\_\_conio\_common\_vcscanf|  
|\_\_conio\_common\_vcwprintf|  
|\_\_conio\_common\_vcwprintf\_p|  
|\_\_conio\_common\_vcwprintf\_s|  
|\_\_conio\_common\_vcwscanf|  
|\_\_CppXcptFilter|  
|\_\_create\_locale|  
|\_crt\_atexit|  
|\_crt\_at\_quick\_exit|  
|\_\_crtCompareStringA|  
|\_\_crtCompareStringEx|  
|\_\_crtCompareStringW|  
|\_\_crtCreateEventExW|  
|\_\_crtCreateSemaphoreExW|  
|\_\_crtCreateSymbolicLinkW|  
|\_\_crtEnumSystemLocalesEx|  
|\_\_crtFlsAlloc|  
|\_\_crtFlsFree|  
|\_\_crtFlsGetValue|  
|\_\_crtFlsSetValue|  
|\_CrtGetCheckCount|  
|\_\_crtGetDateFormatEx|  
|\_\_crtGetFileInformationByHandleEx|  
|\_\_crtGetLocaleInfoEx|  
|\_\_crtGetShowWindowMode|  
|\_\_crtGetTickCount64|  
|\_\_crtGetTimeFormatEx|  
|\_\_crtGetUserDefaultLocaleName|  
|\_\_crtInitializeCriticalSectionEx|  
|\_\_crtIsPackagedApp|  
|\_\_crtIsValidLocaleName|  
|\_\_crtLCMapStringA|  
|\_\_crtLCMapStringEx|  
|[\_\_crtLCMapStringW](../c-runtime-library/crtlcmapstringw.md)|  
|\_CrtSetCheckCount|  
|\_CrtSetDbgBlockType|  
|\_\_crtSetFileInformationByHandle|  
|\_\_crtSetThreadStackGuarantee|  
|\_\_crtSetUnhandledExceptionFilter|  
|\_\_crtSleep|  
|\_\_crtTerminateProcess|  
|\_\_crtUnhandledException|  
|\_\_CxxDetectRethrow|  
|\_\_CxxExceptionFilter|  
|[\_\_CxxFrameHandler](../c-runtime-library/cxxframehandler.md)|  
|\_\_CxxFrameHandler2|  
|\_\_CxxFrameHandler3|  
|\_\_CxxLongjmpUnwind|  
|\_\_CxxQueryExceptionSize|  
|\_\_CxxRegisterExceptionObject|  
|\_\_CxxUnregisterExceptionObject|  
|\_\_daylight|  
|\_dclass|  
|\_\_DestructExceptionObject|  
|[\_\_dllonexit](../c-runtime-library/dllonexit.md)|  
|\_\_doserrno|  
|\_dosmaperr|  
|\_dpcomp|  
|\_dsign|  
|\_\_dstbias|  
|\_dtest|  
|\_EH\_prolog|  
|\_errno|  
|\_except\_handler2|  
|[\_except\_handler3](../c-runtime-library/except-handler3.md)|  
|\_except\_handler4\_common|  
|\_except1|  
|[\_execute\_onexit\_table](../Topic/_execute_onexit_table,%20_initialize_onexit_table,%20_register_onexit_function.md)|  
|\_fdclass|  
|\_fdpcomp|  
|\_fdsign|  
|\_fdtest|  
|\_filbuf|  
|\_FindAndUnlinkFrame|  
|\_flsbuf|  
|\_\_fpe\_flt\_rounds|  
|\_FPE\_Raise|  
|\_\_fpecode|  
|\_\_FrameUnwindFilter|  
|\_fread\_nolock\_s|  
|\_free\_base|  
|\_\_free\_locale|  
|\_freea\_s|  
|\_freefls|  
|\_ftol|  
|\_\_get\_current\_locale|  
|\_\_get\_flsindex|  
|\_get\_initial\_narrow\_environment|  
|\_get\_initial\_wide\_environment|  
|\_get\_narrow\_winmain\_command\_line|  
|\_get\_stream\_buffer\_pointers|  
|\_\_get\_tlsindex|  
|\_get\_wide\_winmain\_command\_line|  
|\_Getdays|  
|[\_\_getmainargs](../c-runtime-library/getmainargs-wgetmainargs.md)|  
|\_Getmonths|  
|\_\_GetPlatformExceptionInfo|  
|\_getptd|  
|\_Gettnames|  
|\_global\_unwind2|  
|\_inconsistency|  
|\_initialize\_lconv\_for\_unsigned\_char|  
|\_initialize\_narrow\_environment|  
|[\_initialize\_onexit\_table](../Topic/_execute_onexit_table,%20_initialize_onexit_table,%20_register_onexit_function.md)|  
|\_initialize\_wide\_environment|  
|\_initptd|  
|\_invalid\_parameter|  
|\_invoke\_watson|  
|\_\_iob\_func|  
|\_IsExceptionObjectToBeDestroyed|  
|[\_\_\_lc\_codepage\_func](../c-runtime-library/lc-codepage-func.md)|  
|[\_\_\_lc\_collate\_cp\_func](../c-runtime-library/lc-collate-cp-func.md)|  
|[\_\_\_lc\_locale\_name\_func](../c-runtime-library/lc-locale-name-func.md)|  
|\_\_lconv\_init|  
|\_ldclass|  
|\_ldpcomp|  
|\_ldsign|  
|\_ldtest|  
|\_\_libm\_sse2\_acos|  
|\_libm\_sse2\_acos\_precise|  
|\_\_libm\_sse2\_acosf|  
|\_\_libm\_sse2\_asin|  
|\_libm\_sse2\_asin\_precise|  
|\_\_libm\_sse2\_asinf|  
|\_\_libm\_sse2\_atan|  
|\_libm\_sse2\_atan\_precise|  
|\_\_libm\_sse2\_atan2|  
|\_\_libm\_sse2\_atanf|  
|\_\_libm\_sse2\_cos|  
|\_libm\_sse2\_cos\_precise|  
|\_\_libm\_sse2\_cosf|  
|\_\_libm\_sse2\_exp|  
|\_libm\_sse2\_exp\_precise|  
|\_\_libm\_sse2\_expf|  
|\_\_libm\_sse2\_log|  
|\_libm\_sse2\_log\_precise|  
|\_\_libm\_sse2\_log10|  
|\_libm\_sse2\_log10\_precise|  
|\_\_libm\_sse2\_log10f|  
|\_\_libm\_sse2\_logf|  
|\_\_libm\_sse2\_pow|  
|\_libm\_sse2\_pow\_precise|  
|\_\_libm\_sse2\_powf|  
|\_\_libm\_sse2\_sin|  
|\_libm\_sse2\_sin\_precise|  
|\_\_libm\_sse2\_sinf|  
|\_libm\_sse2\_sqrt\_precise|  
|\_\_libm\_sse2\_tan|  
|\_libm\_sse2\_tan\_precise|  
|\_\_libm\_sse2\_tanf|  
|[\_local\_unwind2](../c-runtime-library/local-unwind2.md)|  
|\_local\_unwind4|  
|\_lock\_locales|  
|\_longjmpex|  
|\_malloc\_base|  
|[\_\_\_mb\_cur\_max\_func](../c-runtime-library/mb-cur-max-func-mb-cur-max-l-func-p-mb-cur-max-mb-cur-max.md)|  
|[\_\_\_mb\_cur\_max\_l\_func](../c-runtime-library/mb-cur-max-func-mb-cur-max-l-func-p-mb-cur-max-mb-cur-max.md)|  
|\_mbctype|  
|\_NLG\_Dispatch2|  
|\_NLG\_Return|  
|\_NLG\_Return2|  
|\_\_p\_\_\_argc|  
|\_\_p\_\_\_argv|  
|\_\_p\_\_\_initenv|  
|[\_\_p\_\_\_mb\_cur\_max](../c-runtime-library/mb-cur-max-func-mb-cur-max-l-func-p-mb-cur-max-mb-cur-max.md)|  
|\_\_p\_\_\_wargv|  
|\_\_p\_\_\_winitenv|  
|\_\_p\_\_acmdln|  
|[\_\_p\_\_commode](../c-runtime-library/p-commode.md)|  
|\_\_p\_\_crtAssertBusy|  
|\_\_p\_\_crtBreakAlloc|  
|\_\_p\_\_crtDbgFlag|  
|\_\_p\_\_daylight|  
|\_\_p\_\_dstbias|  
|\_\_p\_\_environ|  
|[\_\_p\_\_fmode](../c-runtime-library/p-fmode.md)|  
|\_\_p\_\_iob|  
|\_\_p\_\_mbcasemap|  
|\_\_p\_\_mbctype|  
|\_\_p\_\_pctype|  
|\_\_p\_\_pgmptr|  
|\_\_p\_\_pwctype|  
|\_\_p\_\_timezone|  
|\_\_p\_\_tzname|  
|\_\_p\_\_wcmdln|  
|\_\_p\_\_wenviron|  
|\_\_p\_\_wpgmptr|  
|\_pctype|  
|[\_\_pctype\_func](../c-runtime-library/pctype-func.md)|  
|\_pwctype|  
|\_\_pwctype\_func|  
|\_\_pxcptinfoptrs|  
|\_realloc\_base|  
|[\_register\_onexit\_function](../Topic/_execute_onexit_table,%20_initialize_onexit_table,%20_register_onexit_function.md)|  
|\_register\_thread\_local\_exe\_atexit\_callback|  
|\_\_report\_gsfailure|  
|\_\_RTCastToVoid|  
|[\_\_RTDynamicCast](../c-runtime-library/rtdynamiccast.md)|  
|\_\_RTtypeid|  
|\_seh\_filter\_dll|  
|\_seh\_filter\_exe|  
|\_seh\_longjmp\_unwind|  
|\_seh\_longjmp\_unwind4|  
|[\_\_set\_app\_type](../c-runtime-library/internal-set-app-type.md)|  
|\_set\_malloc\_crt\_max\_wait|  
|[\_setjmp3](../c-runtime-library/setjmp3.md)|  
|\_\_setlc\_active|  
|[\_\_\_setlc\_active\_func](../c-runtime-library/setlc-active-func-unguarded-readlc-active-add-func.md)|  
|[\_\_setusermatherr](../c-runtime-library/setusermatherr.md)|  
|\_SetWinRTOutOfMemoryExceptionCallback|  
|\_sopen\_dispatch|  
|\_\_stdio\_common\_vfprintf|  
|\_\_stdio\_common\_vfprintf\_p|  
|\_\_stdio\_common\_vfprintf\_s|  
|\_\_stdio\_common\_vfscanf|  
|\_\_stdio\_common\_vfwprintf|  
|\_\_stdio\_common\_vfwprintf\_p|  
|\_\_stdio\_common\_vfwprintf\_s|  
|\_\_stdio\_common\_vfwscanf|  
|\_\_stdio\_common\_vsnprintf\_s|  
|\_\_stdio\_common\_vsnwprintf\_s|  
|\_\_stdio\_common\_vsprintf|  
|\_\_stdio\_common\_vsprintf\_p|  
|\_\_stdio\_common\_vsprintf\_s|  
|\_\_stdio\_common\_vsscanf|  
|\_\_stdio\_common\_vswprintf|  
|\_\_stdio\_common\_vswprintf\_p|  
|\_\_stdio\_common\_vswprintf\_s|  
|\_\_stdio\_common\_vswscanf|  
|\_Strftime|  
|\_\_STRINGTOLD|  
|\_\_STRINGTOLD\_L|  
|\_\_strncnt|  
|\_\_sys\_errlist|  
|\_\_sys\_nerr|  
|\_\_threadhandle|  
|\_\_threadid|  
|\_\_timezone|  
|\_\_TypeMatch|  
|\_\_tzname|  
|\_\_unDName|  
|\_\_unDNameEx|  
|\_\_unDNameHelper|  
|\_\_unguarded\_readlc\_active|  
|[\_\_\_unguarded\_readlc\_active\_add\_func](../c-runtime-library/setlc-active-func-unguarded-readlc-active-add-func.md)|  
|\_unloaddll|  
|\_unlock\_locales|  
|\_vacopy|  
|\_ValidateExecute|  
|\_ValidateRead|  
|\_ValidateWrite|  
|\_VCrtDbgReportA|  
|\_VCrtDbgReportW|  
|\_W\_Getdays|  
|\_W\_Getmonths|  
|\_W\_Getnames|  
|\_wassert|  
|\_Wcsftime|  
|\_\_wcsncnt|  
|[\_\_wgetmainargs](../c-runtime-library/getmainargs-wgetmainargs.md)|  
|\_wsopen\_dispatch|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)