---
title: Funzioni intrinseche _InterlockedCompareExchangePointer
ms.date: 11/04/2016
f1_keywords:
- _InterlockedCompareExchangePointer_HLERelease
- _InterlockedCompareExchangePointer_rel
- _InterlockedCompareExchangePointer_acq_cpp
- _InterlockedCompareExchangePointer
- _InterlockedCompareExchangePointer_cpp
- _InterlockedCompareExchangePointer_np
- _InterlockedCompareExchangePointer_rel_cpp
- _InterlockedCompareExchangePointer_HLEAcquire
- _InterlockedCompareExchangePointer_acq
- _InterlockedCompareExchangePointer_nf
helpviewer_keywords:
- InterlockedCompareExchangePointer_acq intrinsic
- _InterlockedCompareExchangePointer_rel intrinsic
- _InterlockedCompareExchangePointer_acq intrinsic
- InterlockedCompareExchangePointer_rel intrinsic
- InterlockedCompareExchangePointer intrinsic
- _InterlockedCompareExchangePointer_HLERelease intrinsic
- _InterlockedCompareExchangePointer_HLEAcquire intrinsic
- _InterlockedCompareExchangePointer intrinsic
- _InterlockedCompareExchangePointer_nf intrinsic
- _InterlockedCompareExchangePointer_np intrinsic
ms.assetid: 97fde59d-2bf9-42aa-a0fe-a5b6befdd44b
ms.openlocfilehash: 2db18c73f7765454d29e2dfdbd9408f62c51d32a
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59024816"
---
# <a name="interlockedcompareexchangepointer-intrinsic-functions"></a>Funzioni intrinseche _InterlockedCompareExchangePointer

**Sezione specifica Microsoft**

Esegue un'operazione atomica che archivia l'indirizzo `Exchange` nell'indirizzo `Destination` se gli indirizzi `Comparand` e `Destination` sono uguali.

## <a name="syntax"></a>Sintassi

```
void * _InterlockedCompareExchangePointer (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_acq (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_HLEAcquire (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_HLERelease (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_nf (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
void * _InterlockedCompareExchangePointer_np (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
long _InterlockedCompareExchangePointer_rel (
   void * volatile * Destination,
   void * Exchange,
   void * Comparand
);
```

#### <a name="parameters"></a>Parametri

*Destinazione*<br/>
[in, out] Puntatore a un puntatore al valore di destinazione. Il segno viene ignorato.

*Exchange*<br/>
[in] Puntatore di Exchange. Il segno viene ignorato.

*Parametro comparand*<br/>
[in] Puntatore da confrontare con la destinazione. Il segno viene ignorato.

## <a name="return-value"></a>Valore restituito

Il valore restituito è il valore iniziale della destinazione.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_InterlockedCompareExchangePointer`|x86, ARM, x64|\<intrin.h>|
|`_InterlockedCompareExchangePointer_acq`, `_InterlockedCompareExchangePointer_nf`, `_InterlockedCompareExchangePointer_rel`|ARM|\<iiintrin.h>|
|`_InterlockedCompareExchangePointer_HLEAcquire`, `_InterlockedCompareExchangePointer_HLERelease`|x86, x64|\<immintrin.h>|

## <a name="remarks"></a>Note

`_InterlockedCompareExchangePointer` esegue un confronto atomico dell'indirizzo `Destination` con l'indirizzo `Comparand`. Se l'indirizzo `Destination` è uguale all'indirizzo `Comparand`, l'indirizzo `Exchange` viene archiviato nell'indirizzo specificato da `Destination`. In caso contrario, non viene eseguita alcuna operazione.

`_InterlockedCompareExchangePointer` fornisce il supporto intrinseco del compilatore per il SDK di Windows Win32 [interlockedcompareexchangepointer](https://msdn.microsoft.com/library/ff547863.aspx) (funzione).

Per un esempio d'uso `_InterlockedCompareExchangePointer`, vedere [InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).

Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. Le funzioni intrinseche ARM con suffisso `_nf` ("nessun limite") non fungono da barriera di memoria.

Le funzioni intrinseche con suffisso `_np` ("nessuna prelettura") impediscono l'inserimento di una possibile operazione di prelettura da parte del compilatore.

Sulle piattaforme Intel che supportano le istruzioni HLE (Hardware Lock Elision), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware. Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.

Queste routine sono disponibili solo come funzioni intrinseche.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)