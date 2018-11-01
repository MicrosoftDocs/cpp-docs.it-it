---
title: _bittestandreset, _bittestandreset64
ms.date: 11/04/2016
f1_keywords:
- _bittestandreset64_cpp
- _bittestandreset
- _bittestandreset_cpp
- _bittestandreset64
helpviewer_keywords:
- btr instruction
- _bittestandreset intrinsic
- _bittestandreset64 intrinsic
ms.assetid: 8dad63bb-a051-4cd7-a793-3357537dfeaf
ms.openlocfilehash: d8c4675e7efe9e1de8ce6f133d1c361481f1b544
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50557665"
---
# <a name="bittestandreset-bittestandreset64"></a>_bittestandreset, _bittestandreset64

**Sezione specifica Microsoft**

Generare l'istruzione che esamina il bit `b` dell'indirizzo `a`, restituisce il valore corrente e reimposta il bit su 0.

## <a name="syntax"></a>Sintassi

```
unsigned char _bittestandreset(
   long *a,
   long b
);
unsigned char _bittestandreset64(
   __int64 *a,
   __int64 b
);
```

#### <a name="parameters"></a>Parametri

*a*<br/>
[in, out] Puntatore alla memoria da esaminare.

*b*<br/>
[in] Posizione del bit da testare.

## <a name="return-value"></a>Valore restituito

Bit nella posizione specificata.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_bittestandreset`|x86, ARM, x64|
|`_bittestandreset64`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```
// bittestandreset.cpp
// processor: x86, IPF, x64
#include <stdio.h>
#include <limits.h>
#include <intrin.h>

#pragma intrinsic(_bittestandreset)

// Check the sign bit and reset to 0 (taking the absolute value)
// Returns 0 if the number is positive or zero
// Returns 1 if the number is negative
unsigned char absolute_value(long* p)
{
   const int SIGN_BIT = 31;
   return _bittestandreset(p, SIGN_BIT);
}

int main()
{
    long i = -112;
    unsigned char result;

    // Check the sign bit and reset to 0 (taking the absolute value)

    result = absolute_value(&i);
    if (result == 1)
        printf_s("The number was negative.\n");
}
```

```Output
The number was negative.
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)