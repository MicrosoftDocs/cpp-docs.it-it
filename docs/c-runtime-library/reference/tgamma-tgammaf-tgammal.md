---
title: tgamma, tgammaf, tgammal
description: Informazioni di riferimento sulle API per tgamma, tgammaf e tgammal; che determinano la funzione gamma del valore specificato.
ms.date: 9/1/2020
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
ms.openlocfilehash: b49020ca0697e920dccf188df4ad024820966571
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555176"
---
# <a name="tgamma-tgammaf-tgammal"></a>tgamma, tgammaf, tgammal

Determina la funzione gamma del valore specificato.

## <a name="syntax"></a>Sintassi

```C
double tgamma(
   double x
);

float tgammaf(
   float x
);

long double tgammal(
   long double x
);

#define tgamma(X) // Requires C11 or higher

float tgamma(
   float x
); //C++ only

long double tgamma(
   long double x
); //C++ only
```

### <a name="parameters"></a>Parametri

*x*\
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

Poiché C++ consente l'overload, è possibile chiamare overload di **tgamma** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **tgamma** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `tgamma()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Se x è un numero naturale, questa funzione restituisce il fattoriale di (x-1).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**tgamma**, **tgammaf**,  **tgammal**|\<math.h>|\<cmath>|
|**tgamma** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[lgamma, lgammaf, lgammal](lgamma-lgammaf-lgammal.md)<br/>
