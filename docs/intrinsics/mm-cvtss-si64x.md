---
title: _mm_cvtss_si64x
ms.date: 09/02/2019
f1_keywords:
- _mm_cvtss_si64x
helpviewer_keywords:
- cvtss2si intrinsic
- _mm_cvtss_si64x intrinsic
ms.assetid: c279aff2-ee29-4271-8829-3ec691bf7718
ms.openlocfilehash: bc6e33da5ac7b25727f6e24c3af6e6a926b29847
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230506"
---
# <a name="_mm_cvtss_si64x"></a>_mm_cvtss_si64x

**Specifico di Microsoft**

Genera la versione estesa x64 del numero a virgola mobile con precisione singola scalare convertito nell'istruzione Integer a 64 bit ( `cvtss2si` ).

## <a name="syntax"></a>Sintassi

```C
__int64 _mm_cvtss_si64x(
   __m128 value
);
```

### <a name="parameters"></a>Parametri

*valore*\
in **`__m128`** Struttura che contiene i valori a virgola mobile.

## <a name="return-value"></a>Valore restituito

Intero a 64 bit, il risultato della conversione del primo valore a virgola mobile in un numero intero.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architecture|
|---------------|------------------|
|`_mm_cvtss_si64x`|x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Osservazioni

Il primo elemento del valore della struttura viene convertito in un Integer e restituito. I bit di controllo di arrotondamento in MXCSR vengono utilizzati per determinare il comportamento di arrotondamento. La modalità di arrotondamento predefinita è arrotondata al più vicino, arrotondando al numero pari se la parte decimale è 0,5. Poiché la **`__m128`** struttura rappresenta un registro XMM, il valore intrinseco accetta un valore dal registro XMM e lo scrive nella memoria di sistema.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// _mm_cvtss_si64x.cpp
// processor: x64
#include <intrin.h>
#include <stdio.h>

#pragma intrinsic(_mm_cvtss_si64x)

int main()
{
    __m128 a;
    __int64 b = 54;

    // _mm_load_ps requires an aligned buffer.
    __declspec(align(16)) float af[4] =
                           { 101.25, 200.75, 300.5, 400.5 };

    // Load a with the floating point values.
    // The values will be copied to the XMM registers.
    a = _mm_load_ps(af);

    // Extract the first element of a and convert to an integer
    b = _mm_cvtss_si64x(a);

    printf_s("%I64d\n", b);
}
```

```Output
101
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__m128d](../cpp/m128d.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
