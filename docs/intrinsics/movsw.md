---
title: __movsw
ms.date: 09/02/2019
f1_keywords:
- __movsw
helpviewer_keywords:
- movsw instruction
- rep movsw instruction
- __movsw intrinsic
ms.assetid: db402ad5-7f0e-449a-b0b0-eea9928d6435
ms.openlocfilehash: 67eef7fe0a5b9803650f345740a8c40262cd2014
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221717"
---
# <a name="__movsw"></a>__movsw

**Sezione specifica Microsoft**

Genera un'istruzione Move String`rep movsw`().

## <a name="syntax"></a>Sintassi

```C
void __movsw(
   unsigned short* Destination,
   unsigned short* Source,
   size_t Count
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Destinazione dell'operazione.

*Source*\
in Origine dell'operazione.

*Conteggio*\
in Numero di parole da copiare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__movsw`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Il risultato è che le prime parole di *conteggio* a cui punta l' *origine* vengono copiate nella stringa di *destinazione* .

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// movsw.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__movsw)

int main()
{
    unsigned short s1[10];
    unsigned short s2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    __movsw(s1, s2, 10);

    for (int i = 0; i < 10; i++)
        printf_s("%d ", s1[i]);
    printf_s("\n");
}
```

```Output
0 1 2 3 4 5 6 7 8 9
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
