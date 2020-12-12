---
description: 'Altre informazioni su: _ReadBarrier'
title: _ReadBarrier
ms.date: 09/02/2019
f1_keywords:
- _ReadBarrier
helpviewer_keywords:
- _ReadBarrier intrinsic
ms.assetid: f9e54a92-61bc-4f55-8195-b8932065a796
ms.openlocfilehash: 94ade7c8f602cf279ac75a5f0a56387c344d0fb6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257492"
---
# <a name="_readbarrier"></a>_ReadBarrier

**Specifico di Microsoft**

Limita le ottimizzazioni del compilatore che possono riordinare le operazioni di accesso alla memoria nel punto della chiamata.

> [!CAUTION]
> Le funzioni intrinseche del compilatore `_ReadBarrier`, `_WriteBarrier` e `_ReadWriteBarrier` e la macro `MemoryBarrier` sono deprecate e non vanno usate. Per la comunicazione tra thread, usare meccanismi come [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) e [std:: Atomic \<T> ](../standard-library/atomic.md) definiti nella [libreria standard C++](../standard-library/cpp-standard-library-reference.md). Per l'accesso hardware, usare l'opzione del compilatore [/volatile: ISO](../build/reference/volatile-volatile-keyword-interpretation.md) insieme alla parola chiave [volatile](../cpp/volatile-cpp.md) .

## <a name="syntax"></a>Sintassi

```C
void _ReadBarrier(void);
```

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_ReadBarrier`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione intrinseca `_ReadBarrier` limita le ottimizzazioni del compilatore che possono rimuovere o riordinare le operazioni di accesso alla memoria nel punto della chiamata.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
