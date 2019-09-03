---
title: _ReadBarrier
ms.date: 09/02/2019
f1_keywords:
- _ReadBarrier
helpviewer_keywords:
- _ReadBarrier intrinsic
ms.assetid: f9e54a92-61bc-4f55-8195-b8932065a796
ms.openlocfilehash: 8bbcecf95daeef6ea2d40877d37e0eb6b7f3a0e8
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217092"
---
# <a name="_readbarrier"></a>_ReadBarrier

**Sezione specifica Microsoft**

Limita le ottimizzazioni del compilatore che possono riordinare le operazioni di accesso alla memoria nel punto della chiamata.

> [!CAUTION]
> Le funzioni intrinseche del compilatore `_ReadBarrier`, `_WriteBarrier` e `_ReadWriteBarrier` e la macro `MemoryBarrier` sono deprecate e non vanno usate. Per la comunicazione tra thread, usare meccanismi come [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) e [std:\<: Atomic T >](../standard-library/atomic.md) definiti nella [ C++ libreria standard](../standard-library/cpp-standard-library-reference.md). Per l'accesso hardware, usare l'opzione del compilatore [/volatile: ISO](../build/reference/volatile-volatile-keyword-interpretation.md) insieme alla parola chiave [volatile](../cpp/volatile-cpp.md) .

## <a name="syntax"></a>Sintassi

```C
void _ReadBarrier(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_ReadBarrier`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione intrinseca `_ReadBarrier` limita le ottimizzazioni del compilatore che possono rimuovere o riordinare le operazioni di accesso alla memoria nel punto della chiamata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
