---
title: __svm_vmsave
ms.date: 11/04/2016
f1_keywords:
- __svm_vmsave
helpviewer_keywords:
- VMSAVE instruction
- __svm_vmsave intrinsic
ms.assetid: 617a60bd-8514-4ba1-8066-bcf4dd481030
ms.openlocfilehash: d683a13f636db9683b4a7c8d075ad6c3c88c2aed
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59023412"
---
# <a name="svmvmsave"></a>__svm_vmsave

**Sezione specifica Microsoft**

Archivia un subset di stato del processore in blocco di controllo (VMCB) della macchina virtuale specificata.

## <a name="syntax"></a>Sintassi

```
void __svm_vmsave(
   size_t VmcbPhysicalAddress
);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*VmcbPhysicalAddress*|[in] L'indirizzo fisico del VMCB.|

## <a name="remarks"></a>Note

La funzione `__svm_vmsave` è equivalente alle `VMSAVE` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: Sistema di programmazione,"numero 24593, revisione 3.11 o versione successiva, al documento il [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_vmsave`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__svm_vmrun](../intrinsics/svm-vmrun.md)<br/>
[__svm_vmload](../intrinsics/svm-vmload.md)