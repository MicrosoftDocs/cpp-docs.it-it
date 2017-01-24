---
title: "_heapchk | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_heapchk"
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
  - "api-ms-win-crt-heap-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_heapchk"
  - "heapchk"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_heapchk (funzione)"
  - "controllo della coerenza degli heap"
  - "debug [CRT], problemi di heap"
  - "heapchk (funzione)"
  - "host in interfacce [hosting interfaces], controllo della coerenza"
ms.assetid: 859619a5-1e35-4f02-9e09-11d9fa266ec0
caps.latest.revision: 13
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _heapchk
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Esegue controlli di consistenza sull'heap.  
  
## Sintassi  
  
```  
int _heapchk( void );  
```  
  
## Valore restituito  
 `_heapchk` restituisce una delle seguenti costanti del manifesto dell'intero definite in Malloc.h.  
  
 `_HEAPBADBEGIN`  
 Le informazioni di intestazione iniziali sono errate o non possono essere trovate.  
  
 `_HEAPBADNODE`  
 È stato trovato un nodo non valido o l'heap è danneggiato.  
  
 `_HEAPBADPTR`  
 Il puntatore nell'heap non è valido.  
  
 `_HEAPEMPTY`  
 L'heap non è stata inizializzato.  
  
 `_HEAPOK`  
 L'heap sembra essere consistente.  
  
 Inoltre, se si verifica un errore, `_heapchk` imposta `errno` a `ENOSYS`.  
  
## Note  
 La funzione `_heapchk` aiuta ad eseguire il debug di problemi relativi all'heap verificando la coerenza minima dell'heap.  Se il sistema operativo non supporta `_heapchk`\(ad esempio Windows 98\), la funzione restituisce `_HEAPOK` e imposta `errno` a `ENOSYS`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_heapchk`|\<malloc.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_heapchk.c  
// This program checks the heap for  
// consistency and prints an appropriate message.  
  
#include <malloc.h>  
#include <stdio.h>  
  
int main( void )  
{  
   int  heapstatus;  
   char *buffer;  
  
   // Allocate and deallocate some memory  
   if( (buffer = (char *)malloc( 100 )) != NULL )  
      free( buffer );  
  
   // Check heap status  
   heapstatus = _heapchk();  
   switch( heapstatus )  
   {  
   case _HEAPOK:  
      printf(" OK - heap is fine\n" );  
      break;  
   case _HEAPEMPTY:  
      printf(" OK - heap is empty\n" );  
      break;  
   case _HEAPBADBEGIN:  
      printf( "ERROR - bad start of heap\n" );  
      break;  
   case _HEAPBADNODE:  
      printf( "ERROR - bad node in heap\n" );  
      break;  
   }  
}  
```  
  
  **OK \- l'heap è a posto**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [\_heapadd](../../c-runtime-library/heapadd.md)   
 [\_heapmin](../../c-runtime-library/reference/heapmin.md)   
 [\_heapset](../../c-runtime-library/heapset.md)   
 [\_heapwalk](../../c-runtime-library/reference/heapwalk.md)