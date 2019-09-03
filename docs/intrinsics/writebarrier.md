---
title: _WriteBarrier
ms.date: 09/02/2019
f1_keywords:
- _WriteBarrier
helpviewer_keywords:
- WriteBarrier intrinsic
- _WriteBarrier intrinsic
ms.assetid: a5ffdad9-0ca1-4eb7-b2f3-0f092c4bf4b5
ms.openlocfilehash: a41f4c6c5cdd6b72e76a596622912e88fbd03f34
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219321"
---
# <a name="_writebarrier"></a>_WriteBarrier

**Sezione specifica Microsoft**

Limita le ottimizzazioni del compilatore che possono riordinare le operazioni di accesso alla memoria nel punto della chiamata.

> [!CAUTION]
> Le funzioni intrinseche del compilatore `_ReadBarrier`, `_WriteBarrier` e `_ReadWriteBarrier` e la macro `MemoryBarrier` sono deprecate e non vanno usate. Per la comunicazione tra thread, usare meccanismi come [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) e [std:\<: Atomic T >](../standard-library/atomic.md), definiti nella [ C++ libreria standard](../standard-library/cpp-standard-library-reference.md). Per l'accesso hardware, usare l'opzione del compilatore [/volatile: ISO](../build/reference/volatile-volatile-keyword-interpretation.md) insieme alla parola chiave [volatile](../cpp/volatile-cpp.md) .

## <a name="syntax"></a>Sintassi

```C
void _WriteBarrier(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_WriteBarrier`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca `_WriteBarrier` limita le ottimizzazioni del compilatore che possono rimuovere o riordinare le operazioni di accesso alla memoria nel punto della chiamata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_ReadBarrier](../intrinsics/readbarrier.md)\
[_ReadWriteBarrier](../intrinsics/readwritebarrier.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
