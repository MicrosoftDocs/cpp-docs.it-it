---
title: __movsb
ms.date: 09/02/2019
f1_keywords:
- __movsb
helpviewer_keywords:
- movsb instruction
- rep movsb instruction
- __movsb intrinsic
ms.assetid: ba5469f6-f797-4cd2-bee8-74c7666c26d4
ms.openlocfilehash: ca06fc9114f6e824a690cc4e612c21d705a485cd
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217271"
---
# <a name="__movsb"></a>__movsb

**Sezione specifica Microsoft**

Genera un'istruzione Move String`rep movsb`().

## <a name="syntax"></a>Sintassi

```C
void __movsb(
   unsigned char* Destination,
   unsigned const char* Source,
   size_t Count
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
out Puntatore alla destinazione della copia.

*Source*\
in Puntatore all'origine della copia.

*Conteggio*\
in Numero di byte da copiare.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__movsb`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Il risultato è che i primi `Count` byte `Source` a cui puntano vengono copiati `Destination` nella stringa.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// movsb.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__movsb)

int main()
{
    unsigned char s1[100];
    unsigned char s2[100] = "A big black dog.";
    __movsb(s1, s2, 100);

    printf_s("%s %s", s1, s2);
}
```

```Output
A big black dog. A big black dog.
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
