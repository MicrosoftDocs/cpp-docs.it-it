---
title: vmx_vmlaunch | Documenti di Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __vmx_vmlaunch
dev_langs:
- C++
helpviewer_keywords:
- VMLAUNCH instruction
- __vmx_vmlaunch intrinsic
ms.assetid: 708f7c38-b7c1-4ee7-bfc4-0daeb9cc9360
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9519250684ea4f354c2ccfbca5be64076d6376d6
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48820581"
---
# <a name="vmxvmlaunch"></a>__vmx_vmlaunch

**Sezione specifica Microsoft**

Inserisce l'applicazione chiamante in stato di operazione non radice VMX (invio di VM) tramite la struttura di controllo di una macchina virtuale corrente (VMCS).

## <a name="syntax"></a>Sintassi

```
unsigned char __vmx_vmlaunch(
   void);
```

## <a name="return-value"></a>Valore restituito

|Valore|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Note

Un'applicazione può eseguire un'operazione della macchina virtuale usando il [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) oppure [__vmx_vmresume](../intrinsics/vmx-vmresume.md) (funzione). Il [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio viene `Clear`e il [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio è `Launched`. Di conseguenza, usare il [vmx_vmclear](../intrinsics/vmx-vmclear.md) funzione per impostare lo stato di avvio di una VMCS per `Clear`e quindi usare i [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione per la prima operazione della macchina virtuale e la [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione per le operazioni successive della macchina virtuale.

Il `__vmx_vmlaunch` è equivalente alla funzione il `VMLAUNCH` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmlaunch`|X64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmresume](../intrinsics/vmx-vmresume.md)<br/>
[__vmx_vmclear](../intrinsics/vmx-vmclear.md)