---
title: _seh_filter_dll, _seh_filter_exe | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _XcptFilter
- _seh_filter_dll
- _seh_filter_exe
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- XcptFilter
- _XcptFilter
- _seh_filter_dll
- _seh_filter_exe
- corecrt_startup/_seh_filter_exe
- corecrt_startup/_seh_filter_dll
dev_langs: C++
helpviewer_keywords:
- XcptFilter function
- _XcptFilter function
- _seh_filter_dll function
- _seh_filter_exe function
ms.assetid: 747e5963-3a12-4bf5-b5c4-d4c1b6068e15
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 677e203e552dfa2f057cb0631d73c9f48349c4b4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="sehfilterdll-sehfilterexe"></a>_seh_filter_dll, _seh_filter_exe
Identifica l'eccezione e la relativa azione da intraprendere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int __cdecl _seh_filter_dll(  
   unsigned long _ExceptionNum,  
   struct _EXCEPTION_POINTERS* _ExceptionPtr  
);  
int __cdecl _seh_filter_exe(  
   unsigned long _ExceptionNum,  
   struct _EXCEPTION_POINTERS* _ExceptionPtr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `_ExceptionNum`  
 Identificatore dell'eccezione.  
  
 [in] `_ExceptionPtr`  
 Puntatore alle informazioni sull'eccezione.  
  
## <a name="return-value"></a>Valore restituito  
 Un intero che indica l'azione da intraprendere in base al risultato dell'elaborazione delle eccezioni.  
  
## <a name="remarks"></a>Note  
 Questi metodi vengono chiamati dall'espressione di filtro delle eccezioni dell'[istruzione try-except](../../cpp/try-except-statement.md). Il metodo consulta una tabella interna di costanti per identificare l'eccezione e determinare l'azione appropriata, come illustrato di seguito. I numeri di eccezione sono definiti in winnt.h e i numeri di segnale in signal.h.  
  
|Numero di eccezioni (unsigned long)|Numero di segnale|  
|----------------------------------------|-------------------|  
|STATUS_ACCESS_VIOLATION|SIGSEGV|  
|STATUS_ILLEGAL_INSTRUCTION|SIGILL|  
|STATUS_PRIVILEGED_INSTRUCTION|SIGILL|  
|STATUS_FLOAT_DENORMAL_OPERAND|SIGFPE|  
|STATUS_FLOAT_DIVIDE_BY_ZERO|SIGFPE|  
|STATUS_FLOAT_INEXACT_RESULT|SIGFPE|  
|STATUS_FLOAT_INVALID_OPERATION|SIGFPE|  
|STATUS_FLOAT_OVERFLOW|SIGFPE|  
|STATUS_FLOAT_STACK_CHECK|SIGFPE|  
|STATUS_FLOAT_UNDERFLOW|SIGFPE|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corecrt_startup.h  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)