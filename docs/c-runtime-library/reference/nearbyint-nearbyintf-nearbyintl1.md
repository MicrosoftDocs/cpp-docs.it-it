---
title: nearbyint, nearbyintf, nearbyintl
ms.date: 4/2/2020
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
ms.openlocfilehash: d9e7adb321d85c728c5185c1663fd7f945fc4a82
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82914571"
---
# <a name="nearbyint-nearbyintf-nearbyintl"></a>nearbyint, nearbyintf, nearbyintl

Arrotonda il valore a virgola mobile specificato a un intero e restituisce tale valore in un formato a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
double nearbyint( double x );
float nearbyintf( float x );
long double nearbyintl( long double x );
```

```cpp
float nearbyint( float x ); //C++ only
long double nearbyint( long double x ); //C++ only
```

### <a name="parameters"></a>Parametri

*x*<br/>
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

C++ consente l'overload, quindi è possibile chiamare overload di **nearbyint** che accettano e restituiscono parametri **float** o **Long** **Double** . In un programma C **nearbyint** accetta sempre due valori Double e restituisce un valore Double.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**nearbyint**, **nearbyintf**, **nearbyintl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[Supporto delle funzioni matematiche e a virgola mobile](../floating-point-support.md)<br/>
