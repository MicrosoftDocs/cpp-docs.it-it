---
title: _WriteBarrier
ms.date: 11/04/2016
f1_keywords:
- _WriteBarrier
helpviewer_keywords:
- WriteBarrier intrinsic
- _WriteBarrier intrinsic
ms.assetid: a5ffdad9-0ca1-4eb7-b2f3-0f092c4bf4b5
ms.openlocfilehash: b1b5ba2d70a8fc64eb47b3c6f3ff157214dcb94d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50653024"
---
# <a name="writebarrier"></a>_WriteBarrier

**Sezione specifica Microsoft**

Limita le ottimizzazioni del compilatore che possono riordinare le operazioni di accesso alla memoria nel punto della chiamata.

> [!CAUTION]
>  Le funzioni intrinseche del compilatore `_ReadBarrier`, `_WriteBarrier` e `_ReadWriteBarrier` e la macro `MemoryBarrier` sono deprecate e non vanno usate. Per la comunicazione tra thread, usare meccanismi come [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) e [std:: Atomic\<T >](../standard-library/atomic.md), che sono definiti nella [della libreria Standard C++](../standard-library/cpp-standard-library-reference.md). Per l'accesso hardware, usare il [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) l'opzione del compilatore con la [volatile](../cpp/volatile-cpp.md) (parola chiave).

## <a name="syntax"></a>Sintassi

```
void _WriteBarrier(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_WriteBarrier`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

La funzione intrinseca `_WriteBarrier` limita le ottimizzazioni del compilatore che possono rimuovere o riordinare le operazioni di accesso alla memoria nel punto della chiamata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_ReadBarrier](../intrinsics/readbarrier.md)<br/>
[_ReadWriteBarrier](../intrinsics/readwritebarrier.md)<br/>
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)