---
title: _lock
ms.date: 11/04/2016
api_name:
- _lock
api_location:
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr100.dll
- msvcr90.dll
- msvcr80.dll
- msvcr110.dll
- msvcrt.dll
- msvcr120_clr0400.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- lock
- _lock
helpviewer_keywords:
- lock function
- _lock function
ms.assetid: 29f77c37-30de-4b3d-91b6-030216e645a6
ms.openlocfilehash: 30cd84f008c7174d767ecf5e2b744a58b21e5000
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81351088"
---
# <a name="_lock"></a>_lock

Acquisisce un blocco multithread.

> [!IMPORTANT]
> questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.

## <a name="syntax"></a>Sintassi

```
void __cdecl _lock
   int locknum
);
```

#### <a name="parameters"></a>Parametri

*locknum*<br/>
[in] L'identificatore del blocco da acquisire.

## <a name="remarks"></a>Osservazioni

Se il blocco è già stato acquisito, questo metodo acquisisce comunque il blocco e causa un errore interno di runtime C (CRT). Se il metodo non può acquisire un blocco, termina con un errore irreversibile e imposta il codice di errore su `_RT_LOCK`.

## <a name="requirements"></a>Requisiti

**Origine:** mlock.c

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[_unlock](../c-runtime-library/unlock.md)
