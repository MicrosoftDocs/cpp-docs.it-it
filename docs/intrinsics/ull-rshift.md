---
description: 'Altre informazioni su: __ull_rshift'
title: __ull_rshift
ms.date: 09/02/2019
f1_keywords:
- __ull_rshift
helpviewer_keywords:
- ull_rshift intrinsic
- __ull_rshift intrinsic
ms.assetid: b7ff5254-3540-4e6e-b57c-a6c4beb7dca2
ms.openlocfilehash: 5b819e4a1df8db7b7562023c6acc9dbbd94f7f76
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333622"
---
# <a name="__ull_rshift"></a>__ull_rshift

**Specifico di Microsoft**

in x64, sposta un valore a 64 bit specificato dal primo parametro a destra di un numero di bit specificato dal secondo parametro.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __ull_rshift(
   unsigned __int64 mask,
   int nBit
);
```

### <a name="parameters"></a>Parametri

*maschera*\
in Valore intero a 64 bit da spostare a destra.

*nBit*\
in Numero di bit da spostare, modulo 32 su x86 e modulo 64 su x64.

## <a name="return-value"></a>Valore restituito

Maschera spostata da `nBit` bit.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__ull_rshift`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Se il secondo parametro è maggiore di 31 su x86 (63 su x64), il numero viene usato come modulo 32 (64 su x64) per determinare il numero di bit da spostare. Il `ull` nome indica `unsigned long long (unsigned __int64)` .

## <a name="example"></a>Esempio

```cpp
// ull_rshift.cpp
// compile with: /EHsc
// processor: x86, x64
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(__ull_rshift)

int main()
{
   unsigned __int64 mask = 0x100;
   int nBit = 8;
   mask = __ull_rshift(mask, nBit);
   cout << hex << mask << endl;
}
```

```Output
1
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__ll_lshift](../intrinsics/ll-lshift.md)\
[__ll_rshift](../intrinsics/ll-rshift.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
