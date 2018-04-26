---
title: _get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _get_invalid_parameter_handler
- _get_thread_local_invalid_parameter_handler
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
- _get_invalid_parameter_handler
- stdlib/_get_invalid_parameter_handler
- _get_thread_local_invalid_parameter_handler
- stdlib/_get_thread_local_invalid_parameter_handler
dev_langs:
- C++
helpviewer_keywords:
- _get_thread_local_invalid_parameter_handler function
- _get_invalid_parameter_handler function
ms.assetid: a176da0e-38ca-4d99-92bb-b0e2b8072f53
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9a3e4df593e027c77909f6d3d1ea7c7a106799a9
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="getinvalidparameterhandler-getthreadlocalinvalidparameterhandler"></a>_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler

Ottiene la funzione chiamata quando CRT rileva un argomento non valido.

## <a name="syntax"></a>Sintassi

```C
_invalid_parameter_handler _get_invalid_parameter_handler(void);
_invalid_parameter_handler _get_thread_local_invalid_parameter_handler(void);
```

## <a name="return-value"></a>Valore restituito

Un puntatore alla funzione del gestore di parametri non validi o un puntatore Null se non è stata impostata.

## <a name="remarks"></a>Note

Il **_get_invalid_parameter_handler** funzione Ottiene il gestore di parametri non validi globale. e restituisce un puntatore Null se non è stato impostato alcun gestore di parametri non validi globale. Analogamente, il **_get_thread_local_invalid_parameter_handler** Ottiene il gestore di parametri non validi locali del thread corrente del thread viene chiamato su, o un puntatore null se nessun gestore è stato impostato. Per informazioni su come impostare gestori di parametri non validi globali e thread-local, vedere [set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).

Il puntatore alla funzione del gestore di parametri non validi restituito ha il tipo seguente:

```C
typedef void (__cdecl* _invalid_parameter_handler)(
    wchar_t const*,
    wchar_t const*,
    wchar_t const*,
    unsigned int,
    uintptr_t
    );
```

Per informazioni dettagliate sul gestore di parametri non validi, vedere il prototipo in [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_get_invalid_parameter_handler**, **_get_thread_local_invalid_parameter_handler**|C: \<stdlib.h><br /><br /> C++: \<cstdlib > o \<STDLIB. h >|

Il **_get_invalid_parameter_handler** e **_get_thread_local_invalid_parameter_handler** funzioni sono specifiche di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)<br/>
[Versioni con sicurezza avanzata delle funzioni CRT](../../c-runtime-library/security-enhanced-versions-of-crt-functions.md)<br/>
