---
title: __rdtscp
ms.date: 07/11/2019
f1_keywords:
- __rdtscp
helpviewer_keywords:
- rdtscp intrinsic
- __rdtscp intrinsic
- rdtscp instruction
ms.assetid: f17d9a9c-88bb-44e0-b69d-d516bc1c93ee
ms.openlocfilehash: b8a31c6d19cd171cbe909c75a27c2389866bd578
ms.sourcegitcommit: 0e3da5cea44437c132b5c2ea522bd229ea000a10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/12/2019
ms.locfileid: "67861103"
---
# <a name="rdtscp"></a>__rdtscp

**Sezione specifica Microsoft**

Genera il `rdtscp` scrive un'istruzione `TSC_AUX[31:0`] in memoria e restituisce i 64 bit Time Stamp Counter (`TSC)` risultato.

## <a name="syntax"></a>Sintassi

```
unsigned __int64 __rdtscp(
   unsigned int * Aux
);
```

#### <a name="parameters"></a>Parametri

*Aux*<br/>
[out] Puntatore a un percorso che conterrà il contenuto del registro specifiche del computer `TSC_AUX[31:0]`.

## <a name="return-value"></a>Valore restituito

Conteggio dei tick un intero senza segno a 64 bit.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__rdtscp`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa funzione intrinseca genera il `rdtscp` (istruzione). Per determinare il supporto hardware per questa istruzione, chiama il `__cpuid` intrinseco con `InfoType=0x80000001` e bit di controllo 27 di `CPUInfo[3] (EDX)`. Questo bit è 1 se l'istruzione è supportata e 0 in caso contrario.  Se si esegue codice che usa questa funzione intrinseca in hardware che non supporta il `rdtscp` (istruzione), i risultati sono imprevedibili.

Questa istruzione attende fino a quando tutte le istruzioni precedenti sono stati eseguiti e tutti i caricamenti precedenti sono visibili a livello globale. Tuttavia, non è un'istruzione di serializzazione. Intel e AMD manuali per altre informazioni, vedere.

Il significato del valore `TSC_AUX[31:0]` varia a seconda del sistema operativo.

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

[__rdtsc](../intrinsics/rdtsc.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)