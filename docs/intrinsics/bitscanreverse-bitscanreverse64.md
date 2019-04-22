---
title: _BitScanReverse, _BitScanReverse64
ms.date: 11/04/2016
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
ms.openlocfilehash: 3639aac38f4c7df82cbbdb23ed9038ac86ba2cc0
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59021970"
---
# <a name="bitscanreverse-bitscanreverse64"></a>_BitScanReverse, _BitScanReverse64

**Sezione specifica Microsoft**

Cercare un bit impostato (1) nei dati di maschera dal bit più significativo (MSB) al bit meno significativo (LSB).

## <a name="syntax"></a>Sintassi

```
unsigned char _BitScanReverse(
   unsigned long * Index,
   unsigned long Mask
);
unsigned char _BitScanReverse64(
   unsigned long * Index,
   unsigned __int64 Mask
);
```

#### <a name="parameters"></a>Parametri

*Index*<br/>
[out] Caricato con la posizione del bit del primo bit impostato (1) trovata.

*Maschera*<br/>
[in] Il valore a 32 o 64 bit da cercare.

## <a name="return-value"></a>Valore restituito

Diverso da zero se `Index` è stato impostato oppure 0 se non vengono trovati bit impostati.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_BitScanReverse`|x86, ARM, x64|\<intrin.h>|
|`_BitScanReverse64`|ARM, x64||

## <a name="example"></a>Esempio

```
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

## <a name="input"></a>Input

```
12
```

## <a name="sample-output"></a>Esempio di output

```
Enter a positive integer as the mask:
Mask: 12 Index: 3
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)