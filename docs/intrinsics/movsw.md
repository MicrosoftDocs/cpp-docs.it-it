---
title: __movsw
ms.date: 11/04/2016
f1_keywords:
- __movsw
helpviewer_keywords:
- movsw instruction
- rep movsw instruction
- __movsw intrinsic
ms.assetid: db402ad5-7f0e-449a-b0b0-eea9928d6435
ms.openlocfilehash: 3d584300b514ec3e79c44a2943b3fb8a79495df4
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038265"
---
# <a name="movsw"></a>__movsw

**Sezione specifica Microsoft**

Genera una stringa di spostare (`rep movsw`) (istruzione).

## <a name="syntax"></a>Sintassi

```
void __movsw(
   unsigned short* Dest,
   unsigned short* Source,
   size_t Count
);
```

#### <a name="parameters"></a>Parametri

*dest*<br/>
[out] La destinazione dell'operazione.

*Origine*<br/>
[in] L'origine dell'operazione.

*Conteggio*<br/>
[in] Il numero di parole da copiare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__movsw`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il risultato è che il primo `Count` parole a cui punta `Source` vengono copiati il `Dest` stringa.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```
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