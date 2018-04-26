---
title: 'Funzioni di Bessel: _j0, _j1, _jn, _y0, _y1, _yn | Microsoft Docs'
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _j0
- _j1
- _jn
- _y0
- _y1
- _yn
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
- c.bessel
- _j0
- _j1
- _jn
- _y0
- _y1
- _yn
dev_langs:
- C++
helpviewer_keywords:
- Bessel functions
- _j0 function
- _j1 function
- _jn function
- _y0 function
- _y1 function
- _yn function
ms.assetid: a21a8bf1-df9d-4ba0-a8c2-e7ef71921d96
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 10e57651a3349f37b485eb8c4fe6a41276432fb5
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="bessel-functions-j0-j1-jn-y0-y1-yn"></a>Funzioni di Bessel: _j0, _j1, _jn, _y0, _y1, _yn

Calcola la funzione di Bessel di primo o secondo tipo, degli ordini 0, 1 o n. Le funzioni di Bessel vengono usate comunemente in matematica per la teoria delle onde elettromagnetiche.

## <a name="syntax"></a>Sintassi

```C
double _j0(
   double x
);
double _j1(
   double x
);
double _jn(
   int n,
   double x
);
double _y0(
   double x
);
double _y1(
   double x
);
double _yn(
   int n,
   double x
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile.

*n*<br/>
Ordine Integer della funzione di Bessel.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce una funzione di Bessel *x*. Se *x* è negativa nella **_y0**, **_y1**, oppure **Yn** funzioni, la routine imposta **errno** per  **EDOM**, viene stampato un **domain** messaggio di errore **stderr**e restituisce **_HUGE_VAL**. È possibile modificare utilizzando la gestione degli errori **matherr**.

## <a name="remarks"></a>Note

Il **_j0**, **_j1**, e **Jn** routine restituiscono funzioni del primo tipo di Bessel: ordini 0, 1 e n, rispettivamente.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± **QNAN**, **IND**|**NON VALIDO**|**DOMAIN**|

Il **_y0**, **_y1**, e **Yn** routine restituiscono Bessel funzioni del secondo tipo: ordini 0, 1 e n, rispettivamente.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± **QNAN**, **IND**|**NON VALIDO**|**DOMAIN**|
|± 0|**ZERODIVIDE**|**SING**|
|&#124;x&#124; < 0,0|**NON VALIDO**|**DOMAIN**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_j0**, **_j1**, **Jn**, **_y0**, **_y1**, **Yn**|\<cmath> (C++), \<math.h> (C, C++)|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_bessel1.c
#include <math.h>
#include <stdio.h>

int main( void )
{
   double x = 2.387;
   int n = 3, c;

   printf( "Bessel functions for x = %f:\n", x );
   printf( "   Kind   Order  Function     Result\n\n" );
   printf( "   First  0      _j0( x )     %f\n", _j0( x ) );
   printf( "   First  1      _j1( x )     %f\n", _j1( x ) );
   for( c = 2; c < 5; c++ )
      printf( "   First  %d      _jn( %d, x )  %f\n", c, c, _jn( c, x ) );
   printf( "   Second 0      _y0( x )     %f\n", _y0( x ) );
   printf( "   Second 1      _y1( x )     %f\n", _y1( x ) );
   for( c = 2; c < 5; c++ )
      printf( "   Second %d      _yn( %d, x )  %f\n", c, c, _yn( c, x ) );
}
```

```Output
Bessel functions for x = 2.387000:
   Kind   Order  Function     Result

   First  0      _j0( x )     0.009288
   First  1      _j1( x )     0.522941
   First  2      _jn( 2, x )  0.428870
   First  3      _jn( 3, x )  0.195734
   First  4      _jn( 4, x )  0.063131
   Second 0      _y0( x )     0.511681
   Second 1      _y1( x )     0.094374
   Second 2      _yn( 2, x )  -0.432608
   Second 3      _yn( 3, x )  -0.819314
   Second 4      _yn( 4, x )  -1.626833
```

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_matherr](matherr.md)<br/>
