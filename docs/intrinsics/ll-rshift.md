---
title: __ll_rshift
ms.date: 09/02/2019
f1_keywords:
- __ll_rshift_cpp
- __ll_rshift
helpviewer_keywords:
- __ll_rshift intrinsic
- ll_rshift intrinsic
ms.assetid: ef13b732-d122-44a0-add9-f5544a2c4ab2
ms.openlocfilehash: 6ae750f1a8825096ee30adb01768d5603ab23a01
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219664"
---
# <a name="__ll_rshift"></a>__ll_rshift

**Specifico di Microsoft**

Sposta un valore a 64 bit specificato dal primo parametro a destra, in base a un numero di bit specificato dal secondo parametro.

## <a name="syntax"></a>Sintassi

```C
__int64 __ll_rshift(
   __int64 Mask,
   int nBit
);
```

### <a name="parameters"></a>Parametri

*Maschera*\
in Valore intero a 64 bit da spostare a destra.

*nBit*\
in Numero di bit da spostare, modulo 64 su x64 e modulo 32 su x86.

## <a name="return-value"></a>Valore restituito

Maschera spostata da `nBit` bit.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architecture|
|---------------|------------------|
|`__ll_rshift`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Osservazioni

Se il secondo parametro è maggiore di 64 su x64 (32 su x86), il numero viene considerato modulo 64 (32 su x86) per determinare il numero di bit da spostare. Il `ll` prefisso indica che si tratta di un'operazione su **`long long`** , un altro nome per **`__int64`** il tipo integrale con segno a 64 bit.

## <a name="example"></a>Esempio

```cpp
// ll_rshift.cpp
// compile with: /EHsc
// processor: x86, x64
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(__ll_rshift)

int main()
{
   __int64 Mask = - 0x100;
   int nBit = 4;
   cout << hex << Mask << endl;
   cout << " - " << (- Mask) << endl;
   Mask = __ll_rshift(Mask, nBit);
   cout << hex << Mask << endl;
   cout << " - " << (- Mask) << endl;
}
```

## <a name="output"></a>Output

```Output
ffffffffffffff00
- 100
fffffffffffffff0
- 10
```

> [!NOTE]
> Se `_ull_rshift` è stato usato, il MSB del valore spostato a destra sarebbe stato zero, quindi il risultato desiderato non sarebbe stato ottenuto nel caso di un valore negativo.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__ll_lshift](../intrinsics/ll-lshift.md)\
[__ull_rshift](../intrinsics/ull-rshift.md)
