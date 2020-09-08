---
title: fmax, fmaxf, fmaxl
description: Informazioni di riferimento sulle API per Fmax, fmaxf e fmaxl; che determina il più elevato tra due valori numerici.
ms.date: 9/1/2020
api_name:
- fmax
- fmaxf
- fmaxl
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
- fmax
- fmaxf
- fmaxl
- math/fmax
- math/fmaxf
- math/fmaxl
helpviewer_keywords:
- fmax function
- fmaxf function
- fmaxl function
ms.assetid: a773ccf7-495e-4a9a-8c6d-dfb53e341e35
ms.openlocfilehash: 4f38db64b30598e7cfb4eb4d0f57dccf257dabc5
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556684"
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

#define fmax(X, Y) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Primo valore da confrontare.

*y*\
Secondo valore da confrontare.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce il più elevato tra *x* e *y*. Il valore restituito è esatto e non dipende da alcuna forma di arrotondamento.

In caso contrario, può restituire uno dei valori seguenti:

|Problema|Return|
|-----------|------------|
|*x* = Nan|*y*|
|*y* = Nan|*x*|
|*x* e *y* = Nan|NaN|

Questa funzione non usa gli errori specificati [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di FMAX che accettano e restituiscono i `float` tipi e `long double` . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, `fmax` accetta e restituisce sempre un valore Double.

Se si usa la \<tgmath.h> `fmax()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**Fmax**, **fmaxf**, **fmaxl**|\<math.h>|\<cmath> o \<math.h>|
|**Fmax** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fmin, fminf, fminl](fmin-fminf-fminl.md)<br/>
