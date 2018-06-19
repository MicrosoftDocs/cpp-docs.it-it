---
title: fmin, fminf, fminl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- fmin
- fminf
- fminl
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
- fmin
- fminf
- fminl
- math/fmin
- math/fminf
- math/fminl
helpviewer_keywords:
- fmin function
- fminf function
- fminl function
ms.assetid: 1916dfb5-99c1-4b0d-aefb-513525c3f2ac
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: abf16c4cc21d1dc396f0b81aadc8d495c6bdd4b9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32398945"
---
# <a name="fmin-fminf-fminl"></a>fmin, fminf, fminl

Determina il valore più piccolo tra due valori specificati.

## <a name="syntax"></a>Sintassi

```C
double fmin(
   double x,
   double y
);

float fmin(
   float x,
   float y
); //C++ only

long double fmin(
   long double x,
   long double y
); //C++ only

float fminf(
   float x,
   float y
);

long double fminl(
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

Se l'operazione riesce, restituisce il meno elevato tra *x* oppure *y*.

|Input|Risultato|
|-----------|------------|
|*x* è NaN|*y*|
|*y* è NaN|*x*|
|*x* e *y* sono NaN|NaN|

La funzione non provoca [matherr](matherr.md) per essere richiamati, che si verifichino eventuali eccezioni a virgola mobile o modificare il valore di **errno**.

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **fmin** che accettano e restituiscono **float** e **lungo** **doppie** tipi. In un programma C **fmin** accetta e restituisce sempre un **doppie**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**Fmin**, **fminf**, **fminl**|C: \<math.h><br />C++: \<math.h> o \<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fmax, fmaxf, fmaxl](fmax-fmaxf-fmaxl.md)<br/>
