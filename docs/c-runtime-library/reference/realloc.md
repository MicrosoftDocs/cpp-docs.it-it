---
title: "realloc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "realloc"
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
  - "_brealloc"
  - "_nrealloc"
  - "realloc"
  - "_frealloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_brealloc (funzione)"
  - "realloc (funzione)"
  - "nrealloc (funzione)"
  - "frealloc (funzione)"
  - "_nrealloc (funzione)"
  - "blocchi di memoria, riallocazione"
  - "memoria, riallocazione"
  - "_frealloc (funzione)"
  - "riallocare blocchi di memoria"
ms.assetid: 2b2239de-810b-4b11-9438-32ab0a244185
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# realloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Riallocare blocchi di memoria  
  
## Sintassi  
  
```  
void *realloc(  
   void *memblock,  
   size_t size   
);  
```  
  
#### Parametri  
 `memblock`  
 Puntatore al blocco di memoria allocato precedentemente.  
  
 `size`  
 Nuova dimensione in byte.  
  
## Valore restituito  
 `realloc` restituisce un puntatore a `void` \(ed eventualmente spostato\) al blocco di memoria riallocato.  
  
 Se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata, il blocco originale rimane invariato e viene `NULL`.  
  
 Se `size` è zero, il blocco puntato da `memblock` viene liberato; il valore restituito è `NULL` e `memblock` punta al blocco liberato.  
  
 I valore restituito punta ad uno spazio di memoria che garantisce l'allineamento adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Per ottenere un puntatore a un tipo diverso da `void`, utilizzare un cast di tipo sul valore restituito.  
  
## Note  
 La funzione `realloc` modifica la dimensione di un blocco di memoria allocata.  Il parametro `memblock` punta all'inizio del blocco di memoria.  Se `memblock` è `NULL`, `realloc` si comporta allo stesso modo di `malloc` e alloca un nuovo blocco di `size` byte .  Se `memblock` non è `NULL`, deve essere un puntatore restituito da una chiamata precedente a `calloc`, a `malloc`, o a `realloc`.  
  
 L'argomento di `size` fornisce la nuova dimensione del blocco, in byte.  Il contenuto del blocco è invariato fino alla dimensione più breve tra la nuova e la vecchia, anche se il nuovo blocco può trovarsi in un percorso diverso.  Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, il puntatore restituito da `realloc` non è detto che sia lo stesso puntatore passato tramite l'argomento `memblock`.  `realloc` non azzera la nuova memoria allocata in caso di crescita del buffer.  
  
 `realloc` imposta `errno` a `ENOMEM` se l'allocazione della memoria non riesce o se la quantità di memoria richiesta supera `_HEAP_MAXREQ`.  Per informazioni su questi e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 `realloc` chiama `malloc`per utilizzare la funzione C\+\+ [\_set\_new\_mode](../../c-runtime-library/reference/set-new-mode.md) per impostare la nuova modalità di gestione.  La nuova modalità del gestore indica se, in caso di errore, `malloc` deve richiamare la nuova routine del gestore come imposto da [\_set\_new\_handler](../../c-runtime-library/reference/set-new-handler.md).  Per impostazione predefinita, `malloc` non richiama la nuova routine di gestione in caso di errore nell'allocare memoria.  È possibile eseguire l'override di questo comportamento predefinito affinché, quando `realloc` non riesce ad allocare memoria, `malloc` chiami la nuova routine del gestore allo stesso modo di come avviene con l'operatore `new` quando si verifica il medesimo errore.  Per eseguire l'override del comportamento predefinito, chiamare  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma, o collegare con NEWMODE.OBJ \(vedere [Opzioni collegamento](../../c-runtime-library/link-options.md)\).  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C, `realloc` viene identificato come [\_realloc\_dbg](../../c-runtime-library/reference/realloc-dbg.md).  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [L'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 `realloc` è contrassegnata in `__declspec(noalias)` e `__declspec(restrict)`, pertanto la funzione garantisce che le variabili globali non vengono modificate, e che il puntatore restituito è già utilizzato.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md) e [limiti](../../cpp/restrict.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`realloc`|\<stdlib.h\> e \<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_realloc.c  
// This program allocates a block of memory for  
// buffer and then uses _msize to display the size of that  
// block. Next, it uses realloc to expand the amount of  
// memory used by buffer and then calls _msize again to  
// display the new amount of memory allocated to buffer.  
  
#include <stdio.h>  
#include <malloc.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   long *buffer, *oldbuffer;  
   size_t size;  
  
   if( (buffer = (long *)malloc( 1000 * sizeof( long ) )) == NULL )  
      exit( 1 );  
  
   size = _msize( buffer );  
   printf_s( "Size of block after malloc of 1000 longs: %u\n", size );  
  
   // Reallocate and show new size:  
   oldbuffer = buffer;     // save pointer in case realloc fails  
   if( (buffer = realloc( buffer, size + (1000 * sizeof( long )) ))   
        ==  NULL )  
   {  
      free( oldbuffer );  // free original block  
      exit( 1 );  
   }  
   size = _msize( buffer );  
   printf_s( "Size of block after realloc of 1000 more longs: %u\n",   
            size );  
  
   free( buffer );  
   exit( 0 );  
}  
```  
  
  **Dimensione del blocco dopo una malloc di 1000 long: 4000**  
**Dimensione del blocco dopo un realloc di ulteriori 1000 long: 8000**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)