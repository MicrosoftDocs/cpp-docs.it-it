---
title: _umul128 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __umul128
dev_langs:
- C++
helpviewer_keywords:
- __umul128 intrinsic
ms.assetid: 13684df3-3ac7-467c-b258-a0e93bc490b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f6ca4db1103494c8c55d792391ac714311a3a7cd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444080"
---
# <a name="umul128"></a>_umul128

**Sezione specifica Microsoft**

Moltiplica due valori integer a 64 bit passati come i primi due argomenti e inserisce i 64 bit alti del prodotto nel valore integer a 64 bit a cui punta `HighProduct` e restituisce i 64 bit bassi del prodotto.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 _umul128( 
   unsigned __int64 Multiplier, 
   unsigned __int64 Multiplicand, 
   unsigned __int64 *HighProduct 
);
```

#### <a name="parameters"></a>Parametri

*Moltiplicatore*<br/>
[in] Il primo numero intero a 64 bit da moltiplicare.

*Moltiplicando*<br/>
[in] Il secondo valore integer a 64 bit da moltiplicare.

*HighProduct*<br/>
[out] I 64 bit alti del prodotto.

## <a name="return-value"></a>Valore restituito

64 bit bassi del prodotto.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_umul128`|ARM, x64|\<intrin.h>|

## <a name="example"></a>Esempio

```
// umul128.c
// processor: IPF, x64

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