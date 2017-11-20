---
title: _aligned_msize | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _aligned_msize
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
- _aligned_msize
- aligned_msize
dev_langs: C++
helpviewer_keywords:
- aligned_msize function
- _aligned_msize function
ms.assetid: 10995edc-2110-4212-9ca9-5e0220a464f4
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: f4b39fda75013cb69e57b6f8c62bc3155261e1db
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="alignedmsize"></a>_aligned_msize
Restituisce le dimensioni di un blocco di memoria allocato nell'heap.  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t _msize(  
   void *memblock,  
   size_t alignment,  
   size_t offset  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `memblock`  
 Puntatore al blocco di memoria.  
  
 [in] `alignment`  
 Valore di allineamento, che deve essere una potenza intera di 2.  
  
 [in] `offset`  
 Offset nell'allocazione di memoria per imporre l'allineamento.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce le dimensioni (in byte) come intero senza segno.  
  
## <a name="remarks"></a>Note  
 La funzione `_aligned_msize` restituisce le dimensioni, in byte, del blocco di memoria allocato da una chiamata a [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) o [_aligned_realloc](../../c-runtime-library/reference/aligned-realloc.md). I valori `alignment` e `offset` devono corrispondere ai valori passati alla funzione che ha allocato il blocco.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, `_aligned_msize` viene risolto in [_aligned_msize_dbg](../../c-runtime-library/reference/aligned-msize-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
 Questa funzione convalida il relativo parametro. Se `memblock` è un puntatore Null o `alignment` non è una potenza di 2, `_msize` richiama un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione imposta `errno` su `EINVAL` e restituisce -1.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_msize`|\<malloc.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)