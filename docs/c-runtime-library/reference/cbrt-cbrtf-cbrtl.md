---
title: cbrt, cbrtf, cbrtl
description: Informazioni di riferimento sulle API per cbrt, cbrtf e cbrtl; che calcolano una radice del cubo
ms.date: 9/1/2020
api_name:
- cbrt
- cbrtf
- cbrtl
- _o_cbrt
- _o_cbrtf
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
- cbrtl
- cbrt
- cbrtf
helpviewer_keywords:
- cbrtl function
- cbrtf function
- cbrt function
ms.assetid: ab51d916-3db2-4beb-b46a-28b4062cd33f
ms.openlocfilehash: c63a3cb0c8acdec8ef66999994ab1f3c5ea21d47
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555306"
---
# <a name="cbrt-cbrtf-cbrtl"></a>cbrt, cbrtf, cbrtl

Calcola la radice cubica.

## <a name="syntax"></a>Sintassi

```C
double cbrt(
   double x
);
float cbrt(
   float x
);  // C++ only
long double cbrt(
   long double x
);  // C++ only
float cbrtf(
   float x
);
long double cbrtl(
   long double x
);
#define cbrt(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Valore a virgola mobile

## <a name="return-value"></a>Valore restituito

Le funzioni **cbrt** restituiscono la radice del cubo di *x*.

|Input|Eccezione SEH|**_matherr** Eccezione|
|-----------|-------------------|--------------------------|
|± ∞, QNAN, IND|Nessuno|Nessuno|

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **cbrt** che accettano i **`float`** **`long double`** tipi o. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **cbrt** accetta e restituisce sempre **`double`** .

Se si usa la \<tgmath.h> `cbrt()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**cbrt**, **cbrtf**, **cbrtl**|\<math.h>|\<cmath>|
|**cbrt** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_cbrt.c
// Compile using: cl /W4 crt_cbrt.c
// This program calculates a cube root.

#include <math.h>
#include <stdio.h>

int main( void )
{
   double question = -64.64;
   double answer;

   answer = cbrt(question);
   printf("The cube root of %.2f is %.6f\n", question, answer);
}
```

```Output
The cube root of -64.64 is -4.013289
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[exp, expf, expl](exp-expf.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
[pow, powf, powl](pow-powf-powl.md)<br/>
