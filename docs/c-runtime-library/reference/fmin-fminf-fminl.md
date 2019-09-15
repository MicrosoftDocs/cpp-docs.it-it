---
title: fmin, fminf, fminl
ms.date: 04/05/2018
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
ms.openlocfilehash: df01f2205291920b8c0519db622c93048278beb1
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957086"
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

Se ha esito positivo, restituisce il più piccolo di *x* o *y*.

|Input|Risultato|
|-----------|------------|
|*x* è NaN|*y*|
|*y* è NaN|*x*|
|*x* e *y* sono Nan|NaN|

La funzione non fa in modo che [_matherr](matherr.md) venga richiamato, causi eccezioni a virgola mobile o modifica il valore di **errno**.

## <a name="remarks"></a>Note

Poiché C++ consente l'overload, è possibile chiamare gli overload di **FMIN** che accettano e restituiscono i tipi **float** e **Long** **Double** . In un programma C **FMIN** accetta e restituisce sempre un **valore Double**.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**fmin**, **fminf**, **fminl**|C: \<math.h><br />C++: \<math.h> o \<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[fmax, fmaxf, fmaxl](fmax-fmaxf-fmaxl.md)<br/>
