---
description: 'Altre informazioni su: __stosd'
title: __stosd
ms.date: 09/02/2019
f1_keywords:
- __stosd
helpviewer_keywords:
- stosd instruction
- rep stosd instruction
- __stosd intrinsic
ms.assetid: 03104247-1cea-49f6-b6f8-287917bf5680
ms.openlocfilehash: 56a29a27790f7f45a9fb3f0ace348759c0b1ff3c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143715"
---
# <a name="__stosd"></a>__stosd

**Specifico di Microsoft**

Genera un'istruzione di stringa di archiviazione ( `rep stosd` ).

## <a name="syntax"></a>Sintassi

```C
void __stosd(
   unsigned long* Destination,
   unsigned long Data,
   size_t Count
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Destinazione dell'operazione.

*Dati*\
in Dati da archiviare.

*Conteggio*\
in Lunghezza del blocco di parole doppie da scrivere.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__stosd`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Il risultato è che i *dati* parola doppia vengono scritti in un blocco di *count* parole doppie in corrispondenza della posizione di memoria indicata dalla *destinazione*.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```C
// stosd.c
// processor: x86, x64

#include <stdio.h>
#include <memory.h>
#include <intrin.h>

#pragma intrinsic(__stosd)

int main()
{
    unsigned long val = 99999;
    unsigned long a[10];

    memset(a, 0, sizeof(a));
    __stosd(a+1, val, 2);

printf_s( "%u %u %u %u",
              a[0], a[1], a[2], a[3]);
}
```

```Output
0 99999 99999 0
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
