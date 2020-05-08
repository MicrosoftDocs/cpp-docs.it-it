---
title: acos, acosf, acosl
ms.date: 4/2/2020
api_name:
- acosf
- acos
- acosl
- _o_acos
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
ms.assetid: 00b89c48-8faf-4824-aa95-fa4349a4975d
ms.openlocfilehash: c6e6b1da823f050d20d47ecbad96d4e0b58fa452
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82916881"
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
Valore compreso tra-1 e 1, per il quale calcolare l'arcoseno (il coseno inverso).

## <a name="return-value"></a>Valore restituito

La funzione **ARccOS** restituisce l'arcoseno di *x* nell'intervallo compreso tra 0 e π radianti.

Per impostazione predefinita, se *x* è minore di-1 o maggiore di 1, **ARccOS** restituisce un valore indefinito.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± ∞|NON VALIDO|_DOMAIN|
|± QNAN, IND|none|_DOMAIN|
|&#124;x&#124;>1|NON VALIDO|_DOMAIN|

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare gli overload di **ARccOS** che accettano e restituiscono i tipi **float** e **Long** **Double** . In un programma C, **ARccOS** accetta e restituisce sempre un **valore Double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|Intestazioni facoltative|
|-------------|---------------------|----------------------|
|**ARccOS**, **acosf**, **acosl**|\<math.h>|\<errno.h>|

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

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[asin, asinf, asinl](asin-asinf-asinl.md)<br/>
[atan, atanf, atanl, atan2, atan2f, atan2l](atan-atanf-atanl-atan2-atan2f-atan2l.md)<br/>
[cos, cosf, cosl](cos-cosf-cosl.md)<br/>
[_matherr](matherr.md)<br/>
[sin, sinf, sinl](sin-sinf-sinl.md)<br/>
[tan, tanf, tanl](tan-tanf-tanl.md)
