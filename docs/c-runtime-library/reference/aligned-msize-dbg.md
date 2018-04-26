---
title: _aligned_msize_dbg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
ms.workload:
- cplusplus
ms.openlocfilehash: ef63ea4ebd41026d548952aa6ec29749bcc55245
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="alignedmsizedbg"></a>_aligned_msize_dbg

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

*Allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

## <a name="return-value"></a>Valore restituito

Restituisce le dimensioni (in byte) come intero senza segno.

## <a name="remarks"></a>Note

Il *allineamento* e *offset* valori devono essere lo stesso come i valori passati alla funzione che il blocco allocato.

**_aligned_msize_dbg** è una versione di debug di [aligned_msize](aligned-msize.md) (funzione). Quando si [debug](../../c-runtime-library/debug.md) non è definito, ogni chiamata a **_aligned_msize_dbg** viene ridotta a una chiamata a **aligned_msize**. Entrambi **aligned_msize** e **_aligned_msize_dbg** calcolare le dimensioni di un blocco di memoria nell'heap di base, ma **_aligned_msize_dbg** aggiunge una funzionalità di debug: include il buffer presenti a entrambi i lati della parte della memoria di blocco in dimensione restituita.

Questa funzione convalida il relativo parametro. Se *memblock* è un puntatore null o *allineamento* non è una potenza di 2 **msize** richiama un gestore di parametri non validi, come descritto in [convalida dei parametri ](../../c-runtime-library/parameter-validation.md). Se l'errore viene gestito, la funzione imposta **errno** alla **EINVAL** e restituisce -1.

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
