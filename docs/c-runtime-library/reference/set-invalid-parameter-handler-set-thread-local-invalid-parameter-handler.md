---
title: "set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler | Microsoft Docs"
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
  - "_set_invalid_parameter_handler"
  - "_set_thread_local_invalid_parameter_handler"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "set_invalid_parameter_handler"
  - "_set_invalid_parameter_handler"
  - "_set_thread_local_invalid_parameter_handler"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "gestore di parametri non validi"
  - "set_invalid_parameter_handler (funzione)"
  - "_set_invalid_parameter_handler (funzione)"
  - "funzione _set_thread_local_invalid_parameter_handler"
ms.assetid: c0e67934-1a41-4016-ad8e-972828f3ac11
caps.latest.revision: 27
caps.handback.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta una funzione da chiamare quando CRT rileva un argomento non valido.  
  
## Sintassi  
  
```  
_invalid_parameter_handler _set_invalid_parameter_handler(  
   _invalid_parameter_handler pNew  
);  
_invalid_parameter_handler _set_thread_local_invalid_parameter_handler(  
   _invalid_parameter_handler pNew  
);  
```  
  
#### Parametri  
 \[in\] `pNew`  
 Il puntatore a funzione al nuovo gestore di parametro non valido.  
  
## Valore restituito  
 Un puntatore al gestore di parametro non valido prima della chiamata.  
  
## Note  
 Molte funzioni di runtime C verificano la validità degli argomenti passati a essi. Se un argomento non valido viene passato, la funzione può impostare il numero di errore `errno` o restituire un codice di errore. In tali casi, viene chiamato anche il gestore di parametro non valido. Il runtime C fornisce un gestore di parametro non valido globale predefinito che termina il programma e viene visualizzato un messaggio di errore di runtime. È possibile utilizzare il `_set_invalid_parameter_handler` per impostare una funzione come gestore globale di parametri non validi. Il runtime C supporta anche un gestore di parametro non valido di thread locale. Se è stato impostato un gestore di parametro locale di thread in un thread utilizzando `_set_thread_local_invalid_parameter_handler`, le funzioni di runtime C chiamate dal thread dell'utilizzano del gestore anziché il gestore errori globale. Solo una funzione può essere specificata come gestore di argomento non valido globale alla volta. Solo una funzione può essere specificata come gestore di argomento non valido locale di thread per ogni thread, ma diversi thread può avere diversi gestori locale di thread. In questo modo è possibile modificare il gestore utilizzato in una parte del codice senza modificare il comportamento di altri thread.  
  
 Quando il runtime chiama la funzione di parametro non valido, in genere significa che si è verificato un errore irreversibile. La funzione del gestore di parametro non valido che è fornire deve salvare tutti i dati possono e quindi verrà interrotta. Non deve restituire il controllo alla funzione principale a meno che non si sia certi che l'errore è reversibile.  
  
 La funzione del gestione di parametro non valido deve avere il seguente prototipo:  
  
```c  
void _invalid_parameter(  
   const wchar_t * expression,  
   const wchar_t * function,   
   const wchar_t * file,   
   unsigned int line,  
   uintptr_t pReserved  
);  
```  
  
 Il `expression` argomento è una rappresentazione di stringa di caratteri estesi dell'espressione argomento che ha generato l'errore. Il `function` argomento è il nome della funzione CRT che ha ricevuto l'argomento non valido. Il `file` argomento è il nome del file di origine CRT che contiene la funzione. Il `line` argomento è il numero di riga in tale file. L'ultimo argomento è riservato. I parametri hanno tutti il valore `NULL` a meno che una versione di debug della libreria CRT non venga utilizzata.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_set_invalid_parameter_handler`, `_set_thread_local_invalid_parameter_handler`|C: \< STDLIB. h \><br /><br /> C\+\+: \< cstdlib \> o \< STDLIB. h \>|  
  
 Il `_set_invalid_parameter_handler` e `_set_thread_local_invalid_parameter_handler` funzioni sono specifici di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Nell'esempio seguente, un gestore errori di parametro non valido viene utilizzato per stampare la funzione che ha ricevuto il parametro non valido e il file e la riga nelle origini CRT. Quando viene utilizzata la libreria di debug CRT, gli errori di parametro non valido generano anche un'asserzione che è disabilitata in questo esempio utilizzando [\_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md).  
  
```c  
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
Parametro non valido rilevato nella funzione common_vfprintf. File: minkernel\crts\ucrt\src\appcrt\stdio\output.cpp riga: espressione 32: formato! = nullptr  
```  
  
## Vedere anche  
 [\_get\_invalid\_parameter\_handler, \_get\_thread\_local\_invalid\_parameter\_handler](../../c-runtime-library/reference/get-invalid-parameter-handler-get-thread-local-invalid-parameter-handler.md)   
 [Versioni con sicurezza avanzata delle funzioni CRT](../../c-runtime-library/security-enhanced-versions-of-crt-functions.md)   
 [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)