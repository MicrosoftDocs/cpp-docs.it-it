---
title: _mm_cvtsi64x_ss
ms.date: 11/04/2016
f1_keywords:
- _mm_cvtsi64x_ss
helpviewer_keywords:
- cvtsi2ss instruction
- _mm_cvtsi64x_ss intrinsic
ms.assetid: 01e5d321-c18a-46fd-a6f6-324364514e1f
ms.openlocfilehash: 3ba9dc56cbb027e8cf9f31d293b3f96908aff5e4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62264413"
---
# <a name="mmcvtsi64xss"></a>_mm_cvtsi64x_ss

**Sezione specifica Microsoft**

Genera l'errore x64 estesi versione dell'intero convertire 64 Bit di valore a virgola mobile e precisione singola scalare (`cvtsi2ss`) (istruzione).

## <a name="syntax"></a>Sintassi

```
__m128 _mm_cvtsi64x_ss(
   __m128 a,
   __int64 b
);
```

#### <a name="parameters"></a>Parametri

*a*<br/>
[in] Un `__m128` struttura che contiene quattro valori a virgola mobile a precisione singola.

*b*<br/>
[in] Un intero a 64 bit da convertire in valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Un `__m128` struttura il cui primo valore a virgola mobile è il risultato della conversione. I tre valori vengono copiati senza modifiche da `a`.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_mm_cvtsi64x_ss`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il `__m128` struttura rappresenta un registro XMM, pertanto, questa funzione intrinseca consente un valore `b` dalla memoria di sistema da spostare in un registri XMM registrare.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```
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

[__m128](../cpp/m128.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)