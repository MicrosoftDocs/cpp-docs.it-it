---
title: lrint, lrintf, lrintl, llrint, llrintf, llrintl
ms.date: 04/05/2018
api_name:
- lrint
- lrintl
- lrintf
- llrint
- llrintf
- llrintl
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
ms.openlocfilehash: 72870c3548f0fd6972183b0c090708c6eddc591e
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70953121"
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
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore da arrotondare.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce il valore integrale arrotondato di *x*.

|Problema|INVIO|
|-----------|------------|
|*x* non è compreso nell'intervallo del tipo restituito<br /><br /> *x* = ±∞<br /><br /> *x* = NaN|Genera **FE_INVALID** e restituisce zero (0).|

## <a name="remarks"></a>Note

Poiché C++ consente l'overload, è possibile chiamare gli overload di **lrint** e **llrint** che accettano i tipi **float** e **Long** **Double** . In un programma C, **lrint** e **llrint** accettano sempre un **valore Double**.

Se *x* non rappresenta l'equivalente a virgola mobile di un valore integrale, queste funzioni generano **FE_INEXACT**.

**Specifico di Microsoft**: Quando il risultato non è compreso nell'intervallo del tipo restituito o quando il parametro è NaN o Infinity, il valore restituito è definito dall'implementazione. Il compilatore Microsoft restituisce un valore zero (0).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**lrint**, **lrintf**, **lrintl**, **llrint**, **llrintf**, **llrintl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
