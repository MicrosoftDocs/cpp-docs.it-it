---
title: erf, erff, erfl, erfc, erfcf, erfcl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- erff
- erfl
- erf
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
- erfl
- erf
- erff
dev_langs:
- C++
helpviewer_keywords:
- erfl function
- erff function
- erf function
ms.assetid: 144d90d3-e437-41c2-a659-cd57596023b5
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1703b4e352fee798a7b38dd16edf6158cd7f53ea
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="erf-erff-erfl-erfc-erfcf-erfcl"></a>erf, erff, erfl, erfc, erfcf, erfcl

Calcola la funzione di errore o la funzione di errore complementare di un valore.

## <a name="syntax"></a>Sintassi

```C
double erf(
   double x
);
float erf(
   float x
); // C++ only
long double erf(
   long double x
); // C++ only
float erff(
   float x
);
long double erfl(
   long double x
);
double erfc(
   double x
);
float erfc(
   float x
); // C++ only
long double erfc(
   long double x
); // C++ only
float erfcf(
   float x
);
long double erfcl(
   long double x
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Un valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Il **erf** le funzioni restituiscono la Gauss funzione di errore di *x*. Il **erfc** funzioni restituiscono Gauss complementare funzione di errore di *x*.

## <a name="remarks"></a>Note

Il **erf** funzioni calcolano la funzione di errore di Gauss di *x*, definito come:

![Funzione di errore di x](media/crt_erf_formula.PNG "CRT_erf_formula")

La funzione di errore di Gauss complementare è definita come 1 - Erf (x). Il **erf** funzioni restituiscono un valore compreso tra -1,0 e 1,0. Non vi è restituzione di errori. Il **erfc** funzioni restituiscono un valore compreso tra 0 e 2. Se *x* è troppo grande per **erfc**, il **errno** variabile è impostata su **ERANGE**.

Dato che C++ consente l'overload, è possibile chiamare overload di **erf** e **erfc** che accettino e restituiscano **float** e **lungo** **doppie** tipi. In un programma C **erf** e **erfc** accettano e restituiscono sempre un **doppie**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**Erf**, **erff**, **erfl**, **erfc**, **erfcf**, **erfcl**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
