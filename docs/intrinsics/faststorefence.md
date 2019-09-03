---
title: __faststorefence
ms.date: 09/02/2019
f1_keywords:
- __faststorefence_cpp
- __faststorefence
helpviewer_keywords:
- __faststorefence intrinsic
- sfence instruction
ms.assetid: 6c6eb973-3cf0-4306-b3af-cfde9b0210a5
ms.openlocfilehash: d11a20666612fe1bca22f5d46b93e898dae375f6
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222185"
---
# <a name="__faststorefence"></a>__faststorefence

**Sezione specifica Microsoft**

Assicura che ogni riferimento precedente alla memoria, inclusi i riferimenti alla memoria di caricamento e di archiviazione, sia visibile globalmente prima di qualsiasi riferimento successivo alla memoria.

## <a name="syntax"></a>Sintassi

```C
void __faststorefence();
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__faststorefence`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Genera una sequenza di istruzioni della barriera di memoria completa che garantisce che le operazioni di caricamento e archiviazione rilasciate prima che la funzione intrinseca sia visibile a livello globale prima di continuare L'effetto è simile, ma più veloce, a quello della funzione intrinseca `_mm_mfence` su tutte le piattaforme x64.

Nella piattaforma AMD64 questa routine genera un'istruzione che costituisce un recinto virtuale di archiviazione più rapido rispetto a quello dell'istruzione `sfence`. Per il codice critico usare questa funzione intrinseca invece di usare `_mm_sfence` solo su piattaforme AMD64. Su piattaforme Intel x64 l'istruzione `_mm_sfence` risulta più veloce.

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
