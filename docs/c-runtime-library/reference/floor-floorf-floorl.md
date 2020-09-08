---
title: floor, floorf, floorl
description: Informazioni di riferimento sulle API per Floor, floorf e flooral; che calcola la superficie di un valore.
ms.date: 9/1/2020
api_name:
- floorf
- floorl
- floor
- _o_floor
- _o_floorf
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
- floor
- floorl
- _floorl
- floorf
helpviewer_keywords:
- floor function
- floorf function
- calculating floors of values
- floorl function
ms.assetid: e9955f70-d659-414f-8050-132e13c8ff36
ms.openlocfilehash: 6af047d3da891270ab6a596dfc3ebef0941a91cf
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556736"
---
# <a name="floor-floorf-floorl"></a>floor, floorf, floorl

Calcola la parte intera di un valore.

## <a name="syntax"></a>Sintassi

```C
double floor(
   double x
);
float floor(
   float x
); // C++ only
long double floor(
   long double x
); // C++ only
float floorf(
   float x
);
long double floorl(
   long double x
);
#define floor(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le funzioni **floor** restituiscono un valore a virgola mobile che rappresenta l'intero più grande minore o uguale a *x*. Non viene restituito alcun errore.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± QNAN, IND|Nessuno|_DOMAIN|

**floor** ha un'implementazione che usa Streaming SIMD Extensions 2 (SSE2). Per informazioni e le restrizioni sull'uso dell'implementazione SSE2, vedere [_set_SSE2_enable](set-sse2-enable.md).

## <a name="remarks"></a>Osservazioni

C++ consente l'overload, quindi è possibile chiamare gli overload di **floor** che accettano e restituiscono **`float`** valori e **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **floor** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `floor()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**floor**, **floorf**, **floorl**|\<math.h>|
|macro **floor** | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_floor.c
// This example displays the largest integers
// less than or equal to the floating-point values 2.8
// and -2.8. It then shows the smallest integers greater
// than or equal to 2.8 and -2.8.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double y;

   y = floor( 2.8 );
   printf( "The floor of 2.8 is %f\n", y );
   y = floor( -2.8 );
   printf( "The floor of -2.8 is %f\n", y );

   y = ceil( 2.8 );
   printf( "The ceil of 2.8 is %f\n", y );
   y = ceil( -2.8 );
   printf( "The ceil of -2.8 is %f\n", y );
}
```

```Output
The floor of 2.8 is 2.000000
The floor of -2.8 is -3.000000
The ceil of 2.8 is 3.000000
The ceil of -2.8 is -2.000000
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[ceil, ceilf, ceill](ceil-ceilf-ceill.md)<br/>
[round, roundf, roundl](round-roundf-roundl.md)<br/>
[fmod, fmodf](fmod-fmodf.md)<br/>
