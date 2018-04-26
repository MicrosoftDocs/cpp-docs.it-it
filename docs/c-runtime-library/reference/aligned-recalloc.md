---
title: _aligned_recalloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
ms.workload:
- cplusplus
ms.openlocfilehash: ae20d71dc3a6e23b29c76166e1a09fab8afaf6f9
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="alignedrecalloc"></a>_aligned_recalloc

Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](aligned-malloc.md) o [_aligned_offset_malloc](aligned-offset-malloc.md) e inizializza la memoria su 0.

## <a name="syntax"></a>Sintassi

```C
void * _aligned_recalloc(
   void *memblock,
   size_t num,
   size_t size,
   size_t alignment
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore al blocco di memoria corrente.

*Numero*<br/>
Numero di elementi.

*size*<br/>
Dimensione in byte di ogni elemento.

*Allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

## <a name="return-value"></a>Valore restituito

**aligned_recalloc** restituisce un puntatore void al blocco di memoria riallocato (e possibilmente spostato). Il valore restituito sarà **NULL** se la dimensione è pari a zero e l'argomento relativo al buffer non è **NULL**, o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata. Nel primo caso il blocco originale viene liberato. Nel secondo caso il blocco originale resta invariato. Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.

Riallocare memoria modificando l'allineamento di un blocco è un errore.

## <a name="remarks"></a>Note

**aligned_recalloc** basa **malloc**. Per ulteriori informazioni sull'utilizzo **aligned_offset_malloc**, vedere [malloc](malloc.md).

La funzione imposta **errno** alla **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore **heap_maxreq**. Per ulteriori informazioni **errno**, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **aligned_recalloc** convalida i propri parametri. Se *allineamento* non è una potenza di 2, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **NULL** e imposta **errno** al **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_recalloc**|\<malloc.h>|

## <a name="see-also"></a>Vedere anche

[Allineamento dati](../../c-runtime-library/data-alignment.md)<br/>
[_recalloc](recalloc.md)<br/>
[_aligned_offset_recalloc](aligned-offset-recalloc.md)<br/>
