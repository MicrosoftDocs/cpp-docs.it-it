---
title: _InterlockedCompareExchange128
ms.date: 11/04/2016
f1_keywords:
- _InterlockedCompareExchange128_cpp
- _InterlockedCompareExchange128
helpviewer_keywords:
- cmpxchg16b instruction
- _InterlockedCompareExchange128 intrinsic
ms.assetid: f05918fc-716a-4f6d-b746-1456d6b96c56
ms.openlocfilehash: 9330b1405ca247364cd04d3ab399f66e4f332273
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62348770"
---
# <a name="interlockedcompareexchange128"></a>_InterlockedCompareExchange128

**Sezione specifica Microsoft**

Esegue un confronto con interlock 128 bit ed exchange.

## <a name="syntax"></a>Sintassi

```
unsigned char _InterlockedCompareExchange128(
   __int64 volatile * Destination,
   __int64 ExchangeHigh,
   __int64 ExchangeLow,
   __int64 * ComparandResult
);
```

#### <a name="parameters"></a>Parametri

*Destinazione*<br/>
[in, out] Puntatore alla destinazione, ovvero una matrice di due interi a 64 bit è considerato come un campo di 128 bit. I dati di destinazione devono essere 16 byte allineate in modo da evitare un errore di protezione generale.

*ExchangeHigh*<br/>
[in] Un valore integer a 64 bit che possono essere scambiati con la parte alta della destinazione.

*ExchangeLow*<br/>
[in] Un valore integer a 64 bit che possono essere scambiati con la parte inferiore della matrice di destinazione.

*ComparandResult*<br/>
[in, out] Puntatore a una matrice di due interi a 64 bit (considerata come un campo di 128 bit) da confrontare con la destinazione.  Nell'output viene sovrascritto con il valore originale dell'oggetto di destinazione.

## <a name="return-value"></a>Valore restituito

1 se il parametro comparand 128 bit uguale al valore originale dell'oggetto di destinazione. `ExchangeHigh` e `ExchangeLow` sovrascrivere la destinazione di 128 bit.

0 se il parametro comparand non uguale al valore originale dell'oggetto di destinazione. Il valore dell'oggetto di destinazione viene modificato e il valore del parametro comparand viene sovrascritto con il valore dell'oggetto di destinazione.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_InterlockedCompareExchange128`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa funzione intrinseca genera il `cmpxchg16b` istruzione (con il `lock` prefisso) per eseguire un confronto bloccato a 128 bit ed exchange. Nelle versioni precedenti di hardware AMD a 64 bit non supportano questa istruzione. Per verificare il supporto hardware per il `cmpxchg16b` (istruzione), chiamare il `__cpuid` intrinseco con `InfoType=0x00000001 (standard function 1)`. Bit 13 del `CPUInfo[2]` (ECX) è 1 se l'istruzione è supportata.

> [!NOTE]
>  Il valore di `ComparandResult` viene sempre sovrascritto. Dopo il `lock` (istruzione), questa funzione intrinseca copia immediatamente il valore iniziale della `Destination` a `ComparandResult`. Per questo motivo `ComparandResult` e `Destination` deve fare riferimento alle posizioni di memoria separato per evitare un comportamento imprevisto.

Sebbene sia possibile usare `_InterlockedCompareExchange128` per la sincronizzazione di thread di basso livello, è necessario sincronizzare più di 128 bit se è possibile usare funzioni di sincronizzazione più piccole (ad esempio l'altro `_InterlockedCompareExchange` funzioni intrinseche) invece. Usare `_InterlockedCompareExchange128` se si vuole accedere atomiche su un valore di 128 bit in memoria.

Se si esegue codice che usa questa funzione intrinseca in hardware che non supporta il `cmpxchg16b` (istruzione), i risultati sono imprevedibili.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

Questo esempio Usa `_InterlockedCompareExchange128` per sostituire la Word più significativa di una matrice di due interi a 64 bit con la somma dei relativi parole minimo e massimo e incrementare la Word meno significativa. L'accesso all'array di BigInt.Int è atomico, ma in questo esempio Usa un singolo thread e ignora il blocco per motivi di semplicità.

```
// cmpxchg16b.c
// processor: x64
// compile with: /EHsc /O2
#include <stdio.h>
#include <intrin.h>

typedef struct _LARGE_INTEGER_128 {
    __int64 Int[2];
} LARGE_INTEGER_128, *PLARGE_INTEGER_128;

volatile LARGE_INTEGER_128 BigInt;

// This AtomicOp() function atomically performs:
//   BigInt.Int[1] += BigInt.Int[0]
//   BigInt.Int[0] += 1
void AtomicOp ()
{
    LARGE_INTEGER_128 Comparand;
    Comparand.Int[0] = BigInt.Int[0];
    Comparand.Int[1] = BigInt.Int[1];
    do {
        ; // nothing
    } while (_InterlockedCompareExchange128(BigInt.Int,
                                            Comparand.Int[0] + Comparand.Int[1],
                                            Comparand.Int[0] + 1,
                                            Comparand.Int) == 0);
}

// In a real application, several threads contend for the value
// of BigInt.
// Here we focus on the compare and exchange for simplicity.
int main(void)
{
   BigInt.Int[1] = 23;
   BigInt.Int[0] = 11;
   AtomicOp();
   printf("BigInt.Int[1] = %d, BigInt.Int[0] = %d\n",
      BigInt.Int[1],BigInt.Int[0]);
}
```

```Output
BigInt.Int[1] = 34, BigInt.Int[0] = 12
```

**Fine sezione specifica Microsoft**

Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Funzioni intrinseche _InterlockedCompareExchange](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)<br/>
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)