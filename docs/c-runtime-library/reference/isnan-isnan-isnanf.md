---
title: isnan, _isnan, _isnanf | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- NAN (not a number)
- _isnan function
- IEEE floating-point representation
- Not a Number (NANs)
- isnan function
ms.assetid: 391fbc5b-89a4-4fba-997e-68f1131caf82
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: baf92397087ebbac27c7fea8cf5f524b33736b19
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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

In C, il **isnan** (macro) e il **isNaN** e **_isnanf** funzioni restituiscono un valore diverso da zero se l'argomento *x* è una NAN; in caso contrario è Restituisce 0.

In C++, il **isnan** modello funzioni restituiscono **true** se l'argomento *x* è una NAN; in caso contrario restituiscono **false**.

## <a name="remarks"></a>Note

C **isnan** macro e il **isNaN** e **_isnanf** funzioni testano valore a virgola mobile *x*, restituendo un valore diverso da zero se *x* non è un valore di numero (NAN). Viene generato un valore NaN quando il risultato dell'operazione a virgola mobile non può essere rappresentato in formato a virgola mobile IEEE 754 per il tipo specificato. Per informazioni sulla rappresentazione di un valore NaN per l'output, vedere [printf](printf-printf-l-wprintf-wprintf-l.md).

Quando viene compilato come C++, il **isnan** macro non è definita e una **isnan** definita funzione di modello. Restituisce un valore di tipo **bool** anziché un numero intero.

Il **isNaN** e **_isnanf** funzioni sono specifiche di Microsoft. Il **_isnanf** funzione disponibile solo quando viene compilato per x64.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|-------------|---------------------------|-------------------------------|
|**isNaN**, **_isnanf**|\<math.h>|\<math.h> o \<cmath>|
|**_isnan**|\<float.h>|\<float.h> o \<cfloat>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[_finite, _finitef](finite-finitef.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
