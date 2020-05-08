---
title: erf, erff, erfl, erfc, erfcf, erfcl
ms.date: 4/2/2020
api_name:
- erff
- erfl
- erf
- erfc
- erfcf
- erfcl
- _o_erf
- _o_erfc
- _o_erfcf
- _o_erfcl
- _o_erff
- _o_erfl
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
ms.openlocfilehash: 633a766684ed7485ab579157ae4c94fe209f7e73
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82915018"
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

Le funzioni **ERF** restituiscono la funzione di errore di Gauss di *x*. Le funzioni **erfc** restituiscono la funzione di errore di Gauss complementare di *x*.

## <a name="remarks"></a>Osservazioni

Le funzioni **ERF** calcolano la funzione di errore di Gauss di *x*, definita come:

![Funzione di errore di x](media/crt_erf_formula.PNG "Funzione di errore di x")

La funzione di errore di Gauss complementare è definita come 1-ERF (x). Le funzioni **ERF** restituiscono un valore compreso tra-1,0 e 1,0. Non vi è restituzione di errori. Le funzioni **erfc** restituiscono un valore compreso tra 0 e 2. Se *x* è troppo grande per **erfc**, la variabile **errno** è impostata su **ERANGE**.

Poiché C++ consente l'overload, è possibile chiamare gli overload di **ERF** e **erfc** che accettano e restituiscono i tipi **float** e **Long** **Double** . In un programma C, **ERF** e **erfc** accettano e restituiscono sempre un **valore Double**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**ERF**, **erff**, **erfl**, **erfc**, **erfcf**, **erfcl**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
