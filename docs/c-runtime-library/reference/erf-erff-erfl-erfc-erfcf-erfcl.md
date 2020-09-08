---
title: erf, erff, erfl, erfc, erfcf, erfcl
description: Informazioni di riferimento sulle API per ERF, erff, erfl, erfc, erfcf e erfcl; che calcola la funzione di errore o la funzione di errore complementare di un valore.
ms.date: 9/1/2020
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
ms.openlocfilehash: ef83275515c66341798395bbfc2bb5b088e6cfb7
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89555644"
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
#define erf(X) // Requires C11 or higher
#define erfc(X) // Requires C11 or higher
```

### <a name="parameters"></a>Parametri

*x*\
Un valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Le funzioni **ERF** restituiscono la funzione di errore di Gauss di *x*. Le funzioni **erfc** restituiscono la funzione di errore di Gauss complementare di *x*.

## <a name="remarks"></a>Osservazioni

Le funzioni **ERF** calcolano la funzione di errore di Gauss di *x*, definita come:

![Funzione di errore di x](media/crt_erf_formula.PNG "Funzione di errore di x")

La funzione di errore di Gauss complementare è definita come 1-ERF (x). Le funzioni **ERF** restituiscono un valore compreso tra-1,0 e 1,0. Non viene restituito alcun errore. Le funzioni **erfc** restituiscono un valore compreso tra 0 e 2. Se *x* è troppo grande per **erfc**, la variabile **errno** è impostata su **ERANGE**.

Poiché C++ consente l'overload, è possibile chiamare gli overload di **ERF** e **erfc** che accettano e restituiscono i **`float`** **`long double`** tipi e. In un programma C, a meno che non si stia usando la \<tgmath.h> macro per chiamare questa funzione, **ERF** e **erfc** accettano e restituiscono sempre un **`double`** .

Se si usa la \<tgmath.h> `erf()` macro, il tipo dell'argomento determina quale versione della funzione è selezionata. Per informazioni dettagliate, vedere la pagina relativa al [tipo generico Math](../../c-runtime-library/tgmath.md) .

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Function|Intestazione obbligatoria|
|--------------|---------------------|
|**ERF**, **erff**, **erfl**, **erfc**, **erfcf**, **erfcl**|\<math.h>|
|**ERF** (macro) | \<tgmath.h> |

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
