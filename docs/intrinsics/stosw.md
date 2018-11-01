---
title: __stosw
ms.date: 11/04/2016
f1_keywords:
- __stosw
helpviewer_keywords:
- stosw instruction
- __stosw intrinsic
- rep stosw instruction
ms.assetid: 7620fd1d-dba5-40e3-8e07-01aa68895133
ms.openlocfilehash: b635bb17949c14c8c18da256475b4fc03a161248
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50587928"
---
# <a name="stosw"></a>__stosw

**Sezione specifica Microsoft**

Genera un'istruzione di archivio stringa (`rep stosw`).

## <a name="syntax"></a>Sintassi

```
void __stosw( 
   unsigned short* Dest, 
   unsigned short Data, 
   size_t Count 
);
```

#### <a name="parameters"></a>Parametri

*dest*<br/>
[out] La destinazione dell'operazione.

*Dati*<br/>
[in] I dati da archiviare.

*Conteggio*<br/>
[in] La lunghezza del blocco di parole da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__stosw`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il risultato è che la parola `Data` viene scritto in un blocco di `Count` parole nel `Dest` stringa.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```
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