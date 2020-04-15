---
title: _heapmin
ms.date: 4/2/2020
api_name:
- _heapmin
- _o__heapmin
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _heapmin
- heapmin
helpviewer_keywords:
- heap memory
- minimizing heaps
- memory, releasing
- heaps, releasing unused memory
- _heapmin function
- heapmin function
ms.assetid: c0bccdf6-2d14-4d7b-a7ff-d6a17bdb410f
ms.openlocfilehash: 6e8f90a7aa74ca3e890307f95b5f293f0be3575f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81343988"
---
# <a name="_heapmin"></a>_heapmin

Rilascia la memoria heap inutilizzata al sistema operativo.

## <a name="syntax"></a>Sintassi

```C
int _heapmin( void );
```

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, **_heapmin** restituisce 0; in caso contrario, la funzione restituisce -1 e imposta **errno** su **ENOSYS**.

Per altre informazioni su questi e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist, e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_heapmin** riduce a icona l'heap rilasciando la memoria heap inutilizzata al sistema operativo. Se il sistema operativo non supporta **_heapmin**(ad esempio, Windows 98), la funzione restituisce -1 e imposta **errno** su **ENOSYS**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazione facoltativa|
|-------------|---------------------|---------------------|
|**_heapmin**|\<malloc.h>|\<errno.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Allocazione della memoria](../../c-runtime-library/memory-allocation.md)<br/>
[Gratuito](free.md)<br/>
[_heapadd](../../c-runtime-library/heapadd.md)<br/>
[_heapchk](heapchk.md)<br/>
[_heapset](../../c-runtime-library/heapset.md)<br/>
[_heapwalk](heapwalk.md)<br/>
[malloc](malloc.md)<br/>
