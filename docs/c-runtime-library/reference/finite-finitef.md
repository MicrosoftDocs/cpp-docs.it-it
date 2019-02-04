---
title: isfinite, _finite, _finitef
ms.date: 01/31/2019
apiname:
- _finite
- _finitef
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
ms.openlocfilehash: 1be5aa204a7db3054a49c2e05a8fd77b12ae8a3d
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55702752"
---
# <a name="isfinite-finite-finitef"></a>isfinite, _finite, _finitef

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

Il `isfinite` macro e il `_finite` e `_finitef` funzioni restituiscono un valore diverso da zero se *x* è un normale o subnormal finito valore. Restituiscono 0 se l'argomento è infinito o NaN. La funzione di modello inline C++ `isfinite` si comporta allo stesso modo, ma restituisce **true** oppure **false**.

## <a name="remarks"></a>Note

`isfinite` è una macro quando viene compilato come C e una funzione di modello inline durante la compilazione come C++. Il `_finite` e `_finitef` funzioni sono specifiche di Microsoft. La funzione `_finitef` è disponibile solo per la compilazione per le piattaforme x86, ARM o ARM64.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria (C)|Intestazione obbligatoria (C++)|
|--------------|---------------------------|-------------------------------|
|`_finite`|\<float.h> o \<math.h>|\<float.h>, \<math.h>, \<cfloat> o \<cmath>|
|`isfinite`, `_finitef`|\<math.h>|\<math.h> o \<cmath>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[fpclassify](fpclassify.md)<br/>
[_fpclass, _fpclassf](fpclass-fpclassf.md)<br/>
[isinf](isinf.md)<br/>
[isnan, _isnan, _isnanf](isnan-isnan-isnanf.md)<br/>
[isnormal](isnormal.md)<br/>
