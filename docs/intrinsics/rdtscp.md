---
title: __rdtscp
ms.date: 11/04/2016
f1_keywords:
- __rdtscp
helpviewer_keywords:
- rdtscp intrinsic
- __rdtscp intrinsic
- rdtscp instruction
ms.assetid: f17d9a9c-88bb-44e0-b69d-d516bc1c93ee
ms.openlocfilehash: 813f13e20e74890cfcb52ae25234aa348e1d522d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50496295"
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

*AUX*<br/>
[out] Puntatore a un percorso che conterrà il contenuto del registro specifiche del computer `TSC_AUX[31:0]`.

## <a name="return-value"></a>Valore restituito

Conteggio dei tick un intero senza segno a 64 bit.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__rdtscp`|Famiglia TNP AMD 0Fh o versioni successive|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa funzione intrinseca genera il `rdtscp` (istruzione). Per determinare il supporto hardware per questa istruzione, chiama il `__cpuid` intrinseco con `InfoType=0x80000001` e bit di controllo 27 di `CPUInfo[3] (EDX)`. Questo bit è 1 se l'istruzione è supportata e 0 in caso contrario.  Se si esegue codice che usa questa funzione intrinseca in hardware che non supporta il `rdtscp` (istruzione), i risultati sono imprevedibili.

> [!CAUTION]
>  A differenza `rdtsc`, `rdtscp` è un'istruzione di serializzazione; tuttavia, il compilatore può spostare il codice il problema intrinseco.

L'interpretazione del valore del contatore TSC in questa generazione di hardware è diverso da quello nelle versioni precedenti di x64.  Manuali dell'hardware per altre informazioni, vedere.

Il significato del valore `TSC_AUX[31:0]` varia a seconda del sistema operativo.

## <a name="example"></a>Esempio

```
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

Copyright 2007 dispositivi Micro avanzate, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.

## <a name="see-also"></a>Vedere anche

[__rdtsc](../intrinsics/rdtsc.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)