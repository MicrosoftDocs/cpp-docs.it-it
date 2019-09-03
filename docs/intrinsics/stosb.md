---
title: __stosb
ms.date: 09/02/2019
f1_keywords:
- __stosb
helpviewer_keywords:
- rep stosb instruction
- __stosb intrinsic
- stosb instruction
ms.assetid: 634589ed-2da3-439b-a381-a214d89bf10c
ms.openlocfilehash: edf74da4c8b5aa97e542d89f55b3ed8411db9bac
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221217"
---
# <a name="__stosb"></a>__stosb

**Sezione specifica Microsoft**

Genera un'istruzione di stringa di`rep stosb`archiviazione ().

## <a name="syntax"></a>Sintassi

```C
void __stosb(
   unsigned char* Destination,
   unsigned char Data,
   size_t Count
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Destinazione dell'operazione.

*Dati*\
in Dati da archiviare.

*Conteggio*\
in Lunghezza del blocco di byte da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__stosb`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Il risultato è che i *dati* di tipo carattere vengono scritti in un blocco di byte di *conteggio* nella stringa di *destinazione* .

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
