---
title: isnan, _isnan, _isnanf
ms.date: 01/31/2019
apiname:
- _isnan
- _isnanf
- isnan
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
- _isnan
- isnan
- math/isnan
- math/_isnan
- math/_isnanf
- _isnanf
helpviewer_keywords:
- NAN (not a number)
- _isnan function
- IEEE floating-point representation
- Not a Number (NANs)
- isnan function
ms.assetid: 391fbc5b-89a4-4fba-997e-68f1131caf82
ms.openlocfilehash: 8a907dd33803cebd7bc5d71789834d115333b6a0
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55703090"
---
# <a name="isnan-isnan-isnanf"></a>isnan, _isnan, _isnanf

Verifica se un valore a virgola mobile non è un numero (NaN, Not a Number).

## <a name="syntax"></a>Sintassi

```C
int isnan(
   /* floating-point */ x
); /* C-only macro */

int _isnan(
   double x
);

int _isnanf(
   float x
); /* x64 only */

template <class T>
bool isnan(
   T x
) throw(); /* C++ only */
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile da verificare.

## <a name="return-value"></a>Valore restituito

In C, il **isnan** macro e il **isNaN** e **_isnanf** funzioni restituiscono un valore diverso da zero se l'argomento *x* è NAN; in caso contrario è Restituisce 0.

In C++, il **isnan** funzione di modello restituisce **true** se l'argomento *x* è NaN; in caso contrario, restituisce **false**.

## <a name="remarks"></a>Note

Poiché un valore NaN non risulta uguale a qualsiasi altro valore NaN, è necessario utilizzare una di queste funzioni o le macro per rilevare uno. NaN viene generato quando il risultato di un'operazione a virgola mobile non può essere rappresentato in formato a virgola mobile IEEE 754 per il tipo specificato. Per informazioni su come un valore NaN per l'output, vedere [printf](printf-printf-l-wprintf-wprintf-l.md).

Quando viene compilato come C++, il **isnan** macro non è definita e un **isnan** viene invece definita funzione del modello. Si comporta esattamente come la macro, ma restituisce un valore di tipo **bool** anziché un numero intero.

Il **isNaN** e **_isnanf** funzioni sono specifiche di Microsoft. Il **_isnanf** funzione di disponibile solo quando viene compilato per x64.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------------|-------------------------------|
|**isnan**, **_isnanf**|\<math.h>|\<math.h> o \<cmath>|
|**_isnan**|\<float.h>|\<float.h> o \<cfloat>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[fpclassify](fpclassify.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
[isfinite, _finite, _finitef](finite-finitef.md)<br/>
[isinf](isinf.md)<br/>
[isnormal](isnormal.md)<br/>
