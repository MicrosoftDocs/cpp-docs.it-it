---
title: __shiftleft128
ms.date: 11/04/2016
f1_keywords:
- __shiftleft128
helpviewer_keywords:
- __shiftleft128 intrinsic
ms.assetid: 557b846a-8fb0-469d-91ac-1b1fad80dc2a
ms.openlocfilehash: 5fcb797694c7a45dc4f2113f3d2ed4a2f578c894
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390412"
---
# <a name="shiftleft128"></a>__shiftleft128

**Sezione specifica Microsoft**

Sposta una quantità di 128 bit, rappresentata come due quantità di 64 bit `LowPart` e `HighPart`, a sinistra di un numero di bit specificato da `Shift` e restituisce i 64 bit più significativi del risultato.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 __shiftleft128(
   unsigned __int64 LowPart,
   unsigned __int64 HighPart,
   unsigned char Shift
);
```

#### <a name="parameters"></a>Parametri

*LowPart*<br/>
[in] 64 bit meno significativi della quantità di 128 bit da spostare.

*HighPart*<br/>
[in] I 64 bit alti della quantità di 128 bit da spostare.

*MAIUSC*<br/>
[in] Il numero di bit da spostare.

## <a name="return-value"></a>Valore restituito

I 64 bit più significativi del risultato.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__shiftleft128`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il valore `Shift` è sempre modulo 64 in modo che, ad esempio, se si chiama `__shiftleft128(1, 0, 64)`, la funzione sposterà la parte meno significativa di `0` bit a sinistra e restituirà la parte più significativa di `0` e non di `1`, come ci si aspetterebbe altrimenti.

## <a name="example"></a>Esempio

```
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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__shiftright128](../intrinsics/shiftright128.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)