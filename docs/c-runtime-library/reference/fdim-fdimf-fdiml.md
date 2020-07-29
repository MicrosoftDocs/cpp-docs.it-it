---
title: fdim, fdimf, fdiml
ms.date: 04/05/2018
api_name:
- fdim
- fdimf
- fdiml
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- fdim
- fdimf
- fdiml
- math/fdim
- math/fdimf
- math/fdiml
helpviewer_keywords:
- fdim function
- fdimf function
- fdiml function
ms.assetid: 2d4ac639-51e9-462d-84ab-fb03b06971a0
ms.openlocfilehash: 1a7bbeaf77c94f620a82f77fb1aad3c71c34f2ef
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221913"
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

Restituisce la differenza positiva tra *x* e *y*:

|Valore restituito|Scenario|
|------------------|--------------|
|x-y|se x > y|
|0|se x <= y|

In caso contrario, può restituire uno degli errori seguenti:

|Problema|Return|
|-----------|------------|
|Errore di intervallo di overflow|+HUGE_VAL, +HUGE_VALF o +HUGE_VALL|
|Errore di intervallo di underflow|valore corretto (dopo l'arrotondamento)|
|*x* o *y* è NaN|NaN|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **fdim** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C **fdim** accetta e restituisce sempre un oggetto **`double`** .

Ad eccezione della gestione NaN, questa funzione è equivalente a `fmax(x - y, 0)` .

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fdim**, **fdimf**, **fdiml**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fmax, fmaxf, fmaxl](fmax-fmaxf-fmaxl.md)<br/>
[abs, labs, llabs, _abs64](abs-labs-llabs-abs64.md)<br/>
