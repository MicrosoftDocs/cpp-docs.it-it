---
title: fmin, fminf, fminl
description: Informazioni di riferimento sulle API per FMIN, fminf e fminl; che determina il minore di due valori.
ms.date: 9/1/2020
api_name:
- fmin
- fminf
- fminl
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
ms.openlocfilehash: 6a070835d809c6adcb5b7bfd57b5373886b348ca
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556710"
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

#define fmin(x) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Primo valore da confrontare.

*y*\
Secondo valore da confrontare.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce il più piccolo di *x* o *y*.

|Input|Risultato|
|-----------|------------|
|*x* è NaN|*y*|
|*y* è NaN|*x*|
|*x* e *y* sono Nan|NaN|

La funzione non provoca la chiamata di [_matherr](matherr.md) , genera eccezioni a virgola mobile o modifica il valore di **errno**.

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **FMIN** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **FMIN** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `fmin()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**FMIN**, **fminf**, **fminl**|C \<math.h><br />C++: \<math.h> o \<cmath>|
|**FMIN** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fmax, fmaxf, fmaxl](fmax-fmaxf-fmaxl.md)<br/>
