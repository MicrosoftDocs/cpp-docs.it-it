---
title: _set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _set_invalid_parameter_handler
- _set_thread_local_invalid_parameter_handler
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
- set_invalid_parameter_handler
- _set_invalid_parameter_handler
- _set_thread_local_invalid_parameter_handler
dev_langs:
- C++
helpviewer_keywords:
- invalid parameter handler
- set_invalid_parameter_handler function
- _set_invalid_parameter_handler function
- _set_thread_local_invalid_parameter_handler function
ms.assetid: c0e67934-1a41-4016-ad8e-972828f3ac11
caps.latest.revision: 27
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 359bf6e7e6cde4c34f93f538d47721f5c30af298
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="setinvalidparameterhandler-setthreadlocalinvalidparameterhandler"></a>_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler

Imposta una funzione da chiamare quando CRT rileva un argomento non valido.

## <a name="syntax"></a>Sintassi

```C
_invalid_parameter_handler _set_invalid_parameter_handler(
   _invalid_parameter_handler pNew
);
_invalid_parameter_handler _set_thread_local_invalid_parameter_handler(
   _invalid_parameter_handler pNew
);
```

### <a name="parameters"></a>Parametri

*pNew*<br/>
Il puntatore a funzione al nuovo gestore di parametro non valido.

## <a name="return-value"></a>Valore restituito

Un puntatore al gestore di parametro non valido prima della chiamata.

## <a name="remarks"></a>Note

Molte funzioni di runtime C verificano la validità degli argomenti passati. Se viene passato un argomento non valido, la funzione può impostare il **errno** numero di errore o restituire un codice di errore. In tali casi, viene chiamato anche il gestore di parametro non valido. Il runtime C include un gestore di parametri non validi globale predefinito che termina il programma e visualizza un messaggio di errore di runtime. È possibile usare il **set_invalid_parameter_handler** per impostare la propria funzione come gestore globale di parametri non validi. Il runtime C supporta anche un gestore di parametri non validi thread-local. Se è impostato un gestore di parametro locale di thread in un thread utilizzando **_set_thread_local_invalid_parameter_handler**, le funzioni di runtime C chiamate dal thread dell'utilizzano tale gestore anziché il gestore globale. Solo una funzione per volta può essere specificata come gestore di argomenti non validi globale. È possibile specificare una sola funzione come gestore di argomenti non validi thread-local per ogni thread, ma thread diversi possono avere gestori thread-local differenti. In questo modo è possibile modificare il gestore usato in una parte del codice senza effetti sul comportamento di altri thread.

Quando il runtime chiama la funzione di gestione dei parametri non validi, in genere significa che si è verificato un errore irreversibile. La funzione di gestione dei parametri non validi specificata deve salvare tutti i dati possibili e quindi verrà interrotta. Non deve restituire il controllo alla funzione principale a meno che non si sia certi che l'errore è reversibile.

La funzione del gestione di parametro non valido deve avere il seguente prototipo:

```C
void _invalid_parameter(
   const wchar_t * expression,
   const wchar_t * function,
   const wchar_t * file,
   unsigned int line,
   uintptr_t pReserved
);
```

Il *espressione* argomento è una rappresentazione di stringa "wide" l'espressione dell'argomento che ha generato l'errore. Il *funzione* argomento è il nome della funzione CRT che ha ricevuto l'argomento non valido. Il *file* argomento è il nome del file di origine CRT che contiene la funzione. Il *riga* argomento è il numero di riga in tale file. L'ultimo argomento è riservato. I parametri hanno tutti il valore **NULL** a meno che non viene utilizzata una versione di debug della libreria CRT.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**set_invalid_parameter_handler**, **_set_thread_local_invalid_parameter_handler**|C: \<stdlib.h><br /><br /> C++: \<cstdlib > o \<STDLIB. h >|

Il **set_invalid_parameter_handler** e **_set_thread_local_invalid_parameter_handler** funzioni sono specifiche di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Nell'esempio seguente, un gestore errori di parametro non valido viene utilizzato per stampare la funzione che ha ricevuto il parametro non valido e il file e la riga nelle origini CRT. Quando viene usata la libreria CRT di debug, gli errori di parametri non validi generano anche un'asserzione che viene disabilitata in questo esempio usando [_CrtSetReportMode](crtsetreportmode.md).

```C
// crt_set_invalid_parameter_handler.c
// compile with: /Zi /MTd
#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>  // For _CrtSetReportMode

void myInvalidParameterHandler(const wchar_t* expression,
   const wchar_t* function,
   const wchar_t* file,
   unsigned int line,
   uintptr_t pReserved)
{
   wprintf(L"Invalid parameter detected in function %s."
            L" File: %s Line: %d\n", function, file, line);
   wprintf(L"Expression: %s\n", expression);
   abort();
}

int main( )
{
   char* formatString;

   _invalid_parameter_handler oldHandler, newHandler;
   newHandler = myInvalidParameterHandler;
   oldHandler = _set_invalid_parameter_handler(newHandler);

   // Disable the message box for assertions.
   _CrtSetReportMode(_CRT_ASSERT, 0);

   // Call printf_s with invalid parameters.

   formatString = NULL;
   printf(formatString);
}
```

```Output
Invalid parameter detected in function common_vfprintf. File: minkernel\crts\ucrt\src\appcrt\stdio\output.cpp Line: 32
Expression: format != nullptr
```

## <a name="see-also"></a>Vedere anche

[_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler](get-invalid-parameter-handler-get-thread-local-invalid-parameter-handler.md)<br/>
[Versioni con sicurezza avanzata delle funzioni CRT](../../c-runtime-library/security-enhanced-versions-of-crt-functions.md)<br/>
[errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)<br/>
