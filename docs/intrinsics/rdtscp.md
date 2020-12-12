---
description: 'Altre informazioni su: __rdtscp'
title: __rdtscp
ms.date: 09/02/2019
f1_keywords:
- __rdtscp
helpviewer_keywords:
- rdtscp intrinsic
- __rdtscp intrinsic
- rdtscp instruction
ms.assetid: f17d9a9c-88bb-44e0-b69d-d516bc1c93ee
ms.openlocfilehash: 511d0f1001c218fd838d4bb315fe8c95f10eb3bf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257491"
---
# <a name="__rdtscp"></a>__rdtscp

**Specifico di Microsoft**

Genera l' `rdtscp` istruzione, scrive `TSC_AUX[31:0` ] in memoria e restituisce il contatore del timestamp a 64 bit ( `TSC)` risultato.

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 __rdtscp(
   unsigned int * AUX
);
```

### <a name="parameters"></a>Parametri

*AUX*\
out Puntatore a una posizione che conterrà il contenuto del registro specifico del computer `TSC_AUX[31:0]` .

## <a name="return-value"></a>Valore restituito

Numero di cicli di Unsigned Integer a 64 bit.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__rdtscp`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione `__rdtscp` intrinseca genera l' `rdtscp` istruzione. Per determinare il supporto hardware per questa istruzione, chiamare l'oggetto `__cpuid` intrinseco con `InfoType=0x80000001` e controllare il bit 27 di `CPUInfo[3] (EDX)` . Questo bit è 1 se l'istruzione è supportata; in caso contrario, 0.  Se si esegue codice che usa la funzione intrinseca su hardware che non supporta l' `rdtscp` istruzione, i risultati sono imprevedibili.

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__rdtsc](../intrinsics/rdtsc.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
