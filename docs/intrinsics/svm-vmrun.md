---
title: __svm_vmrun
ms.date: 11/04/2016
f1_keywords:
- __svm_vmrun
helpviewer_keywords:
- __svm_vmrun intrinsic
- VMRUN instruction
ms.assetid: ae98a781-fc17-47b2-b40f-86fcebf1867b
ms.openlocfilehash: 40e53b2ebd54fc109b47f3067e5f89ce50b327de
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59041059"
---
# <a name="svmvmrun"></a>__svm_vmrun

**Sezione specifica Microsoft**

Avvia l'esecuzione del codice guest macchina virtuale corrispondente al blocco di controllo (VMCB) della macchina virtuale specificata.

## <a name="syntax"></a>Sintassi

```
void __svm_vmrun(
   size_t VmcbPhysicalAddress
);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*VmcbPhysicalAddress*|[in] L'indirizzo fisico del VMCB.|

## <a name="remarks"></a>Note

Il `__svm_vmrun` funzione utilizza una quantità minima di informazioni di VMCB per avviare l'esecuzione del codice guest macchina virtuale. Usare la [__svm_vmsave](../intrinsics/svm-vmsave.md) oppure [__svm_vmload](../intrinsics/svm-vmload.md) funzionare se sono necessarie altre informazioni per la gestione di un interrupt complesso oppure passare a un altro guest.

La funzione `__svm_vmrun` è equivalente alle `VMRUN` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: Sistema di programmazione,"numero 24593, revisione 3.11 o versione successiva, al documento il [corporation AMD](https://developer.amd.com/resources/developer-guides-manuals/) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_vmrun`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__svm_vmsave](../intrinsics/svm-vmsave.md)<br/>
[__svm_vmload](../intrinsics/svm-vmload.md)