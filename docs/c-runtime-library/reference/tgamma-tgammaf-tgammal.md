---
title: tgamma, tgammaf, tgammal
ms.date: 4/2/2020
api_name:
- tgamma
- tgammaf
- tgammal
- _o_tgamma
- _o_tgammaf
- _o_tgammal
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
- tgamma
- tgammaf
- tgammal
- math/tgamma
- math/tgammaf
- math/tgammal
helpviewer_keywords:
- tgamma function
- tgammaf function
- tgammal function
ms.assetid: f1bd2681-8af2-48a9-919d-5358fd068acd
ms.openlocfilehash: f38ae3f3ad38eeb9806803fd8dad1b8297393168
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218520"
---
# <a name="tgamma-tgammaf-tgammal"></a>tgamma, tgammaf, tgammal

Determina la funzione gamma del valore specificato.

## <a name="syntax"></a>Sintassi

```C
double tgamma(
   double x
);

float tgamma(
   float x
); //C++ only

long double tgamma(
   long double x
); //C++ only

float tgammaf(
   float x
);

long double tgammal(
   long double x
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore di cui trovare la funzione gamma.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce la gamma di *x*.

È possibile che si verifichi un errore di intervallo se la grandezza di *x* è troppo grande o troppo piccola per il tipo di dati. Se *x* <= 0, è possibile che si verifichi un errore di dominio o di intervallo.

|Problema|Return|
|-----------|------------|
|x = ± 0|INFINITO ±|
|x = intero negativo|NaN|
|x =-infinito|NaN|
|x = +INFINITY|+INFINITO|
|x = NaN|NaN|
|Eerrore di dominio|NaN|
|Errore polo|± HUGE_VAL, ± HUGE_VALF o ± HUGE_VALL|
|Errore di intervallo di overflow|± HUGE_VAL, ± HUGE_VALF o ± HUGE_VALL|
|Errore di intervallo di underflow|Valore corretto dopo l'arrotondamento.|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **tgamma** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C **tgamma** accetta e restituisce sempre un oggetto **`double`** .

Se x è un numero naturale, questa funzione restituisce il fattoriale di (x-1).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**tgamma**, **tgammaf**, **tgammal**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[lgamma, lgammaf, lgammal](lgamma-lgammaf-lgammal.md)<br/>
