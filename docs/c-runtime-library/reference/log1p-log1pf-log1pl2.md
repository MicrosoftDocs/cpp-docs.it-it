---
title: log1p, log1pf, log1pl2
ms.date: 4/2/2020
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: b4e077f5b806dbe38ed4a4f4e8eef0259170cb7e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81341814"
---
# <a name="log1p-log1pf-log1pl"></a>log1p, log1pf, log1pl

Calcola il logaritmo naturale di 1 più il valore specificato.

## <a name="syntax"></a>Sintassi

```C
double log1p(
   double x
);

float log1p(
   float x
); //C++ only

long double log1p(
   long double x
); //C++ only

float log1pf(
   float x
);

long double log1pl(
   long double x
);
```

### <a name="parameters"></a>Parametri

*X*<br/>
Argomento a virgola mobile.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, restituisce il log naturale (base-e) di (*x* - 1).*e*

In caso contrario, può restituire uno dei valori seguenti:

|Input|Risultato|Eccezione SEH|errno|
|-----------|------------|-------------------|-----------|
|+inf|+inf|||
|Valori denormalizzati|Uguale all'input|UNDERFLOW||
|0 ( ) 0 (0)|Uguale all'input|||
|-1|-inf|DIVBYZERO|ERANGE|
|< -1|nan|NON VALIDO|EDOM|
|-inf|nan|NON VALIDO|EDOM|
|SNaN|Uguale all'input|NON VALIDO||
|QNaN, a tempo indeterminato|Uguale all'input|||

Il valore **errno** è impostato su ERANGE se *x* è -1. Il valore **errno** è impostato su **EDOM** se *x* < -1.

## <a name="remarks"></a>Osservazioni

Le funzioni **log1p** possono essere `log(x + 1)` più accurate rispetto all'utilizzo quando *x* è vicino a 0.

Dato che il linguaggio Cè consente l'overload, è possibile chiamare overload di **log1p** che accettano e restituiscono tipi **float** e **long** **double.** In un programma C, **log1p** accetta e restituisce sempre un **valore double**.

Se *x* è un numero naturale, questa funzione restituisce il logaritmo del fattoriale di (*x* - 1).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**log1p**, **log1pf**, **log1pl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[log2, log2f, log2l](log2-log2f-log2l.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
