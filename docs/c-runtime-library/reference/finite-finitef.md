---
title: isfinite, _finite, _finitef
ms.date: 01/31/2019
api_name:
- _finite
- _finitef
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
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- isfinite
- finite
- _finite
- _finitef
- math/isfinite
- math/_finite
- math/_finitef
- float/_finite
helpviewer_keywords:
- finite function
- _finite function
- _finitef function
ms.assetid: 5a7d7ca7-befb-4e1f-831d-28713c6eb805
ms.openlocfilehash: 7e15a6619e584ff52c07048fcf591835b799587f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218702"
---
# <a name="isfinite-_finite-_finitef"></a>isfinite, _finite, _finitef

Determina se un valore a virgola mobile è finito.

## <a name="syntax"></a>Sintassi

```C
int isfinite(
   /* floating-point */ x
); /* C-only macro */

template <class FloatingType>
inline bool isfinite(
   FloatingType x
) throw(); /* C++-only template function */

int _finite(
   double x
);

int _finitef(
   float x
); /* x64 and ARM/ARM64 only */
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile da verificare.

## <a name="return-value"></a>Valore restituito

La `isfinite` macro e le `_finite` `_finitef` funzioni e restituiscono un valore diverso da zero se *x* è un valore finito normale o subnormale. Restituisce 0 se l'argomento è infinito o NaN. La funzione del modello inline C++ `isfinite` si comporta allo stesso modo, ma restituisce **`true`** o **`false`** .

## <a name="remarks"></a>Osservazioni

`isfinite`è una macro quando viene compilata come C e una funzione di modello inline quando viene compilata come C++. Le `_finite` `_finitef` funzioni e sono specifiche di Microsoft. La funzione `_finitef` è disponibile solo per la compilazione per le piattaforme x86, ARM o ARM64.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|--------------|---------------------------|-------------------------------|
|`_finite`|\<float.h> o \<math.h>|\<float.h>, \<math.h>, \<cfloat> o \<cmath>|
|`isfinite`, `_finitef`|\<math.h>|\<math.h> o \<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[fpclassify](fpclassify.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
[isinf](isinf.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[isnormal](isnormal.md)<br/>
