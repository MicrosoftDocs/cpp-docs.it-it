---
description: 'Altre informazioni su: _unlock'
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
ms.openlocfilehash: ca3b31dd2b1ff12f5dd98d93e12e76c3cc4f0864
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97162144"
---
# <a name="_unlock"></a>_unlock

Rilascia un blocco multithread.

> [!IMPORTANT]
> questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.

## <a name="syntax"></a>Sintassi

```cpp
void __cdecl _unlock(
   int locknum
);
```

#### <a name="parameters"></a>Parametri

*locknum*<br/>
[in] L'identificatore del blocco da rilasciare.

## <a name="requirements"></a>Requisiti

**Origine:** mlock.c

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[_lock](../c-runtime-library/lock.md)
