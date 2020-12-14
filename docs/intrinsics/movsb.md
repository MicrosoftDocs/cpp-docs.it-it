---
description: 'Altre informazioni su: __movsb'
title: __movsb
ms.date: 09/02/2019
f1_keywords:
- __movsb
helpviewer_keywords:
- movsb instruction
- rep movsb instruction
- __movsb intrinsic
ms.assetid: ba5469f6-f797-4cd2-bee8-74c7666c26d4
ms.openlocfilehash: 6e4a9ba7482f7f614b80bd0596111874f0087c86
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222450"
---
# <a name="__movsb"></a>__movsb

**Specifico di Microsoft**

Genera un'istruzione Move String ( `rep movsb` ).

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

*Origine*\
in Puntatore all'origine della copia.

*Conteggio*\
in Numero di byte da copiare.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__movsb`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Il risultato è che i primi `Count` byte a cui puntano `Source` vengono copiati nella `Destination` stringa.

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
