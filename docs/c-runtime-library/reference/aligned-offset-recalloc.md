---
title: "_aligned_offset_recalloc | Microsoft Docs"
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
  - "_aligned_offset_recalloc"
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
  - "aligned_offset_recalloc"
  - "_aligned_offset_recalloc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "aligned_offset_recalloc (funzione)"
  - "_aligned_offset_recalloc (funzione)"
ms.assetid: a258f54e-eeb4-4853-96fc-007d710f98e9
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _aligned_offset_recalloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica la dimensione di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria a 0.  
  
## Sintassi  
  
```  
void * _aligned_offset_recalloc(  
   void *memblock,   
   size_t num,   
   size_t size,   
   size_t alignment,  
   size_t offset  
);  
```  
  
#### Parametri  
 `memblock`  
 Il puntatore al blocco di memoria corrente.  
  
 `num`  
 Numero di elementi  
  
 `size`  
 Lunghezza in byte di ogni elemento.  
  
 `alignment`  
 Il valore di allineamento, che deve essere una potenza intera di 2.  
  
 `offset`  
 L'offset dell'allocazione di memoria per forzare l'allineamento.  
  
## Valore restituito  
 `_aligned_offset_recalloc` restituisce un puntatore void al blocco di memoria riallocato \(ed eventualmente spostato\).  Il valore restituito è `NULL` se la dimensione è zero e l'argomento del buffer non è `NULL`, o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata.  Nel primo caso, il blocco originale viene liberato.  Nel secondo caso, il blocco originale rimane invariato.  I valore restituito punta ad uno spazio di memoria che garantisce l'allineamento adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Per ottenere un puntatore a un tipo diverso da void, utilizzare un cast di tipo sul valore di ritorno.  
  
 `_aligned_offset_recalloc` è contrassegnata in `__declspec(noalias)` e `__declspec(restrict)`, pertanto la funzione garantisce che le variabili globali non vengono modificate, e che il puntatore restituito è già utilizzato.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md) e [limiti](../../cpp/restrict.md).  
  
## Note  
 Come [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md), `_aligned_offset_recalloc` consente a una struttura di essere allineata su true in un offset nella struttura.  
  
 `_aligned_offset_recalloc` è basato su `malloc`.  Per ulteriori informazioni sull'utilizzo di `_aligned_offset_malloc`, consultare [malloc](../../c-runtime-library/reference/malloc.md).  Se `memblock` è `NULL`, la funzione chiama `_aligned_offset_malloc` internamente.  
  
 Questa funzione imposta `errno` a `ENOMEM` se non è riuscita l'allocazione della memoria o se la dimensione richiesta \(`num` \* `size`\) è maggiore di `_HEAP_MAXREQ`.  Per ulteriori informazioni su `errno`, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  Inoltre, `_aligned_offset_recalloc` convalida i suoi parametri.  Se `alignment` non è una potenza di 2 o se `offset` è maggiore o uguale alla dimensione richiesta e diversa da zero, questa funzione invoca il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_offset_recalloc`|\<malloc.h\>|  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allineamento dati](../../c-runtime-library/data-alignment.md)   
 [\_recalloc](../../c-runtime-library/reference/recalloc.md)   
 [\_aligned\_recalloc](../../c-runtime-library/reference/aligned-recalloc.md)