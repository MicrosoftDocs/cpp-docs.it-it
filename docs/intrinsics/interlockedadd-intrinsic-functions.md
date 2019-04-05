---
title: Funzioni intrinseche_InterlockedAdd
ms.date: 12/17/2018
f1_keywords:
- _InterlockedAdd64_acq_cpp
- _InterlockedAdd64_acq
- _InterlockedAdd_acq
- _InterlockedAdd_nf
- _InterlockedAdd64_rel
- _InterlockedAdd64
- _InterlockedAdd_cpp
- _InterlockedAdd_rel_cpp
- _InterlockedAdd_rel
- _InterlockedAdd64_rel_cpp
- _InterlockedAdd64_cpp
- _InterlockedAdd_acq_cpp
- _InterlockedAdd64_nf
- _InterlockedAdd
helpviewer_keywords:
- _InterlockedAdd_nf intrinsic
- _InterlockedAdd_rel intrinsic
- _InterlockedAdd intrinsic
- _InterlockedAdd64 intrinsic
- _InterlockedAdd64_acq intrinsic
- _InterlockedAdd64_nf intrinsic
- _InterlockedAdd_acq intrinsic
- _InterlockedAdd64_rel intrinsic
ms.assetid: 3d319603-ea9c-4fdd-ae61-e52430ccc3b1
ms.openlocfilehash: 348e936bb05796e36ae45095f25b943076cec464
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59040955"
---
# <a name="interlockedadd-intrinsic-functions"></a>Funzioni intrinseche_InterlockedAdd

**Sezione specifica Microsoft**

Queste funzioni eseguono un'aggiunta atomica, che assicura che l'operazione viene completata se più di un thread può accedere a una variabile condivisa.

## <a name="syntax"></a>Sintassi

```
long _InterlockedAdd(
   long volatile * Addend,
   long Value
);
long _InterlockedAdd_acq(
   long volatile * Addend,
   long Value
);
long _InterlockedAdd_nf(
   long volatile * Addend,
   long Value
);
long _InterlockedAdd_rel(
   long volatile * Addend,
   long Value
);
__int64 _InterlockedAdd64(
   __int64 volatile * Addend,
   __int64 Value
);
__int64 _InterlockedAdd64_acq(
   __int64 volatile * Addend,
   __int64 Value
);
__int64 _InterlockedAdd64_nf (
   __int64 volatile * Addend,
   __int64 Value
);
__int64 _InterlockedAdd64_rel(
   __int64 volatile * Addend,
   __int64 Value
);
```

#### <a name="parameters"></a>Parametri

*Addendo*<br/>
[in, out] Puntatore al valore integer da aggiungere a; sostituito dal risultato dell'addizione.

*Value*<br/>
[in] Il valore da aggiungere.

## <a name="return-value"></a>Valore restituito

Entrambe le funzioni restituiscono il risultato dell'addizione.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_InterlockedAdd`|ARM|
|`_InterlockedAdd_acq`|ARM|
|`_InterlockedAdd_nf`|ARM|
|`_InterlockedAdd_rel`|ARM|
|`_InterlockedAdd64`|ARM|
|`_InterlockedAdd64_acq`|ARM|
|`_InterlockedAdd64_nf`|ARM|
|`_InterlockedAdd64_rel`|ARM|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Le versioni di queste funzioni con il suffisso `_acq` o `_rel` eseguono un'aggiunta interlocked in base alla semantica di acquisizione o rilascio. *Semantica di acquisizione* significa che il risultato dell'operazione viene reso visibile a tutti i thread e processori prima che qualsiasi memoria successive letture e scritture. L'acquisizione è utile quando si entra in una sezione critica. *La semantica di rilascio* significa che tutta la memoria di lettura e scrittura è obbligati a essere reso visibile a tutti i thread e processori prima che il risultato dell'operazione è resa visibile se stesso. Il rilascio è utile quando si esce da una sezione critica. Le funzioni intrinseche con un `_nf` suffisso ("Nessun limite") non fungono da barriera di memoria.

Queste routine sono disponibili solo come funzioni intrinseche.

## <a name="example"></a>Esempio

```cpp
// interlockedadd.cpp
// Compile with: /Oi /EHsc
// processor: ARM
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_InterlockedAdd)

int main()
{
        long data1 = 0xFF00FF00;
        long data2 = 0x00FF0000;
        long retval;
        retval = _InterlockedAdd(&data1, data2);
        printf("0x%x 0x%x 0x%x", data1, data2, retval);
}
```

## <a name="output"></a>Output

```Output
0xffffff00 0xff0000 0xffffff00
```

## <a name="example"></a>Esempio

```cpp
// interlockedadd64.cpp
// compile with: /Oi /EHsc
// processor: ARM
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(_InterlockedAdd64)

int main()
{
        __int64 data1 = 0x0000FF0000000000;
        __int64 data2 = 0x00FF0000FFFFFFFF;
        __int64 retval;
        cout << hex << data1 << " + " << data2 << " = " ;
        retval = _InterlockedAdd64(&data1, data2);
        cout << data1 << endl;
        cout << "Return value: " << retval << endl;
}
```

## <a name="output"></a>Output

```Output
ff0000000000 + ff0000ffffffff = ffff00ffffffff
Return value: ffff00ffffffff
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)