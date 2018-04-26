---
title: lgamma, lgammaf, lgammal | Microsoft Docs
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
- lgamma
- lgammaf
- lgammal
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
- lgamma
- lgammaf
- lgammal
- math/lgamma
- math/lgammaf
- math/lgammal
dev_langs:
- C++
helpviewer_keywords:
- lgamma function
- lgammal function
- lgammaf function
ms.assetid: 6e326c58-7077-481a-a329-c82ae56ae9e6
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6e718e2d387f8bf8f9e092e7530807e06557ef7c
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

Se ha esito positivo, restituisce il logaritmo naturale del valore assoluto della funzione gamma dei *x*.

|Problema|INVIO|
|-----------|------------|
|*x* = NaN|NaN|
|*x* = ± 0|+INFINITO|
|*x*= numero intero negativo|+INFINITO|
|±INFINITY|+INFINITO|
|Errore polo|+HUGE_VAL, +HUGE_VALF o +HUGE_VALL|
|Errore di intervallo di overflow|±HUGE_VAL, ±HUGE_VALF o ±HUGE_VALL|

Gli errori vengono segnalati come specificato in [_matherr](matherr.md).

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **lgamma** che accettano e restituiscono **float** e **lungo** **doppie** tipi. In un programma C **lgamma** accetta e restituisce sempre un **doppie**.

Se x è un numero razionale, questa funzione restituisce il logaritmo del fattoriale (x - 1).

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C|Intestazione C++|
|--------------|--------------|------------------|
|**lgamma**, **lgammaf**, **lgammal**|\<math.h>|\<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[tgamma, tgammaf, tgammal](tgamma-tgammaf-tgammal.md)<br/>
