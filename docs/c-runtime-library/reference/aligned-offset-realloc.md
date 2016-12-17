---
title: "_aligned_offset_realloc | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_aligned_offset_realloc"
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
  - "aligned_offset_realloc"
  - "_aligned_offset_realloc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "aligned_offset_realloc (funzione)"
  - "_aligned_offset_realloc (funzione)"
ms.assetid: e0263533-991e-41b0-acc9-1b8a51ab9ecd
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _aligned_offset_realloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica le dimensioni di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md).  
  
## Sintassi  
  
```  
void * _aligned_offset_realloc(  
   void *memblock,   
   size_t size,   
   size_t alignment,  
   size_t offset  
);  
```  
  
#### Parametri  
 `memblock`  
 Il puntatore al blocco di memoria corrente.  
  
 `size`  
 La dimensione dell'allocazione di memoria.  
  
 `alignment`  
 Il valore di allineamento, che deve essere una potenza intera di 2.  
  
 `offset`  
 L'offset dell'allocazione di memoria per forzare l'allineamento.  
  
## Valore restituito  
 `_aligned_offset_realloc` restituisce un puntatore void al blocco di memoria riallocato \(ed eventualmente spostato\).  Il valore restituito è `NULL` se la dimensione è zero e l'argomento del buffer non è `NULL`, o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata.  Nel primo caso, il blocco originale viene liberato.  Nel secondo caso, il blocco originale rimane invariato.  I valore restituito punta ad uno spazio di memoria che garantisce l'allineamento adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Per ottenere un puntatore a un tipo diverso da void, utilizzare un cast di tipo sul valore di ritorno.  
  
 `_aligned_offset_realloc` è contrassegnata in `__declspec(noalias)` e `__declspec(restrict)`, pertanto la funzione garantisce che le variabili globali non vengono modificate, e che il puntatore restituito è già utilizzato.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md) e [limiti](../../cpp/restrict.md).  
  
## Note  
 Come [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md), `_aligned_offset_realloc` consente a una struttura di essere allineata su true in un offset nella struttura.  
  
 `_aligned_offset_realloc` è basato su `malloc`.  Per ulteriori informazioni sull'utilizzo di `_aligned_offset_malloc`, consultare [malloc](../../c-runtime-library/reference/malloc.md).  Se `memblock` è `NULL`, la funzione chiama `_aligned_offset_malloc` internamente.  
  
 Questa funzione imposta `errno` in `ENOMEM` se non è riuscita l'allocazione della memoria o se la dimensione richiesta è maggiore di `_HEAP_MAXREQ`.  Per ulteriori informazioni su `errno`, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  Inoltre, `_aligned_offset_realloc` convalida i suoi parametri.  Se `alignment` non è una potenza di 2 o se `offset` è maggiore o uguale a `size` e diverso da zero, questa funzione chiama il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_offset_realloc`|\<malloc.h\>|  
  
## Esempio  
 Per ulteriori informazioni, vedere [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md).  
  
## Vedere anche  
 [Allineamento dati](../../c-runtime-library/data-alignment.md)