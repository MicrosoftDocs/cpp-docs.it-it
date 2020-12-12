---
description: 'Altre informazioni su: _lock'
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
ms.openlocfilehash: 9b95c8b7ad0f0ce84348f9581d9acb611373a27b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331037"
---
# <a name="_lock"></a>_lock

Acquisisce un blocco multithread.

> [!IMPORTANT]
> questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.

## <a name="syntax"></a>Sintassi

```cpp
void __cdecl _lock
   int locknum
);
```

#### <a name="parameters"></a>Parametri

*locknum*<br/>
[in] L'identificatore del blocco da acquisire.

## <a name="remarks"></a>Commenti

Se il blocco è già stato acquisito, questo metodo acquisisce comunque il blocco e causa un errore interno di runtime C (CRT). Se il metodo non può acquisire un blocco, termina con un errore irreversibile e imposta il codice di errore su `_RT_LOCK`.

## <a name="requirements"></a>Requisiti

**Origine:** mlock.c

## <a name="see-also"></a>Vedi anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[_unlock](../c-runtime-library/unlock.md)
