---
description: 'Altre informazioni su: _BitScanReverse, _BitScanReverse64'
title: _BitScanReverse, _BitScanReverse64
ms.date: 09/02/2019
f1_keywords:
- _BitScanReverse64
- _BitScanReverse_cpp
- _BitScanReverse
- _BitScanReverse64_cpp
helpviewer_keywords:
- bsr instruction
- _BitScanReverse intrinsic
- BitScanReverse intrinsic
ms.assetid: 2520a207-af8b-4aad-9ae7-831abeadf376
ms.openlocfilehash: 1a535dcc95f9fbf791de3ecd2c2d54eddcc0399c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337213"
---
# <a name="_bitscanreverse-_bitscanreverse64"></a>_BitScanReverse, _BitScanReverse64

**Specifico di Microsoft**

Cercare un bit impostato (1) nei dati di maschera dal bit più significativo (MSB) al bit meno significativo (LSB).

## <a name="syntax"></a>Sintassi

```C
unsigned char _BitScanReverse(
   unsigned long * Index,
   unsigned long Mask
);
unsigned char _BitScanReverse64(
   unsigned long * Index,
   unsigned __int64 Mask
);
```

### <a name="parameters"></a>Parametri

*Indice*\
out Caricato con la posizione di bit del primo bit impostato (1) trovato.

*Maschera*\
in Valore a 32 bit o 64 bit in cui eseguire la ricerca.

## <a name="return-value"></a>Valore restituito

Diverso da zero se `Index` è stato impostato oppure 0 se non vengono trovati bit impostati.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|Intestazione|
|---------------|------------------|------------|
|`_BitScanReverse`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_BitScanReverse64`|ARM64, x64|\<intrin.h>|

## <a name="example"></a>Esempio

```cpp
// BitScanReverse.cpp
// compile with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(_BitScanReverse)

int main()
{
   unsigned long mask = 0x1000;
   unsigned long index;
   unsigned char isNonzero;

   cout << "Enter a positive integer as the mask: " << flush;
   cin >> mask;
   isNonzero = _BitScanReverse(&index, mask);
   if (isNonzero)
   {
      cout << "Mask: " << mask << " Index: " << index << endl;
   }
   else
   {
      cout << "No set bits found.  Mask is zero." << endl;
   }
}
```

```Input
12
```

```Output
Enter a positive integer as the mask:
Mask: 12 Index: 3
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
