---
title: _ReadWriteBarrier
ms.date: 11/04/2016
f1_keywords:
- _ReadWriteBarrier
helpviewer_keywords:
- ReadWriteBarrier intrinsic
- _ReadWriteBarrier intrinsic
ms.assetid: dd9f58b5-8bb6-494e-bb0f-9fe184f3908d
ms.openlocfilehash: 9da26b685be90bd349d6bfe56c4ad980541d09c0
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59026753"
---
# <a name="readwritebarrier"></a>_ReadWriteBarrier

**Sezione specifica Microsoft**

Limita le ottimizzazioni del compilatore che possono riordinare gli accessi alla memoria nel punto della chiamata.

> [!CAUTION]
>  Le funzioni intrinseche del compilatore `_ReadBarrier`, `_WriteBarrier` e `_ReadWriteBarrier` e la macro `MemoryBarrier` sono deprecate e non vanno usate. Per la comunicazione tra thread, usare meccanismi come [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) e [std:: Atomic\<T >](../standard-library/atomic.md), che sono definiti nella [ C++ dellalibreriaStandard](../standard-library/cpp-standard-library-reference.md). Per l'accesso hardware, usare il [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) l'opzione del compilatore con la [volatile](../cpp/volatile-cpp.md) (parola chiave).

## <a name="syntax"></a>Sintassi

```
void _ReadWriteBarrier(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_ReadWriteBarrier`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

La funzione intrinseca `_ReadWriteBarrier` limita le ottimizzazioni del compilatore che possono rimuovere o riordinare le operazioni di accesso alla memoria nel punto della chiamata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_ReadBarrier](../intrinsics/readbarrier.md)<br/>
[_WriteBarrier](../intrinsics/writebarrier.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)