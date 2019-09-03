---
title: __svm_vmrun
ms.date: 09/02/2019
f1_keywords:
- __svm_vmrun
helpviewer_keywords:
- __svm_vmrun intrinsic
- VMRUN instruction
ms.assetid: ae98a781-fc17-47b2-b40f-86fcebf1867b
ms.openlocfilehash: f23df894cc8ad1c270c4c0acbc97cab727e47d93
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219827"
---
# <a name="__svm_vmrun"></a>__svm_vmrun

**Sezione specifica Microsoft**

Avvia l'esecuzione del codice Guest della macchina virtuale che corrisponde al blocco di controllo della macchina virtuale (VMCB) specificato.

## <a name="syntax"></a>Sintassi

```C
void __svm_vmrun(
   size_t VmcbPhysicalAddress
);
```

### <a name="parameters"></a>Parametri

*VmcbPhysicalAddress*\
in Indirizzo fisico del VMCB.

## <a name="remarks"></a>Note

La `__svm_vmrun` funzione usa una quantità minima di informazioni in VMCB per iniziare a eseguire il codice Guest della macchina virtuale. Usare la funzione [__svm_vmsave](../intrinsics/svm-vmsave.md) o [__svm_vmload](../intrinsics/svm-vmload.md) se sono necessarie altre informazioni per gestire un interrupt complesso o per passare a un altro Guest.

La funzione `__svm_vmrun` è equivalente alle `VMRUN` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "volume 2 Manual Programmer Architecture AMD64: Programmazione di sistema, "numero di documento 24593, revisione 3,11 o successiva, nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_vmrun`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__svm_vmsave](../intrinsics/svm-vmsave.md)\
[__svm_vmload](../intrinsics/svm-vmload.md)
