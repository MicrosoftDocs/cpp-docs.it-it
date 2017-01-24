---
title: "_msize_dbg | Microsoft Docs"
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
  - "_msize_dbg"
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
  - "_msize_dbg"
  - "msize_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "blocchi di memoria"
  - "_msize_dbg (funzione)"
  - "msize_dbg (funzione)"
ms.assetid: a333f4b6-f8a2-4e61-bb69-cb34063b8cef
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _msize_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Calcola le dimensioni di un blocco di memoria nell'heap \(solo versione di debug\).  
  
## Sintassi  
  
```  
  
      size_t _msize_dbg(  
   void *userData,  
   int blockType   
);  
```  
  
#### Parametri  
 `userData`  
 Puntatore al blocco di memoria per il quale determinare la dimensione.  
  
 *blockType*  
 Tipo di blocco di memoria specificato: `_CLIENT_BLOCK` o **\_NORMAL\_BLOCK**.  
  
## Valore restituito  
 Al termine, `_msize_dbg` restituisce la dimensione in byte del blocco di memoria specificato; in caso contrario restituisce NULL.  
  
## Note  
 `_msize_dbg` è una versione di debug della funzione \_[msize](../../c-runtime-library/reference/msize.md).  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_msize_dbg` viene ridotta ad una chiamata a `_msize`.  Sia `_msize` che `_msize_dbg` calcola le dimensioni di un blocco di memoria nell'heap di base, ma `_msize_dbg` aggiunge due funzionalità di debug: include i buffer presenti da entrambi i lati della parte del blocco di memoria nella dimensione restituita e consente di eseguire calcoli di dimensioni per i tipi di blocco specifici.  
  
 Per informazioni su come i blocchi di memoria allocati, vengono inizializzati e vengono gestiti nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  Per informazioni sui tipi di blocchi di allocazione e su come vengono utilizzati, consultare [Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la versione di debug in una build di debug di un'applicazione, consultare [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
 Questa funzione convalida il parametro.  Se `memblock` è un puntatore null, `_msize` richiama un gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'errore viene gestito, la funzione imposta `errno` a `EINVAL` e restituisce \-1.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_msize_dbg`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_msize_dbg.c  
// compile with: /MTd  
/*  
 * This program allocates a block of memory using _malloc_dbg  
 * and then calls _msize_dbg to display the size of that block.  
 * Next, it uses _realloc_dbg to expand the amount of  
 * memory used by the buffer and then calls _msize_dbg again to  
 * display the new amount of memory allocated to the buffer.  
 */  
  
#include <stdio.h>  
#include <malloc.h>  
#include <stdlib.h>  
#include <crtdbg.h>  
  
int main( void )  
{  
        long *buffer, *newbuffer;  
        size_t size;  
  
        /*   
         * Call _malloc_dbg to include the filename and line number  
         * of our allocation request in the header  
         */  
        buffer = (long *)_malloc_dbg( 40 * sizeof(long), _NORMAL_BLOCK, __FILE__, __LINE__ );  
        if( buffer == NULL )  
               exit( 1 );  
  
        /*   
         * Get the size of the buffer by calling _msize_dbg  
         */  
        size = _msize_dbg( buffer, _NORMAL_BLOCK );  
        printf( "Size of block after _malloc_dbg of 40 longs: %u\n", size );  
  
        /*   
         * Reallocate the buffer using _realloc_dbg and show the new size  
         */  
        newbuffer = _realloc_dbg( buffer, size + (40 * sizeof(long)), _NORMAL_BLOCK, __FILE__, __LINE__ );  
        if( newbuffer == NULL )  
               exit( 1 );  
        buffer = newbuffer;  
        size = _msize_dbg( buffer, _NORMAL_BLOCK );  
        printf( "Size of block after _realloc_dbg of 40 more longs: %u\n", size );  
  
        free( buffer );  
        exit( 0 );  
}  
```  
  
## Output  
  
```  
Size of block after _malloc_dbg of 40 longs: 160  
Size of block after _realloc_dbg of 40 more longs: 320  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md)