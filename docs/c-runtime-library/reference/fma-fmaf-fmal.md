---
title: fma, fmaf, fmal
ms.date: 04/05/2018
api_name:
- fma
- fmaf
- fmal
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
- fma
- fmaf
- fmal
- math/fma
- math/fmaf
- math/fmal
helpviewer_keywords:
- fma function
- fmaf function
- fmal function
ms.assetid: 584a6037-da1e-4e86-9f0c-97aae86de0c0
ms.openlocfilehash: 4ddc4061e5a24ee3b5176aedc569d134d85e0002
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957097"
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
|*x* = infinito, *y* = 0 o<br /><br /> *x* = 0, *y* = INFINITY|NaN|
|*x* o *y* = esatta ± infinito, *z* = infinito con segno opposto|NaN|
|*x* o *y* = Nan|NaN|
|Not (*x* = 0, *y*= indefinito) e *z* = Nan<br /><br /> Not (*x*= indefinito, *y*= 0) e *z* = Nan|NaN|
|Errore di intervallo di overflow|± HUGE_VAL, ± HUGE_VALF o ± HUGE_VALL|
|Errore di intervallo di underflow|valore corretto dopo l'arrotondamento.|

Gli errori vengono segnalati come specificato in [_matherr](matherr.md).

## <a name="remarks"></a>Note

Poiché C++ consente l'overload, è possibile chiamare gli overload di **FMA** che accettano e restituiscono i tipi **float** e **Long** **Double** . In un programma C, **FMA** accetta e restituisce sempre un **valore Double**.

Questa funzione calcola il valore come per la precisione infinita e quindi arrotonda il risultato finale.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fma**, **fmaf**, **fmal**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[remainder, remainderf, remainderl](remainder-remainderf-remainderl.md)<br/>
[remquo, remquof, remquol](remquo-remquof-remquol.md)<br/>
