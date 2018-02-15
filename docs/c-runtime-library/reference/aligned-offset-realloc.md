---
title: _aligned_offset_realloc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _aligned_offset_realloc
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
- aligned_offset_realloc
- _aligned_offset_realloc
dev_langs:
- C++
helpviewer_keywords:
- aligned_offset_realloc function
- _aligned_offset_realloc function
ms.assetid: e0263533-991e-41b0-acc9-1b8a51ab9ecd
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a1d202b1b2a2976c4f5bf5e6732aba00931ec2c7
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="alignedoffsetrealloc"></a>_aligned_offset_realloc
Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void * _aligned_offset_realloc(  
   void *memblock,   
   size_t size,   
   size_t alignment,  
   size_t offset  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `memblock`  
 Puntatore al blocco di memoria corrente.  
  
 `size`  
 Dimensione dell'allocazione di memoria.  
  
 `alignment`  
 Valore di allineamento, che deve essere un esponente intero di 2.  
  
 `offset`  
 Offset nell'allocazione di memoria per imporre l'allineamento.  
  
## <a name="return-value"></a>Valore restituito  
 `_aligned_offset_realloc` restituisce un puntatore void al blocco di memoria riallocato (e possibilmente spostato). Il valore restituito è `NULL` se la dimensione è pari a zero e l'argomento relativo al buffer non è `NULL` o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata. Nel primo caso il blocco originale viene liberato. Nel secondo caso il blocco originale resta invariato. Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.  
  
 `_aligned_offset_realloc` è contrassegnato come `__declspec(noalias)` e `__declspec(restrict)`, pertanto la funzione non modifica le variabili globali e il puntatore restituito non viene associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).  
  
## <a name="remarks"></a>Note  
 Come [_aligned_offset_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md), `_aligned_offset_realloc` consente l'allineamento di una struttura a un offset all'interno della struttura.  
  
 `_aligned_offset_realloc` è basato su `malloc`. Per altre informazioni sull'uso di `_aligned_offset_malloc`, vedere [malloc](../../c-runtime-library/reference/malloc.md). Se `memblock` è `NULL`, la funzione chiama `_aligned_offset_malloc` internamente.  
  
 La funzione imposta `errno` su `ENOMEM` se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore di `_HEAP_MAXREQ`. Per altre informazioni su `errno`, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). `_aligned_offset_realloc`, inoltre, convalida i propri parametri. Se `alignment` non è una potenza di 2 o `offset` è maggiore o uguale a `size` e diverso da zero, la funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce `NULL` e imposta `errno` su `EINVAL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_aligned_offset_realloc`|\<malloc.h>|  
  
## <a name="example"></a>Esempio  
 Per altre informazioni, vedere [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Allineamento dati](../../c-runtime-library/data-alignment.md)