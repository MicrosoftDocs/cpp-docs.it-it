---
title: nearbyint, nearbyintf, nearbyintl
description: Informazioni di riferimento sulle API per nearbyint, nearbyintf e nearbyintl; che arrotonda il valore a virgola mobile specificato a un intero e restituisce tale valore in un formato a virgola mobile.
ms.date: 9/1/2020
api_name:
- nearbyint
- nearbyintf
- nearbyintl
- _o_nearbyint
- _o_nearbyintf
- _o_nearbyintl
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
- nearbyint
- nearbyintf
- nearbyintl
- math/nearbyint
- math/narbyintf
- math/narbyintl
helpviewer_keywords:
- nearbyint function
- nearbyintf function
- nearbyintl function
ms.assetid: dd39cb68-96b0-434b-820f-6ff2ea65584f
ms.openlocfilehash: 9717559518032c6f1f2126c7ded7cb90603bce64
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556385"
---
# <a name="nearbyint-nearbyintf-nearbyintl"></a>nearbyint, nearbyintf, nearbyintl

Arrotonda il valore a virgola mobile specificato a un intero e restituisce tale valore in un formato a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
double nearbyint( double x );
float nearbyintf( float x );
long double nearbyintl( long double x );
#define nearbyint( X ) // Requires C11 or higher

float nearbyint( float x ); //C++ only
long double nearbyint( long double x ); //C++ only
```

### <a name="parameters"></a>Parametri

*x*\
Il valore da arrotondare.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce *x*, arrotondato all'intero più vicino, usando il formato di arrotondamento corrente come riportato da [fegetround](fegetround-fesetround2.md). In caso contrario, la funzione può restituire uno dei valori seguenti:

|Problema|Return|
|-----------|------------|
|*x* = ± infinito|± INFINITO, non modificato|
|*x* = ± 0|± 0, non modificato|
|*x* = Nan|NaN|

Gli errori non vengono segnalati tramite [_matherr](matherr.md); in particolare, questa funzione non segnala eccezioni **FE_INEXACT** .

## <a name="remarks"></a>Osservazioni

La differenza principale tra questa funzione e [rint](rint-rintf-rintl.md) è che questa funzione non genera l'eccezione di virgola mobile non esatta.

Dato che i valori a virgola massimi sono interi esatti, questa funzione da sola non genererà mai un overflow. È invece possibile un overflow del valore restituito nell'output, a seconda della versione della funzione usata.

C++ consente l'overload, quindi è possibile chiamare overload di **nearbyint** che accettano e restituiscono **`float`** **`long double`** parametri o. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **nearbyint** accetta sempre due valori Double e restituisce un valore Double.

Se si usa la \<tgmath.h> `nearbyint()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**nearbyint**, **nearbyintf**, **nearbyintl**|\<math.h>|\<cmath> o \<math.h>|
|**nearbyint** (macro) | \<tgmath.h> ||

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[Supporto delle funzioni matematiche e a virgola mobile](../floating-point-support.md)<br/>
