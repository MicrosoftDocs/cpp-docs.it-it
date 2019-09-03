---
title: __vmx_vmlaunch
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmlaunch
helpviewer_keywords:
- VMLAUNCH instruction
- __vmx_vmlaunch intrinsic
ms.assetid: 708f7c38-b7c1-4ee7-bfc4-0daeb9cc9360
ms.openlocfilehash: 8d78e5181fdd43e10431e12d0cf540c8c9c2e719
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219556"
---
# <a name="__vmx_vmlaunch"></a>__vmx_vmlaunch

**Sezione specifica Microsoft**

Inserisce l'applicazione chiamante nello stato dell'operazione non radice VMX (VM Enter) usando la struttura di controllo della macchina virtuale (VMCS) corrente.

## <a name="syntax"></a>Sintassi

```C
unsigned char __vmx_vmlaunch(void);
```

## <a name="return-value"></a>Valore restituito

|Value|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Note

Un'applicazione può eseguire un'operazione di immissione di una macchina virtuale tramite la funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) o [__vmx_vmresume](../intrinsics/vmx-vmresume.md) . La funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) può essere utilizzata solo con un VMCS il cui stato di `Clear`avvio è e la funzione [__vmx_vmresume](../intrinsics/vmx-vmresume.md) può essere utilizzata solo con un VMCS il cui stato `Launched`di avvio è. Di conseguenza, usare la funzione [__vmx_vmclear](../intrinsics/vmx-vmclear.md) per impostare lo stato di avvio di un `Clear`VMCS su e quindi usare la funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) per la prima operazione di immissione della macchina virtuale e la funzione [__vmx_vmresume](../intrinsics/vmx-vmresume.md) per la successiva macchina virtuale-invio operazioni.

La funzione `__vmx_vmlaunch` è equivalente alle `VMLAUNCH` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32", numero documento C97063-002, nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmlaunch`|X64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmresume](../intrinsics/vmx-vmresume.md)\
[__vmx_vmclear](../intrinsics/vmx-vmclear.md)
