---
title: nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl
ms.date: 04/05/2018
apiname:
- nextafterf
- _nextafterf
- nextafter
- nextafterl
- _nextafter
- nexttoward
- nexttowardf
- nexttowardl
apilocation:
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
apitype: DLLExport
f1_keywords:
- nextafter
- _nextafter
- nextafterf
- nextafterl
- _nextafterf
- math/nextafter
- math/nextafterf
- math/nextafterl
- nexttoward
- nexttowardf
- nexttowardl
- math/nexttoward
- math/nexttowardf
- math/nexttowardl
helpviewer_keywords:
- _nextafter function
- nextafter function
- _nextafterf function
- nextafterf function
- nextafterl function
- nexttoward function
- nexttowardf function
- nexttowardl function
ms.assetid: 9785bfb9-de53-4bd0-9637-f05fa0c1f6ab
ms.openlocfilehash: 0e0a60dc9f7c068d8c18c10f3c6b819b9e06d3b7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50444858"
---
# <a name="nextafter-nextafterf-nextafterl-nextafter-nextafterf-nexttoward-nexttowardf-nexttowardl"></a>nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl

Restituisce il valore a virgola mobile rappresentabile successivo.

## <a name="syntax"></a>Sintassi

```C
double nextafter( double x, double y );
float nextafterf( float x, float y );
long double nextafterl( long double x, long double y );

double _nextafter( double x, double y );
float _nextafterf( float x, float y ); /* x64 only */

double nexttoward( double x, long double y );
float nexttowardf( float x, long double y );
long double nexttowardl( long double x, long double y );
```

```cpp
float nextafter( float x, float y ); /* C++ only, requires <cmath> */
long double nextafter( long double x, long double y ); /* C++ only, requires <cmath> */

float nexttoward( float x, long double y ); /* C++ only, requires <cmath> */
long double nexttoward( long double x, long double y ); /* C++ only, requires <cmath> */
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile da cui partire.

*y*<br/>
Valore a virgola mobile da cui proseguire.

## <a name="return-value"></a>Valore restituito

Restituisce il valore a virgola mobile rappresentabile successivo del tipo restituito dopo aver *x* nella direzione del *y*. Se *x* e *y* sono uguali, la funzione restituisce *y*, convertito nel tipo restituito, senza eccezione attivata. Se *x* non è uguale a *y*, e il risultato è denormalizzato o zero, il **FE_UNDERFLOW** e **FE_INEXACT** stati delle eccezioni a virgola mobile sono impostate, e viene restituito il risultato corretto. Se uno dei due *x* oppure *y* è NAN, il valore restituito è uno dei valori NaN di input. Se *x* è finito e il risultato è infinito o non rappresentabile nel tipo, viene restituito un valore con il segno corretto infinito o NAN, la **FE_OVERFLOW** e **FE_INEXACT** stati delle eccezioni a virgola mobile sono impostati, e **errno** è impostata su **ERANGE**.

## <a name="remarks"></a>Note

Il **nextafter** e **nexttoward** famiglie di funzioni sono equivalenti, tranne per il tipo di parametro *y*. Se *x* e *y* sono uguali, viene restituito il valore *y* convertito nel tipo restituito.

Dato che C++ consente l'overload, se si include \<cmath > è possibile chiamare overload di **nextafter** e **nexttoward** che restituiscono **float** e**lungo** **doppie** tipi. In un programma C **nextafter** e **nexttoward** restituiscono sempre **double**.

Il **nextafter** e **_nextafterf** funzioni sono specifiche di Microsoft. Il **_nextafterf** funzione è disponibile solo durante la compilazione per x64.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------------|-------------------------------|
|**nextafter**, **nextafterf**, **nextafterl**, **_nextafterf**, **nexttoward**, **nexttowardf** , **nexttowardl**|\<math.h>|\<math.h> o \<cmath>|
|**_nextafter**|\<float.h>|\<float.h> o \<cfloat>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
