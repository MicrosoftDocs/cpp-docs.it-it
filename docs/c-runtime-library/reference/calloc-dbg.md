---
title: "_calloc_dbg | Microsoft Docs"
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
  - "_calloc_dbg"
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
  - "_calloc_dbg"
  - "calloc_dbg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_calloc_dbg (funzione)"
  - "calloc_dbg (funzione)"
ms.assetid: 7f62c42b-eb9f-4de5-87d0-df57036c87de
caps.latest.revision: 18
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _calloc_dbg
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alloca una serie di blocchi di memoria nell'heap con ulteriore spazio per un'intestazione di debug e sovrascrive i buffer \(solo per versione di debug\).  
  
## Sintassi  
  
```  
void *_calloc_dbg(   
   size_t num,  
   size_t size,  
   int blockType,  
   const char *filename,  
   int linenumber   
);  
```  
  
#### Parametri  
 `num`  
 Numero di blocchi di memoria richiesto.  
  
 `size`  
 Dimensione richiesta di ciascun blocco di memoria \(byte\).  
  
 `blockType`  
 Tipo richiesto del blocco di memoria: `_CLIENT_BLOCK` o `_NORMAL_BLOCK`.  
  
 Per informazioni sui tipi di blocchi di allocazione e su come vengono utilizzati, consultare[Tipi di blocchi sull'heap di debug](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Types_of_blocks_on_the_debug_heap).  
  
 `filename`  
 Puntatore al nome del file di origine che ha richiesto l'operazione di allocazione o `NULL`.  
  
 `linenumber`  
 Numero di riga del codice sorgente in cui è stata richiesta l'operazione di allocazione o `NULL`..  
  
 I parametri `linenumber` `filename` sono disponibili solo quando `_calloc_dbg` è stato chiamato in modo esplicito o è stata definita una costante del preprocessore [\_CRTDBG\_MAP\_ALLOC](../../c-runtime-library/crtdbg-map-alloc.md).  
  
## Valore restituito  
 Al termine, questa funzione restituisce un puntatore all'utente dell'ultimo blocco di memoria riallocato, chiama la nuova funzione di gestione, o restituisce `NULL`.  Per una descrizione completa sul comportamento di ritorno, consultare le seguenti sezioni relative alle osservazioni.  Per ulteriori informazioni su come la nuova funzione di gestione viene utilizzata, consultare la funzione [calloc](../../c-runtime-library/reference/calloc.md).  
  
## Note  
 `_calloc_dbg` è una versione di debug della funzione [calloc](../../c-runtime-library/reference/calloc.md).  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_calloc_dbg` viene ridotta ad una chiamata a `calloc`.  Sia `calloc` che `_calloc_dbg` allocano i blocchi di memoria `num` nell'heap di base, ma `_calloc_dbg` offre diverse funzionalità di debug:  
  
-   Buffer presenti da entrambi i lati della parte dell'utente del blocco per verificare perdite.  
  
-   Un parametro di tipo del blocco per registrare i tipi specifici di allocazioni.  
  
-   informazioni su `filename`\/`linenumber` per determinare l'origine delle richieste di allocazione.  
  
 `_calloc_dbg` assegna ogni blocco di memoria con più spazio rispetto a `size` richiesto.  Lo spazio aggiuntivo viene utilizzato dal gestore dell'heap di debug per collegare i blocchi di memoria di debug e per fornire l'applicazione con informazioni di intestazione di debug e sovrascrivere i buffer.  Quando il blocco è allocato, una parte di esso viene riempita con il valore 0xCD e ognuno dei buffer sovrascritti viene riempito con 0xFD.  
  
 `_calloc_dbg` imposta `errno` a `ENOMEM` se fallisce un'allocazione di memoria; `EINVAL` viene restituito se la quantità di memoria richiesta \(incluso l'overhead menzionato precedentemente\) supera `_HEAP_MAXREQ`.  Per informazioni su questo e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 Per informazioni su come i blocchi di memoria allocati, vengono inizializzati e vengono gestiti nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  Per informazioni sulle differenze tra chiamare una funzione standard dell'heap verso la propria versione di debug in una build di debug di un'applicazione, consultare [Versioni di debug di funzioni di allocazione heap](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_calloc_dbg`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_callocd.c  
/*  
 * This program uses _calloc_dbg to allocate space for  
 * 40 long integers. It initializes each element to zero.  
 */  
#include <stdio.h>  
#include <malloc.h>  
#include <crtdbg.h>  
  
int main( void )  
{  
        long *bufferN, *bufferC;  
  
        /*   
         * Call _calloc_dbg to include the filename and line number  
         * of our allocation request in the header and also so we can  
         * allocate CLIENT type blocks specifically  
         */  
        bufferN = (long *)_calloc_dbg( 40, sizeof(long), _NORMAL_BLOCK, __FILE__, __LINE__ );  
        bufferC = (long *)_calloc_dbg( 40, sizeof(long), _CLIENT_BLOCK, __FILE__, __LINE__ );  
        if( bufferN != NULL && bufferC != NULL )  
              printf( "Allocated memory successfully\n" );  
        else  
              printf( "Problem allocating memory\n" );  
  
        /*   
         * _free_dbg must be called to free CLIENT type blocks  
         */  
        free( bufferN );  
        _free_dbg( bufferC, _CLIENT_BLOCK );  
}  
```  
  
  **Memoria allocata correttamente**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [\_malloc\_dbg](../../c-runtime-library/reference/malloc-dbg.md)   
 [\_DEBUG](../../c-runtime-library/debug.md)