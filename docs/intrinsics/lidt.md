---
title: __lidt
ms.date: 09/02/2019
f1_keywords:
- __lidt
- __lidt_cpp
helpviewer_keywords:
- LIDT instruction
- __lidt intrinsic
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
ms.openlocfilehash: 24778b761ada56830b155a2fc65e90f54ba729ed
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217514"
---
# <a name="__lidt"></a>__lidt

**Sezione specifica Microsoft**

Carica il registro della tabella del descrittore di interrupt (IDTR) con il valore nella posizione di memoria specificata.

## <a name="syntax"></a>Sintassi

```C
void __lidt(void * Source);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Origine*|in Puntatore al valore da copiare in IDTR.|

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__lidt`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La `__lidt` funzione è equivalente all'istruzione `LIDT` del computer ed è disponibile solo in modalità kernel. Per ulteriori informazioni, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Riferimento al set di istruzioni "nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__sidt](../intrinsics/sidt.md)
