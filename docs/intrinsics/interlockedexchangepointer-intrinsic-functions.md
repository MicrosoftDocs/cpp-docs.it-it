---
description: 'Altre informazioni su: _InterlockedExchangePointer funzioni intrinseche'
title: Funzioni intrinseche _InterlockedExchangePointer
ms.date: 09/02/2019
f1_keywords:
- _InterlockedExchangePointer_cpp
- _InterlockedExchangePointer_rel
- _InterlockedExchangePointer_nf
- _InterlockedExchangePointer_HLERelease
- _InterlockedExchangePointer_acq
- _InterlockedExchangePointer
- _InterlockedExchangePointer_acq_cpp
- _InterlockedExchangePointer_HLEAcquire
helpviewer_keywords:
- _InterlockedExchangePointer_rel intrinsic
- _InterlockedExchangePointer_HLERelease intrinsic
- _InterlockedExchangePointer intrinsic
- _InterlockedExchangePointer_nf intrinsic
- _InterlockedExchangePointer_acq intrinsic
- _InterlockedExchangePointer_HLEAcquire intrinsic
- InterlockedExchangePointer_acq intrinsic
- InterlockedExchangePointer intrinsic
ms.assetid: 0eaca0b0-d79e-406b-892d-b3b462c50bbb
ms.openlocfilehash: 0bb6080b9bca38c67b12b28976b49eb84f74e6c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167994"
---
# <a name="_interlockedexchangepointer-intrinsic-functions"></a>Funzioni intrinseche _InterlockedExchangePointer

**Specifico di Microsoft**

Esegue un'operazione di scambio atomico, che copia l'indirizzo passato come secondo argomento nel primo argomento e restituisce l'indirizzo originale del primo.

## <a name="syntax"></a>Sintassi

```C
void * _InterlockedExchangePointer(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_acq(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_rel(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_nf(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_HLEAcquire(
   void * volatile * Target,
   void * Value
);
void * _InterlockedExchangePointer_HLERelease(
   void * volatile * Target,
   void * Value
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
[in, out] Puntatore al puntatore al valore da scambiare. La funzione imposta il valore su *value* e restituisce il relativo valore precedente.

*Valore*\
in Valore da scambiare con il valore a cui punta la *destinazione*.

## <a name="return-value"></a>Valore restituito

La funzione restituisce il valore iniziale a cui punta la *destinazione*.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|Intestazione|
|---------------|------------------|------------|
|`_InterlockedExchangePointer`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedExchangePointer_acq`, `_InterlockedExchangePointer_rel`, `_InterlockedExchangePointer_nf`|ARM, ARM64|\<intrin.h>|
|`_InterlockedExchangePointer_HLEAcquire`, `_InterlockedExchangePointer_HLERelease`|x64|\<immintrin.h>|

Nell'architettura x86 `_InterlockedExchangePointer` è una macro che chiama `_InterlockedExchange`.

## <a name="remarks"></a>Commenti

In un sistema a 64 bit i parametri sono 64 bit e devono essere allineati a limiti di 64 bit. In caso contrario, la funzione avrà esito negativo. In un sistema a 32 bit i parametri sono a 32 bit e devono essere allineati secondo limiti a 32 bit. Per ulteriori informazioni, vedere [align](../cpp/align-cpp.md).

Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. La funzione intrinseca con `_nf` suffisso ("nessun limite") non funge da barriera di memoria.

Sulle piattaforme Intel che supportano le istruzioni HLE (Hardware Lock Elision), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware. Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.

Queste routine sono disponibili solo come funzioni intrinseche.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
