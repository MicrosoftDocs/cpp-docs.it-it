---
title: lgamma, lgammaf, lgammal
ms.date: 4/2/2020
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
ms.openlocfilehash: d751a3487db1d7c0135d4a1ae87cb84d374825fa
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218650"
---
# <a name="lgamma-lgammaf-lgammal"></a>lgamma, lgammaf, lgammal

Determina il logaritmo naturale del valore assoluto della funzione gamma del valore specificato.

## <a name="syntax"></a>Sintassi

```C
double lgamma( double x );
float lgammaf( float x );
long double lgammal( long double x );
```

```cpp
float lgamma( float x ); //C++ only
long double lgamma( long double x ); //C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
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

Poiché C++ consente l'overload, è possibile chiamare overload di **lgamma** che accettano e restituiscono i **`float`** tipi e **`long double`** . In un programma C **lgamma** accetta e restituisce sempre un oggetto **`double`** .

Se x è un numero razionale, questa funzione restituisce il logaritmo del fattoriale di (x-1).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**lgamma**, **lgammaf**, **lgammal**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[tgamma, tgammaf, tgammal](tgamma-tgammaf-tgammal.md)<br/>
