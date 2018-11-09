---
title: __setusermatherr
ms.date: 11/04/2016
apiname:
- __setusermatherr
apilocation:
- msvcr80.dll
- msvcr90.dll
- msvcrt.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr100.dll
- api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- __setusermatherr
helpviewer_keywords:
- __setusermatherr
ms.assetid: f306818d-381a-4d68-8739-71b92bacb5ea
ms.openlocfilehash: 116abd203cc289c63535a8e41a005a6fd248b08b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50640466"
---
# <a name="setusermatherr"></a>__setusermatherr

Specifica una routine fornita dall'utente per gestire errori matematici, in alternativa alla routine [_matherr](../c-runtime-library/reference/matherr.md).

## <a name="syntax"></a>Sintassi

```cpp
void __setusermatherr(
   _HANDLE_MATH_ERROR pf
   )
```

#### <a name="parameters"></a>Parametri

*pf*<br/>
Puntatore a un'implementazione di `_matherr` fornita dall'utente.

Il tipo del parametro *pf* è dichiarato come `typedef int (__cdecl * _HANDLE_MATH_ERROR)(struct _exception *)`.

## <a name="remarks"></a>Note

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__setusermatherr|matherr.c|