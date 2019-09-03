---
title: _bittestandcomplement, _bittestandcomplement64
ms.date: 09/02/2019
f1_keywords:
- _bittestandcomplement64
- _bittestandcomplement64_cpp
- _bittestandcomplement_cpp
- _bittestandcomplement
helpviewer_keywords:
- btc instruction
- _bittestandcomplement intrinsic
- _bittestandcomplement64 intrinsic
ms.assetid: 53fa12dd-835e-4e5d-baec-a431c8678806
ms.openlocfilehash: b1dcfe86aad18c8261029c9111681e1882bc96f5
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222212"
---
# <a name="_bittestandcomplement-_bittestandcomplement64"></a>_bittestandcomplement, _bittestandcomplement64

**Sezione specifica Microsoft**

Generare un'istruzione che esamina il bit `b` dell'indirizzo `a`, ne restituisce il valore corrente e imposta il bit sul relativo complemento.

## <a name="syntax"></a>Sintassi

```C
unsigned char _bittestandcomplement(
   long *a,
   long b
);
unsigned char _bittestandcomplement64(
   __int64 *a,
   __int64 b
);
```

### <a name="parameters"></a>Parametri

*un*\
[in, out] Puntatore alla memoria da esaminare.

*b*\
in Posizione del bit da verificare.

## <a name="return-value"></a>Valore restituito

Bit nella posizione specificata.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_bittestandcomplement`|x86, ARM, x64, ARM64|
|`_bittestandcomplement64`|x64, ARM64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// bittestandcomplement.cpp
// processor: x86, IPF, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_bittestandcomplement)
#ifdef _M_AMD64
#pragma intrinsic(_bittestandcomplement64)
#endif

int main()
{
   long i = 1;
   __int64 i64 = 0x1I64;
   unsigned char result;
   printf("Initial value: %d\n", i);
   printf("Testing bit 1\n");
   result = _bittestandcomplement(&i, 1);
   printf("Value changed to %d, Result: %d\n", i, result);
#ifdef _M_AMD64
   printf("Testing bit 0\n");
   result = _bittestandcomplement64(&i64, 0);
   printf("Value changed to %I64d, Result: %d\n", i64, result);
#endif
}
```

```Output
Initial value: 1
Testing bit 1
Value changed to 3, Result: 0
Testing bit 0
Value changed to 0, Result: 1
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
