---
title: __faststorefence
ms.date: 11/04/2016
f1_keywords:
- __faststorefence_cpp
- __faststorefence
helpviewer_keywords:
- __faststorefence intrinsic
- sfence instruction
ms.assetid: 6c6eb973-3cf0-4306-b3af-cfde9b0210a5
ms.openlocfilehash: a0c8027f443a475b03521920e2e036e7ed4eaafb
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59036695"
---
# <a name="faststorefence"></a>__faststorefence

**Sezione specifica Microsoft**

Assicura che ogni riferimento precedente alla memoria, inclusi i riferimenti alla memoria di caricamento e di archiviazione, sia visibile globalmente prima di qualsiasi riferimento successivo alla memoria.

## <a name="syntax"></a>Sintassi

```
void __faststorefence();
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__faststorefence`|X64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Genera una sequenza di istruzioni per la barriera di memoria completa che assicura che le operazioni di caricamento e archiviazione rilasciate prima di questa funzione intrinseca siano visibili globalmente prima della continuazione dell'esecuzione. L'effetto è simile, ma più veloce, a quello della funzione intrinseca `_mm_mfence` su tutte le piattaforme x64.

Nella piattaforma AMD64 questa routine genera un'istruzione che costituisce un recinto virtuale di archiviazione più rapido rispetto a quello dell'istruzione `sfence`. Per il codice critico usare questa funzione intrinseca invece di usare `_mm_sfence` solo su piattaforme AMD64. Su piattaforme Intel x64 l'istruzione `_mm_sfence` risulta più veloce.

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)