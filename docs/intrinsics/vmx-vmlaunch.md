---
description: 'Altre informazioni su: __vmx_vmlaunch'
title: __vmx_vmlaunch
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmlaunch
helpviewer_keywords:
- VMLAUNCH instruction
- __vmx_vmlaunch intrinsic
ms.assetid: 708f7c38-b7c1-4ee7-bfc4-0daeb9cc9360
ms.openlocfilehash: 3f6596e0644250710491ed90036a651c0725a5f9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333550"
---
# <a name="__vmx_vmlaunch"></a>__vmx_vmlaunch

**Specifico di Microsoft**

Inserisce l'applicazione chiamante nello stato dell'operazione non radice VMX (VM Enter) usando la struttura di controllo della macchina virtuale (VMCS) corrente.

## <a name="syntax"></a>Sintassi

```C
unsigned char __vmx_vmlaunch(void);
```

## <a name="return-value"></a>Valore restituito

|Valore|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Commenti

Un'applicazione può eseguire un'operazione di immissione della macchina virtuale usando la funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) o [__vmx_vmresume](../intrinsics/vmx-vmresume.md) . La funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) può essere usata solo con una VMCS il cui stato di avvio è `Clear` e la funzione [__vmx_vmresume](../intrinsics/vmx-vmresume.md) può essere usata solo con un VMCS il cui stato di avvio è `Launched` . Di conseguenza, usare la funzione [__vmx_vmclear](../intrinsics/vmx-vmclear.md) per impostare lo stato di avvio di un VMCS su `Clear` e quindi usare la funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) per la prima operazione di immissione della macchina virtuale e la funzione [__vmx_vmresume](../intrinsics/vmx-vmresume.md) per le successive operazioni di inserimento nella macchina virtuale.

La funzione `__vmx_vmlaunch` è equivalente alle `VMLAUNCH` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32", numero documento C97063-002, nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__vmx_vmlaunch`|x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmresume](../intrinsics/vmx-vmresume.md)\
[__vmx_vmclear](../intrinsics/vmx-vmclear.md)
