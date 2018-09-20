---
title: _InterlockedAddLargeStatistic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _InterlockedAddLargeStatistic
- _InterlockedAddLargeStatistic_cpp
dev_langs:
- C++
helpviewer_keywords:
- _InterlockedAddLargeStatistic intrinsic
- InterlockedAddLargeStatistic intrinsic
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6698a58ec2a5363700f7751565f1dde8e25c2bcf
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415980"
---
# <a name="interlockedaddlargestatistic"></a>_InterlockedAddLargeStatistic

**Sezione specifica Microsoft**

Consente di eseguire un'aggiunta interlocked in cui il primo operando è un valore a 64 bit.

## <a name="syntax"></a>Sintassi

```
long _InterlockedAddLargeStatistic(
   __int64 volatile * Addend,
   long Value
);
```

#### <a name="parameters"></a>Parametri

*Addendo*<br/>
[in, out] Puntatore al primo operando per l'operazione di aggiunta. Il valore a cui viene sostituito dal risultato dell'addizione.

*Valore*<br/>
[in] Il secondo operando; valore da aggiungere al primo operando.

## <a name="return-value"></a>Valore restituito

Il valore del secondo operando.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_InterlockedAddLargeStatistic`|x86|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa funzione intrinseca non è atomica perché viene implementata come due distinti istruzioni bloccate. Una lettura 64-bit atomica che si verifica in un altro thread durante l'esecuzione di questa funzione intrinseca può comportare un valore non coerente in lettura.

Questa funzione si comporta come una barriera di lettura / scrittura. Per altre informazioni, vedere [_ReadWriteBarrier](../intrinsics/readwritebarrier.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)