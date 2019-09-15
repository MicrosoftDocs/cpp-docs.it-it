---
title: logb, logbf, logbl, _logb, _logbf
ms.date: 04/05/2018
api_name:
- logb
- _logb
- _logbl
- logbf
- logbl
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- logb
- logbl
- _logb
- _logbf
- logbf
helpviewer_keywords:
- _logbf function
- mantissas, floating-point variables
- logbf function
- _logb function
- exponent, floating-point numbers
- logbl function
- logb function
- floating-point functions
- floating-point functions, mantissa and exponent
- exponents and mantissas
ms.assetid: 780c4daa-6fe6-4fbc-9412-4c1ba1a1766f
ms.openlocfilehash: c5fc59f786b00dcf4ab1056424d8442a03f3adbf
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70953156"
---
# <a name="logb-logbf-logbl-_logb-_logbf"></a>logb, logbf, logbl, _logb, _logbf

Estrae il valore dell'esponente di un argomento a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
double logb(
   double x
);
float logb(
   float x
); // C++ only
long double logb(
   long double x
); // C++ only
float logbf(
   float x
);
long double logbl(
   long double x
);
double _logb(
   double x
);
float _logbf(
   float x
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Un valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

**logb** restituisce il valore dell'esponente non distorta di *x* come intero con segno rappresentato come valore a virgola mobile.

## <a name="remarks"></a>Note

Le funzioni **logb** estraggono il valore esponenziale dell'argomento a virgola mobile *x*, come se le *x* fossero rappresentate con un intervallo infinito. Se l'argomento *x* viene denormalizzato, viene considerato come se fosse normalizzato.

Poiché C++ consente l'overload, è possibile chiamare overload di **logb** che accettano e restituiscono valori di tipo **float** o **Long** **Double** . In un programma C **logb** accetta e restituisce sempre un **valore Double**.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± QNAN, IND|None|_DOMAIN|
|± 0|ZERODIVIDE|_SING|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_logb**|\<float.h>|
|**logb**, **logbf**, **logbl**, **_logbf**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
