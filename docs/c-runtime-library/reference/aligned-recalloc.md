---
title: _aligned_recalloc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _aligned_recalloc
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- aligned_recalloc
- _aligned_recalloc
dev_langs:
- C++
helpviewer_keywords:
- aligned_recalloc function
- _aligned_recalloc function
ms.assetid: d3da3dcc-79ef-4273-8af5-ac7469420142
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 9fbaae148ea373287991ebccbf53a5a859475d0c
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="alignedrecalloc"></a>_aligned_recalloc
Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria su 0.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void * _aligned_recalloc(  
   void *memblock,   
   size_t num,  
   size_t size,   
   size_t alignment  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `memblock`  
 Puntatore al blocco di memoria corrente.  
  
 [in] `num`  
 Numero di elementi.  
  
 [in] `size`  
 Dimensione in byte di ogni elemento.  
  
 [in] `alignment`  
 Valore di allineamento, che deve essere un esponente intero di 2.  
  
## <a name="return-value"></a>Valore restituito  
 `_aligned_recalloc` restituisce un puntatore void al blocco di memoria riallocato (e possibilmente spostato). Il valore restituito è `NULL` se la dimensione è pari a zero e l'argomento relativo al buffer non è `NULL` o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata. Nel primo caso il blocco originale viene liberato. Nel secondo caso il blocco originale resta invariato. Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.  
  
 Riallocare memoria modificando l'allineamento di un blocco è un errore.  
  
## <a name="remarks"></a>Note  
 `_aligned_recalloc` è basato su `malloc`. Per altre informazioni sull'uso di `_aligned_offset_malloc`, vedere [malloc](../../c-runtime-library/reference/malloc.md).  
  
 La funzione imposta `errno` su `ENOMEM` se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore di `_HEAP_MAXREQ`. Per altre informazioni su `errno`, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). `_aligned_recalloc`, inoltre, convalida i propri parametri. Se `alignment` non è una potenza di 2, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_aligned_recalloc`|\<malloc.h>|  
  
## <a name="see-also"></a>Vedere anche  
 [Allineamento dati](../../c-runtime-library/data-alignment.md)   
 [_recalloc](../../c-runtime-library/reference/recalloc.md)   
 [_aligned_offset_recalloc](../../c-runtime-library/reference/aligned-offset-recalloc.md)
