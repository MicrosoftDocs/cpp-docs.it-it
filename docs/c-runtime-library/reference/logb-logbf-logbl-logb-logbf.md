---
title: logb, logbf, logbl, _logb, _logbf
ms.date: 04/05/2018
apiname:
- logb
- _logb
- _logbl
- logbf
- logbl
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
ms.openlocfilehash: 9f598eedaf30b1f2a1858129e648a117355d112e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466287"
---
# <a name="logb-logbf-logbl-logb-logbf"></a>logb, logbf, logbl, _logb, _logbf

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

**logb** restituisce il valore dell'esponente non distorto del *x* come un intero con segno rappresentato come un valore a virgola mobile.

## <a name="remarks"></a>Note

Il **logb** funzioni estraggono il valore esponenziale dell'argomento a virgola mobile *x*, come se *x* fosse rappresentato con un intervallo infinito. Se l'argomento *x* è denormalizzato, viene considerato come se fosse normalizzato.

Dato che C++ consente l'overload, è possibile chiamare overload di **logb** che accettano e restituiscono **float** oppure **long** **double** valori. In un programma C **logb** accetta e restituisce sempre un **doppie**.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± QNAN,IND|None|_DOMAIN|
|± 0|ZERODIVIDE|_SING|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_logb**|\<float.h>|
|**logb**, **logbf**, **logbl**, **logbf**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
