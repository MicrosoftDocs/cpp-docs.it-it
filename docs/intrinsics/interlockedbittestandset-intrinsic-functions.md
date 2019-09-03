---
title: funzioni intrinseche _interlockedbittestandset
ms.date: 09/02/2019
f1_keywords:
- _interlockedbittestandset_cpp
- _interlockedbittestandset_HLEAcquire
- _interlockedbittestandset64
- _interlockedbittestandset64_acq
- _interlockedbittestandset64_nf
- _interlockedbittestandset64_rel
- _interlockedbittestandset
- _interlockedbittestandset_rel
- _interlockedbittestandset64_HLEAcquire
- _interlockedbittestandset_HLERelease
- _interlockedbittestandset_acq
- _interlockedbittestandset_nf
- _interlockedbittestandset64_cpp
- _interlockedbittestandset64_HLERelease
helpviewer_keywords:
- _interlockedbittestandset intrinsic
- _interlockedbittestandset64 intrinsic
- lock_bts instruction
ms.assetid: b1b7e334-53ea-48cf-ba60-5fa3ef51a1fc
ms.openlocfilehash: 9679abf674b5ef366818e73504c3c8c80c5d8ed7
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217751"
---
# <a name="_interlockedbittestandset-intrinsic-functions"></a>funzioni intrinseche _interlockedbittestandset

**Sezione specifica Microsoft**

Generare un'istruzione per esaminare il `b` bit dell'indirizzo `a` e restituire il valore corrente prima di impostarlo su 1.

## <a name="syntax"></a>Sintassi

```C
unsigned char _interlockedbittestandset(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_acq(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_HLEAcquire(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_HLERelease(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_nf(
   long *a,
   long b
);
unsigned char _interlockedbittestandset_rel(
   long *a,
   long b
);
unsigned char _interlockedbittestandset64(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_acq(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_nf(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_rel(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_HLEAcquire(
   __int64 *a,
   __int64 b
);
unsigned char _interlockedbittestandset64_HLERelease(
   __int64 *a,
   __int64 b
);
```

### <a name="parameters"></a>Parametri

*un*\
in Puntatore alla memoria da esaminare.

*b*\
in Posizione del bit da verificare.

## <a name="return-value"></a>Valore restituito

Valore del bit alla posizione `b` prima che sia impostato.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`_interlockedbittestandset`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_interlockedbittestandset_acq`, `_interlockedbittestandset_nf`, `_interlockedbittestandset_rel`|ARM, ARM64|\<intrin.h>|
|`_interlockedbittestandset64_acq`, `_interlockedbittestandset64_nf`, `_interlockedbittestandset64_rel`|ARM64|\<intrin.h>|
|`_interlockedbittestandset_HLEAcquire`, `_interlockedbittestandset_HLERelease`|x86, x64|\<immintrin.h>|
|`_interlockedbittestandset64`|x64, ARM64|\<intrin.h>|
|`_interlockedbittestandset64_HLEAcquire`, `_interlockedbittestandset64_HLERelease`|X64|\<immintrin.h>|

## <a name="remarks"></a>Note

Nei processori x86 e x64 queste funzioni intrinseche usano l' `lock bts` istruzione per leggere e impostare il bit specificato su 1. L'operazione è atomica.

Nei processori ARM e ARM64, usare le funzioni intrinseche `_acq` con `_rel` i suffissi e per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. Le funzioni intrinseche ARM con `_nf` suffisso ("nessun limite") non fungono da barriera di memoria.

Nei processori Intel che supportano le istruzioni HLE (Hardware Lock Elision), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware. Se queste funzioni intrinseche vengono chiamate su processori che non supportano HLE, l'hint viene ignorato.

Queste routine sono disponibili solo come funzioni intrinseche.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
