---
title: "_aligned_realloc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_aligned_realloc"
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
  - "_aligned_realloc"
  - "aligned_realloc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "aligned_realloc (funzione)"
  - "_aligned_realloc (funzione)"
ms.assetid: 80ce96e8-6087-416f-88aa-4dbb8cb1d218
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 17
---
# _aligned_realloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica le dimensioni di un blocco di memoria che è stato allocato con [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [\_aligned\_offset\_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md).  
  
## Sintassi  
  
```  
void * _aligned_realloc(  
   void *memblock,   
   size_t size,   
   size_t alignment  
);  
```  
  
#### Parametri  
 \[in\] `memblock`  
 Il puntatore al blocco di memoria corrente.  
  
 \[in\] `size`  
 La dimensione dell'allocazione di memoria richiesta.  
  
 \[in\] `alignment`  
 Il valore di allineamento, che deve essere una potenza intera di 2.  
  
## Valore restituito  
 `_aligned_realloc` restituisce un puntatore void al blocco di memoria riallocato \(ed eventualmente spostato\).  Il valore restituito è `NULL` se la dimensione è zero e l'argomento del buffer non è `NULL`, o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata.  Nel primo caso, il blocco originale viene liberato.  Nel secondo, il blocco originale rimane invariato.  I valore restituito punta ad uno spazio di memoria che garantisce l'allineamento adeguato per l'archiviazione di qualsiasi tipo di oggetto.  Per ottenere un puntatore a un tipo diverso da void, utilizzare un cast di tipo sul valore di ritorno.  
  
 È un errore riallocare la memoria e modificare l'allineamento di un blocco.  
  
## Note  
 `_aligned_realloc` è basato su `malloc`.  Per ulteriori informazioni sull'utilizzo di `_aligned_offset_malloc`, vedere [malloc](../../c-runtime-library/reference/malloc.md).  
  
 Questa funzione imposta `errno` in `ENOMEM` se non è riuscita l'allocazione della memoria o se la dimensione richiesta è maggiore di `_HEAP_MAXREQ`.  Per ulteriori informazioni su `errno`, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  Inoltre, `_aligned_realloc` convalida i suoi parametri.  Se `alignment` non è una potenza di 2, questa funzione chiama il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_realloc`|\<malloc.h\>|  
  
## Esempio  
 Per ulteriori informazioni, vedere [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md).  
  
## Vedere anche  
 [Allineamento dati](../../c-runtime-library/data-alignment.md)