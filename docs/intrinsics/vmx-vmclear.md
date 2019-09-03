---
title: __vmx_vmclear
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmclear
helpviewer_keywords:
- VMCLEAR instruction
- __vmx_vmclear intrinsic
ms.assetid: e3eb98e4-50fc-4c93-9bac-340fd1f0a466
ms.openlocfilehash: 3b5807402cf0a9d8a9ef1ded1d112d22a801633e
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219536"
---
# <a name="__vmx_vmclear"></a>__vmx_vmclear

**Sezione specifica Microsoft**

Inizializza la struttura di controllo della macchina virtuale (VMCS) specificata e ne imposta lo `Clear`stato di avvio su.

## <a name="syntax"></a>Sintassi

```C
unsigned char __vmx_vmclear(
   unsigned __int64 *VmcsPhysicalAddress
);
```

### <a name="parameters"></a>Parametri

*VmcsPhysicalAddress*\
in Puntatore a una posizione di memoria a 64 bit che contiene l'indirizzo fisico del VMCS da cancellare.

## <a name="return-value"></a>Valore restituito

|Value|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Note

Un'applicazione può eseguire un'operazione di immissione di una macchina virtuale tramite la funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) o [__vmx_vmresume](../intrinsics/vmx-vmresume.md) . La funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) può essere utilizzata solo con un VMCS il cui stato di `Clear`avvio è e la funzione [__vmx_vmresume](../intrinsics/vmx-vmresume.md) può essere utilizzata solo con un VMCS il cui stato `Launched`di avvio è. Di conseguenza, usare la funzione [__vmx_vmclear](../intrinsics/vmx-vmclear.md) per impostare lo stato di avvio di un `Clear`VMCS su. Usare la funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) per la prima operazione di immissione della macchina virtuale e la funzione [__vmx_vmresume](../intrinsics/vmx-vmresume.md) per le successive operazioni di inserimento nella macchina virtuale.

La funzione `__vmx_vmclear` è equivalente alle `VMCLEAR` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32", numero documento C97063-002, nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmclear`|X64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md)\
[__vmx_vmresume](../intrinsics/vmx-vmresume.md)
