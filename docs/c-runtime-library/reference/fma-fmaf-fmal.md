---
title: fma, fmaf, fmal
description: Informazioni di riferimento sulle API per FMA, fmaf e Fmal; che moltiplica due valori insieme, aggiunge un terzo valore, quindi arrotonda il risultato, senza perdere alcuna precisione a causa dell'arrotondamento intermedio.
ms.date: 9/1/2020
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
- api-ms-win-crt-private-l1-1-0.dll
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
ms.openlocfilehash: e9ae92c28f24b6281d73450c7cabaad775a84d42
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556697"
---
# <a name="fma-fmaf-fmal"></a>fma, fmaf, fmal

Moltiplica due valori insieme, aggiunge un terzo valore, quindi arrotonda il risultato, senza perdere alcuna precisione a causa dell'arrotondamento intermedio.

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

#define fma(X, Y, Z) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Primo valore da moltiplicare.

*y*\
Secondo valore da moltiplicare.

*z*\
Il valore da aggiungere.

## <a name="return-value"></a>Valore restituito

Restituisce `(x * y) + z`. Il valore restituito viene quindi arrotondato in base al formato di arrotondamento corrente.

In caso contrario, può restituire uno dei valori seguenti:

|Problema|Return|
|-----------|------------|
|*x* = infinito, *y* = 0 o<br /><br /> *x* = 0, *y* = infinito|NaN|
|*x* o *y* = esatta ± infinito, *z* = infinito con segno opposto|NaN|
|*x* o *y* = Nan|NaN|
|Not (*x* = 0, *y*= indefinito) e *z* = Nan<br /><br /> Not (*x*= indefinito, *y*= 0) e *z* = Nan|NaN|
|Errore di intervallo di overflow|± HUGE_VAL, ± HUGE_VALF o ± HUGE_VALL|
|Errore di intervallo di underflow|valore corretto dopo l'arrotondamento.|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare gli overload di **FMA** che accettano e restituiscono i **`float`** **`long double`** tipi e. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **FMA** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `fma()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Questa funzione calcola il valore come per la precisione infinita e quindi arrotonda il risultato finale.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**FMA**, **fmaf**, **Fmal**|\<math.h>|\<cmath>|
|**FMA** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[remainder, remainderf, remainderl](remainder-remainderf-remainderl.md)<br/>
[remquo, remquof, remquol](remquo-remquof-remquol.md)<br/>
