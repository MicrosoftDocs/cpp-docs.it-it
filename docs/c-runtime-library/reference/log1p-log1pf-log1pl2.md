---
title: log1p, log1pf, log1pl2
ms.date: 04/05/2018
apiname:
- log1p
- log1pf
- log1pl
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
ms.openlocfilehash: 2ac864d7e28823c95b0202c0a8f2454d03c64aff
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62285986"
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

*x*<br/>
Argomento a virgola mobile.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce la naturale (base -*elettronica*) di log della (*x* + 1).

In caso contrario può restituire uno dei valori seguenti:

|Input|Risultato|Eccezione SEH|errno|
|-----------|------------|-------------------|-----------|
|+inf|+inf|||
|Valori denormalizzati|Come input|UNDERFLOW||
|±0|Come input|||
|-1|-inf|DIVBYZERO|ERANGE|
|< -1|nan|NON VALIDO|EDOM|
|-inf|nan|NON VALIDO|EDOM|
|±SNaN|Come input|INVALID||
|±QNaN, indefinite|Come input|||

Il **errno** è impostato su ERANGE se *x* = -1. Il **errno** è impostato su **EDOM** se *x* < -1.

## <a name="remarks"></a>Note

Il **log1p** le funzioni possono essere più accurate rispetto all'uso `log(x + 1)` quando *x* è prossimo allo 0.

Dato che C++ consente l'overload, è possibile chiamare overload di **log1p** che accettano e restituiscono **float** e **long** **double** tipi. In un programma C **log1p** accetta e restituisce sempre un **doppie**.

Se *x* è un numero naturale, questa funzione restituisce il logaritmo del fattoriale di (*x* - 1).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**log1p**, **log1pf**, **log1pl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[log2, log2f, log2l](log2-log2f-log2l.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
