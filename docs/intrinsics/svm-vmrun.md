---
description: 'Altre informazioni su: __svm_vmrun'
title: __svm_vmrun
ms.date: 09/02/2019
f1_keywords:
- __svm_vmrun
helpviewer_keywords:
- __svm_vmrun intrinsic
- VMRUN instruction
ms.assetid: ae98a781-fc17-47b2-b40f-86fcebf1867b
ms.openlocfilehash: c01716e496513aa11132fdfc95235a39c7277279
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333707"
---
# <a name="__svm_vmrun"></a>__svm_vmrun

**Specifico di Microsoft**

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

## <a name="remarks"></a>Commenti

La `__svm_vmrun` funzione usa una quantità minima di informazioni in VMCB per iniziare a eseguire il codice Guest della macchina virtuale. Utilizzare la funzione [__svm_vmsave](../intrinsics/svm-vmsave.md) o [__svm_vmload](../intrinsics/svm-vmload.md) se sono necessarie ulteriori informazioni per gestire un interrupt complesso o per passare a un altro Guest.

La funzione `__svm_vmrun` è equivalente alle `VMRUN` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento relativo al volume 2 della programmazione di sistema "AMD64 Architecture Programmer", ovvero il documento numero 24593, revisione 3,11 o versione successiva, nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__svm_vmrun`|x86, x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__svm_vmsave](../intrinsics/svm-vmsave.md)\
[__svm_vmload](../intrinsics/svm-vmload.md)
