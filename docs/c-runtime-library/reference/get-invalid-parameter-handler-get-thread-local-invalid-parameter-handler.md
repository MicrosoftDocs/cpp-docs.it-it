---
title: "_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_invalid_parameter_handler"
  - "_get_thread_local_invalid_parameter_handler"
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
  - "_get_invalid_parameter_handler"
  - "stdlib/_get_invalid_parameter_handler"
  - "_get_thread_local_invalid_parameter_handler"
  - "stdlib/_get_thread_local_invalid_parameter_handler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione _get_thread_local_invalid_parameter_handler"
  - "funzione _get_invalid_parameter_handler"
ms.assetid: a176da0e-38ca-4d99-92bb-b0e2b8072f53
caps.latest.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 3
---
# _get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la funzione che viene chiamata quando CRT rileva un argomento non valido.  
  
## Sintassi  
  
```  
_invalid_parameter_handler _get_invalid_parameter_handler(void);  
_invalid_parameter_handler _get_thread_local_invalid_parameter_handler(void);  
```  
  
## Valore restituito  
 Un puntatore per il gestore di parametro non valido o un puntatore null se non è stata impostata.  
  
## Note  
 Il `_get_invalid_parameter_handler` funzione Ottiene il gestore di parametro non valido globale. Restituisce un puntatore null se nessun gestore di parametro non valido globale è stato impostato. Analogamente, il `_get_thread_local_invalid_parameter_handler` Ottiene il gestore di parametro non valido locali del thread corrente del thread viene chiamato su, o un puntatore null se nessun gestore è stato impostato. Per informazioni su come impostare gestori di parametro non valido globale e locale di thread, vedere [set\_invalid\_parameter\_handler, \_set\_thread\_local\_invalid\_parameter\_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).  
  
 Puntatore a funzione gestore di parametro non valido restituito ha i seguenti tipi:  
  
```c  
typedef void (__cdecl* _invalid_parameter_handler)(  
    wchar_t const*,  
    wchar_t const*,  
    wchar_t const*,   
    unsigned int,  
    uintptr_t  
    );  
```  
  
 Per informazioni dettagliate sul gestore di parametro non valido, vedere il prototipo in [set\_invalid\_parameter\_handler, \_set\_thread\_local\_invalid\_parameter\_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_invalid_parameter_handler`, `_get_thread_local_invalid_parameter_handler`|C: \< STDLIB. h \><br /><br /> C\+\+: \< cstdlib \> o \< STDLIB. h \>|  
  
 Il `_get_invalid_parameter_handler` e `_get_thread_local_invalid_parameter_handler` funzioni sono specifici di Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [set\_invalid\_parameter\_handler, \_set\_thread\_local\_invalid\_parameter\_handler](../../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md)   
 [Versioni con sicurezza avanzata delle funzioni CRT](../../c-runtime-library/security-enhanced-versions-of-crt-functions.md)