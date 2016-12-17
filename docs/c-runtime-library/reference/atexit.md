---
title: "atexit | Microsoft Docs"
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
  - "atexit"
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
apitype: "DLLExport"
f1_keywords: 
  - "atexit"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "atexit (funzione)"
  - "elaborazione, uscita"
ms.assetid: 92c156d2-8052-4e58-96dc-00128baac6f9
caps.latest.revision: 12
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# atexit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Elabora la funzione specificata all'uscita.  
  
## Sintassi  
  
```  
int atexit(  
   void (__cdecl *func )( void )  
);  
```  
  
#### Parametri  
 `func`  
 Funzione da chiamare.  
  
## Valore restituito  
 `atexit` restituisce 0 in caso di esito positivo, o un valore diverso da zero se si verifica un errore.  
  
## Note  
 Alla funzione `atexit` viene passato l'indirizzo di una funzione \(`func`\) da chiamare quando il programma termina normalmente.  Le chiamate successive a `atexit` creano un registro di funzioni che vengono eseguite sulla base dell'ordine LIFO \(last\-in, first\-out\).  Le funzioni passate a `atexit` non accettano parametri.  `atexit` e `_onexit` utilizzano l'heap per mantenere il registro delle funzioni.  Pertanto, il numero delle funzioni che possono essere registrate è limitato solo dalla memoria heap.  
  
 Il codice nella funzione `atexit` non deve contenere alcuna dipendenza da qualsiasi DLL che può ancora essere scaricata quando viene chiamata la funzione `atexit`.  
  
 Per generare un'applicazione conforme a ANSI, utilizzare la funzione standard ANSI `atexit` \(anziché la funzione simile `_onexit`\).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`atexit`|\<stdlib.h\>|  
  
## Esempio  
 Questo programma fa in modo che vengano eseguite quattro funzioni dello stack di funzioni quando viene chiamato `atexit`.  Al termine del programma, questi programmi vengono eseguiti sulla base dell'ordine LIFO \(last\-in, first\-out\).  
  
```  
// crt_atexit.c  
#include <stdlib.h>  
#include <stdio.h>  
  
void fn1( void ), fn2( void ), fn3( void ), fn4( void );  
  
int main( void )  
{  
   atexit( fn1 );  
   atexit( fn2 );  
   atexit( fn3 );  
   atexit( fn4 );  
   printf( "This is executed first.\n" );  
}  
  
void fn1()  
{  
   printf( "next.\n" );  
}  
  
void fn2()  
{  
   printf( "executed " );  
}  
  
void fn3()  
{  
   printf( "is " );  
}  
  
void fn4()  
{  
   printf( "This " );  
}  
```  
  
  **Questa operazione viene eseguita per prima.**  
**Questa operazione verrà eseguita successivamente.**   
## Equivalente .NET Framework  
 [System::Diagnostics::Process::Exited](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.exited.aspx)  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [\_onexit, \_onexit\_m](../../c-runtime-library/reference/onexit-onexit-m.md)