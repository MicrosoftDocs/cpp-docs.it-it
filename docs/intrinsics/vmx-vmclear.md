---
title: __vmx_vmclear
ms.date: 11/04/2016
f1_keywords:
- __vmx_vmclear
helpviewer_keywords:
- VMCLEAR instruction
- __vmx_vmclear intrinsic
ms.assetid: e3eb98e4-50fc-4c93-9bac-340fd1f0a466
ms.openlocfilehash: 17e3e5c91a58894b25fc6b2a72f7d0056fa88119
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59036537"
---
# <a name="vmxvmclear"></a>__vmx_vmclear

**Sezione specifica Microsoft**

Inizializza la struttura di controllo della macchina virtuale specificata (VMCS) e imposta lo stato di avvio su `Clear`.

## <a name="syntax"></a>Sintassi

```
unsigned char __vmx_vmclear(
   unsigned __int64 *VmcsPhysicalAddress
);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*VmcsPhysicalAddress*|[in] Puntatore a una posizione di memoria a 64 bit che contiene l'indirizzo fisico della VMCS da cancellare.|

## <a name="return-value"></a>Valore restituito

|Value|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Note

Un'applicazione può eseguire un'operazione della macchina virtuale usando il [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) oppure [__vmx_vmresume](../intrinsics/vmx-vmresume.md) (funzione). Il [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio viene `Clear`e il [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio è `Launched`. Di conseguenza, usare il [vmx_vmclear](../intrinsics/vmx-vmclear.md) funzione per impostare lo stato di avvio di una VMCS a `Clear`. Usare la [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione per la prima operazione della macchina virtuale e il [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione per le operazioni successive della macchina virtuale.

La funzione `__vmx_vmclear` è equivalente alle `VMCLEAR` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmclear`|X64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md)<br/>
[__vmx_vmresume](../intrinsics/vmx-vmresume.md)