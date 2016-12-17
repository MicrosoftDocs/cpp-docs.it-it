---
title: "_recalloc | Microsoft Docs"
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
  - "_recalloc"
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
  - "_recalloc"
  - "recalloc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_recalloc (funzione)"
  - "recalloc (funzione)"
ms.assetid: 1db8305a-3f03-418c-8844-bf9149f63046
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _recalloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Combinazione di `realloc` e `calloc`.  Rialloca un array in memoria e inizializza gli elementi a 0.  
  
## Sintassi  
  
```  
void *_recalloc(   
   void *memblock  
   size_t num,  
   size_t size   
);  
```  
  
#### Parametri  
 `memblock`  
 Puntatore al blocco di memoria allocato precedentemente.  
  
 `num`  
 Numero di elementi  
  
 `size`  
 Lunghezza in byte di ogni elemento.  
  
## Valore restituito  
 `_recalloc` restituisce un puntatore a `void` \(ed eventualmente spostato\) al blocco di memoria riallocato.  
  
 Se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata, il blocco originale rimane invariato e viene `NULL`.  
  
 Se la dimensione richiesta è zero, il blocco puntato da `memblock` viene liberato; il valore restituito è `NULL`e `memblock` punta al blocco liberato.  
  
 I valore restituito punta ad uno spazio di memoria che garantisce l'allineamento adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Per ottenere un puntatore a un tipo diverso da `void`, utilizzare un cast di tipo sul valore restituito.  
  
## Note  
 La funzione \_`recalloc` modifica la dimensione di un blocco di memoria allocata.  Il parametro `memblock` punta all'inizio del blocco di memoria.  Se `memblock` è `NULL`, \_`recalloc` si comporta allo stesso modo di [calloc](../../c-runtime-library/reference/calloc.md) e assegna un nuovo blocco di `num` \* byte `size`.  Ogni elemento viene inizializzato a 0.  Se `memblock` non è `NULL`, deve essere un puntatore restituito da una chiamata precedente a `calloc`, a [malloc](../../c-runtime-library/reference/malloc.md), o a [realloc](../../c-runtime-library/reference/realloc.md).  
  
 Poiché il nuovo blocco può trovarsi in una nuova posizione di memoria, il puntatore restituito da \_`recalloc` non è detto che sia lo stesso puntatore passato tramite il parametro `memblock`.  
  
 `_recalloc` imposta `errno` a `ENOMEM` se l'allocazione della memoria non riesce o se la quantità di memoria richiesta supera `_HEAP_MAXREQ`.  Per informazioni su questi e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 La funzione `realloc` richiama `recalloc` per utilizzare la funzione C\+\+ [\_set\_new\_mode](../../c-runtime-library/reference/set-new-mode.md) per impostare la nuova modalità di gestione.  La nuova modalità del gestore indica che, in caso di errore, `realloc` deve richiamare la nuova routine del gestore come imposto da [\_set\_new\_handler](../../c-runtime-library/reference/set-new-handler.md).  Per impostazione predefinita, `realloc` non richiama la nuova routine di gestione in caso di errore nell'allocare memoria.  È possibile eseguire l'override di questo comportamento predefinito in modo che, quando \_`recalloc` non riesce ad allocare memoria, `realloc` richiami la nuova routine del gestore allo stesso modo di come accade con l'operatore `new` quando si verifica il medesimo errore.  Per eseguire l'override del comportamento predefinito, chiamare  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma programma o collegare con NEWMODE.OBJ.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime del linguaggio C,`recalloc` viene identificata come [\_recalloc\_dbg](../../c-runtime-library/reference/recalloc-dbg.md).  Per ulteriori informazioni su come viene gestito l'heap durante il processo di debug, vedere [L'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
 `_recalloc` è contrassegnata in `__declspec(noalias)` e `__declspec(restrict)`, pertanto la funzione garantisce che le variabili globali non vengono modificate, e che il puntatore restituito è già utilizzato.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md) e [limiti](../../cpp/restrict.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_recalloc`|\<stdlib.h\> e \<malloc.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)   
 [\_recalloc\_dbg](../../c-runtime-library/reference/recalloc-dbg.md)   
 [\_aligned\_recalloc](../../c-runtime-library/reference/aligned-recalloc.md)   
 [\_aligned\_offset\_recalloc](../../c-runtime-library/reference/aligned-offset-recalloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [Opzioni collegamento](../../c-runtime-library/link-options.md)