---
title: Funzioni intrinseche _InterlockedExchangePointer
ms.date: 11/04/2016
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
ms.openlocfilehash: 7599d4221d7dbd0e08585b51982e839aa267a011
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50512099"
---
# <a name="interlockedexchangepointer-intrinsic-functions"></a>Funzioni intrinseche _InterlockedExchangePointer

**Sezione specifica Microsoft**

Eseguire un'operazione di scambio atomico, che copia l'indirizzo passato come secondo argomento al primo e restituisce l'indirizzo originale del primo.

## <a name="syntax"></a>Sintassi

```
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

#### <a name="parameters"></a>Parametri

*Destinazione*<br/>
[in, out] Puntatore al puntatore al valore da scambiare. La funzione imposta il valore su `Value` e restituisce il valore precedente.

*Valore*<br/>
[in] Valore da scambiare con il valore a cui punta `Target`.

## <a name="return-value"></a>Valore restituito

La funzione restituisce il valore iniziale a cui punta `Target`.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_InterlockedExchangePointer`|x86, ARM, x64|\<intrin.h>|
|`_InterlockedExchangePointer_acq`, `_InterlockedExchangePointer_rel`, `_InterlockedExchangePointer_nf`|ARM|\<intrin.h>|
|`_InterlockedExchangePointer_HLEAcquire`, `_InterlockedExchangePointer_HLERelease`|x64 con supporto HLE|\<immintrin.h>|

Nell'architettura x86 `_InterlockedExchangePointer` è una macro che chiama `_InterlockedExchange`.

## <a name="remarks"></a>Note

In un sistema a 64 bit i parametri sono a 64 bit e devono essere allineati ai limiti dell'architettura a 64-bit. In caso contrario la funzione non riuscirà. In un sistema a 32 bit i parametri sono a 32 bit e devono essere allineati secondo limiti a 32 bit. Per altre informazioni, vedere [allineare](../cpp/align-cpp.md).

Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. Le funzioni intrinseche con suffisso `_nf` ("nessun limite") non fungono da barriera di memoria.

Sulle piattaforme Intel che supportano le istruzioni HLE (Hardware Lock Elision), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware. Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.

Queste routine sono disponibili solo come funzioni intrinseche.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)