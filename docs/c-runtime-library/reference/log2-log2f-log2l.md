---
title: log2, log2f, log2l | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
apiname:
- log2
- log2l
- log2f
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
dev_langs:
- C++
ms.assetid: 94d11b38-70b7-4d3a-94ac-523153c92b2e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16fb56b1a3aef56e201d469974c5de434a08aa41
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="log2-log2f-log2l"></a>log2, log2f, log2l

Determina il logaritmo in base 2 binario del valore specificato.

## <a name="syntax"></a>Sintassi

```C
double log2(
   double x
);

float log2(
   float x
); //C++ only

long double log2(
   long double x
); //C++ only

float log2f(
   float x
);

long double log2l(
   long double x
);

```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore di cui determinare il logaritmo in base 2.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce restituiscono log2 *x*.

In caso contrario può restituire uno dei valori seguenti:

|Problema|INVIO|
|-----------|------------|
|*x* < 0|NaN|
|*x* = ± 0|-INFINITY|
|*x* = 1|+0|
|+INFINITY|+INFINITO|
|NaN|NaN|
|Eerrore di dominio|NaN|
|Errore polo|-HUGE_VAL, -HUGE_VALF o -HUGE_VALL|

Gli errori vengono segnalati come specificato in [_matherr](matherr.md).

## <a name="remarks"></a>Note

Se x è un numero intero, questa funzione restituisce in pratica l'indice in base zero del bit più significativo 1 della *x*.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**LOG2**, **log2f**, **log2l**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[exp2, exp2f, exp2l](exp2-exp2f-exp2l.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
