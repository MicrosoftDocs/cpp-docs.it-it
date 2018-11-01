---
title: nearbyint, nearbyintf, nearbyintl
ms.date: 04/05/2018
apiname:
- nearbyint
- nearbyintf
- nerabyintl
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
ms.openlocfilehash: 4a36bddb28db9fb4c5809432dfaef9ca3ece4328
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50668312"
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

Se ha esito positivo, restituisce *x*, arrotondato all'intero più prossimo, usando il formato di arrotondamento corrente come riportato da [fegetround](fegetround-fesetround2.md). In caso contrario, la funzione può restituire uno dei valori seguenti:

|Problema|INVIO|
|-----------|------------|
|*x* = ±INFINITY|±INFINITY, senza modificata|
|*x* = ± 0|± 0, non modificato|
|*x* = NaN|NaN|

Gli errori non vengono segnalati tramite [matherr](matherr.md); in particolare, questa funzione non segnala eventuali **FE_INEXACT** eccezioni.

## <a name="remarks"></a>Note

La differenza principale tra questa funzione e [rint](rint-rintf-rintl.md) è che questa funzione non genera l'eccezione a virgola mobile inesatti.

Dato che i valori a virgola massimi sono interi esatti, questa funzione da sola non genererà mai un overflow. È invece possibile un overflow del valore restituito nell'output, a seconda della versione della funzione usata.

C++ consente l'overload, quindi è possibile chiamare overload di **nearbyint** che accettano e restituiscono **float** oppure **long** **double** parametri. In un programma C **nearbyint** sempre accetta due valori double e restituisce un valore double.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**nearbyint**, **nearbyintf**, **nearbyintl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[Matematiche e supporto a virgola mobile](../floating-point-support.md)<br/>
