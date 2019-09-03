---
title: __stosq
ms.date: 09/02/2019
f1_keywords:
- __stosq
helpviewer_keywords:
- rep stosq instruction
- stosq instruction
- __stosq intrinsic
ms.assetid: 3ea28297-4369-4c2d-bf0c-91fa539ce209
ms.openlocfilehash: 8b347d595da4cdbf1fefb6244940e262981671e9
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219960"
---
# <a name="__stosq"></a>__stosq

**Sezione specifica Microsoft**

Genera un'istruzione di stringa di`rep stosq`archiviazione ().

## <a name="syntax"></a>Sintassi

```C
void __stosb(
   unsigned __int64* Destination,
   unsigned __int64 Data,
   size_t Count
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Destinazione dell'operazione.

*Dati*\
in Dati da archiviare.

*Conteggio*\
in Lunghezza del blocco di parole quadruple da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__stosq`|AMD64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Il risultato è che i *dati* quadrupla vengono scritti in un blocco di *count* parole quadruple nella stringa di *destinazione* .

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```C
// stosq.c
// processor: x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__stosq)

int main()
{
   unsigned __int64 val = 0xFFFFFFFFFFFFI64;
   unsigned __int64 a[10];
   memset(a, 0, sizeof(a));
   __stosq(a+1, val, 2);
   printf("%I64x %I64x %I64x %I64x", a[0], a[1], a[2], a[3]);
}
```

```Output
0 ffffffffffff ffffffffffff 0
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
