---
description: 'Altre informazioni su: _InterlockedAddLargeStatistic'
title: _InterlockedAddLargeStatistic
ms.date: 09/02/2019
f1_keywords:
- _InterlockedAddLargeStatistic
- _InterlockedAddLargeStatistic_cpp
helpviewer_keywords:
- _InterlockedAddLargeStatistic intrinsic
- InterlockedAddLargeStatistic intrinsic
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
ms.openlocfilehash: 52ca32d0f9b08d638a66923f8f0204eb515b447e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336879"
---
# <a name="_interlockedaddlargestatistic"></a>_InterlockedAddLargeStatistic

**Specifico di Microsoft**

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

|Intrinsic|Architettura|
|---------------|------------------|
|`_InterlockedAddLargeStatistic`|x86|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione `_InterlockedAddLargeStatistic` intrinseca non è atomica, perché viene implementata come due istruzioni bloccate separate. Una lettura atomica a 64 bit che si verifica in un altro thread durante l'esecuzione dell'intrinseco potrebbe comportare la lettura di un valore incoerente.

`_InterlockedAddLargeStatistic` si comporta come una barriera di lettura/scrittura. Per ulteriori informazioni, vedere [_ReadWriteBarrier](../intrinsics/readwritebarrier.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
