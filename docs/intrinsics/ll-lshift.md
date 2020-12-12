---
description: 'Altre informazioni su: __ll_lshift'
title: __ll_lshift
ms.date: 09/02/2019
f1_keywords:
- __ll_lshift_cpp
- __ll_lshift
helpviewer_keywords:
- ll_lshift intrinsic
- __ll_lshift intrinsic
ms.assetid: fe98f733-426d-44b3-8f24-5d0d6d44bd94
ms.openlocfilehash: 324286a0f7ca28eaa7259f05f629f87e763aac0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167760"
---
# <a name="__ll_lshift"></a>__ll_lshift

**Specifico di Microsoft**

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

|Intrinsic|Architettura|
|---------------|------------------|
|`__ll_lshift`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Se si compila il programma per l'architettura a 64 bit e `nBit` è maggiore di 63, il numero di bit da spostare è `nBit` modulo 64. Se si compila il programma per l'architettura a 32 bit e `nBit` è maggiore di 31, il numero di bit da spostare è `nBit` modulo 32.

Il valore `ll` nel nome indica che si tratta di un'operazione in **`long long`** ( **`__int64`** ).

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__ll_rshift](../intrinsics/ll-rshift.md)\
[__ull_rshift](../intrinsics/ull-rshift.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
