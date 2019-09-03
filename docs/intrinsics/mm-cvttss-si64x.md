---
title: _mm_cvttss_si64x
ms.date: 09/02/2019
f1_keywords:
- _mm_cvttss_si64x
helpviewer_keywords:
- _mm_cvttss_si64x intrinsic
- cvttss2si instruction
ms.assetid: f9a3fd07-5bd8-4758-8744-6315c082cf87
ms.openlocfilehash: 69016a4e23b020b2c4c79c6b97a5a76f2b2dc028
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217424"
---
# <a name="_mm_cvttss_si64x"></a>_mm_cvttss_si64x

**Sezione specifica Microsoft**

Genera la versione estesa x64 della conversione con numero a virgola mobile a precisione singola di troncamento nell'istruzione Integer a 64`cvttss2si`bit ().

## <a name="syntax"></a>Sintassi

```C
__int64 _mm_cvttss_si64x(
   __m128 value
);
```

### <a name="parameters"></a>Parametri

*value*\
in `__m128` Struttura che contiene i valori a virgola mobile a precisione singola.

## <a name="return-value"></a>Valore restituito

Risultato della conversione del primo valore a virgola mobile in un intero a 64 bit.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_mm_cvttss_si64x`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca differisce da `_mm_cvtss_si64x` solo in quanto le conversioni inesatte vengono troncate verso lo zero. Poiché la `__m128` struttura rappresenta un registro XMM, l'istruzione generata sposta i dati da un registro XMM nella memoria di sistema.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// _mm_cvttss_si64x.cpp
// processor: x64
#include <intrin.h>
#include <stdio.h>

#pragma intrinsic(_mm_cvttss_si64x)

int main()
{
    __m128 a;
    __int64 b = 54;

    // _mm_load_ps requires an aligned buffer.
    __declspec(align(16)) float af[4] = { 101.5, 200.75,
                                          300.5, 400.5 };

    // Load a with the floating point values.
    // The values will be copied to the XMM registers.
    a = _mm_load_ps(af);

    // Extract the first element of a and convert to an integer
    b = _mm_cvttss_si64x(a);

    printf_s("%I64d\n", b);
}
```

```Output
101
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__m128](../cpp/m128.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
