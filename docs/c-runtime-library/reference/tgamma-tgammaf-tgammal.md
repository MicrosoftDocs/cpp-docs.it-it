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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: d7e27e8b818a16cb0c18f58e2f40c0090dd13ecf
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81362499"
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

*X*<br/>
Valore di cui trovare la funzione gamma.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce la gamma di *x*.

Un errore di intervallo può verificarsi se la grandezza di *x* è troppo grande o troppo piccola per il tipo di dati. Se *x* <è 0, può verificarsi un errore di dominio o di intervallo.

|Problema|Return|
|-----------|------------|
|x : 0|-INFINITO|
|x = intero negativo|NaN|
|x -INFINITY (INFINITO)|NaN|
|x = +INFINITY|+INFINITO|
|x = NaN|NaN|
|Eerrore di dominio|NaN|
|Errore polo|HUGE_VAL, HUGE_VALF o HUGE_VALL|
|Errore di intervallo di overflow|HUGE_VAL, HUGE_VALF o HUGE_VALL|
|Errore di intervallo di underflow|Valore corretto dopo l'arrotondamento.|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Dato che il linguaggio Cè consente l'overload, è possibile chiamare overload di **tgamma** che accettano e restituiscono tipi **float** e **long** **double.** In un programma C, **tgamma** accetta e restituisce sempre un **valore double.**

Se x è un numero naturale, questa funzione restituisce il fattoriale di (x-1).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**tgamma**, **tgammaf**, **tgammal**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[lgamma, lgammaf, lgammal](lgamma-lgammaf-lgammal.md)<br/>
