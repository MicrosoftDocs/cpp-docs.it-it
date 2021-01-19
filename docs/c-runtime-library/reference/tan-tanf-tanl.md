---
title: tan, tanf, tanl
description: Informazioni di riferimento sulle API per Tan, TANF e Tanl; che calcola la tangente di un valore a virgola mobile.
ms.date: 1/15/2021
api_name:
- tan
- tanf
- tanl
- _o_tan
- _o_tanf
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
- tan
- tanf
- _tanl
- tanl
helpviewer_keywords:
- tanl function
- _tanl function
- tan function
- calculating tangents
- tangent
- tanf function
- trigonometric functions
ms.assetid: 36cc0ce8-9c80-4653-b354-ddb3b378b6bd
ms.openlocfilehash: 056afdf0bbac422c498bd54c2a154472bfd97c34
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98564056"
---
# <a name="tan-tanf-tanl"></a>`tan`, `tanf`, `tanl`

Calcola la tangente.

## <a name="syntax"></a>Sintassi

```C
double tan( double x );
float tanf( float x );
long double tanl( long double x );
#define tan(x) // Requires C11 or higher
```

```cpp
float tan( float x );  // C++ only
long double tan( long double x );  // C++ only
```

### <a name="parameters"></a>Parametri

*`x`*\
Angolo in radianti.

## <a name="return-value"></a>Valore restituito

Le **`tan`** funzioni restituiscono la tangente di *`x`* . Se *`x`* è maggiore o uguale a 263 o minore o uguale a-263, si verifica una perdita di significato nel risultato.

|Input|Eccezione SEH|**`Matherr`** eccezione|
|-----------|-------------------|-------------------------|
|`± QNAN`,`IND`|Nessuno|`_DOMAIN`|
|`± INF`|**Non valido**|`_DOMAIN`|

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare gli overload di **`tan`** che accettano e restituiscono **`float`** valori o **`long double`** . In un programma C, a meno che non si usi la `<tgmath.h>` macro per chiamare questa funzione, **`tan`** accetta e restituisce sempre **`double`** .

Se si usa la `<tgmath.h>` `tan()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------|-|
|**`tan`**, **`tanf`**, **`tanl`**|`<math.h>`|`<cmath>` o `<math.h>`|
|**`tan()`** macro | `<tgmath.h>` ||

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_tan.c
// This program displays the tangent of pi / 4
// Compile by using: cl crt_tan.c

#include <math.h>
#include <stdio.h>

int main( void )
{
   double pi = 3.1415926535;
   double x;

   x = tan( pi / 4 );
   printf( "tan( %f ) = %f\n", pi/4, x );
}
```

```Output
tan( 0.785398 ) = 1.000000
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`acos, acosf, acosl`](acos-acosf-acosl.md)\
[`asin, asinf, asinl`](asin-asinf-asinl.md)\
[`atan, atanf, atanl, atan2, atan2f, atan2l`](atan-atanf-atanl-atan2-atan2f-atan2l.md)\
[`cos, cosf, cosl`](cos-cosf-cosl.md)\
[`sin, sinf, sinl`](sin-sinf-sinl.md)\
[`_CItan`](../../c-runtime-library/citan.md)