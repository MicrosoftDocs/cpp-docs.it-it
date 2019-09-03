---
title: __svm_vmload
ms.date: 09/02/2019
f1_keywords:
- __svm_vmload
helpviewer_keywords:
- __svm_vmload intrinsic
- VMLOAD instruction
ms.assetid: b46a5592-db76-4ffc-8694-2f3494e28bed
ms.openlocfilehash: da6ca9786b9c7e5041b9a8ca908d567b16176436
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219805"
---
# <a name="__svm_vmload"></a>__svm_vmload

**Sezione specifica Microsoft**

Carica un subset dello stato del processore dal blocco di controllo della macchina virtuale (VMCB) specificato.

## <a name="syntax"></a>Sintassi

```C
void __svm_vmload(
   size_t VmcbPhysicalAddress
);
```

### <a name="parameters"></a>Parametri

*VmcbPhysicalAddress*\
in Indirizzo fisico del VMCB.

## <a name="remarks"></a>Note

La funzione `__svm_vmload` è equivalente alle `VMLOAD` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "volume 2 Manual Programmer Architecture AMD64: Programmazione del sistema, "numero di documento 24593, revisione 3,11, nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_vmload`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__svm_vmrun](../intrinsics/svm-vmrun.md)\
[__svm_vmsave](../intrinsics/svm-vmsave.md)
