---
title: __ull_rshift
ms.date: 11/04/2016
f1_keywords:
- __ull_rshift
helpviewer_keywords:
- ull_rshift intrinsic
- __ull_rshift intrinsic
ms.assetid: b7ff5254-3540-4e6e-b57c-a6c4beb7dca2
ms.openlocfilehash: 5d62ec1526aff595c14a53e9eca43a7a3118c8fa
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59034524"
---
# <a name="ullrshift"></a>__ull_rshift

**Sezione specifica Microsoft**

in x64, sposta un valore a 64 bit specificato dal primo parametro a destra di un numero di bit specificato dal secondo parametro.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 __ull_rshift(
   unsigned __int64 mask, 
   int nBit
);
```

#### <a name="parameters"></a>Parametri

*mask*<br/>
[in] Valore intero a 64 bit da spostare a destra.

*nBit*<br/>
[in] Il numero di bit da spostare, modulo 32 su x86 e modulo 64 in x64.

## <a name="return-value"></a>Valore restituito

La maschera spostato `nBit` bits.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__ull_rshift`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Se il secondo parametro è maggiore di 31 su x86 (63 su x64), tale numero viene acquisito modulo 32 (64 su x64) per determinare il numero di bit da spostare. Il `ull` nel nome indica `unsigned long long (unsigned __int64)`.

## <a name="example"></a>Esempio

```
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

## <a name="output"></a>Output

```
1
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__ll_lshift](../intrinsics/ll-lshift.md)<br/>
[__ll_rshift](../intrinsics/ll-rshift.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)