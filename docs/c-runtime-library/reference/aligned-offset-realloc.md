---
title: _aligned_offset_realloc
ms.date: 11/04/2016
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
helpviewer_keywords:
- aligned_offset_realloc function
- _aligned_offset_realloc function
ms.assetid: e0263533-991e-41b0-acc9-1b8a51ab9ecd
ms.openlocfilehash: d5f87f9bdfff262826b8d4cc4da86069588cf9db
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50471318"
---
# <a name="alignedoffsetrealloc"></a>_aligned_offset_realloc

Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](aligned-malloc.md) o [_aligned_offset_malloc](aligned-offset-malloc.md).

## <a name="syntax"></a>Sintassi

```C
void * _aligned_offset_realloc(
   void *memblock,
   size_t size,
   size_t alignment,
   size_t offset
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore al blocco di memoria corrente.

*size*<br/>
Dimensione dell'allocazione di memoria.

*Allineamento*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

*offset*<br/>
Offset nell'allocazione di memoria per imporre l'allineamento.

## <a name="return-value"></a>Valore restituito

**aligned_offset_realloc** restituisce un puntatore void al blocco di memoria riallocato (e possibilmente spostato). Il valore restituito sarà **NULL** se la dimensione è pari a zero e l'argomento del buffer non è **NULL**, o se non è disponibile memoria sufficiente per espandere il blocco alla dimensione specificata. Nel primo caso il blocco originale viene liberato. Nel secondo caso il blocco originale resta invariato. Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.

**aligned_offset_realloc** contrassegnato `__declspec(noalias)` e `__declspec(restrict)`, vale a dire che la funzione è garantito che non modifichi le variabili globali e il puntatore restituito non viene applicato l'aliasing. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

## <a name="remarks"></a>Note

Ad esempio [aligned_offset_malloc](aligned-offset-malloc.md), **aligned_offset_realloc** consente l'allineamento in un offset all'interno della struttura di una struttura.

**aligned_offset_realloc** basa **malloc**. Per altre informazioni sull'uso **aligned_offset_malloc**, vedere [malloc](malloc.md). Se *memblock* viene **NULL**, la funzione chiama **aligned_offset_malloc** internamente.

La funzione imposta **errno** al **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore di **heap_maxreq**. Per altre informazioni sulle **errno**, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). È inoltre **aligned_offset_realloc** convalida i propri parametri. Se *allineamento* non è una potenza di 2 o se *offset* è maggiore o uguale a *dimensioni* e diverso da zero, questa funzione richiama il gestore di parametri non validi, come descritto in [ Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **NULL** e imposta **errno** al **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_offset_realloc**|\<malloc.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere [_aligned_malloc](aligned-malloc.md).

## <a name="see-also"></a>Vedere anche

[Allineamento dati](../../c-runtime-library/data-alignment.md)<br/>
