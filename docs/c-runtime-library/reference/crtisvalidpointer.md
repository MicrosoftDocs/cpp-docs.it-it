---
title: "_CrtIsValidPointer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtIsValidPointer"
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
  - "CrtlsValidPointer"
  - "_CrtIsValidPointer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtIsValidPointer (funzione)"
  - "CrtIsValidPointer (funzione)"
ms.assetid: 91c35590-ea5e-450f-a15d-ad8d62ade1fa
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# _CrtIsValidPointer
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Verifica che un puntatore non sia Null.  Nelle versioni della libreria di runtime del linguaggio C precedenti a Visual Studio 2010, verifica che l'intervallo di memoria specificato sia valido per lettura e scrittura \(solo versione di debug\).  
  
## Sintassi  
  
```  
int _CrtIsValidPointer(   
   const void *address,  
   unsigned int size,  
   int access   
);  
```  
  
#### Parametri  
 indirizzo  
 Punta all'inizio dell'intervallo di memoria per il test della validità.  
  
 `size`  
 Dimensione dell'intervallo di memoria specificato \(in byte\).  
  
 access  
 Accessibilità in lettura\/scrittura da determinare per l'intervallo di memoria.  
  
## Valore restituito  
 `_CrtIsValidPointer` restituisce TRUE se il puntatore specificato non è NULL.  Nelle versioni della libreria CRT precedenti a Visual Studio 2010, restituisce TRUE se l'intervallo di memoria è valido per l'operazione o per le operazioni specificate.  In caso contrario, la funzione restituisce FALSE.  
  
## Note  
 A partire dalla libreria CRT in Visual Studio 2010, vengono ignorati i parametri di dimensione e accesso e `_CrtIsValidPointer` verifica solo che l'indirizzo specificato non sia Null.  Poiché è facile eseguire questo test manualmente , non è consigliabile usare questa funzione.  Nelle versioni precedenti a Visual Studio 2010, la funzione verifica che l'intervallo di memoria che inizia in `address` e si estende per `size` byte sia valido per l'operazione o per le operazioni di accessibilità specificate.  Quando `access` è impostato su TRUE, l'intervallo di memoria viene verificato sia per la lettura che per la scrittura.  Quando `access` è FALSE, l'intervallo di memoria viene convalidato solo per la lettura.  Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtIsValidPointer` vengono rimosse durante la pre\-elaborazione.  
  
 Dato che la funzione restituisce TRUE o FALSE, può essere passata a una delle macro [\_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) per creare un semplice meccanismo di gestione degli errori di debug.  L'esempio seguente causa un errore di asserzione se l'intervallo di memoria non è valido per entrambe lettura e scrittura:  
  
```  
_ASSERTE( _CrtIsValidPointer( address, size, TRUE ) );  
```  
  
 Per altre informazioni su come usare `_CrtIsValidPointer` con altre funzioni di debug e macro, vedere [Macro per la creazione di rapporti](../Topic/Macros%20for%20Reporting.md).  Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_CrtIsValidPointer`|\<crtdbg.h\>|  
  
 `_CrtIsValidPointer` è un'estensione Microsoft.  Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Solo versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
 Vedere l'esempio per l'argomento [\_CrtIsValidHeapPointer](../../c-runtime-library/reference/crtisvalidheappointer.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)