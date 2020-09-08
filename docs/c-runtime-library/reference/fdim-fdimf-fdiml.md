---
title: fdim, fdimf, fdiml
description: Informazioni di riferimento sulle API per fdim, fdimf e fdiml; che determina la differenza positiva tra due valori.
ms.date: 9/1/2020
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
ms.openlocfilehash: 406fc5cfe543aa0865760df9ff780c62e78510fc
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89554786"
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

#define fdim(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Primo valore.

*y*\
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

Poiché C++ consente l'overload, è possibile chiamare overload di **fdim** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **fdim** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `fdim()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Ad eccezione della gestione NaN, questa funzione è equivalente a `fmax(x - y, 0)` .

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fdim**, **fdimf**, **fdiml**|\<math.h>|\<cmath>|
|**fdim** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fmax, fmaxf, fmaxl](fmax-fmaxf-fmaxl.md)<br/>
[abs, labs, llabs, _abs64](abs-labs-llabs-abs64.md)<br/>
