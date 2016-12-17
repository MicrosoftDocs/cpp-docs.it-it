---
title: "calloc | Microsoft Docs"
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
  - "calloc"
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
  - "calloc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "allocazione di memoria, matrici"
  - "calloc (funzione)"
ms.assetid: 17bb79a1-98cf-4096-90cb-1f9365cd6829
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# calloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alloca un array in memoria con gli elementi inizializzati a 0.  
  
## Sintassi  
  
```  
void *calloc(   
   size_t num,  
   size_t size   
);  
```  
  
#### Parametri  
 `num`  
 Numero di elementi  
  
 `size`  
 Lunghezza in byte di ogni elemento.  
  
## Valore restituito  
 `calloc` restituisce un puntatore allo spazio allocato.  Lo spazio di memoria puntato da un valore di ritorno garantisce l'archiviazione di ogni tipo di oggetto.  Per ottenere un puntatore a un tipo diverso da `void`, utilizzare un cast di tipo sul valore restituito.  
  
## Note  
 La funzione `calloc` alloca spazio di memoria per un array di elementi `num`, ognuno con byte di lunghezza `size`.  Ogni elemento viene inizializzato a 0.  
  
 `calloc` imposta `errno` a `ENOMEM` se un'allocazione della memoria fallisce o se la quantità di memoria richiesta supera `_HEAP_MAXREQ`.  Per informazioni su questi e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 La funzione `malloc` richiama `calloc` per utilizzare la funzione C\+\+ [\_set\_new\_mode](../../c-runtime-library/reference/set-new-mode.md) per impostare la nuova modalità di gestione.  La nuova modalità del gestore indica che, in caso di errore, `malloc` deve richiamare la nuova routine del gestore come imposto da [\_set\_new\_handler](../../c-runtime-library/reference/set-new-handler.md).  Per impostazione predefinita, `malloc` non richiama la nuova routine di gestione in caso di errore nell'allocare memoria.  È possibile eseguire l'override di questo comportamento predefinito in modo che, quando `calloc` non riesce ad allocare memoria, `malloc` richiami la nuova routine del gestore allo stesso modo di come accade con l'operatore `new` quando si verifica il medesimo errore.  Per eseguire l'override del comportamento predefinito, chiamare  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma, o collegare con NEWMODE.OBJ \(vedere [Opzioni collegamento](../../c-runtime-library/link-options.md)\).  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C, `calloc` viene identificato come [\_calloc\_dbg](../../c-runtime-library/reference/calloc-dbg.md).  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [L'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 `calloc` è contrassegnata in `__declspec(noalias)` e `__declspec(restrict)`, pertanto la funzione garantisce che le variabili globali non vengono modificate, e che il puntatore restituito è già utilizzato.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md) e [limiti](../../cpp/restrict.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`calloc`|\<stdlib.h\> e \<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_calloc.c  
// This program uses calloc to allocate space for  
// 40 long integers. It initializes each element to zero.  
  
#include <stdio.h>  
#include <malloc.h>  
  
int main( void )  
{  
   long *buffer;  
  
   buffer = (long *)calloc( 40, sizeof( long ) );  
   if( buffer != NULL )  
      printf( "Allocated 40 long integers\n" );  
   else  
      printf( "Can't allocate memory\n" );  
   free( buffer );  
}  
```  
  
  **Allocati 40 long integer**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)