---
title: hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl
description: Informazioni di riferimento sulle API per hypot, hypotf, hypotl, _hypot, _hypotf e _hypotl; che calcola l'ipotenusa.
ms.date: 9/1/2020
api_name:
- _hypotf
- hypot
- hypotf
- _hypot
- _hypotl
- hypotl
- _o__hypot
- _o__hypotf
- _o_hypot
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
ms.openlocfilehash: 199e330dcd78c372a0279cac9f0e96cb47c561e8
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556450"
---
# <a name="hypot-hypotf-hypotl-_hypot-_hypotf-_hypotl"></a>hypot, hypotf, hypotl, _hypot, _hypotf, _hypotl

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
#define hypotf(X, Y) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*, *y*\
Valori a virgola mobile.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, **hypot** restituisce la lunghezza dell'ipotenusa; in overflow, **hypot** restituisce inf (infinito) e la variabile **errno** è impostata su **ERANGE**. È possibile utilizzare **_matherr** per modificare la gestione degli errori.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Le funzioni **hypot** calcolano la lunghezza dell'ipotenusa di un triangolo rettangolo, data la lunghezza dei due lati *x* e *y* (in altre parole, la radice quadrata di *x*<sup>2</sup>  +  *y*<sup>2</sup>).

Le versioni delle funzioni con caratteri di sottolineatura iniziali sono fornite per compatibilità con standard precedenti. Il comportamento è identico per le versioni senza caratteri di sottolineatura iniziali. È consigliabile usare le versioni senza caratteri di sottolineatura iniziali per il nuovo codice.

Se si usa la \<tgmath.h> `hypot()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**hypot**, **hypotf**, **hypotl**, **_hypot**, **_hypotf**, **_hypotl**|\<math.h>|
|**hypot** (macro) | \<tgmath.h> |

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_cabs](cabs.md)<br/>
[_matherr](matherr.md)<br/>
