---
title: nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf, nexttowardl
description: Informazioni di riferimento sulle API per nextafter, nextafterf, nextafterl, _nextafter, _nextafterf, nexttoward, nexttowardf e nexttowardl; che restituiscono il valore a virgola mobile rappresentabile successivo.
ms.date: 1/15/2021
api_name:
- nextafterf
- _nextafterf
- nextafter
- nextafterl
- _nextafter
- nexttoward
- nexttowardf
- nexttowardl
- _o__nextafter
- _o_nextafter
- _o_nextafterf
- _o_nextafterl
- _o_nexttoward
- _o_nexttowardf
- _o_nexttowardl
- _o__nextafterf
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
ms.openlocfilehash: 664ddb204fa089f83acebf6a9042b17a776ea306
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98564134"
---
# <a name="nextafter-nextafterf-nextafterl-_nextafter-_nextafterf-nexttoward-nexttowardf-nexttowardl"></a>`nextafter`, `nextafterf`, `nextafterl`, `_nextafter`, `_nextafterf`, `nexttoward`, `nexttowardf`, `nexttowardl`

Restituisce il valore a virgola mobile rappresentabile successivo.

## <a name="syntax"></a>Sintassi

```C
double nextafter( double x, double y );
float nextafterf( float x, float y );
long double nextafterl( long double x, long double y );

double _nextafter( double x, double y );
float _nextafterf( float x, float y ); /* x64 only */

#define nextafter(X, Y) // Requires C11 or higher

double nexttoward( double x, long double y );
float nexttowardf( float x, long double y );
long double nexttowardl( long double x, long double y );

#define nexttoward(X, Y) // Requires C11 or higher

float nextafter( float x, float y ); /* C++ only, requires <cmath> */
long double nextafter( long double x, long double y ); /* C++ only, requires <cmath> */

float nexttoward( float x, long double y ); /* C++ only, requires <cmath> */
long double nexttoward( long double x, long double y ); /* C++ only, requires <cmath> */
```

### <a name="parameters"></a>Parametri

*`x`*\
Valore a virgola mobile da cui partire.

*`y`*\
Valore a virgola mobile da cui proseguire.

## <a name="return-value"></a>Valore restituito

Restituisce il valore a virgola mobile rappresentabile successivo del tipo restituito dopo *`x`* nella direzione di *`y`* . Se *`x`* e *`y`* sono uguali, la funzione restituisce *`y`* , convertita nel tipo restituito, senza che venga generata alcuna eccezione. Se *`x`* non è uguale a *`y`* e il risultato è un valore denormalizzato o zero, **`FE_UNDERFLOW`** **`FE_INEXACT`** vengono impostati gli Stati di eccezione e a virgola mobile e viene restituito il risultato corretto. Se *`x`* o *`y`* è un valore NaN, il valore restituito è uno dei Nans di input. Se *`x`* è finito e il risultato è infinito o non rappresentabile nel tipo, viene restituito un valore infinito o NaN firmato correttamente, **`FE_OVERFLOW`** **`FE_INEXACT`** vengono impostati gli Stati di eccezione a virgola mobile e e **`errno`** viene impostato su **`ERANGE`** .

## <a name="remarks"></a>Commenti

Le **`nextafter`** **`nexttoward`** famiglie di funzioni e sono equivalenti, ad eccezione del tipo di parametro *`y`* . Se *`x`* e *`y`* sono uguali, il valore restituito viene *`y`* convertito nel tipo restituito.

Poiché C++ consente l'overload, se si include `<cmath>` è possibile chiamare gli overload di **`nextafter`** e **`nexttoward`** che restituiscono i **`float`** **`long double`** tipi e. In un programma C, a meno che non si stia usando la `<tgmath.h>` macro per chiamare questa funzione, **`nextafter`** e **`nexttoward`** restituisca sempre **`double`** .

Se si usa la `<tgmath.h>` `nextafter()` `nexttoward()` macro o, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Le funzioni **_nextafter** e **_nextafterf** sono specifiche di Microsoft. La funzione **_nextafterf** è disponibile solo quando si esegue la compilazione per x64.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------------|-------------------------------|
|**`nextafter`**, **`nextafterf`**, **`nextafterl`**, **`_nextafterf`**, **`nexttoward`**, **`nexttowardf`**, **`nexttowardl`**|`<math.h>`|`<math.h>` o `<cmath>`|
|**`_nextafter`**|`<float.h>`|`<float.h>` o `<cfloat>`|
|**`nextafter`** macro,  **`nexttoward`** macro| `<tgmath.h>` ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`isnan`, `_isnan`, `_isnanf`](isnan-isnan-isnanf.md)
