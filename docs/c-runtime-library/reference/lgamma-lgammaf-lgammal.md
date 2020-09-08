---
title: lgamma, lgammaf, lgammal
description: Informazioni di riferimento sulle API per lgamma, lgammaf e lgammal; che determina il logaritmo naturale del valore assoluto della funzione gamma del valore specificato.
ms.date: 9/1/2020
api_name:
- lgamma
- lgammaf
- lgammal
- _o_lgamma
- _o_lgammaf
- _o_lgammal
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
- lgamma
- lgammaf
- lgammal
- math/lgamma
- math/lgammaf
- math/lgammal
helpviewer_keywords:
- lgamma function
- lgammal function
- lgammaf function
ms.assetid: 6e326c58-7077-481a-a329-c82ae56ae9e6
ms.openlocfilehash: 202250f3575f61fcef1cf29a687b8fdf36e6db33
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555397"
---
# <a name="lgamma-lgammaf-lgammal"></a>lgamma, lgammaf, lgammal

Determina il logaritmo naturale del valore assoluto della funzione gamma del valore specificato.

## <a name="syntax"></a>Sintassi

```C
double lgamma( double x );
float lgammaf( float x );
long double lgammal( long double x );
#define lgammal(X) // Requires C11 or higher

float lgamma( float x ); //C++ only
long double lgamma( long double x ); //C++ only
```

### <a name="parameters"></a>Parametri

*x*\
Valore da calcolare.

## <a name="return-value"></a>Valore restituito

In caso di esito positivo, restituisce il logaritmo naturale del valore assoluto della funzione gamma di *x*.

|Problema|Return|
|-----------|------------|
|*x* = Nan|NaN|
|*x* = ± 0|+INFINITO|
|*x*= intero negativo|+INFINITO|
|INFINITO ±|+INFINITO|
|Errore polo|+HUGE_VAL, +HUGE_VALF o +HUGE_VALL|
|Errore di intervallo di overflow|± HUGE_VAL, ± HUGE_VALF o ± HUGE_VALL|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare overload di **lgamma** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **lgamma** accetta sempre e restituisce un **`double`** .

Se si usa la \<tgmath.h> `lgamma()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Se x è un numero razionale, questa funzione restituisce il logaritmo del fattoriale di (x-1).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**lgamma**, **lgammaf**, **lgammal**|\<math.h>|\<cmath>|
|**lgamma** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[tgamma, tgammaf, tgammal](tgamma-tgammaf-tgammal.md)<br/>
