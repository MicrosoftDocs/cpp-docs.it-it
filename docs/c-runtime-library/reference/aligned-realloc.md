---
title: _aligned_realloc
ms.date: 11/04/2016
api_name:
- _aligned_realloc
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
- _aligned_realloc
- aligned_realloc
helpviewer_keywords:
- aligned_realloc function
- _aligned_realloc function
ms.assetid: 80ce96e8-6087-416f-88aa-4dbb8cb1d218
ms.openlocfilehash: 34af7d1dc3c5c8e5d504191b18280e228079eaa2
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70943818"
---
# <a name="_aligned_realloc"></a>_aligned_realloc

Modifica la dimensione di un blocco di memoria allocato con [_aligned_malloc](aligned-malloc.md) o [_aligned_offset_malloc](aligned-offset-malloc.md).

## <a name="syntax"></a>Sintassi

```C
void * _aligned_realloc(
   void *memblock,
   size_t size,
   size_t alignment
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore al blocco di memoria corrente.

*size*<br/>
Dimensione dell'allocazione di memoria richiesta.

*alignment*<br/>
Valore di allineamento, che deve essere una potenza intera di 2.

## <a name="return-value"></a>Valore restituito

**_aligned_realloc** restituisce un puntatore void al blocco di memoria riallocato (e possibilmente spostato). Il valore restituito è **null** se la dimensione è zero e l'argomento del buffer non è **null**o se la memoria disponibile non è sufficiente per espandere il blocco alla dimensione specificata. Nel primo caso il blocco originale viene liberato. Nel secondo caso il blocco originale resta invariato. Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per ottenere un puntatore a un tipo diverso da void, usare un cast del tipo sul valore restituito.

Riallocare memoria modificando l'allineamento di un blocco è un errore.

## <a name="remarks"></a>Note

**_aligned_realloc** è basato su **malloc**. Per altre informazioni sull'uso di **_aligned_offset_malloc**, vedere [malloc](malloc.md).

Questa funzione imposta **errno** su **ENOMEM** se l'allocazione di memoria non riesce o se la dimensione richiesta è maggiore di **_HEAP_MAXREQ**. Per ulteriori informazioni su **errno**, vedere [errno, doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md). Inoltre, **_aligned_realloc** convalida i relativi parametri. Se l' *allineamento* non è una potenza di 2, questa funzione richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, questa funzione restituisce **null** e imposta **errno** su **EINVAL**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_aligned_realloc**|\<malloc.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere [_aligned_malloc](aligned-malloc.md).

## <a name="see-also"></a>Vedere anche

[Allineamento dati](../../c-runtime-library/data-alignment.md)<br/>
