---
description: 'Altre informazioni su: __shiftleft128'
title: __shiftleft128
ms.date: 09/02/2019
f1_keywords:
- __shiftleft128
helpviewer_keywords:
- __shiftleft128 intrinsic
ms.assetid: 557b846a-8fb0-469d-91ac-1b1fad80dc2a
ms.openlocfilehash: e0e1402660c2ddb6f5993e5186302ff489ed864f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306989"
---
# <a name="__shiftleft128"></a>__shiftleft128

**Specifico di Microsoft**

Sposta una quantità di 128 bit, rappresentata come due quantità di 64 bit `LowPart` e `HighPart`, a sinistra di un numero di bit specificato da `Shift` e restituisce i 64 bit più significativi del risultato.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __shiftleft128(
   unsigned __int64 LowPart,
   unsigned __int64 HighPart,
   unsigned char Shift
);
```

### <a name="parameters"></a>Parametri

*LowPart*\
in Bit 64 bassi della quantità di 128 bit da spostare.

*HighPart*\
in Bit 64 alti della quantità di 128 bit da spostare.

*MAIUSC*\
in Numero di bit da spostare.

## <a name="return-value"></a>Valore restituito

I 64 bit più significativi del risultato.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__shiftleft128`|x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Il valore *Shift* è sempre modulo 64 in modo che, ad esempio, se si chiama `__shiftleft128(1, 0, 64)` , la funzione sposterà i bit della parte inferiore a `0` sinistra e restituirà una parte alta di `0` e non `1` come potrebbe essere altrimenti prevista.

## <a name="example"></a>Esempio

```C
// shiftleft128.c
// processor: IPF, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic (__shiftleft128, __shiftright128)

int main()
{
    unsigned __int64 i = 0x1I64;
    unsigned __int64 j = 0x10I64;
    unsigned __int64 ResultLowPart;
    unsigned __int64 ResultHighPart;

    ResultLowPart = i << 1;
    ResultHighPart = __shiftleft128(i, j, 1);

    // concatenate the low and high parts padded with 0's
    // to display correct hexadecimal 128 bit values
    printf_s("0x%02I64x%016I64x << 1 = 0x%02I64x%016I64x\n",
             j, i, ResultHighPart, ResultLowPart);

    ResultHighPart = j >> 1;
    ResultLowPart = __shiftright128(i, j, 1);

    printf_s("0x%02I64x%016I64x >> 1 = 0x%02I64x%016I64x\n",
             j, i, ResultHighPart, ResultLowPart);
}
```

```Output
0x100000000000000001 << 1 = 0x200000000000000002
0x100000000000000001 >> 1 = 0x080000000000000000
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__shiftright128](../intrinsics/shiftright128.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
