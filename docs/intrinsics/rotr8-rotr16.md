---
title: _rotr8, _rotr16
ms.date: 11/04/2016
f1_keywords:
- _rotr16
- _rotr8
helpviewer_keywords:
- _rotr8 intrinsic
- _rotr16 intrinsic
ms.assetid: dfbd2c82-82b4-427a-ad52-51609027ebff
ms.openlocfilehash: 218fb14c118cb9208cdfc29176897543f680b593
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51329722"
---
# <a name="rotr8-rotr16"></a>_rotr8, _rotr16

**Sezione specifica Microsoft**

Ruotare i valori di input a destra del bit meno significativo di un numero specificato di posizioni di bit.

## <a name="syntax"></a>Sintassi

```
unsigned char _rotr8(
   unsigned char value,
   unsigned char shift
);
unsigned short _rotr16(
   unsigned short value,
   unsigned char shift
);
```

#### <a name="parameters"></a>Parametri

*valore*<br/>
[in] Valore da ruotare.

*shift*<br/>
[in] Il numero di bit da ruotare.

## <a name="return-value"></a>Valore restituito

Il valore ruotato.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_rotr8`|x86, ARM, x64|
|`_rotr16`|x86, ARM, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

A differenza di un'operazione di spostamento a destra, quando si esegue una rotazione a destra, i bit di ordine inferiore che non rientrano nell'estremità inferiore vengono spostati nelle posizioni di bit di ordine superiore.

## <a name="example"></a>Esempio

```
// rotr.cpp
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_rotr8, _rotr16)

int main()
{
    unsigned char c = 'A', c1, c2;

    for (int i = 0; i < 8; i++)
    {
       printf_s("Rotating 0x%x right by %d bits gives 0x%x\n", c,
                i, _rotr8(c, i));
    }

    unsigned short s = 0x12;
    int nBit = 10;

    printf_s("Rotating unsigned short 0x%x right by %d bits "
             "gives 0x%x\n",
            s, nBit, _rotr16(s, nBit));
}
```

```Output
Rotating 0x41 right by 0 bits gives 0x41
Rotating 0x41 right by 1 bits gives 0xa0
Rotating 0x41 right by 2 bits gives 0x50
Rotating 0x41 right by 3 bits gives 0x28
Rotating 0x41 right by 4 bits gives 0x14
Rotating 0x41 right by 5 bits gives 0xa
Rotating 0x41 right by 6 bits gives 0x5
Rotating 0x41 right by 7 bits gives 0x82
Rotating unsigned short 0x12 right by 10 bits gives 0x480
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_rotl8, _rotl16](../intrinsics/rotl8-rotl16.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)