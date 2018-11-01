---
title: acos, acosf, acosl
ms.date: 04/05/2018
apiname:
- acosf
- acos
- acosl
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
ms.assetid: 00b89c48-8faf-4824-aa95-fa4349a4975d
ms.openlocfilehash: 22149e9ff552015238d34a15166d04115438534b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636592"
---
# <a name="acos-acosf-acosl"></a>acos, acosf, acosl

Calcola l'arcocoseno.

## <a name="syntax"></a>Sintassi

```C
double acos( double x );
float acosf( float x );
long double acosl( long double x );
```

```cpp
float acos( float x );   // C++ only
long double acos( long double x );   // C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore compreso tra -1 e 1, per la quale calcolare l'arcocoseno (il coseno inverso).

## <a name="return-value"></a>Valore restituito

Il **acos** funzione restituisce l'arcocoseno di *x* nell'intervallo da 0 a radianti π.

Per impostazione predefinita, se *x* è minore di -1 o maggiore di 1 **acos** restituisce un valore indefinito.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± ∞|NON VALIDO|_DOMAIN|
|± QNAN,IND|none|_DOMAIN|
|&#124;x&#124;>1|NON VALIDO|_DOMAIN|

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **acos** che accettano e restituiscono **float** e **long** **double** tipi. In un programma C **acos** accetta e restituisce sempre un **doppie**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**acos**, **acosf**, **acosl**|\<math.h>|\<errno.h>|

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[asin, asinf, asinl](asin-asinf-asinl.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)