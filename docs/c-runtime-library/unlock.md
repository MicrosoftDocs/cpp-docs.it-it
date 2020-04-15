---
title: _unlock
ms.date: 11/04/2016
api_name:
- _unlock
api_location:
- msvcrt.dll
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr80.dll
- msvcr120.dll
- msvcr90.dll
- msvcr120_clr0400.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- unlock
- _unlock
helpviewer_keywords:
- unlock function
- _unlock function
ms.assetid: 2eda2507-a134-4997-aa12-f2f8cb319e14
ms.openlocfilehash: 185cb1e5f582fd5eeb1dbcb337c402319ab78f00
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365692"
---
# <a name="_unlock"></a>_unlock

Rilascia un blocco multithread.

> [!IMPORTANT]
> questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.

## <a name="syntax"></a>Sintassi

```
void __cdecl _unlock(
   int locknum
);
```

#### <a name="parameters"></a>Parametri

*locknum*<br/>
[in] L'identificatore del blocco da rilasciare.

## <a name="requirements"></a>Requisiti

**Origine:** mlock.c

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[_lock](../c-runtime-library/lock.md)
