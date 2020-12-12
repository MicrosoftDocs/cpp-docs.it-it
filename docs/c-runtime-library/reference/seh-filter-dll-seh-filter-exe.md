---
description: 'Altre informazioni su: _seh_filter_dll, _seh_filter_exe'
title: _seh_filter_dll, _seh_filter_exe
ms.date: 4/2/2020
api_name:
- _XcptFilter
- _seh_filter_dll
- _seh_filter_exe
- _o__seh_filter_dll
- _o__seh_filter_exe
api_location:
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- XcptFilter
- _XcptFilter
- _seh_filter_dll
- _seh_filter_exe
- corecrt_startup/_seh_filter_exe
- corecrt_startup/_seh_filter_dll
helpviewer_keywords:
- XcptFilter function
- _XcptFilter function
- _seh_filter_dll function
- _seh_filter_exe function
ms.assetid: 747e5963-3a12-4bf5-b5c4-d4c1b6068e15
ms.openlocfilehash: f1f297e0ace4a342dcc7370472c1ff1e9f409ce5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288932"
---
# <a name="_seh_filter_dll-_seh_filter_exe"></a>_seh_filter_dll, _seh_filter_exe

Identifica l'eccezione e la relativa azione da intraprendere.

## <a name="syntax"></a>Sintassi

```C
int __cdecl _seh_filter_dll(
   unsigned long _ExceptionNum,
   struct _EXCEPTION_POINTERS* _ExceptionPtr
);
int __cdecl _seh_filter_exe(
   unsigned long _ExceptionNum,
   struct _EXCEPTION_POINTERS* _ExceptionPtr
);
```

### <a name="parameters"></a>Parametri

*_ExceptionNum*<br/>
Identificatore dell'eccezione.

*_ExceptionPtr*<br/>
Puntatore alle informazioni sull'eccezione.

## <a name="return-value"></a>Valore restituito

Un intero che indica l'azione da intraprendere in base al risultato dell'elaborazione delle eccezioni.

## <a name="remarks"></a>Commenti

Questi metodi vengono chiamati dall'espressione di filtro eccezioni di [try-except Statement](../../cpp/try-except-statement.md). Il metodo consulta una tabella interna di costanti per identificare l'eccezione e determinare l'azione appropriata, come illustrato di seguito. I numeri di eccezione sono definiti in winnt.h e i numeri di segnale in signal.h.

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

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** corecrt_startup.h

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
