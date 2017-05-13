---
title: _aligned_msize_dbg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _aligned_msize_dbg
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
apitype: DLLExport
f1_keywords:
- _aligned_msize_dbg
dev_langs:
- C++
helpviewer_keywords:
- _aligned_msize_dbg
ms.assetid: f1c44af0-3f66-4033-81d1-d71d3afecba0
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
ms.openlocfilehash: 5a924af887defa6473c4fa8c8beeccb1d27b1411
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="alignedmsizedbg"></a>_aligned_msize_dbg
Restituisce le dimensioni di un blocco di memoria allocato nell'heap (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t _aligned_msize_dbg(  
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
 I valori `alignment` e `offset` devono corrispondere ai valori passati alla funzione che ha allocato il blocco.  
  
 `_aligned_msize_dbg` è una versione di debug della funzione [_aligned_msize](../../c-runtime-library/reference/aligned-msize.md). Quando [_DEBUG](../../c-runtime-library/debug.md) non è definito, ogni chiamata a `_aligned_msize_dbg` viene ridotta a una chiamata a `_aligned_msize`. Sia `_aligned_msize` che `_aligned_msize_dbg` calcolano le dimensioni di un blocco di memoria nell'heap di base, ma `_aligned_msize_dbg` aggiunge una funzionalità di debug: include i buffer su entrambi i lati della parte utente del blocco di memoria nelle dimensioni restituite.  
  
 Questa funzione convalida il relativo parametro. Se `memblock` è un puntatore Null o `alignment` non è una potenza di 2, `_msize` richiama un gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione imposta `errno` su `EINVAL` e restituisce -1.  
  
 Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_aligned_msize_dbg`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Allocazione di memoria](../../c-runtime-library/memory-allocation.md)
