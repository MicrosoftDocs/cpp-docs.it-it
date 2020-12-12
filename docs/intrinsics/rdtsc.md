---
description: 'Altre informazioni su: __rdtsc'
title: __rdtsc
ms.date: 09/02/2019
f1_keywords:
- __rdtsc
helpviewer_keywords:
- __rdtsc intrinsic
- rdtsc instruction
- Read Time Stamp Counter instruction
ms.assetid: e31d0e51-c9bb-42ca-bbe9-a81ffe662387
ms.openlocfilehash: 930c8fbd0ae762c8674a85e379899bc4fe4d3394
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257511"
---
# <a name="__rdtsc"></a>__rdtsc

**Specifico di Microsoft**

Genera l' `rdtsc` istruzione, che restituisce l'indicatore di tempo del processore. Il timestamp del processore registra il numero di cicli di clock dall'ultima reimpostazione.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __rdtsc();
```

## <a name="return-value"></a>Valore restituito

Unsigned Integer a 64 bit che rappresenta un conteggio.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__rdtsc`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
