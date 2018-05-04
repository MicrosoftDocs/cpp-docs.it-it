---
title: fmax, fmaxf, fmaxl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- fmax
- fmaxf
- fmaxl
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
- fmax
- fmaxf
- fmaxl
- math/fmax
- math/fmaxf
- math/fmaxl
dev_langs:
- C++
helpviewer_keywords:
- fmax function
- fmaxf function
- fmaxl function
ms.assetid: a773ccf7-495e-4a9a-8c6d-dfb53e341e35
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d6e210fac83c19efaecb909d54734d0422956f37
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fmax-fmaxf-fmaxl"></a>fmax, fmaxf, fmaxl

Determina il valore più grande tra due valori numerici specificati.

## <a name="syntax"></a>Sintassi

```C
double fmax(
   double x,
   double y
);

float fmax(
   float x,
   float y
); //C++ only

long double fmax(
   long double x,
   long double y
); //C++ only

float fmaxf(
   float x,
   float y
);

long double fmaxl(
   long double x,
   long double y
);

```

### <a name="parameters"></a>Parametri

*x*<br/>
Primo valore da confrontare.

*y*<br/>
Secondo valore da confrontare.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce il maggiore dei *x* oppure *y*. Il valore restituito è esatto e non dipende da alcuna forma di arrotondamento.

In caso contrario può restituire uno dei valori seguenti:

|Problema|INVIO|
|-----------|------------|
|*x* = NaN|*y*|
|*y* = NaN|*x*|
|*x* e *y* = NaN|NaN|

Questa funzione non usa gli errori specificati [matherr](matherr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di fmax che accettano e restituiscono i tipi float e long double. In un programma C fmax accetta e restituisce sempre un valore double.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**Fmax**, **fmaxf**, **fmaxl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fmin, fminf, fminl](fmin-fminf-fminl.md)<br/>
