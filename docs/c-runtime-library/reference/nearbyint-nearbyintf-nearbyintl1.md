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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 92e3a744ef8069d45733c06b7a2681905c3eab55
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81338593"
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

*X*<br/>
Il valore da arrotondare.

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce *x*, arrotondato all'intero più vicino, utilizzando il formato di arrotondamento corrente come riportato da [fegetround](fegetround-fesetround2.md). In caso contrario, la funzione può restituire uno dei valori seguenti:

|Problema|Return|
|-----------|------------|
|*x* : "INFINITY"|-INFINITY, non modificato|
|*x* : 0|0, non modificato|
|*x* - NaN|NaN|

Gli errori non vengono segnalati tramite [_matherr](matherr.md); in particolare, questa funzione non segnala eventuali eccezioni **FE_INEXACT.**

## <a name="remarks"></a>Osservazioni

La differenza principale tra questa funzione e [rint](rint-rintf-rintl.md) è che questa funzione non genera l'eccezione a virgola mobile inesatta.

Dato che i valori a virgola massimi sono interi esatti, questa funzione da sola non genererà mai un overflow. È invece possibile un overflow del valore restituito nell'output, a seconda della versione della funzione usata.

Il linguaggio C, ovvero l'overload, in modo da poter chiamare gli overload di **nearbyint** che accettano e restituiscono parametri **float** o **long** **double.** In un programma C, **nearbyint** accetta sempre due valori double e restituisce un valore double.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**nelle vicinanze,** **nearbyintf**, **nearbyintl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[Supporto delle funzioni matematiche e a virgola mobile](../floating-point-support.md)<br/>
