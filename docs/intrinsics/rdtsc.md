---
title: __rdtsc
ms.date: 11/04/2016
f1_keywords:
- __rdtsc
helpviewer_keywords:
- __rdtsc intrinsic
- rdtsc instruction
- Read Time Stamp Counter instruction
ms.assetid: e31d0e51-c9bb-42ca-bbe9-a81ffe662387
ms.openlocfilehash: 6f30be3340ae1be237bb2f8a008a8cb60c7351f0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396574"
---
# <a name="rdtsc"></a>__rdtsc

**Sezione specifica Microsoft**

Genera il `rdtsc` istruzione, che restituisce il timestamp del processore. Il timestamp del processore registrato il numero di cicli di clock dall'ultimo ripristino.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 __rdtsc();
```

## <a name="return-value"></a>Valore restituito

Un intero senza segno a 64 bit che rappresenta un conteggio dei tick.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__rdtsc`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa routine è disponibile solo come funzione intrinseca.

L'interpretazione del valore del contatore TSC in questa generazione di hardware è diverso da quello nelle versioni precedenti di x64. Manuali dell'hardware per altre informazioni, vedere.

## <a name="example"></a>Esempio

```
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