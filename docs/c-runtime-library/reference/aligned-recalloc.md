---
title: "_aligned_recalloc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_aligned_recalloc"
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
  - "aligned_recalloc"
  - "_aligned_recalloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aligned_recalloc (funzione)"
  - "_aligned_recalloc (funzione)"
ms.assetid: d3da3dcc-79ef-4273-8af5-ac7469420142
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# _aligned_recalloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica la dimensione di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria a 0.  
  
## Sintassi  
  
```  
void * _aligned_recalloc(  
   void *memblock,   
   size_t num,  
   size_t size,   
   size_t alignment  
);  
```  
  
#### Parametri  
 \[in\] `memblock`  
 Il puntatore al blocco di memoria corrente.  
  
 \[in\] `num`  
 Numero di elementi.  
  
 \[in\] `size`  
 La dimensione di ciascun elemento in byte.  
  
 \[in\] `alignment`  
 Il valore di allineamento, che deve essere una potenza intera di 2.  
  
## Valore restituito  
 `_aligned_recalloc` restituisce un puntatore void al blocco di memoria riallocato \(ed eventualmente spostato\).  Il valore restituito è `NULL` se la dimensione è zero e l'argomento del buffer non è `NULL`, o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata.  Nel primo caso, il blocco originale viene liberato.  Nel secondo caso, il blocco originale rimane invariato.  I valore restituito punta ad uno spazio di memoria che garantisce l'allineamento adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Per ottenere un puntatore a un tipo diverso da void, utilizzare un cast di tipo sul valore di ritorno.  
  
 È un errore riallocare la memoria e modificare l'allineamento di un blocco.  
  
## Note  
 `_aligned_recalloc` è basato su `malloc`.  Per ulteriori informazioni sull'utilizzo di `_aligned_offset_malloc`, vedere [malloc](../../c-runtime-library/reference/malloc.md).  
  
 Questa funzione imposta `errno` in `ENOMEM` se non è riuscita l'allocazione della memoria o se la dimensione richiesta è maggiore di `_HEAP_MAXREQ`.  Per ulteriori informazioni su `errno`, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  Inoltre, `_aligned_recalloc` convalida i suoi parametri.  Se `alignment` non è una potenza di 2, questa funzione chiama il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_recalloc`|\<malloc.h\>|  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Allineamento dati](../../c-runtime-library/data-alignment.md)   
 [\_recalloc](../../c-runtime-library/reference/recalloc.md)   
 [\_aligned\_offset\_recalloc](../../c-runtime-library/reference/aligned-offset-recalloc.md)