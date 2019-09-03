---
title: _umul128
ms.date: 09/02/2019
f1_keywords:
- __umul128
helpviewer_keywords:
- __umul128 intrinsic
ms.assetid: 13684df3-3ac7-467c-b258-a0e93bc490b5
ms.openlocfilehash: 205f0f7f9046ede624bb09e18d8ede32fadbc3de
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219696"
---
# <a name="_umul128"></a>_umul128

**Sezione specifica Microsoft**

Moltiplica due valori integer a 64 bit passati come i primi due argomenti e inserisce i 64 bit alti del prodotto nel valore integer a 64 bit a cui punta `HighProduct` e restituisce i 64 bit bassi del prodotto.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 _umul128(
   unsigned __int64 Multiplier,
   unsigned __int64 Multiplicand,
   unsigned __int64 *HighProduct
);
```

### <a name="parameters"></a>Parametri

*Moltiplicatore*\
in Primo intero a 64 bit da moltiplicare.

*Multiplicand*\
in Secondo Integer a 64 bit da moltiplicare.

*HighProduct*\
out Un massimo di 64 bit del prodotto.

## <a name="return-value"></a>Valore restituito

64 bit bassi del prodotto.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_umul128`|X64|\<intrin.h>|

## <a name="example"></a>Esempio

```C
// umul128.c
// processor: x64

#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_umul128)

int main()
{
    unsigned __int64 a = 0x0fffffffffffffffI64;
    unsigned __int64 b = 0xf0000000I64;
    unsigned __int64 c, d;

    d = _umul128(a, b, &c);

    printf_s("%#I64x * %#I64x = %#I64x%I64x\n", a, b, c, d);
}
```

```Output
0xfffffffffffffff * 0xf0000000 = 0xeffffffffffffff10000000
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
