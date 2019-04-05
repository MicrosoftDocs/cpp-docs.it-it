---
title: __ll_rshift
ms.date: 11/04/2016
f1_keywords:
- __ll_rshift_cpp
- __ll_rshift
helpviewer_keywords:
- __ll_rshift intrinsic
- ll_rshift intrinsic
ms.assetid: ef13b732-d122-44a0-add9-f5544a2c4ab2
ms.openlocfilehash: e39f8fe797467569077dd24baf49670607915107
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59041020"
---
# <a name="llrshift"></a>__ll_rshift

**Sezione specifica Microsoft**

Sposta un valore a 64 bit specificato dal primo parametro a destra di un numero di bit specificato dal secondo parametro.

## <a name="syntax"></a>Sintassi

```
__int64 __ll_rshift(
   __int64 Mask,
   int nBit
);
```

#### <a name="parameters"></a>Parametri

*Maschera*<br/>
[in] Valore intero a 64 bit da spostare a destra.

*nBit*<br/>
[in] Il numero di bit da spostare, modulo 64 in x64 e modulo 32 x86.

## <a name="return-value"></a>Valore restituito

La maschera spostato `nBit` bits.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__ll_rshift`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Se il secondo parametro è maggiore di 64 su x64 (32 su x86), tale numero viene acquisito modulo 64 (32 su x86) per determinare il numero di bit da spostare. Il `ll` prefisso indica che si tratta di un'operazione sul `long long`, in un altro nome per `__int64`, il tipo integrale con segno a 64 bit.

## <a name="example"></a>Esempio

```
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

```
ffffffffffffff00
- 100
fffffffffffffff0
- 10
```

**Nota** se `_ull_rshift` è stata usata, il byte più significativo del valore spostato a destra sarebbe stato uguale a zero, in modo che il risultato desiderato non sarebbe stato ottenuto nel caso di un valore negativo.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__ll_lshift](../intrinsics/ll-lshift.md)<br/>
[__ull_rshift](../intrinsics/ull-rshift.md)