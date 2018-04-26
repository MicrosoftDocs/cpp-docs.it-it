---
title: nearbyint, nearbyintf, nearbyintl | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- nearbyint function
- nearbyintf function
- nearbyintl function
ms.assetid: dd39cb68-96b0-434b-820f-6ff2ea65584f
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0aacdeb67e7c467bf6f8719172dfd9771e0cec8d
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

Se l'operazione riesce, restituisce *x*, arrotondato all'intero più vicino, utilizzando il formato di arrotondamento corrente come riportato da [fegetround](fegetround-fesetround2.md). In caso contrario, la funzione può restituire uno dei valori seguenti:

|Problema|INVIO|
|-----------|------------|
|*x* = ±INFINITY|±INFINITY, non modificato|
|*x* = ± 0|± 0, non modificato|
|*x* = NaN|NaN|

Gli errori non sono segnalati tramite [matherr](matherr.md); in particolare, questa funzione non segnala eventuali **FE_INEXACT** eccezioni.

## <a name="remarks"></a>Note

La differenza principale tra questa funzione e [rint](rint-rintf-rintl.md) è che questa funzione non genera l'eccezione a virgola mobile inesatti.

Dato che i valori a virgola massimi sono interi esatti, questa funzione da sola non genererà mai un overflow. È invece possibile un overflow del valore restituito nell'output, a seconda della versione della funzione usata.

C++ consente l'overload, pertanto è possibile chiamare degli overload di **nearbyint** che accettano e restituiscono **float** oppure **lungo** **doppie** parametri. In un programma C **nearbyint** sempre accetta due valori double e restituisce un valore double.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**nearbyint**, **nearbyintf**, **nearbyintl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[Matematiche e supporto della virgola mobile](../floating-point-support.md)<br/>
