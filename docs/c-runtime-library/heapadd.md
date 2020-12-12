---
description: 'Altre informazioni su: _heapadd'
title: _heapadd
ms.date: 11/04/2016
api_name:
- _heapadd
api_location:
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr80.dll
- msvcrt.dll
- msvcr110.dll
- msvcr90.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- heapadd
- _heapadd
helpviewer_keywords:
- _heapadd function
- memory, adding to heaps
- heaps, adding memory
- heapadd function
ms.assetid: 4d691fe2-2763-49f4-afb1-62738b7cd3ff
ms.openlocfilehash: 0270f84de2c543e37f089418b833011c2d83230d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97120682"
---
# <a name="_heapadd"></a>_heapadd

Aggiunge memoria all'heap.

> [!IMPORTANT]
> questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.

## <a name="syntax"></a>Sintassi

```
int _heapadd(
   void *memblock,
   size_t size
);
```

#### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore alla memoria heap.

*size*<br/>
Dimensione della memoria da aggiungere, in byte.

## <a name="return-value"></a>Valore restituito

Se l'operazione ha esito positivo, `_heapadd` restituisce 0; in caso contrario, la funzione restituisce -1 e imposta `errno` su `ENOSYS`.

Per altre informazioni su questi e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, e _sys_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

A partire da Visual C++ versione 4.0, la struttura sottostante dell'heap è stata spostata nelle librerie di runtime C per supportare le nuove funzionalità di debug. Pertanto, `_heapadd` non è più supportato su qualsiasi piattaforma basata sull'API Win32.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|`_heapadd`|\<malloc.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md) nell'introduzione.

## <a name="see-also"></a>Vedi anche

[Allocazione di memoria](../c-runtime-library/memory-allocation.md)<br/>
[free](../c-runtime-library/reference/free.md)<br/>
[_heapchk](../c-runtime-library/reference/heapchk.md)<br/>
[_heapmin](../c-runtime-library/reference/heapmin.md)<br/>
[_heapset](../c-runtime-library/heapset.md)<br/>
[_heapwalk](../c-runtime-library/reference/heapwalk.md)<br/>
[malloc](../c-runtime-library/reference/malloc.md)<br/>
[realloc](../c-runtime-library/reference/realloc.md)
