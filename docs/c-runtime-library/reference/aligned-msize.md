---
title: _aligned_msize
ms.date: 11/04/2016
api_name:
- _aligned_msize
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _aligned_msize
- aligned_msize
helpviewer_keywords:
- aligned_msize function
- _aligned_msize function
ms.assetid: 10995edc-2110-4212-9ca9-5e0220a464f4
ms.openlocfilehash: 922224dc81858076770a36551df26c89940b3282
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70943908"
---
# <a name="_aligned_msize"></a>_aligned_msize

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

*alignment*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

## <a name="return-value"></a>Valore restituito

Restituisce le dimensioni (in byte) come intero senza segno.

## <a name="remarks"></a>Note

La funzione **_aligned_msize** restituisce le dimensioni, in byte, del blocco di memoria allocato da una chiamata a [_aligned_malloc](aligned-malloc.md) o [_aligned_realloc](aligned-realloc.md). I valori di *allineamento* e *offset* devono corrispondere ai valori passati alla funzione che ha allocato il blocco.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, **_aligned_msize** si risolve in [_aligned_msize_dbg](aligned-msize-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

Questa funzione convalida il relativo parametro. Se *memblock* è un puntatore null o l' *allineamento* non è una potenza di 2, **_msize** richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione imposta **errno** su **EINVAL** e restituisce-1.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_msize**|\<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
