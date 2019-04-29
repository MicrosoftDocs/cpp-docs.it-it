---
title: __stosb
ms.date: 11/04/2016
f1_keywords:
- __stosb
helpviewer_keywords:
- rep stosb instruction
- __stosb intrinsic
- stosb instruction
ms.assetid: 634589ed-2da3-439b-a381-a214d89bf10c
ms.openlocfilehash: 679f1a892a6ee5b458a05d1577ecf766bed385dd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390282"
---
# <a name="stosb"></a>__stosb

**Sezione specifica Microsoft**

Genera un'istruzione di archivio stringa (`rep stosb`).

## <a name="syntax"></a>Sintassi

```
void __stosb(
   unsigned char* Dest,
   unsigned char Data,
   size_t Count
);
```

#### <a name="parameters"></a>Parametri

*Dest*<br/>
[out] La destinazione dell'operazione.

*Dati*<br/>
[in] I dati da archiviare.

*Conteggio*<br/>
[in] La lunghezza del blocco di byte da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__stosb`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il risultato è che il carattere `Data` viene scritto in un blocco di `Count` byte nel `Dest` stringa.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```C
// stosb.c
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__stosb)

int main()
{
    unsigned char c = 0x40; /* '@' character */
    unsigned char s[] = "*********************************";

    printf_s("%s\n", s);
    __stosb((unsigned char*)s+1, c, 6);
    printf_s("%s\n", s);

}
```

```Output
*********************************
*@@@@@@**************************
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)