---
title: __ll_lshift
ms.date: 09/02/2019
f1_keywords:
- __ll_lshift_cpp
- __ll_lshift
helpviewer_keywords:
- ll_lshift intrinsic
- __ll_lshift intrinsic
ms.assetid: fe98f733-426d-44b3-8f24-5d0d6d44bd94
ms.openlocfilehash: 158ecbf39320d70b51f1f498a0b689ba58fec363
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221815"
---
# <a name="__ll_lshift"></a>__ll_lshift

**Sezione specifica Microsoft**

Sposta il valore fornito a 64 bit a sinistra del numero di bit specificato.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __ll_lshift(
   unsigned __int64 Mask,
   int nBit
);
```

### <a name="parameters"></a>Parametri

*Maschera*\
in Valore intero a 64 bit da spostare a sinistra.

*nBit*\
in Numero di bit da spostare.

## <a name="return-value"></a>Valore restituito

Maschera spostata a sinistra di `nBit` bit.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__ll_lshift`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Se si compila il programma per l'architettura a 64 bit e `nBit` è maggiore di 63, il numero di bit da spostare è `nBit` modulo 64. Se si compila il programma per l'architettura a 32 bit e `nBit` è maggiore di 31, il numero di bit da spostare è `nBit` modulo 32.

Il `ll` valore nel nome indica che si tratta di un'operazione `long long` in`__int64`().

## <a name="example"></a>Esempio

```cpp
// ll_lshift.cpp
// compile with: /EHsc
// processor: x86, x64
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(__ll_lshift)

int main()
{
   unsigned __int64 Mask = 0x100;
   int nBit = 8;
   Mask = __ll_lshift(Mask, nBit);
   cout << hex << Mask << endl;
}
```

## <a name="output"></a>Output

```Output
10000
```

> [!NOTE]
> Nessuna versione non firmata dell'operazione di spostamento a sinistra. Questo perché `__ll_lshift` utilizza già un parametro di input senza segno. A differenza dello spostamento a destra, non esiste alcuna dipendenza del segno per lo spostamento a sinistra, perché il bit meno significativo nel risultato è sempre impostato su zero indipendentemente dal segno del valore spostato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__ll_rshift](../intrinsics/ll-rshift.md)\
[__ull_rshift](../intrinsics/ull-rshift.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
