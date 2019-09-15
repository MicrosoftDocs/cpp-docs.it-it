---
title: _aligned_msize_dbg
ms.date: 11/04/2016
api_name:
- _aligned_msize_dbg
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _aligned_msize_dbg
helpviewer_keywords:
- _aligned_msize_dbg
ms.assetid: f1c44af0-3f66-4033-81d1-d71d3afecba0
ms.openlocfilehash: f2a0ceab906dccacb2e1c78a8789d524b608a4ff
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939869"
---
# <a name="_aligned_msize_dbg"></a>_aligned_msize_dbg

Restituisce le dimensioni di un blocco di memoria allocato nell'heap (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
size_t _aligned_msize_dbg(
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

I valori di *allineamento* e *offset* devono corrispondere ai valori passati alla funzione che ha allocato il blocco.

**_aligned_msize_dbg** è una versione di debug della funzione [_aligned_msize](aligned-msize.md) . Quando _ [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_aligned_msize_dbg** viene ridotta a una chiamata a **_aligned_msize**. Sia **_aligned_msize** che **_aligned_msize_dbg** calcolano la dimensione di un blocco di memoria nell'heap di base, ma **_aligned_msize_dbg** aggiunge una funzionalità di debug: Include i buffer su entrambi i lati della parte utente del blocco di memoria nelle dimensioni restituite.

Questa funzione convalida il relativo parametro. Se *memblock* è un puntatore null o l' *allineamento* non è una potenza di 2, **_msize** richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione imposta **errno** su **EINVAL** e restituisce-1.

Per informazioni sulle modalità di allocazione, inizializzazione e gestione dei blocchi di memoria nella versione di debug dell'heap di base, vedere [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details). Per informazioni sulle differenze tra chiamare una funzione standard dell'heap e la sua versione di debug nella build di debug di un'applicazione, vedere [Versioni di debug di funzioni di allocazione heap](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_msize_dbg**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
