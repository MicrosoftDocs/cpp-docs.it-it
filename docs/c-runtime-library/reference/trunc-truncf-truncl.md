---
title: trunc, truncf, truncl
ms.date: 04/05/2018
api_name:
- trunc
- truncf
- truncl
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
- trunc
- truncf
- truncl
- math/trunc
- math/truncf
- math/truncl
helpviewer_keywords:
- trunc function
- truncf function
- truncl function
ms.assetid: de2038ac-ac0b-483e-870c-e8992dcd4fd0
ms.openlocfilehash: b47d07cbe1e86e3f53d3a562cd5e1b3dca7f4814
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232391"
---
# <a name="trunc-truncf-truncl"></a>trunc, truncf, truncl

Restituisce l'intero più prossimo minore o uguale al valore a virgola mobile specificato.

## <a name="syntax"></a>Sintassi

```C
double trunc( double x );
float trunc( float x ); //C++ only
long double truncl( long double x );
```

```cpp
long double trunc( long double x ); //C++ only
float trunc( float x ); //C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore da troncare.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce un valore intero pari a *x*, arrotondato per eccesso a zero.

In caso contrario, può restituire uno dei valori seguenti:

|Problema|Return|
|-----------|------------|
|*x* = ± infinito|x|
|*x* = ± 0|x|
|*x* = Nan|NaN|

Gli errori vengono segnalati come specificato in [matherr](matherr.md).

## <a name="remarks"></a>Osservazioni

Poiché C++ consente l'overload, è possibile chiamare gli overload di **Tronca** che accettano e restituiscono i **`float`** **`long double`** tipi e. In un programma C, **Tronca** accetta sempre e restituisce un **`double`** .

Poiché i valori a virgola mobile più grandi sono numeri interi esatti, questa funzione non genererà un overflow autonomamente. Tuttavia, è possibile causare l'overflow della funzione restituendo un valore in un tipo Integer.

È anche possibile eseguire un arrotondamento verso il basso convertendo in modo implicito un valore da virgola mobile a integrale. Ciò è possibile solo per i valori che possono essere archiviati nel tipo di destinazione.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**Tronca**, **truncf**, **truncl**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[floor, floorf, floorl](floor-floorf-floorl.md)<br/>
[ceil, ceilf, ceill](ceil-ceilf-ceill.md)<br/>
[round, roundf, roundl](round-roundf-roundl.md)<br/>
