---
title: "_CrtIsMemoryBlock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtIsMemoryBlock"
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
  - "CrtlsMemoryBlock"
  - "_CrtIsMemoryBlock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtIsMemoryBlock (funzione)"
  - "CrtIsMemoryBlock (funzione)"
ms.assetid: f7cbbc60-3690-4da0-a07b-68fd7f250273
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# _CrtIsMemoryBlock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Verifica che un blocco di memoria specificato sia nell'heap locale con un identificatore valido del tipo di blocco dell'heap di debug \(solo versione di debug\).  
  
## Sintassi  
  
```  
int _CrtIsMemoryBlock(   
   const void *userData,  
   unsigned int size,  
   long *requestNumber,  
   char **filename,  
   int *linenumber   
);  
```  
  
#### Parametri  
 \[in\] `userData`  
 Puntatore all'inizio del blocco di memoria da verificare.  
  
 \[in\] `size`  
 Dimensione del blocco specificato \(in byte\).  
  
 \[out\] `requestNumber`  
 Puntatore al numero di allocazione del blocco o `NULL`.  
  
 \[out\] `filename`  
 Puntatore al nome del file di origine che ha richiesto il blocco o `NULL`.  
  
 \[out\] `linenumber`  
 Puntatore al numero di riga nel file di origine o in `NULL`.  
  
## Valore restituito  
 `_CrtIsMemoryBlock` restituisce `TRUE` se il blocco di memoria specificato si trova all'interno dell'heap locale e presenta un identificatore valido del tipo di blocco dell'heap di debug; in caso contrario, la funzione restituisce `FALSE`.  
  
## Note  
 La funzione `_CrtIsMemoryBlock` verifica che un blocco di memoria specificato sia presente nell'heap locale dell'applicazione con un identificatore valido a blocchi.  Questa funzione può essere utilizzata per ottenere il numero di ordini di allocazione di oggetti, il nome del file di origine e il numero di riga in cui è stata richiesta l'allocazione del blocco di memoria.  Il passaggio di valori non NULL per `requestNumber`, `filename`, o per parametri `linenumber` permette a `_CrtIsMemoryBlock` di impostare questi parametri ai valori nell'header di debug del blocco di memoria, se trova il blocco dell'heap locale.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtIsMemoryBlock` vengono rimosse durante la pre\-elaborazione.  
  
 Se `_CrtIsMemoryBlock` fallisce, restituisce `FALSE` e i parametri di output vengono inizializzati ai valori predefiniti: `requestNumber` e `lineNumber` vengono impostate su 0 e `filename` su `NULL`.  
  
 Poiché la funzione restituisce `TRUE` o `FALSE`, può essere passata a una delle macro [\_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug.  L'esempio seguente genera un errore di asserzione se l'indirizzo specificato non si trova nell'heap locale:  
  
```  
_ASSERTE( _CrtIsMemoryBlock( userData, size, &requestNumber,   
&filename, &linenumber ) );  
```  
  
 Per ulteriori informazioni su come `_CrtIsMemoryBlock` può essere utilizzato da altre funzioni e macro di debug, consultare [Macro per la creazione di rapporti](../Topic/Macros%20for%20Reporting.md).  Per informazioni su come i blocchi di memoria allocati, vengono inizializzati e vengono gestiti nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtIsMemoryBlock`|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Consultare l'esempio per l'argomento [\_CrtIsValidHeapPointer](../../c-runtime-library/reference/crtisvalidheappointer.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)