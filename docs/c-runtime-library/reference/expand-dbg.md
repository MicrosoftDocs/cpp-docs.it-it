---
title: "_expand_dbg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_expand_dbg"
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
  - "expand_dbg"
  - "_expand_dbg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "blocchi di memoria, modifica delle dimensioni"
  - "expand_dbg (funzione)"
  - "_expand_dbg (funzione)"
ms.assetid: dc58c91f-72a8-48c6-b643-fe130fb6c1fd
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# _expand_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ridimensiona un blocco di memoria specificato nell'heap espandendo o contraendo il blocco \(solo per versione di debug\).  
  
## Sintassi  
  
```  
void *_expand_dbg(   
   void *userData,  
   size_t newSize,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### Parametri  
 `userData`  
 Puntatore al blocco di memoria allocato precedentemente.  
  
 `newSize`  
 Nuova dimensione richiesta dal blocco \(in byte\).  
  
 `blockType`  
 Tipo richiesto per il blocco ridimensionato: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto di espandere l'operazione o `NULL`.  
  
 `linenumber`  
 Numero di riga del codice sorgente in cui l'operazione di compressione è stata richiesta o `NULL`.  
  
 I parametri `linenumber` `filename` sono disponibili solo quando `_expand_dbg` è stato chiamato in modo esplicito o è stata definita una costante del preprocessore [\_CRTDBG\_MAP\_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md).  
  
## Valore restituito  
 Al termine, `_expand_dbg` restituisce un puntatore al blocco di memoria ridimensionato.  Poiché la memoria non viene spostata, l'indirizzo è lo stesso di userData.  Se si è verificato un errore o il blocco non può essere espanso alla dimensione richiesta, restituisce `NULL`.  Se si verifica un errore, `errno` giunge con informazioni dal sistema operativo sulla natura dell'errore.  Per ulteriori informazioni su `errno`, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_expand_dbg` è una versione di debug della funzione \_[expand](../../c-runtime-library/reference/expand.md).  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_expand_dbg` viene ridotta ad una chiamata a `_expand`.  Sia `_expand` che `_expand_dbg` ridimensionano un blocco di memoria nell'heap di base, ma `_expand_dbg` contiene diverse funzionalità di debug: buffer presenti da entrambi i lati della parte del blocco da verificare per le perdite, un parametro di tipo del blocco per registrare i tipi specifici di allocazioni e informazioni sul `filename`\/`linenumber` per determinare l'origine delle richieste di allocazione.  
  
 `_expand_dbg` ridimensiona il blocco di memoria specificato leggermente con più spazio rispetto a `newSize` richiesto.  `newSize` potrebbe essere maggiore o minore delle dimensioni del blocco di memoria allocata.  Lo spazio aggiuntivo viene utilizzato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire l'applicazione con informazioni di intestazione di debug e sovrascrivere i buffer.  Il ridimensionamento viene soddisfatto espandendo o contraendo il blocco di memoria originale.  `_expand_dbg` non consente di spostare il blocco di memoria, cosa che fa la funzione [\_realloc\_dbg](../../c-runtime-library/reference/realloc-dbg.md).  
  
 Quando `newSize` è superiore alla dimensione di un blocco originale, il blocco di memoria viene espanso.  Durante l'espansione, se il blocco di memoria non può essere espanso per adattarsi alla dimensione richiesta, viene restituito `NULL`.  Quando `newSize` è inferiore alla dimensione di un blocco originale, il blocco di memoria è contratto fino ad ottenere la nuova dimensione.  
  
 Per informazioni su come i blocchi di memoria allocati, vengono inizializzati e vengono gestiti nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  Per informazioni sui tipi di blocchi di allocazione e su come vengono utilizzati, consultare [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la versione di debug in una build di debug di un'applicazione, consultare [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
 Questa funzione convalida i parametri.  Se `memblock` è un puntatore null, o se la dimensione è maggiore di `_HEAP_MAXREQ`, chiamare questa funzione di un gestore non valido di parametro, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e la funzione restituisce `NULL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_expand_dbg`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_expand_dbg.c  
//  
// This program allocates a block of memory using _malloc_dbg  
// and then calls _msize_dbg to display the size of that block.  
// Next, it uses _expand_dbg to expand the amount of  
// memory used by the buffer and then calls _msize_dbg again to  
// display the new amount of memory allocated to the buffer.  
//  
  
#include <stdio.h>  
#include <malloc.h>  
#include <stdlib.h>  
#include <crtdbg.h>  
  
int main( void )  
{  
   long *buffer;  
   size_t size;  
  
   // Call _malloc_dbg to include the filename and line number  
   // of our allocation request in the header  
   buffer = (long *)_malloc_dbg( 40 * sizeof(long),  
                                 _NORMAL_BLOCK, __FILE__, __LINE__ );  
   if( buffer == NULL )  
      exit( 1 );  
  
   // Get the size of the buffer by calling _msize_dbg  
   size = _msize_dbg( buffer, _NORMAL_BLOCK );  
   printf( "Size of block after _malloc_dbg of 40 longs: %u\n", size );  
  
   // Expand the buffer using _expand_dbg and show the new size  
   buffer = (long *)_expand_dbg( buffer, size + sizeof(long),  
                                 _NORMAL_BLOCK, __FILE__, __LINE__ );  
  
   if( buffer == NULL )  
      exit( 1 );  
   size = _msize_dbg( buffer, _NORMAL_BLOCK );  
   printf( "Size of block after _expand_dbg of 1 more long: %u\n",  
           size );  
  
   free( buffer );  
   exit( 0 );  
}  
```  
  
  **Le dimensioni del blocco dopo una \_malloc\_dbg di 40 richieste: 160**  
**Dimensioni del blocco dopo una \_expand\_dbg più lungo di 1: 164**   
## Commento  
 L'output di questo programma dipende dalla capacità del computer di espandere tutte le sezioni.  Se tutte le sezioni vengono espanse, l'output sarà riflesso nella sezione dell'output.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md)