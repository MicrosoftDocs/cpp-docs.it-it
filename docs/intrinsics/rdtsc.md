---
title: __rdtsc
ms.date: 09/02/2019
f1_keywords:
- __rdtsc
helpviewer_keywords:
- __rdtsc intrinsic
- rdtsc instruction
- Read Time Stamp Counter instruction
ms.assetid: e31d0e51-c9bb-42ca-bbe9-a81ffe662387
ms.openlocfilehash: 837b68ca6ac63587cd43a7e8828777221c677e3c
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217141"
---
# <a name="__rdtsc"></a>__rdtsc

**Sezione specifica Microsoft**

Genera l' `rdtsc` istruzione, che restituisce l'indicatore di tempo del processore. Il timestamp del processore registra il numero di cicli di clock dall'ultima reimpostazione.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __rdtsc();
```

## <a name="return-value"></a>Valore restituito

Unsigned Integer a 64 bit che rappresenta un conteggio.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__rdtsc`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

L'interpretazione del valore TSC in generazioni successive di hardware è diversa da quella delle versioni precedenti di x64. Per ulteriori informazioni, vedere la pagina relativa ai manuali hardware.

## <a name="example"></a>Esempio

```cpp
// rdtsc.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__rdtsc)

int main()
{
    unsigned __int64 i;
    i = __rdtsc();
    printf_s("%I64d ticks\n", i);
}
```

```Output
3363423610155519 ticks
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
