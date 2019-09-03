---
title: __stosw
ms.date: 09/02/2019
f1_keywords:
- __stosw
helpviewer_keywords:
- stosw instruction
- __stosw intrinsic
- rep stosw instruction
ms.assetid: 7620fd1d-dba5-40e3-8e07-01aa68895133
ms.openlocfilehash: 5fd29bbf1aebba115670fc1bc35e0d8cbe29c7ad
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219923"
---
# <a name="__stosw"></a>__stosw

**Sezione specifica Microsoft**

Genera un'istruzione di stringa di`rep stosw`archiviazione ().

## <a name="syntax"></a>Sintassi

```C
void __stosw(
   unsigned short* Destination,
   unsigned short Data,
   size_t Count
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Destinazione dell'operazione.

*Dati*\
in Dati da archiviare.

*Conteggio*\
in Lunghezza del blocco di parole da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__stosw`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Il risultato è che i *dati* di Word vengono scritti in un blocco di parole contabili nella stringa di *destinazione* .

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```C
// stosw.c
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__stosw)

int main()
{
    unsigned short val = 128;
    unsigned short a[100];
    memset(a, 0, sizeof(a));
    __stosw(a+10, val, 2);
    printf_s("%u %u %u %u", a[9], a[10], a[11], a[12]);
}
```

```Output
0 128 128 0
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
