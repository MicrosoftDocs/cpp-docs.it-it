---
title: logb, logbf, logbl, _logb, _logbf
description: Informazioni di riferimento sulle API per logb, logbf, logbl, _logb e _logbf; che estrae il valore dell'esponente di un argomento a virgola mobile.
ms.date: 9/1/2020
api_name:
- logb
- _logb
- _logbl
- logbf
- _logbf
- logbl
- _o__logb
- _o_logb
- _o_logbf
- _o_logbl
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
ms.openlocfilehash: 1131fda94e4748d2fb2f2197f68966aaacc11d05
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556214"
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
#define logb(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Un valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

**logb** restituisce il valore dell'esponente non distorta di *x* come intero con segno rappresentato come valore a virgola mobile.

## <a name="remarks"></a>Osservazioni

Le funzioni **logb** estraggono il valore esponenziale dell'argomento a virgola mobile *x*, come se le *x* fossero rappresentate con un intervallo infinito. Se l'argomento *x* viene denormalizzato, viene considerato come se fosse normalizzato.

Poiché C++ consente l'overload, è possibile chiamare overload di **logb** che accettano e restituiscono **`float`** **`long double`** valori o. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **logb** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `logb()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± QNAN, IND|Nessuno|_DOMAIN|
|± 0|ZERODIVIDE|_SING|

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_logb**|\<float.h>|
|**logb**, **logbf**, **logbl**, **_logbf**|\<math.h>|
|**logb** (macro) | \<tgmath.h> |

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[frexp](frexp.md)<br/>
