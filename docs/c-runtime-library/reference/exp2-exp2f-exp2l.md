---
title: exp2, exp2f, exp2l | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- exp2
- exp2f
- exp2l
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
- exp2
- math/exp2
- exp2f
- math/exp2f
- exp2l
- math/exp2l
dev_langs:
- C++
helpviewer_keywords:
- exp2 function
- exp2f function
- exp2l function
ms.assetid: 526e3e10-201a-4610-a886-533f44ece344
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: aea847d367200635c8fecbd694f8a50be859b3ea
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="exp2-exp2f-exp2l"></a>exp2, exp2f, exp2l

Calcola 2 al valore specificato.

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
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore dell'esponente.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce l'esponente in base 2 di *x*, vale a dire, 2<sup>x</sup>. In caso contrario, restituisce uno dei valori seguenti:

|Problema|INVIO|
|-----------|------------|
|*x* = ± 0|1|
|*x* = - INFINITY|+0|
|*x* = + INFINITY|+INFINITO|
|*x* = NaN|NaN|
|Errore di intervallo di overflow|+HUGE_VAL, +HUGE_VALF o +HUGE_VALL|
|Errore di intervallo di underflow|Risultato corretto, dopo l'arrotondamento|

Gli errori vengono segnalati come specificato in [_matherr](matherr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **exp2** che accettano e restituiscono **float** e **long double** tipi. In un programma C **exp2** accetta e restituisce sempre un **doppie**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**EXP**, **expf**, **expl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[exp, expf, expl](exp-expf.md)<br/>
[log2, log2f, log2l](log2-log2f-log2l.md)<br/>
