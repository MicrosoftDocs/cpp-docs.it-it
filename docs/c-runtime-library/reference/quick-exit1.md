---
title: "quick_exit | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "quick_exit"
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
  - "quick_exit"
  - "process/quick_exit"
  - "stdlib/quick_exit"
dev_langs: 
  - "C"
  - "C++"
helpviewer_keywords: 
  - "funzione quick_exit"
ms.assetid: ecfbdae6-01c4-45fa-aaeb-b368e1de2a9c
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# quick_exit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Causa la normale chiusura del programma.  
  
## Sintassi  
  
```  
__declspec(noreturn) void quick_exit(  
    int status  
);  
```  
  
#### Parametri  
 status  
 Codice di stato da restituire all'ambiente host.  
  
## Valore restituito  
 La funzione `quick_exit` non può essere restituita al relativo chiamante.  
  
## Note  
 La funzione `quick_exit` causa la normale chiusura del programma. Non chiama le funzioni registrate da `atexit`, `_onexit` o dai gestori di segnale registrati dalla funzione `signal`. Il comportamento non è definito se `quick_exit` viene chiamato più di una volta o se viene chiamata anche la funzione `exit`.  
  
 La funzione `quick_exit` chiama, in ordine LIFO \(Last\-In, First\-Out\), le funzioni registrate da `at_quick_exit`, tranne quelle già chiamate durante la registrazione della funzione.  Il comportamento non è definito se viene eseguita una chiamata a [longjmp](../../c-runtime-library/reference/longjmp.md) durante una chiamata a una funzione registrata che interrompe la chiamata alla funzione.  
  
 Dopo aver chiamato le funzioni registrate, `quick_exit` richiama `_Exit` usando il valore `status` per restituire il controllo all'ambiente host.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`quick_exit`|\<process.h\> o \<stdlib.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [\_onexit, \_onexit\_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, \_wsystem](../../c-runtime-library/reference/system-wsystem.md)