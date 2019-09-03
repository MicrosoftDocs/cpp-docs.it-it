---
title: __movsd
ms.date: 09/02/2019
f1_keywords:
- __movsd
helpviewer_keywords:
- rep movsd instruction
- __movsd intrinsic
- movsd instruction
ms.assetid: eb5cccf3-aa76-47f0-b9fc-eeca38fd943f
ms.openlocfilehash: c43f6bdb731abc281d60fe4bc6ecaec1331b9945
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221765"
---
# <a name="__movsd"></a>__movsd

**Sezione specifica Microsoft**

Genera un'istruzione Move String`rep movsd`().

## <a name="syntax"></a>Sintassi

```C
void __movsd(
   unsigned long* Destination,
   unsigned long* Source,
   size_t Count
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Destinazione dell'operazione.

*Source*\
in Origine dell'operazione.

*Conteggio*\
in Numero di parole doppie da copiare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__movsd`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Il risultato è che il primo *conteggio* parole doppie a cui punta l' *origine* viene copiato nella stringa di *destinazione* .

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// movsd.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__movsd)

int main()
{
    unsigned long a1[10];
    unsigned long a2[10] = {950, 850, 750, 650, 550, 450, 350,
                            250, 150, 50};
    __movsd(a1, a2, 10);

    for (int i = 0; i < 10; i++)
        printf_s("%d ", a1[i]);
    printf_s("\n");
}
```

```Output
950 850 750 650 550 450 350 250 150 50
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
