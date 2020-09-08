---
title: exp2, exp2f, exp2l
description: Riferimento API per exp2 (), exp2f () e exp2l () che calcola 2 elevate al valore specificato.
ms.date: 9/1/2020
api_name:
- exp2
- exp2f
- exp2l
- _o_exp2
- _o_exp2f
- _o_exp2l
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
- exp2
- math/exp2
- exp2f
- math/exp2f
- exp2l
- math/exp2l
helpviewer_keywords:
- exp2 function
- exp2f function
- exp2l function
ms.assetid: 526e3e10-201a-4610-a886-533f44ece344
ms.openlocfilehash: 518525a38ef575583fde3b7732561f2fa553dd18
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556619"
---
# <a name="exp2-exp2f-exp2l"></a>exp2, exp2f, exp2l

Calcola 2 elevato al valore specificato.

## <a name="syntax"></a>Sintassi

```C
double exp2(
   double x
);

float exp2(
   float x
);  // C++ only

long double exp2(
   long double x
); // C++ only

float exp2f(
   float x
);

long double exp2l(
   long double x
);
#define exp2(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Valore dell'esponente.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce l'esponente in base 2 di *x*, ovvero 2<sup>x</sup>. In caso contrario, restituisce uno dei valori seguenti:

|Problema|Return|
|-----------|------------|
|*x* = ± 0|1|
|*x* =-infinito|+0|
|*x* = + infinito|+INFINITO|
|*x* = Nan|NaN|
|Errore di intervallo di overflow|+HUGE_VAL, +HUGE_VALF o +HUGE_VALL|
|Errore di intervallo di underflow|Risultato corretto, dopo l'arrotondamento|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **exp2** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **exp2** accetta sempre e restituisce un oggetto, a meno che non **`double`** si usi la macro in <tgmath. h>.

Se si usa la \<tgmath.h> `exp2()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**exp2**, **expf2**, **expl2**|\<math.h>|\<cmath>|
|**exp2** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[exp, expf, expl](exp-expf.md)<br/>
[log2, log2f, log2l](log2-log2f-log2l.md)<br/>
