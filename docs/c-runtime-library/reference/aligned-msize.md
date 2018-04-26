---
title: _aligned_msize | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _aligned_msize
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
dev_langs:
- C++
helpviewer_keywords:
- aligned_msize function
- _aligned_msize function
ms.assetid: 10995edc-2110-4212-9ca9-5e0220a464f4
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 89257778241f6873682258e2f611c8a556e08210
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="alignedmsize"></a>_aligned_msize

Restituisce le dimensioni di un blocco di memoria allocato nell'heap.

## <a name="syntax"></a>Sintassi

```C
size_t _msize(
   void *memblock,
   size_t alignment,
   size_t offset
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore al blocco di memoria.

*Allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

## <a name="return-value"></a>Valore restituito

Restituisce le dimensioni (in byte) come intero senza segno.

## <a name="remarks"></a>Note

Il **aligned_msize** funzione restituisce le dimensioni, in byte, del blocco di memoria allocata da una chiamata a [aligned_malloc](aligned-malloc.md) oppure [aligned_realloc](aligned-realloc.md). Il *allineamento* e *offset* valori devono essere lo stesso come i valori passati alla funzione che il blocco allocato.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C **aligned_msize** risolve [_aligned_msize_dbg](aligned-msize-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

Questa funzione convalida il relativo parametro. Se *memblock* è un puntatore null o *allineamento* non è una potenza di 2 **msize** richiama un gestore di parametri non validi, come descritto in [convalida dei parametri ](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione imposta **errno** alla **EINVAL** e restituisce -1.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_msize**|\<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
