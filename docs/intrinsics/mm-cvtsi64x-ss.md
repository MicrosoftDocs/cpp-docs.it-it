---
description: 'Altre informazioni su: _mm_cvtsi64x_ss'
title: _mm_cvtsi64x_ss
ms.date: 09/02/2019
f1_keywords:
- _mm_cvtsi64x_ss
helpviewer_keywords:
- cvtsi2ss instruction
- _mm_cvtsi64x_ss intrinsic
ms.assetid: 01e5d321-c18a-46fd-a6f6-324364514e1f
ms.openlocfilehash: 81a1af04d4c66cefd9815471baeb3a6095403ddf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167721"
---
# <a name="_mm_cvtsi64x_ss"></a>_mm_cvtsi64x_ss

**Specifico di Microsoft**

Genera la versione estesa x64 dell'istruzione Convert Integer a 64 bit in Scalar Single-Precision Floating-Point value ( `cvtsi2ss` ).

## <a name="syntax"></a>Sintassi

```C
__m128 _mm_cvtsi64x_ss(
   __m128 a,
   __int64 b
);
```

### <a name="parameters"></a>Parametri

*un*\
in **`__m128`** Struttura che contiene quattro valori a virgola mobile a precisione singola.

*b*\
in Intero a 64 bit da convertire in un valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

**`__m128`** Struttura il cui primo valore a virgola mobile è il risultato della conversione. Gli altri tre valori vengono copiati senza *modifiche da.*

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_mm_cvtsi64x_ss`|x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La **`__m128`** struttura rappresenta un registro XMM, pertanto la funzione intrinseca consente lo spostamento del valore *b* dalla memoria di sistema in un registro XMM.

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__m128](../cpp/m128.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
