---
description: 'Altre informazioni su: __setusermatherr'
title: __setusermatherr
ms.date: 11/04/2016
api_name:
- __setusermatherr
api_location:
- msvcr80.dll
- msvcr90.dll
- msvcrt.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr100.dll
- api-ms-win-crt-math-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __setusermatherr
helpviewer_keywords:
- __setusermatherr
ms.assetid: f306818d-381a-4d68-8739-71b92bacb5ea
ms.openlocfilehash: 11b470f3c39a22b212187936dc4bad36c3cefd1d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277077"
---
# <a name="__setusermatherr"></a>__setusermatherr

Specifica una routine fornita dall'utente per gestire errori matematici, in alternativa alla routine [_matherr](../c-runtime-library/reference/matherr.md).

## <a name="syntax"></a>Sintassi

```cpp
void __setusermatherr(
   _HANDLE_MATH_ERROR pf
   )
```

#### <a name="parameters"></a>Parametri

*PF*<br/>
Puntatore a un'implementazione di `_matherr` fornita dall'utente.

Il tipo del parametro *pf* è dichiarato come `typedef int (__cdecl * _HANDLE_MATH_ERROR)(struct _exception *)`.

## <a name="remarks"></a>Osservazioni

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__setusermatherr|matherr.c|
