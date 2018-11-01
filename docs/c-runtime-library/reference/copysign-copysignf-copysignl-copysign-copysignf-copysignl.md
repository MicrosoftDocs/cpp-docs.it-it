---
title: copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl
ms.date: 04/05/2018
apiname:
- copysignf
- copysignl
- _copysignl
- _copysign
- _copysignf
- copysign
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
- _copysignl
- copysign
- copysignf
- _copysign
- copysignl
- _copysignf
helpviewer_keywords:
- copysignl function
- _copysignl function
- copysign function
- _copysignf function
- _copysign function
- copysignf function
ms.assetid: 009216d6-72a2-402d-aa6c-91d924b2c9e4
ms.openlocfilehash: 6f450da4a4391f94d1905beefdeca8e3f01fec51
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662813"
---
# <a name="copysign-copysignf-copysignl-copysign-copysignf-copysignl"></a>copysign, copysignf, copysignl, _copysign, _copysignf, _copysignl

Restituisce un valore che ha la grandezza di un argomento e il segno di un altro.

## <a name="syntax"></a>Sintassi

```C
double copysign(
   double x,
   double y
);
float copysign(
   float x,
   float y
); // C++ only
long double copysign(
   long double x,
   long double y
); // C++ only
float copysignf(
   float x,
   float y
); // C++ only
long double copysignl(
   long double x,
   long double y
); // C++ only
double _copysign(
   double x,
   double y
);
long double _copysignl(
   long double x,
   long double y
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Il valore a virgola mobile restituito come grandezza del risultato.

*y*<br/>
Il valore a virgola mobile restituito come segno del risultato.

[Routine del supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)

## <a name="return-value"></a>Valore restituito

Il **copysign** le funzioni restituiscono un valore a virgola mobile che combina la grandezza del *x* e il segno di *y*. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **copysign** che accettano e restituiscono **float** oppure **long** **double** valori. In un programma C **copysign** accetta e restituisce sempre un **doppie**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_copysign**|\<float.h>|
|**copysign**, **copysignf**, **copysignl**, **copysignf**, **copysignl**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[fabs, fabsf, fabsl](fabs-fabsf-fabsl.md)<br/>
[_chgsign, _chgsignf, _chgsignl](chgsign-chgsignf-chgsignl.md)<br/>
