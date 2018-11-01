---
title: hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl
ms.date: 04/05/2018
apiname:
- _hypotf
- hypot
- hypotf
- _hypot
- _hypotl
- hypotl
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
- hypotf
- hypotl
- _hypotl
- hypot
- _hypot
- _hypotf
helpviewer_keywords:
- hypotenuse calculation
- hypot function
- hypotf function
- triangles, calculating hypotenuse
- hypotl function
- calculating hypotenuses
- _hypot function
ms.assetid: 6a13887f-bd53-43fc-9d77-5b42d6e49925
ms.openlocfilehash: ea25ea87a0ec23a0e98dbdc7bb92ce691fc2fa0f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50439533"
---
# <a name="hypot-hypotf-hypotl-hypot-hypotf-hypotl"></a>hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl

Calcola l'ipotenusa.

## <a name="syntax"></a>Sintassi

```C
double hypot(
   double x,
   double y
);
float hypotf(
   float x,
   float y
);
long double hypotl(
   long double x,
   long double y
);
double _hypot(
   double x,
   double y
);
float _hypotf(
   float x,
   float y
);
long double _hypotl(
   long double x,
   long double y
);
```

### <a name="parameters"></a>Parametri

*x*, *y*<br/>
Valori a virgola mobile.

## <a name="return-value"></a>Valore restituito

Caso di esito positivo **hypot** restituisce la lunghezza dell'ipotenusa; in caso di overflow **hypot** restituisce INF (infinito) e il **errno** variabile è impostata su **ERANGE** . È possibile usare **matherr** per modificare la gestione degli errori.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **hypot** funzioni calcolano la lunghezza dell'ipotenusa di un triangolo rettangolo, dato la lunghezza dei due lati *x* e *y* (in altre parole, la radice quadrata del *x*<sup>2</sup> + *y*<sup>2</sup>).

Le versioni delle funzioni con caratteri di sottolineatura iniziali sono fornite per compatibilità con standard precedenti. Il comportamento è identico per le versioni senza caratteri di sottolineatura iniziali. È consigliabile usare le versioni senza caratteri di sottolineatura iniziali per il nuovo codice.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**hypot**, **hypotf**, **hypotl**, **hypot**, **_hypotf**, **_hypotl**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_hypot.c
// This program prints the hypotenuse of a right triangle.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 3.0, y = 4.0;

   printf( "If a right triangle has sides %2.1f and %2.1f, "
           "its hypotenuse is %2.1f\n", x, y, _hypot( x, y ) );
}
```

```Output
If a right triangle has sides 3.0 and 4.0, its hypotenuse is 5.0
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_cabs](cabs.md)<br/>
[_matherr](matherr.md)<br/>