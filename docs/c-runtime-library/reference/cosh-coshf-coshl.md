---
title: cosh, coshf, coshl
description: Informazioni di riferimento sulle API per cosh, coshf e coshl; che calcola il coseno iperbolico di un valore a virgola mobile.
ms.date: 1/15/2021
api_name:
- cosh
- coshf
- coshl
- _o_cosh
- _o_coshf
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- cosh
- coshf
- coshl
helpviewer_keywords:
- cosh function
- coshf function
- coshl function
- trigonometric functions
- hyperbolic functions
ms.openlocfilehash: c010dcdc30b16f94f55fca99d67b58e5c19370c7
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98564095"
---
# <a name="cosh-coshf-coshl"></a>`cosh`, `coshf`, `coshl`

Calcola il coseno iperbolico.

## <a name="syntax"></a>Sintassi

```C
double cosh( double x );
float coshf( float x );
long double coshl( long double x );
#define cosh(X) // Requires C11 or higher

float cosh( float x );  // C++ only
long double cosh( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*`x`*\
Angolo in radianti.

## <a name="return-value"></a>Valore restituito

Coseno iperbolico di *`x`* .

Per impostazione predefinita, se il risultato è troppo grande in **`cosh`** una **`coshf`** chiamata a, o **`coshl`** , la funzione restituisce **`HUGE_VAL`** e imposta **`errno`** su **`ERANGE`** .

|Input|Eccezione SEH|`Matherr` eccezione|
|-----------|-------------------|-----------------------|
|± **`QNAN`**, **`IND`**|Nessuno|**`_DOMAIN`**|
|*`x`* ≥ 7.104760 e + 002|**`INEXACT`**+**`OVERFLOW`**|**`OVERFLOW`**|

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare gli overload di **`cosh`** che accettano e restituiscono **`float`** valori o **`long double`** . In un programma C, a meno che non si stia usando la `<tgmath.h>` macro per chiamare questa funzione, **`cosh`** accetta sempre e restituisce un **`double`** .

Se si usa la `<tgmath.h>` `cosh()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------|-|
|**`coshf`**, **`cosl`**, **`coshl`**|`<math.h>`|`<cmath>` o `<math.h>`|
|**`coshf()`** macro | `<tgmath.h>` ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [ `sinh` , `sinhf` , `sinhl` ](sinh-sinhf-sinhl.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`acosh, acoshf, acoshl`](acosh-acoshf-acoshl.md)\
[`asinh, asinhf, asinhl`](asinh-asinhf-asinhl.md)\
[`atanh, atanhf, atanhl`](atanh-atanhf-atanhl.md)\
[`_matherr`](matherr.md)\
[`sinh, sinhf, sinhl`](sinh-sinhf-sinhl.md)\
[`tanh, tanhf, tanhl`](tanh-tanhf-tanhl.md)