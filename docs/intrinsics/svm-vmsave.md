---
title: __svm_vmsave
ms.date: 09/02/2019
f1_keywords:
- __svm_vmsave
helpviewer_keywords:
- VMSAVE instruction
- __svm_vmsave intrinsic
ms.assetid: 617a60bd-8514-4ba1-8066-bcf4dd481030
ms.openlocfilehash: f91efa7116a8a8e9ebe27c7e5e4e64c4f1533e9d
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219789"
---
# <a name="__svm_vmsave"></a>__svm_vmsave

**Sezione specifica Microsoft**

Archivia un subset dello stato del processore nel blocco di controllo della macchina virtuale (VMCB) specificato.

## <a name="syntax"></a>Sintassi

```C
void __svm_vmsave(
   size_t VmcbPhysicalAddress
);
```

### <a name="parameters"></a>Parametri

*VmcbPhysicalAddress*\
in Indirizzo fisico del VMCB.

## <a name="remarks"></a>Note

La funzione `__svm_vmsave` è equivalente alle `VMSAVE` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "volume 2 Manual Programmer Architecture AMD64: Programmazione di sistema, "numero di documento 24593, revisione 3,11 o successiva, nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_vmsave`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__svm_vmrun](../intrinsics/svm-vmrun.md)\
[__svm_vmload](../intrinsics/svm-vmload.md)
