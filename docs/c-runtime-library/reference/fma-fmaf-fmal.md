---
title: fma, fmaf, fmal | Microsoft Docs
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
- fma
- fmaf
- fmal
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
- fma
- fmaf
- fmal
- math/fma
- math/fmaf
- math/fmal
dev_langs:
- C++
helpviewer_keywords:
- fma function
- fmaf function
- fmal function
ms.assetid: 584a6037-da1e-4e86-9f0c-97aae86de0c0
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e4530a816617e564bf1d98766cf0861dd5fa7d08
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="fma-fmaf-fmal"></a>fma, fmaf, fmal

Moltiplica due valori, aggiunge un terzo valore e quindi arrotonda il risultato, senza perdita di precisione grazie all'arrotondamento intermedio.

## <a name="syntax"></a>Sintassi

```C
double fma(
   double x,
   double y,
   double z
);

float fma(
   float  x,
   float  y,
   float z
); //C++ only

long double fma(
   long double  x,
   long double  y,
   long double z
); //C++ only

float fmaf(
   float  x,
   float  y,
   float z
);

long double fmal(
   long double  x,
   long double  y,
   long double z
);

```

### <a name="parameters"></a>Parametri

*x*<br/>
Primo valore da moltiplicare.

*y*<br/>
Secondo valore da moltiplicare.

*z*<br/>
Il valore da aggiungere.

## <a name="return-value"></a>Valore restituito

Restituisce `(x * y) + z`. Il valore restituito viene quindi arrotondato in base al formato di arrotondamento corrente.

In caso contrario, può restituire uno dei valori seguenti:

|Problema|INVIO|
|-----------|------------|
|*x* = infinito *y* = 0 o<br /><br /> *x* = 0, *y* = infinito|NaN|
|*x* oppure *y* = ± esatta infinito *z* = infinito con segno opposto|NaN|
|*x* oppure *y* = NaN|NaN|
|non (*x* = 0, *y*= indefinito) e *z* = NaN<br /><br /> non (*x*= un valore indefinito *y*= 0) e *z* = NaN|NaN|
|Errore di intervallo di overflow|±HUGE_VAL, ±HUGE_VALF o ±HUGE_VALL|
|Errore di intervallo di underflow|valore corretto dopo l'arrotondamento.|

Gli errori vengono segnalati come specificato in [_matherr](matherr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **fma** che accettano e restituiscono **float** e **lungo** **doppie** tipi. In un programma C **fma** accetta e restituisce sempre un **doppie**.

Questa funzione calcola il valore come per la precisione infinita e quindi arrotonda il risultato finale.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**FMA**, **fmaf**, **fmal**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[remainder, remainderf, remainderl](remainder-remainderf-remainderl.md)<br/>
[remquo, remquof, remquol](remquo-remquof-remquol.md)<br/>
