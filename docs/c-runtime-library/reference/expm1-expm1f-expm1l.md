---
title: expm1, expm1f, expm1l
description: Informazioni di riferimento sulle API per expm1, expm1f e expm1; che calcola l'esponenziale in base e di un valore, meno uno.
ms.date: 9/1/2020
api_name:
- expm1l
- expm1
- expm1f
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
- api-ms-win-crt-math-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- expm1l
- expm1
- expm1f
helpviewer_keywords:
- expm1f function
- expm1l function
- expm1 function
ms.assetid: 2a4dd2d9-370c-42b0-9067-0625efa272e0
ms.openlocfilehash: 6d352e91d895cd63c7134faff90bc1bc43a50708
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556502"
---
# <a name="expm1-expm1f-expm1l"></a>expm1, expm1f, expm1l

Calcola l'esponenziale in base e di un valore, meno uno.

## <a name="syntax"></a>Sintassi

```C
double expm1(
   double x
);
float expm1(
   float x
);  // C++ only
long double expm1(
   long double x
);  // C++ only
float expm1f(
   float x
);
long double expm1l(
   long double x
);
#define expm1(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Il valore esponenziale a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le funzioni **expm1** restituiscono un valore a virgola mobile che rappresenta e<sup>x</sup> -1, se ha esito positivo. In overflow, **expm1** restituisce **HUGE_VAL**, **expm1f** restituisce **HUGE_VALF**, **expm1l** restituisce **HUGE_VALL**e **errno** viene impostato su **ERANGE**. Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **expm1** che accettano e restituiscono **`float`** **`long double`** valori e. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **expm1** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `expm1()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**expm1**, **expm1f**, **expm1l**|\<math.h>|
|**expm1** (macro) | \<tgmath.h> |

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[exp2, exp2f, exp2l](exp2-exp2f-exp2l.md)<br/>
[pow, powf, powl](pow-powf-powl.md)<br/>
