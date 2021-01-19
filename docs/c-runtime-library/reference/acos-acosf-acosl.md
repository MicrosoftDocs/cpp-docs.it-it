---
title: acos, acosf, acosl
description: Informazioni di riferimento sulle API per ARccOS, acosf e acosl; che calcola l'arcoseno di un valore a virgola mobile.
ms.date: 1/15/2021
api_name:
- acosf
- acos
- acosl
- _o_acos
- _o_acosf
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
- acos
- acosl
- acosf
- math/acosf
- math/acosl
helpviewer_keywords:
- acos function
- acosl function
- acosf function
- trigonometric functions
- arccosine function
ms.openlocfilehash: 63a9c9577e252c506191b7a49ec9da6502968095
ms.sourcegitcommit: 92dc6d99ba5dcf3b64dee164df2d29beb1e608da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/18/2021
ms.locfileid: "98563835"
---
# <a name="acos-acosf-acosl"></a>`acos`, `acosf`, `acosl`

Calcola l'arcocoseno.

## <a name="syntax"></a>Sintassi

```C
double acos( double x );
float acosf( float x );
long double acosl( long double x );
#define acos(X) // Requires C11 or higher

float acos( float x );   // C++ only
long double acos( long double x );   // C++ only
```

### <a name="parameters"></a>Parametri

*`x`*\
Valore compreso tra-1 e 1, per il quale calcolare l'arcoseno (il coseno inverso).

## <a name="return-value"></a>Valore restituito

La **`acos`** funzione restituisce l'arcoseno di *x* nell'intervallo compreso tra 0 e π radianti.

Per impostazione predefinita, se *`x`* è minore di-1 o maggiore di 1, **`acos`** restituisce un valore indefinito.

|Input|`SEH` eccezione|`Matherr` eccezione|
|-----------|-------------------|-----------------------|
|`± ∞`|`INVALID`|`_DOMAIN`|
|`± QNAN, IND`|Nessuno|`_DOMAIN`|
|&#124;`x`&#124;>1|`INVALID`|`_DOMAIN`|

## <a name="remarks"></a>Commenti

Poiché C++ consente l'overload, è possibile chiamare gli overload di **`acos`** che accettano e restituiscono i **`float`** **`long double`** tipi e. In un programma C, a meno che non si stia usando la `<tgmath.h>` macro per chiamare questa funzione, **`acos`** accetta sempre e restituisce un **`double`** .

Se si usa la `<tgmath.h>` `acos()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**`acos`**, **`acosf`**, **`acosl`**|`<math.h>`|`<errno.h>`|
|**`acos()`** macro | `<tgmath.h>` ||

## <a name="example"></a>Esempio

Questo programma richiede un valore compreso tra -1 e 1. I valori di input all'esterno di questo intervallo producono i messaggi di errore `_DOMAIN`. Se viene immesso un valore valido, il programma stampa l'arcoseno e l'arcocoseno di tale valore.

```C
// crt_asincos.c
// arguments: 0

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main( int ac, char* av[] )
{
    double  x,
            y;
    errno_t err;

    // argument checking
    if (ac != 2)
    {
        fprintf_s( stderr, "Usage: %s <number between -1 and 1>\n",
                   av[0]);
        return 1;
    }

    // Convert argument into a double value
    if ((err = sscanf_s( av[1], "%lf", &x )) != 1)
    {
        fprintf_s( stderr, "Error converting argument into ",
                   "double value.\n");
        return 1;
    }

    // Arcsine of X
    y = asin( x );
    printf_s( "Arcsine of %f = %f\n", x, y );

    // Arccosine of X
    y = acos( x );
    printf_s( "Arccosine of %f = %f\n", x, y );
}
```

```Output
Arcsine of 0.000000 = 0.000000
Arccosine of 0.000000 = 1.570796
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)\
[`asin`, `asinf`, `asinl`](asin-asinf-asinl.md)\
[`atan`, `atanf`, `atanl`, `atan2`, `atan2f`, `atan2l`](atan-atanf-atanl-atan2-atan2f-atan2l.md)\
[`cos`, `cosf`, `cosl`](cos-cosf-cosl.md)\
[`_matherr`](matherr.md)\
[`sin`, `sinf`, `sinl`](sin-sinf-sinl.md)\
[`tan`, `tanf`, `tanl`](tan-tanf-tanl.md)