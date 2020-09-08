---
title: lrint, lrintf, lrintl, llrint, llrintf, llrintl
description: Informazioni di riferimento sulle API per lrint (), lrintf (), lrintl (), llrint (), llrintf () e llrintl (); che arrotonda il valore a virgola mobile specificato al valore integrale più vicino, usando la modalità di arrotondamento e la direzione correnti.
ms.date: 9/1/2020
api_name:
- lrint
- lrintl
- lrintf
- llrint
- llrintf
- llrintl
- _o_llrint
- _o_llrintf
- _o_llrintl
- _o_lrint
- _o_lrintf
- _o_lrintl
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
- lrint
- lrintf
- lrintl
- llrint
- llrintf
- llrintl
- math/lrint
- math/lrintf
- math/lrintl
- math/llrint
- math/llrintf
- math/llrintl
helpviewer_keywords:
- lrint function
- lrintf function
- lrintl function
- llrint function
- llrintf function
- llrintl function
ms.assetid: 28ccd5b3-5e6f-434f-997d-a21d51b8ce7f
ms.openlocfilehash: f208c183400aac7a110bb6fd87398d4377fe8f06
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555020"
---
# <a name="lrint-lrintf-lrintl-llrint-llrintf-llrintl"></a>lrint, lrintf, lrintl, llrint, llrintf, llrintl

Arrotonda il valore a virgola mobile specificato al valore integrale più prossimo, usando la modalità di arrotondamento e la direzione correnti.

## <a name="syntax"></a>Sintassi

```C
long int lrint(
   double x
);

long int lrint(
   float x
); //C++ only

long int lrint(
   long double x
); //C++ only

long int lrintf(
   float x
);

long int lrintl(
   long double x
);

long long int llrint(
   double x
);

long long int llrint(
   float x
); //C++ only

long long int llrint(
   long double x
); //C++ only

long long int llrintf(
   float x
);

long long int llrintl(
   long double x
);

#define lrint(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Il valore da arrotondare.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce il valore integrale arrotondato di *x*.

|Problema|Return|
|-----------|------------|
|*x* non è compreso nell'intervallo del tipo restituito<br /><br /> *x* = ± ∞<br /><br /> *x* = Nan|Genera **FE_INVALID** e restituisce zero (0).|

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare gli overload di **lrint** e **llrint** che accettano i **`float`** tipi e **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **lrint** e **llrint** accettano sempre un **`double`** .

Se si usa la \<tgmath.h> `llrint()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Se *x* non rappresenta l'equivalente a virgola mobile di un valore integrale, queste funzioni generano **FE_INEXACT**.

**Specifico di Microsoft**: quando il risultato non è compreso nell'intervallo del tipo restituito o quando il parametro è NaN o Infinity, il valore restituito è definito dall'implementazione. Il compilatore Microsoft restituisce un valore zero (0).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**lrint**, **lrintf**, **lrintl**, **llrint**, **llrintf**, **llrintl**|\<math.h>|\<cmath>|
|**lrint** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)
