---
title: __lidt
ms.date: 11/04/2016
f1_keywords:
- __lidt
- __lidt_cpp
helpviewer_keywords:
- LIDT instruction
- __lidt intrinsic
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
ms.openlocfilehash: 757309603af48820a17668cfe272bbeaad9239b3
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038473"
---
# <a name="lidt"></a>__lidt

**Sezione specifica Microsoft**

Carica il Registro di tabella di descrittore di interrupt (IDTR) con il valore nella posizione di memoria specificata.

## <a name="syntax"></a>Sintassi

```
void __lidt(void * Source);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Origine*|[in] Puntatore al valore di IDTR da copiare.|

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__lidt`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il `__lidt` è equivalente alla funzione il `LIDT` istruzioni in linguaggio macchina ed è disponibile solo in modalità kernel. Per altre informazioni, cercare il documento, "architettura Intel Software Developer Manual, il Volume 2: Istruzione Set Reference,"al [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__sidt](../intrinsics/sidt.md)