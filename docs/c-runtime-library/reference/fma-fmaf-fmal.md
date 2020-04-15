---
title: fma, fmaf, fmal
ms.date: 4/2/2020
api_name:
- fma
- fmaf
- fmal
- _o_fma
- _o_fmaf
- _o_fmal
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 993ca4d57202b3789929161a964b3e41d48fd98f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81346562"
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

*X*<br/>
Primo valore da moltiplicare.

*Y*<br/>
Secondo valore da moltiplicare.

*Z*<br/>
Il valore da aggiungere.

## <a name="return-value"></a>Valore restituito

Restituisce `(x * y) + z`. Il valore restituito viene quindi arrotondato in base al formato di arrotondamento corrente.

In caso contrario, può restituire uno dei valori seguenti:

|Problema|Return|
|-----------|------------|
|*x* : INFINITY, *y* - 0 o<br /><br /> *x* , 0, *y* e INFINITY|NaN|
|*x* o *y* : esatto : INFINITY, *z* , INFINITY con il segno opposto|NaN|
|*x* o *y* - NaN|NaN|
|not (*x* e 0, *y*, a tempo indeterminato) e *z*<br /><br /> not (*x*: indefinito, *y*) e *z*|NaN|
|Errore di intervallo di overflow|HUGE_VAL, HUGE_VALF o HUGE_VALL|
|Errore di intervallo di underflow|valore corretto dopo l'arrotondamento.|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Dato che il linguaggio Cè consente l'overload, è possibile chiamare overload di **fma** che accettano e restituiscono tipi **float** e **long** **double.** In un programma C, **fma** accetta e restituisce sempre un **valore double.**

Questa funzione calcola il valore come per la precisione infinita e quindi arrotonda il risultato finale.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**fma**, **fmaf**, **fmal**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[remainder, remainderf, remainderl](remainder-remainderf-remainderl.md)<br/>
[remquo, remquof, remquol](remquo-remquof-remquol.md)<br/>
