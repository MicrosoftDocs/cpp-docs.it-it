---
title: _msize | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _msize
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
- msize
- _msize
dev_langs: C++
helpviewer_keywords:
- memory blocks
- msize function
- _msize function
ms.assetid: 02b1f89e-d0d7-4f12-938a-9eeba48a0f88
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 2e678d5ba1abcf552fa5e4576578a5a220fe50f8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="msize"></a>_msize
Restituisce le dimensioni di un blocco di memoria allocato nell'heap.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      size_t _msize(  
   void *memblock   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `memblock`  
 Puntatore al blocco di memoria.  
  
## <a name="return-value"></a>Valore restituito  
 `_msize` restituisce le dimensioni (in byte) come intero senza segno.  
  
## <a name="remarks"></a>Note  
 La funzione `_msize` restituisce le dimensioni, in byte, del blocco di memoria allocato da una chiamata a `calloc`, `malloc` o `realloc`.  
  
 Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, `_msize` viene risolto in [_msize_dbg](../../c-runtime-library/reference/msize-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).  
  
 Questa funzione convalida il relativo parametro. Se `memblock` è un puntatore Null, `_msize` richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione imposta `errno` su `EINVAL` e restituisce -1.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_msize`|\<malloc.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [realloc](../../c-runtime-library/reference/realloc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [_expand](../../c-runtime-library/reference/expand.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)