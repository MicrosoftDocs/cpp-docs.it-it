---
title: erf, erff, erfl, erfc, erfcf, erfcl
ms.date: 01/31/2019
apiname:
- erff
- erfl
- erf
- erfc
- erfcf
- erfcl
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
- erfc
- erfcf
- erfcl
helpviewer_keywords:
- erfl function
- erff function
- erf function
- erfcl function
- erfcf function
- erfc function
ms.assetid: 144d90d3-e437-41c2-a659-cd57596023b5
ms.openlocfilehash: 4270d8366686ea282a4dd37741d9f8e37991b88f
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702661"
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

Il **erf** funzioni restituiscono la funzione di errore di Gauss *x*. Il **erfc** le funzioni restituiscono di Gauss complementare funzione di errore dei *x*.

## <a name="remarks"></a>Note

Il **erf** funzioni calcolano la funzione di errore di Gauss di *x*, che viene definito come:

![La funzione di errore di x](media/crt_erf_formula.PNG "la funzione di errore di x")

La funzione di errore di Gauss complementare è definita come 1 - Erf (x). Il **erf** funzioni restituiscono un valore compreso nell'intervallo tra -1,0 e 1,0. Non vi è restituzione di errori. Il **erfc** funzioni restituiscono un valore compreso nell'intervallo da 0 a 2. Se *x* è troppo grande per **erfc**, il **errno** variabile è impostata su **ERANGE**.

Dato che C++ consente l'overload, è possibile chiamare overload di **erf** e **erfc** che accettino e restituiscano **float** e **lungo** **doppie** tipi. In un programma C **erf** e **erfc** accettano e restituiscono sempre un **double**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**erf**, **erff**, **erfl**, **erfc**, **erfcf**, **erfcl**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
