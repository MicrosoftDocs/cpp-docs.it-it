---
title: cosh, coshf, coshl
ms.date: 4/2/2020
api_name:
- cosh
- coshf
- coshl
- _o_cosh
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: d7d2050be406e7f2be66ca200d1e3cfd9c2960b0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81348436"
---
# <a name="cosh-coshf-coshl"></a>cosh, coshf, coshl

Calcola il coseno iperbolico.

## <a name="syntax"></a>Sintassi

```C
double cosh( double x );
float coshf( float x );
long double coshl( long double x );
```

```cpp
float cosh( float x );  // C++ only
long double cosh( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*X*<br/>
Angolo in radianti.

## <a name="return-value"></a>Valore restituito

Il coseno iperbolico di *x*.

Per impostazione predefinita, se il risultato è troppo grande in una chiamata **cosh**, **coshf**o **coshl** , la funzione restituisce **HUGE_VAL** e imposta **errno** su **ERANGE**.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|**QNAN**, **IND**|none|**_DOMAIN**|
|*x* : 7,104760e|**OVERFLOW INESATTO**+**OVERFLOW**|**Overflow**|

## <a name="remarks"></a>Osservazioni

Dato che il linguaggio Cè consente l'overload, è possibile chiamare overload di **cosh** che accettano e restituiscono valori **float** o **long** **double.** In un programma C, **cosh** accetta e restituisce sempre un **valore double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------|-|
|**coshf**, **cosl**, **coshl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio in [sinh, sinhf, sinhl](sinh-sinhf-sinhl.md).

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[acosh, acoshf, acoshl](acosh-acoshf-acoshl.md)<br/>
[asinh, asinhf, asinhl](asinh-asinhf-asinhl.md)<br/>
[atanh, atanhf, atanhl](atanh-atanhf-atanhl.md)<br/>
[_matherr](matherr.md)<br/>
[sinh, sinhf, sinhl](sinh-sinhf-sinhl.md)<br/>
[tanh, tanhf, tanhl](tanh-tanhf-tanhl.md)<br/>
