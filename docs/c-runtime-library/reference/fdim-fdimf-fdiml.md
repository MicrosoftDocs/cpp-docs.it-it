---
title: fdim, fdimf, fdiml | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- fdim
- fdimf
- fdiml
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
- fdim
- fdimf
- fdiml
- math/fdim
- math/fdimf
- math/fdiml
dev_langs:
- C++
helpviewer_keywords:
- fdim function
- fdimf function
- fdiml function
ms.assetid: 2d4ac639-51e9-462d-84ab-fb03b06971a0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cdcad02c94717715fdda1b3a9d2e820fc16d0bf4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fdim-fdimf-fdiml"></a>fdim, fdimf, fdiml

Determina la differenza positiva tra il primo e il secondo valore.

## <a name="syntax"></a>Sintassi

```C
double fdim(
   double x,
   double y
);

float fdim(
   float x,
   float y
); //C++ only

long double fdim(
   long double x,
   long double y
); //C++ only

float fdimf(
   float x,
   float y
);

long double fdiml(
   long double x,
   long double y
);

```

### <a name="parameters"></a>Parametri

*x*<br/>
Primo valore.

*y*<br/>
Secondo valore.

## <a name="return-value"></a>Valore restituito

Restituisce la differenza tra positivo *x* e *y*:

|Valore restituito|Scenario|
|------------------|--------------|
|x-y|se x > y|
|0|se x <= y|

In caso contrario, può restituire uno degli errori seguenti:

|Problema|INVIO|
|-----------|------------|
|Errore di intervallo di overflow|+HUGE_VAL, +HUGE_VALF o +HUGE_VALL|
|Errore di intervallo di underflow|valore corretto (dopo l'arrotondamento)|
|*x* oppure *y* è NaN|NaN|

Gli errori vengono segnalati come specificato in [_matherr](matherr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **fdim** che accettano e restituiscono **float** e **lungo** **doppie** tipi. In un programma C **fdim** accetta e restituisce sempre un **doppie**.

Tranne la gestione di NaN, questa funzione è equivalente a `fmax(x - y, 0)`.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fdim**, **fdimf**, **fdiml**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fmax, fmaxf, fmaxl](fmax-fmaxf-fmaxl.md)<br/>
[abs, labs, llabs, _abs64](abs-labs-llabs-abs64.md)<br/>
