---
title: "_aligned_offset_malloc | Microsoft Docs"
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
  - "_aligned_offset_malloc"
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
  - "_aligned_offset_malloc"
  - "aligned_offset_malloc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_aligned_offset_malloc (funzione)"
  - "aligned_offset_malloc (funzione)"
ms.assetid: 447681a3-7c95-4655-86ba-fa3a4ca4c521
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _aligned_offset_malloc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alloca memoria su un limite di allineamento specificato.  
  
## Sintassi  
  
```  
void * _aligned_offset_malloc(  
   size_t size,   
   size_t alignment,   
   size_t offset  
);  
```  
  
#### Parametri  
 \[in\] `size`  
 La dimensione dell'allocazione di memoria richiesta.  
  
 \[in\] `alignment`  
 Il valore di allineamento, che deve essere una potenza intera di 2.  
  
 \[in\] `offset`  
 L'offset dell'allocazione di memoria per forzare l'allineamento.  
  
## Valore restituito  
 Un puntatore al blocco di memoria allocato o `NULL` se l'operazione ha esito negativo.  
  
## Note  
 `_aligned_offset_malloc` è utile nelle situazioni in cui l'allineamento è necessario in un elemento annidato; ad esempio, se l'allineamento è necessario in una classe annidata.  
  
 `_aligned_offset_malloc` si basa su `malloc`; per ulteriori informazioni, consultare [malloc](../../c-runtime-library/reference/malloc.md).  
  
 `_aligned_offset_malloc` è contrassegnata in `__declspec(noalias)` e `__declspec(restrict)`, pertanto la funzione garantisce che le variabili globali non vengono modificate, e che il puntatore restituito è già utilizzato.  Per ulteriori informazioni, vedere [noalias](../../cpp/noalias.md) e [limiti](../../cpp/restrict.md).  
  
 Questa funzione imposta `errno` in `ENOMEM` se non è riuscita l'allocazione della memoria o se la dimensione richiesta è maggiore di `_HEAP_MAXREQ`.  Per ulteriori informazioni su `errno`, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  Inoltre, `_aligned_offset_malloc` convalida i suoi parametri.  Se `alignment` non è una potenza di 2 o se `offset` è maggiore o uguale a `size` e diverso da zero, questa funzione chiama il gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_aligned_offset_malloc`|\<malloc.h\>|  
  
## Esempio  
 Per ulteriori informazioni, vedere [\_aligned\_malloc](../../c-runtime-library/reference/aligned-malloc.md).  
  
## Vedere anche  
 [Allineamento dati](../../c-runtime-library/data-alignment.md)