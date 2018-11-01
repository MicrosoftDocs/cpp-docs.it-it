---
title: __stosd
ms.date: 11/04/2016
f1_keywords:
- __stosd
helpviewer_keywords:
- stosd instruction
- rep stosd instruction
- __stosd intrinsic
ms.assetid: 03104247-1cea-49f6-b6f8-287917bf5680
ms.openlocfilehash: 5dc5e9703f81cd843e34d6df4b05133660c48c54
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50563748"
---
# <a name="stosd"></a>__stosd

**Sezione specifica Microsoft**

Genera un'istruzione di archivio stringa (`rep stosd`).

## <a name="syntax"></a>Sintassi

```
void __stosd( 
   unsigned long* Dest, 
   unsigned long Data, 
   size_t Count 
);
```

#### <a name="parameters"></a>Parametri

*dest*<br/>
[out] La destinazione dell'operazione.

*Dati*<br/>
[in] I dati da archiviare.

*Conteggio*<br/>
[in] La lunghezza del blocco di Double Word da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__stosd`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il risultato è che la parola doppia `Data` viene scritto in un blocco di `Count` Double Word in corrispondenza della posizione di memoria a cui punta `Dest`.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```
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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)