---
description: 'Altre informazioni su: _BitScanForward, _BitScanForward64'
title: _BitScanForward, _BitScanForward64
ms.date: 09/02/2019
f1_keywords:
- _BitScanForward
- _BitScanForward_cpp
- _BitScanForward64_cpp
- _BitScanForward64
helpviewer_keywords:
- _BitScanForward intrinsic
- bsf instruction
- BitScanForward intrinsic
ms.assetid: 405e60fb-0815-42a7-9b02-6fc035122203
ms.openlocfilehash: 182f22b5350fcad7c3da9a0d6f6df36c0871a3e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337229"
---
# <a name="_bitscanforward-_bitscanforward64"></a>_BitScanForward, _BitScanForward64

**Specifico di Microsoft**

Cercare un bit impostato (1) nei dati di maschera dal bit meno significativo (LSB) al bit più significativo (MSB).

## <a name="syntax"></a>Sintassi

```C
unsigned char _BitScanForward(
   unsigned long * Index,
   unsigned long Mask
);
unsigned char _BitScanForward64(
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

0 se la maschera è zero; diverso da zero in caso contrario.

## <a name="remarks"></a>Commenti

Se viene trovato un bit impostato, viene restituita la posizione di bit del primo bit impostato trovato nel primo parametro. Se non viene trovato alcun bit impostato, viene restituito 0; in caso contrario, viene restituito 1.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_BitScanForward`|x86, ARM, x64, ARM64|
|`_BitScanForward64`|ARM64, x64|

**File di intestazione** \<intrin.h>

## <a name="example"></a>Esempio

```cpp
// BitScanForward.cpp
// compile with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(_BitScanForward)

int main()
{
   unsigned long mask = 0x1000;
   unsigned long index;
   unsigned char isNonzero;

   cout << "Enter a positive integer as the mask: " << flush;
   cin >> mask;
   isNonzero = _BitScanForward(&index, mask);
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
Mask: 12 Index: 2
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
