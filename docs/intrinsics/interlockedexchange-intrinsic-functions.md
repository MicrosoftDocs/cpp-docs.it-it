---
description: 'Altre informazioni su: _InterlockedExchange funzioni intrinseche'
title: Funzioni intrinseche _InterlockedExchange
ms.date: 09/02/2019
f1_keywords:
- _InterlockedExchange_rel
- _InterlockedExchange8_nf
- _InterlockedExchange_acq_cpp
- _InterlockedExchange_nf
- _InterlockedExchange64_nf
- _InterlockedExchange_HLEAcquire
- _InterlockedExchange_cpp
- _InterlockedExchange64_acq_cpp
- _InterlockedExchange64_acq
- _InterlockedExchange64_HLERelease
- _InterlockedExchange8_acq
- _InterlockedExchange16_acq
- _InterlockedExchange
- _InterlockedExchange64_HLEAcquire
- _InterlockedExchange8
- _InterlockedExchange64_rel
- _InterlockedExchange_acq
- _InterlockedExchange16
- _InterlockedExchange16_rel
- _InterlockedExchange16_nf
- _InterlockedExchange64
- _InterlockedExchange_HLERelease
- _InterlockedExchange64_cpp
- _InterlockedExchange8_rel
helpviewer_keywords:
- _InterlockedExchange8
- _InterlockedExchange64 intrinsic
- _InterlockedExchange_acq intrinsic
- InterlockedExchange64 intrinsic
- _InterlockedExchange64_acq intrinsic
- InterlockedExchange64_acq intrinsic
- _InterlockedExchange16_acq
- _InterlockedExchange8_acq
- _InterlockedExchange16
- _InterlockedExchange8_rel
- InterlockedExchange_acq intrinsic
- InterlockedExchange intrinsic
- _InterlockedExchange16_rel
- _InterlockedExchange16_nf
- _InterlockedExchange intrinsic
- _InterlockedExchange8_nf
ms.assetid: be2f232a-6301-462a-a92b-fcdeb8b0f209
ms.openlocfilehash: de2f8a084cc5604051234fa9e01d5f5cc0974d74
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97168046"
---
# <a name="_interlockedexchange-intrinsic-functions"></a>Funzioni intrinseche _InterlockedExchange

**Specifico di Microsoft**

Genera un'istruzione atomica per impostare un valore specificato.

## <a name="syntax"></a>Sintassi

```C
long _InterlockedExchange(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_acq(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_HLEAcquire(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_HLERelease(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_nf(
   long volatile * Target,
   long Value
);
long _InterlockedExchange_rel(
   long volatile * Target,
   long Value
);
char _InterlockedExchange8(
   char volatile * Target,
   char Value
);
char _InterlockedExchange8_acq(
   char volatile * Target,
   char Value
);
char _InterlockedExchange8_nf(
   char volatile * Target,
   char Value
);
char _InterlockedExchange8_rel(
   char volatile * Target,
   char Value
);
short _InterlockedExchange16(
   short volatile * Target,
   short Value
);
short _InterlockedExchange16_acq(
   short volatile * Target,
   short Value
);
short _InterlockedExchange16_nf(
   short volatile * Target,
   short Value
);
short _InterlockedExchange16_rel(
   short volatile * Target,
   short Value
);
__int64 _InterlockedExchange64(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_acq(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_HLEAcquire(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_HLERelease(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_nf(
   __int64 volatile * Target,
   __int64 Value
);
__int64 _InterlockedExchange64_rel(
   __int64 volatile * Target,
   __int64 Value
);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
[in, out] Puntatore al valore da scambiare. La funzione imposta questa variabile su `Value` e restituisce il valore precedente.

*Valore*\
in Valore da scambiare con il valore a cui punta `Target` .

## <a name="return-value"></a>Valore restituito

Restituisce il valore iniziale a cui punta `Target`.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|Intestazione|
|---------------|------------------|------------|
|`_InterlockedExchange`, `_InterlockedExchange8`, `_InterlockedExchange16`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedExchange64`|ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedExchange_acq`, `_InterlockedExchange_nf`, `_InterlockedExchange_rel`, `_InterlockedExchange8_acq`, `_InterlockedExchange8_nf`, `_InterlockedExchange8_rel`, `_InterlockedExchange16_acq`, `_InterlockedExchange16_nf`, `_InterlockedExchange16_rel`, `_InterlockedExchange64_acq`, `_InterlockedExchange64_nf`, `_InterlockedExchange64_rel`,|ARM, ARM64|\<intrin.h>|
|`_InterlockedExchange_HLEAcquire`, `_InterlockedExchange_HLERelease`|x86, x64|\<immintrin.h>|
|`_InterlockedExchange64_HLEAcquire`, `_InterlockedExchange64_HLERelease`|x64|\<immintrin.h>|

## <a name="remarks"></a>Commenti

`_InterlockedExchange` fornisce il supporto intrinseco del compilatore per la funzione Win32 Windows SDK [InterlockedExchange](/windows/win32/api/winnt/nf-winnt-interlockedexchange) .

Ci sono diverse varianti di `_InterlockedExchange` che variano in base ai tipi di dati interessati e all'uso della semantica di acquisizione o di rilascio specifica del processore.

Mentre la funzione `_InterlockedExchange` opera su valori integer a 32 bit, `_InterlockedExchange8` opera su valori integer a 8 bit, `_InterlockedExchange16` opera su valori integer a 16 bit e `_InterlockedExchange64` opera su valori integer a 64 bit.

Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. Le funzioni intrinseche con `_nf` suffisso ("nessun limite") non fungono da barriera di memoria.

Sulle piattaforme Intel che supportano le istruzioni HLE (Hardware Lock Elision), le funzioni intrinseche con suffissi `_HLEAcquire` e `_HLERelease` includono un hint per il processore che consente di accelerare le prestazioni eliminando un passaggio di blocco scrittura nell'hardware. Se queste funzioni intrinseche vengono chiamate su piattaforme che non supportano HLE, l'hint viene ignorato.

Queste routine sono disponibili solo come funzioni intrinseche.

## <a name="example"></a>Esempio

Per un esempio di come usare `_InterlockedExchange` , vedere [_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole](../cpp/keywords-cpp.md)\
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
