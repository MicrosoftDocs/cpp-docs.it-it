---
title: Funzioni intrinseche _InterlockedIncrement
description: Funzioni intrinseche del compilatore Microsoft C/C++ per l'incremento con blocco.
ms.date: 09/03/2020
f1_keywords:
- _InterlockedIncrement_acq
- _InterlockedIncrement16_rel_cpp
- _InterlockedIncrement16_cpp
- _InterlockedIncrement64_rel
- _InterlockedIncrement_rel
- _InterlockedIncrement64_nf
- _InterlockedIncrement16_acq_cpp
- _InterlockedIncrement_rel_cpp
- _InterlockedIncrement64
- _InterlockedIncrement64_rel_cpp
- _InterlockedIncrement16_nf
- _InterlockedIncrement16_rel
- _InterlockedIncrement16_acq
- _InterlockedIncrement_nf
- _InterlockedIncrement_acq_cpp
- _InterlockedIncrement64_cpp
- _InterlockedIncrement64_acq_cpp
- _InterlockedIncrement
- _InterlockedIncrement_cpp
- _InterlockedIncrement64_acq
- _InterlockedIncrement16
helpviewer_keywords:
- _InterlockedIncrement64_rel intrinsic
- _InterlockedIncrement16_rel intrinsic
- InterlockedIncrement64_acq intrinsic
- _InterlockedIncrement16 intrinsic
- _InterlockedIncrement16_acq intrinsic
- _InterlockedIncrement_nf intrinsic
- _InterlockedIncrement_rel intrinsic
- _InterlockedIncrement64_nf intrinsic
- InterlockedIncrement_rel intrinsic
- InterlockedIncrement_acq intrinsic
- _InterlockedIncrement64_acq intrinsic
- _InterlockedIncrement16_nf intrinsic
- _InterlockedIncrement intrinsic
- _InterlockedIncrement64 intrinsic
- InterlockedIncrement64_rel intrinsic
- InterlockedIncrement64 intrinsic
- InterlockedIncrement16 intrinsic
- _InterlockedIncrement_acq intrinsic
- InterlockedIncrement intrinsic
ms.assetid: 37700615-f372-438b-bcef-d76e11839482
ms.openlocfilehash: 2148ae31f3eb03e398372db3bf15fc64e4857dd1
ms.sourcegitcommit: 4ed2d68634eb2fb77e18110a2d26bc0008be369c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/08/2020
ms.locfileid: "89556321"
---
# <a name="_interlockedincrement-intrinsic-functions"></a>`_InterlockedIncrement` funzioni intrinseche

Fornire il supporto intrinseco del compilatore per la funzione Win32 Windows SDK [InterlockedIncrement](/windows/win32/api/winnt/nf-winnt-interlockedincrement) . Le `_InterlockedIncrement` funzioni intrinseche sono **specifiche di Microsoft**.

## <a name="syntax"></a>Sintassi

```C
long _InterlockedIncrement(
   long volatile * lpAddend
);
long _InterlockedIncrement_acq(
   long volatile * lpAddend
);
long _InterlockedIncrement_rel(
   long volatile * lpAddend
);
long _InterlockedIncrement_nf(
   long volatile * lpAddend
);
short _InterlockedIncrement16(
   short volatile * lpAddend
);
short _InterlockedIncrement16_acq(
   short volatile * lpAddend
);
short _InterlockedIncrement16_rel(
   short volatile * lpAddend
);
short _InterlockedIncrement16_nf (
   short volatile * lpAddend
);
__int64 _InterlockedIncrement64(
   __int64 volatile * lpAddend
);
__int64 _InterlockedIncrement64_acq(
   __int64 volatile * lpAddend
);
__int64 _InterlockedIncrement64_rel(
   __int64 volatile * lpAddend
);
__int64 _InterlockedIncrement64_nf(
   __int64 volatile * lpAddend
);
```

### <a name="parameters"></a>Parametri

*lpAddend*\
[in, out] Puntatore alla variabile da incrementare.

## <a name="return-value"></a>Valore restituito

Il valore restituito è il valore incrementato risultante.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architecture|Intestazione|
|---------------|------------------|------------|
|`_InterlockedIncrement`, `_InterlockedIncrement16`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedIncrement64`|ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedIncrement_acq`, `_InterlockedIncrement_rel`, `_InterlockedIncrement_nf`, `_InterlockedIncrement16_acq`, `_InterlockedIncrement16_rel`, `_InterlockedIncrement16_nf`, `_InterlockedIncrement64_acq`, `_InterlockedIncrement64_rel`, `_InterlockedIncrement64_nf`|ARM, ARM64|\<intrin.h>|

## <a name="remarks"></a>Osservazioni

Ci sono diverse varianti di `_InterlockedIncrement` che variano in base ai tipi di dati interessati e all'uso della semantica di acquisizione o di rilascio specifica del processore.

Mentre la funzione `_InterlockedIncrement` opera su valori integer a 32 bit, `_InterlockedIncrement16` opera su valori integer a 16 bit e `_InterlockedIncrement64` opera su valori integer a 64 bit.

Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. La funzione intrinseca con `_nf` suffisso ("nessun limite") non funge da barriera di memoria.

La variabile a cui punta il parametro `lpAddend` deve essere allineata a un limite a 32 bit; in caso contrario, questa funzione non andrà a buon fine su sistemi x86 multiprocessore e su qualsiasi sistema non x86. Per ulteriori informazioni, vedere [align](../cpp/align-cpp.md).

La funzione Win32 è dichiarata in `Wdm.h` o `Ntddk.h`.

Queste routine sono disponibili solo come funzioni intrinseche.

## <a name="example"></a>Esempio

Per un esempio di come usare `_InterlockedIncrement` , vedere [_InterlockedDecrement](../intrinsics/interlockeddecrement-intrinsic-functions.md).

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole](../cpp/keywords-cpp.md)\
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
