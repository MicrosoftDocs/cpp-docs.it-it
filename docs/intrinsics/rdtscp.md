---
title: __rdtscp
ms.date: 09/02/2019
f1_keywords:
- __rdtscp
helpviewer_keywords:
- rdtscp intrinsic
- __rdtscp intrinsic
- rdtscp instruction
ms.assetid: f17d9a9c-88bb-44e0-b69d-d516bc1c93ee
ms.openlocfilehash: 4dcabd6ed0f7fb3f422927815cbdc91f2b4b9d43
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221316"
---
# <a name="__rdtscp"></a>__rdtscp

**Sezione specifica Microsoft**

Genera l' `rdtscp` istruzione, scrive `TSC_AUX[31:0`] in memoria e restituisce il contatore del timestamp a 64 bit (`TSC)` risultato.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __rdtscp(
   unsigned int * AUX
);
```

### <a name="parameters"></a>Parametri

*AUX*\
out Puntatore a una posizione che conterrà il contenuto del registro `TSC_AUX[31:0]`specifico del computer.

## <a name="return-value"></a>Valore restituito

Numero di cicli di Unsigned Integer a 64 bit.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__rdtscp`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La `__rdtscp` funzione intrinseca `rdtscp` genera l'istruzione. Per determinare il supporto hardware per questa istruzione, chiamare `__cpuid` l'oggetto `InfoType=0x80000001` intrinseco con e controllare `CPUInfo[3] (EDX)`il bit 27 di. Questo bit è 1 se l'istruzione è supportata; in caso contrario, 0.  Se si esegue codice che usa la funzione intrinseca su hardware che non `rdtscp` supporta l'istruzione, i risultati sono imprevedibili.

Questa istruzione attende fino a quando non vengono eseguite tutte le istruzioni precedenti e tutti i caricamenti precedenti sono visibili a livello globale. Tuttavia, non è un'istruzione di serializzazione. Per ulteriori informazioni, vedere i manuali Intel e AMD.

Il significato del valore in `TSC_AUX[31:0]` dipende dal sistema operativo.

## <a name="example"></a>Esempio

```cpp
#include <intrin.h>
#include <stdio.h>
int main()
{
    unsigned __int64 i;
    unsigned int ui;
    i = __rdtscp(&ui);
    printf_s("%I64d ticks\n", i);
    printf_s("TSC_AUX was %x\n", ui);
}
```

```Output
3363423610155519 ticks
TSC_AUX was 0
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__rdtsc](../intrinsics/rdtsc.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
