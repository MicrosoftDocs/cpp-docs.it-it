---
title: Allineamento dati | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- data.alignment
dev_langs:
- C++
helpviewer_keywords:
- data alignment [C++]
ms.assetid: 35ac3d2d-a4b3-421b-954f-b7372b1f18e1
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 2679b71230735923bbcd70b90890dd9e3740177d
ms.lasthandoff: 03/29/2017

---
# <a name="data-alignment"></a>Allineamento dati
Le seguenti funzioni runtime C supportano l'allineamento di dati.  
  
### <a name="data-alignment-routines"></a>Routine di allineamento dati  
  
|Routine|Uso|  
|-------------|---------|  
|[_aligned_free](../c-runtime-library/reference/aligned-free.md)|Libera un blocco di memoria che è stato allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|  
|[_aligned_free_dbg](../c-runtime-library/reference/aligned-free-dbg.md)|Libera un blocco di memoria che è stato allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) (solo versione di debug).|  
|[_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md)|Alloca la memoria in un limite di allineamento specificato.|  
|[_aligned_malloc_dbg](../c-runtime-library/reference/aligned-malloc-dbg.md)|Alloca memoria in un limite di allineamento specificato con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura (solo versione di debug).|  
|[_aligned_msize](../c-runtime-library/reference/aligned-msize.md)|Restituisce le dimensioni di un blocco di memoria allocato nell'heap.|  
|[_aligned_msize_dbg](../c-runtime-library/reference/aligned-msize-dbg.md)|Restituisce le dimensioni di un blocco di memoria allocato nell'heap (solo versione di debug).|  
|[_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md)|Alloca la memoria in un limite di allineamento specificato.|  
|[_aligned_offset_malloc_dbg](../c-runtime-library/reference/aligned-offset-malloc-dbg.md)|Alloca la memoria in un limite di allineamento specificato (solo versione di debug).|  
|[_aligned_offset_realloc](../c-runtime-library/reference/aligned-offset-realloc.md)|Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|  
|[_aligned_offset_realloc_dbg](../c-runtime-library/reference/aligned-offset-realloc-dbg.md)|Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) (solo versione di debug).|  
|[_aligned_offset_recalloc](../c-runtime-library/reference/aligned-offset-recalloc.md)|Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria su 0.|  
|[_aligned_offset_recalloc_dbg](../c-runtime-library/reference/aligned-offset-recalloc-dbg.md)|Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria su 0 (solo versione di debug).|  
|[_aligned_realloc](../c-runtime-library/reference/aligned-realloc.md)|Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|  
|[_aligned_realloc_dbg](../c-runtime-library/reference/aligned-realloc-dbg.md)|Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) (solo versione di debug).|  
|[_aligned_recalloc](../c-runtime-library/reference/aligned-recalloc.md)|Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria su 0.|  
|[_aligned_recalloc_dbg](../c-runtime-library/reference/aligned-recalloc-dbg.md)|Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) o [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) e inizializza la memoria su 0 (solo versione di debug).|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
