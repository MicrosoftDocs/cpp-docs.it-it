---
title: __umulh
ms.date: 11/04/2016
f1_keywords:
- __umulh
helpviewer_keywords:
- __umulh intrinsic
ms.assetid: d241b53a-e6f7-4af1-9f6e-84e149158f03
ms.openlocfilehash: 3a42de276b483f98e2eaf9d0c8505d7f1d5b5bca
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59026565"
---
# <a name="umulh"></a>__umulh

**Sezione specifica Microsoft**

Restituire i 64 bit alti del prodotto di due valori Unsigned Integer a 64 bit.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 __umulh(
   unsigned __int64 a,
   unsigned __int64 b
);
```

#### <a name="parameters"></a>Parametri

*a*<br/>
[in] Il primo numero da moltiplicare.

*b*<br/>
[in] Il secondo numero da moltiplicare.

## <a name="return-value"></a>Valore restituito

64 bit alti del risultato a 128 bit della moltiplicazione.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__umulh`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come funzioni intrinseche.

## <a name="example"></a>Esempio

```
// umulh.cpp
// processor: X64
#include <cstdio>
#include <intrin.h>

int main()
{
    unsigned __int64 i = 0x10;
    unsigned __int64 j = 0xFEDCBA9876543210;
    unsigned __int64 k = i * j; // k has the low 64 bits
                                // of the product.
    unsigned __int64 result;
    result = __umulh(i, j); // result has the high 64 bits
                            // of the product.
    printf_s("0x%I64x * 0x%I64x = 0x%I64x%I64x \n", i, j, result, k);
    return 0;
}
```

```Output
0x10 * 0xfedcba9876543210 = 0xfedcba98765432100
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)