---
title: "_seh_filter_dll, _seh_filter_exe | Microsoft Docs"
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
  - "_XcptFilter"
  - "_seh_filter_dll"
  - "_seh_filter_exe"
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
  - "XcptFilter"
  - "_XcptFilter"
  - "_seh_filter_dll"
  - "_seh_filter_exe"
  - "corecrt_startup/_seh_filter_exe"
  - "corecrt_startup/_seh_filter_dll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "XcptFilter (funzione)"
  - "_XcptFilter (funzione)"
  - "_seh_filter_dll (funzione)"
  - "_seh_filter_exe (funzione)"
ms.assetid: 747e5963-3a12-4bf5-b5c4-d4c1b6068e15
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _seh_filter_dll, _seh_filter_exe
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Identifica l'eccezione e la relativa azione da intraprendere.  
  
## Sintassi  
  
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
  
#### Parametri  
 \[in\] `_ExceptionNum`  
 Identificatore dell'eccezione.  
  
 \[in\] `_ExceptionPtr`  
 Puntatore alle informazioni sull'eccezione.  
  
## Valore restituito  
 Un intero che indica l'azione da intraprendere in base al risultato dell'elaborazione delle eccezioni.  
  
## Note  
 Questi metodi vengono chiamati dall'espressione di filtro eccezioni di [Istruzione try\-except](../../cpp/try-except-statement.md). Il metodo consulta una tabella interna di costanti per identificare l'eccezione e determinare l'azione appropriata, come illustrato di seguito. I numeri di eccezione sono definiti in winnt.h e i numeri di segnale in signal.h.  
  
|Numero di eccezioni \(unsigned long\)|Numero di segnale|  
|-------------------------------------------|-----------------------|  
|STATUS\_ACCESS\_VIOLATION|SIGSEGV|  
|STATUS\_ILLEGAL\_INSTRUCTION|SIGILL|  
|STATUS\_PRIVILEGED\_INSTRUCTION|SIGILL|  
|STATUS\_FLOAT\_DENORMAL\_OPERAND|SIGFPE|  
|STATUS\_FLOAT\_DIVIDE\_BY\_ZERO|SIGFPE|  
|STATUS\_FLOAT\_INEXACT\_RESULT|SIGFPE|  
|STATUS\_FLOAT\_INVALID\_OPERATION|SIGFPE|  
|STATUS\_FLOAT\_OVERFLOW|SIGFPE|  
|STATUS\_FLOAT\_STACK\_CHECK|SIGFPE|  
|STATUS\_FLOAT\_UNDERFLOW|SIGFPE|  
  
## Requisiti  
 **Intestazione:** corecrt\_startup.h  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)