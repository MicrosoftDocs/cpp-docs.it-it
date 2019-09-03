---
title: _InterlockedAddLargeStatistic
ms.date: 09/02/2019
f1_keywords:
- _InterlockedAddLargeStatistic
- _InterlockedAddLargeStatistic_cpp
helpviewer_keywords:
- _InterlockedAddLargeStatistic intrinsic
- InterlockedAddLargeStatistic intrinsic
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
ms.openlocfilehash: de8c5b7dfd2462dddcb98324ebacc44c8148d85e
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222084"
---
# <a name="_interlockedaddlargestatistic"></a>_InterlockedAddLargeStatistic

**Sezione specifica Microsoft**

Esegue un'aggiunta Interlocked in cui il primo operando è un valore a 64 bit.

## <a name="syntax"></a>Sintassi

```C
long _InterlockedAddLargeStatistic(
   __int64 volatile * Addend,
   long Value
);
```

### <a name="parameters"></a>Parametri

*ADDEND*\
[in, out] Puntatore al primo operando dell'operazione di aggiunta. Il valore a cui punta viene sostituito dal risultato dell'addizione.

*Valore*\
in Secondo operando; valore da aggiungere al primo operando.

## <a name="return-value"></a>Valore restituito

Valore del secondo operando.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_InterlockedAddLargeStatistic`|x86|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La `_InterlockedAddLargeStatistic` funzione intrinseca non è atomica, perché viene implementata come due istruzioni bloccate separate. Una lettura atomica a 64 bit che si verifica in un altro thread durante l'esecuzione dell'intrinseco potrebbe comportare la lettura di un valore incoerente.

`_InterlockedAddLargeStatistic`si comporta come una barriera di lettura/scrittura. Per ulteriori informazioni, vedere [_ReadWriteBarrier](../intrinsics/readwritebarrier.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
