---
title: tgamma, tgammaf, tgammal | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- tgamma
- tgammaf
- tgammal
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
- tgamma
- tgammaf
- tgammal
- math/tgamma
- math/tgammaf
- math/tgammal
dev_langs:
- C++
helpviewer_keywords:
- tgamma function
- tgammaf function
- tgammal function
ms.assetid: f1bd2681-8af2-48a9-919d-5358fd068acd
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 951e5635ae1e2b8ee22af7cb26902bd309d62b40
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

Se l'operazione riesce, restituisce il valore gamma *x*.

Un errore di intervallo può verificarsi se la grandezza del *x* è troppo grande o troppo piccolo per il tipo di dati. Un errore di dominio o un errore di intervallo può verificarsi se *x* < = 0.

|Problema|INVIO|
|-----------|------------|
|x = ±0|±INFINITY|
|x = intero negativo|NaN|
|x = - INFINITY|NaN|
|x = +INFINITY|+INFINITO|
|x = NaN|NaN|
|Eerrore di dominio|NaN|
|Errore polo|±HUGE_VAL, ±HUGE_VALF o ±HUGE_VALL|
|Errore di intervallo di overflow|±HUGE_VAL, ±HUGE_VALF o ±HUGE_VALL|
|Errore di intervallo di underflow|Valore corretto dopo l'arrotondamento.|

Gli errori vengono segnalati come specificato in [_matherr](matherr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **tgamma** che accettano e restituiscono **float** e **lungo** **doppie** tipi. In un programma C **tgamma** accetta e restituisce sempre un **doppie**.

Se x è un numero naturale, questa funzione restituisce il fattoriale di (x-1).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**tgamma**, **tgammaf**, **tgammal**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[lgamma, lgammaf, lgammal](lgamma-lgammaf-lgammal.md)<br/>
