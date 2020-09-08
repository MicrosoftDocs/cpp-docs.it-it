---
title: log1p, log1pf, log1pl2
description: Informazioni di riferimento sulle API per log1p, log1pf, log1pl2; che calcolano il logaritmo naturale di 1 e il valore specificato.
ms.date: 9/1/2020
api_name:
- log1p
- log1pf
- log1pl
- _o_log1p
- _o_log1pf
- _o_log1pl
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
- log1p
- log1pf
- log1pl
- math/log1p
- math/log1pf
- math/log1pl
helpviewer_keywords:
- log1p function
- log1pf function
- log1pl function
ms.assetid: a40d965d-b4f6-42f4-ba27-2395546f7c12
ms.openlocfilehash: 8858d761428d4dad6e3fe836b82041ae92f1827a
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556230"
---
# <a name="log1p-log1pf-log1pl"></a>log1p, log1pf, log1pl

Calcola il logaritmo naturale di 1 più il valore specificato.

## <a name="syntax"></a>Sintassi

```C
double log1p(
   double x
);
float log1pf(
   float x
);
long double log1pl(
   long double x
);

#define log1p(X) // Requires C11 or higher

float log1p(
   float x
); //C++ only

long double log1p(
   long double x
); //C++ only
```

### <a name="parameters"></a>Parametri

*x*\
Argomento a virgola mobile.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce il log naturale (base*e*) di (*x* + 1).

In caso contrario, può restituire uno dei valori seguenti:

|Input|Risultato|Eccezione SEH|errno|
|-----------|------------|-------------------|-----------|
|+inf|+inf|||
|Valori denormalizzati|Uguale all'input|UNDERFLOW||
|± 0|Uguale all'input|||
|-1|-inf|DIVBYZERO|ERANGE|
|< -1|nan|NON VALIDO|EDOM|
|-inf|nan|NON VALIDO|EDOM|
|SNaN ±|Uguale all'input|NON VALIDO||
|± QNaN, non definito|Uguale all'input|||

Il valore **errno** è impostato su ERANGE se *x* =-1. Il valore **errno** viene impostato su **EDOM** se *x* <-1.

## <a name="remarks"></a>Osservazioni

Le funzioni **log1p** possono essere più accurate rispetto all'uso di `log(x + 1)` quando *x* è vicino a 0.

Poiché C++ consente l'overload, è possibile chiamare overload di **log1p** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **log1p** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `log1p()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Se *x* è un numero naturale, questa funzione restituisce il logaritmo del fattoriale di (*x* -1).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**log1p**, **log1pf**, **log1pl**|\<math.h>|\<cmath>|
|**log1p** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)\
[log2, log2f, log2l](log2-log2f-log2l.md)\
[log, logf, log10, log10f](log-logf-log10-log10f.md)
