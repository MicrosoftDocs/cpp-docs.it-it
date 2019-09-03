---
title: _mm_cvtsi64x_ss
ms.date: 09/02/2019
f1_keywords:
- _mm_cvtsi64x_ss
helpviewer_keywords:
- cvtsi2ss instruction
- _mm_cvtsi64x_ss intrinsic
ms.assetid: 01e5d321-c18a-46fd-a6f6-324364514e1f
ms.openlocfilehash: 0e9bacc56f212e804467d1c6e0159a1749235976
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217463"
---
# <a name="_mm_cvtsi64x_ss"></a>_mm_cvtsi64x_ss

**Sezione specifica Microsoft**

Genera la versione estesa x64 dell'istruzione Convert Integer a 64 bit in un valore a virgola mobile a precisione singola`cvtsi2ss`scalare ().

## <a name="syntax"></a>Sintassi

```C
__m128 _mm_cvtsi64x_ss(
   __m128 a,
   __int64 b
);
```

### <a name="parameters"></a>Parametri

*un*\
in `__m128` Struttura che contiene quattro valori a virgola mobile a precisione singola.

*b*\
in Intero a 64 bit da convertire in un valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

`__m128` Struttura il cui primo valore a virgola mobile è il risultato della conversione. Gli altri tre valori vengono copiati senza modifiche da.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_mm_cvtsi64x_ss`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La `__m128` struttura rappresenta un registro XMM, pertanto la funzione intrinseca consente lo spostamento del valore *b* dalla memoria di sistema in un registro XMM.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// _mm_cvtsi64x_ss.cpp
// processor: x64

#include <intrin.h>
#include <stdio.h>

#pragma intrinsic(_mm_cvtsi64x_ss)

int main()
{
    __m128 a;
    __int64 b = 54;

    a.m128_f32[0] = 0;
    a.m128_f32[1] = 0;
    a.m128_f32[2] = 0;
    a.m128_f32[3] = 0;
    a = _mm_cvtsi64x_ss(a, b);

    printf_s( "%lf %lf %lf %lf\n",
              a.m128_f32[0], a.m128_f32[1],
              a.m128_f32[2], a.m128_f32[3] );
}
```

```Output
54.000000 0.000000 0.000000 0.000000
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__m128](../cpp/m128.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
