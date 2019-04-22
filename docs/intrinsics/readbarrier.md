---
title: _ReadBarrier
ms.date: 11/04/2016
f1_keywords:
- _ReadBarrier
helpviewer_keywords:
- _ReadBarrier intrinsic
ms.assetid: f9e54a92-61bc-4f55-8195-b8932065a796
ms.openlocfilehash: f31293b2bef0304bcdc58f0a8dbfce0436df9843
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59025486"
---
# <a name="readbarrier"></a>_ReadBarrier

**Sezione specifica Microsoft**

Limita le ottimizzazioni del compilatore che possono riordinare le operazioni di accesso alla memoria nel punto della chiamata.

> [!CAUTION]
>  Le funzioni intrinseche del compilatore `_ReadBarrier`, `_WriteBarrier` e `_ReadWriteBarrier` e la macro `MemoryBarrier` sono deprecate e non vanno usate. Per la comunicazione tra thread, usare meccanismi come [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) e [std:: Atomic\<T >](../standard-library/atomic.md) che sono definiti nel [ C++ dellalibreriaStandard](../standard-library/cpp-standard-library-reference.md). Per l'accesso hardware, usare il [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) l'opzione del compilatore con la [volatile](../cpp/volatile-cpp.md) (parola chiave).

## <a name="syntax"></a>Sintassi

```
void _ReadBarrier(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_ReadBarrier`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

La funzione intrinseca `_ReadBarrier` limita le ottimizzazioni del compilatore che possono rimuovere o riordinare le operazioni di accesso alla memoria nel punto della chiamata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)