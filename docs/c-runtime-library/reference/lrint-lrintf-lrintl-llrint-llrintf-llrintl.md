---
title: lrint, lrintf, lrintl, llrint, llrintf, llrintl
ms.date: 04/05/2018
apiname:
- lrint
- lrintl
- lrintf
- llrint
- llrintf
- llrintl
apilocation:
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
apitype: DLLExport
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
ms.openlocfilehash: 01680a62e654112475a55bd8eac0cc14d254e2a2
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51523237"
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

Se l'operazione riesce, restituisce il valore integrale arrotondato di *x*.

|Problema|INVIO|
|-----------|------------|
|*x* è compreso nell'intervallo del tipo restituito<br /><br /> *x* = ±∞<br /><br /> *x* = NaN|Genera **FE_INVALID** e restituisce zero (0).|

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **lrint** e **llrint** che accettano **float** e **lungo**  **Double** tipi. In un programma C **lrint** e **llrint** hanno sempre un **double**.

Se *x* non rappresenta l'equivalente a virgola mobile e di un valore integrale, queste funzioni generano **FE_INEXACT**.

**Informazioni specifiche Microsoft**: quando il risultato non è compreso nell'intervallo del tipo restituito o quando il parametro è NaN o infinito, il valore restituito è definito dall'implementazione. Il compilatore Microsoft restituisce un valore zero (0).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**lrint**, **lrintf**, **lrintl**, **llrint**, **llrintf**, **llrintl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
