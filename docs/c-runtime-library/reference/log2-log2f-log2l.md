---
title: log2, log2f, log2l
description: Informazioni di riferimento sulle API per log2, log2f e log2l; che determinano il logaritmo in base 2 (Binary) del valore specificato.
ms.date: 9/1/2020
api_name:
- log2
- log2l
- log2f
- _o_log2
- _o_log2f
- _o_log2l
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
ms.assetid: 94d11b38-70b7-4d3a-94ac-523153c92b2e
ms.openlocfilehash: 37319560891dbd64030495750aaf347d9dedd7e7
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555358"
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

#define log2(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Valore di cui determinare il logaritmo in base 2.

## <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce log2 *x*.

In caso contrario, può restituire uno dei valori seguenti:

|Problema|Return|
|-----------|------------|
|*x* < 0|NaN|
|*x* = ± 0|-INFINITY|
|*x* = 1|+0|
|+INFINITO|+INFINITO|
|NaN|NaN|
|Eerrore di dominio|NaN|
|Errore polo|-HUGE_VAL, -HUGE_VALF o -HUGE_VALL|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Se *x* è un numero intero, questa funzione restituisce essenzialmente l'indice in base zero dell'1 bit di *x*più significativo.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**log2**, **log2f**, **log2l**|\<math.h>|\<cmath>|
|**log2** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[exp2, exp2f, exp2l](exp2-exp2f-exp2l.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
