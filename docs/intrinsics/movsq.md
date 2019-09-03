---
title: __movsq
ms.date: 09/02/2019
f1_keywords:
- __movsq
helpviewer_keywords:
- __movsq intrinsic
- rep movsq instruction
- movsq instruction
ms.assetid: be116a6e-2176-4ca4-93b1-9ccf3e7e7835
ms.openlocfilehash: 66de1971c48f6697fd06579fac635cce31545e92
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217266"
---
# <a name="__movsq"></a>__movsq

**Sezione specifica Microsoft**

Genera un'istruzione ripetuta per`rep movsq`la stringa di spostamento ().

## <a name="syntax"></a>Sintassi

```C
void __movsq(
   unsigned char* Destination,
   unsigned char* Source,
   size_t Count
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Destinazione dell'operazione.

*Source*\
in Origine dell'operazione.

*Conteggio*\
in Numero di parole quadruple da copiare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__movsq`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Il risultato è che il primo *conteggio* parole quadruple a cui punta l' *origine* viene copiato nella stringa di *destinazione* .

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// movsq.cpp
// processor: x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__movsq)

int main()
{
    unsigned __int64 a1[10];
    unsigned __int64 a2[10] = {950, 850, 750, 650, 550, 450, 350, 250,
                               150, 50};
    __movsq(a1, a2, 10);

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
