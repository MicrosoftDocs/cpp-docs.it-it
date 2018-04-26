---
title: carg, cargf, cargl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- carg
- cargf
- cargl
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
- carg
- cargf
- cargl
- complex/carg
- complex/cargf
- complex/cargl
dev_langs:
- C++
helpviewer_keywords:
- carg function
- cargf function
- cargl function
ms.assetid: 610d6a93-b929-46ab-a966-b77db0b804be
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7fc42abad045e8a57ad19c555c0cd94f1a24879a
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="carg-cargf-cargl"></a>carg, cargf, cargl

Recupera l'argomento di un numero complesso, con discontinuità della funzione lungo l'asse negativo reale.

## <a name="syntax"></a>Sintassi

```C
double carg(
   _Dcomplex z
);
float carg(
   _Fcomplex z
);  // C++ only
long double carg(
   _Lcomplex z
);  // C++ only
float cargf(
   _Fcomplex z
);
long double cargl(
   _Lcomplex z
);
```

### <a name="parameters"></a>Parametri

*z*<br/>
Numero complesso.

## <a name="return-value"></a>Valore restituito

L'argomento (noto anche come fase) di *z*. Il risultato sia compreso nell'intervallo [-π, π +].

## <a name="remarks"></a>Note

Dato che C++ consente l'overload, è possibile chiamare overload di **carg** che accettano **_Fcomplex** oppure **_Lcomplex** valori, quindi restituiscono **float** o **lungo** **doppie** valori. In un programma C **carg** ha sempre un **_Dcomplex** valore e restituisce un **doppie** valore.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione C|Intestazione C++|
|-------------|--------------|------------------|
|**carg**, **cargf**, **cargl**|\<complex.h>|\<ccomplex>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](crt-alphabetical-function-reference.md)<br/>
[norm, normf, norml](norm-normf-norml1.md)<br/>
[creal, crealf, creall](creal-crealf-creall.md)<br/>
[cproj, cprojf, cprojl](cproj-cprojf-cprojl.md)<br/>
[conj, conjf, conjl](conj-conjf-conjl.md)<br/>
[cimag, cimagf, cimagl](cimag-cimagf-cimagl.md)<br/>
[cabs, cabsf, cabsl](cabs-cabsf-cabsl.md)<br/>
