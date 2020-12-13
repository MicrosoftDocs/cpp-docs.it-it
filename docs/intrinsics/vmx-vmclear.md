---
description: 'Altre informazioni su: __vmx_vmclear'
title: __vmx_vmclear
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmclear
helpviewer_keywords:
- VMCLEAR instruction
- __vmx_vmclear intrinsic
ms.assetid: e3eb98e4-50fc-4c93-9bac-340fd1f0a466
ms.openlocfilehash: 2eec5c1189c6a798246a6dabfc731fb0166bc14a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333560"
---
# <a name="__vmx_vmclear"></a>__vmx_vmclear

**Specifico di Microsoft**

Inizializza la struttura di controllo della macchina virtuale (VMCS) specificata e ne imposta lo stato di avvio su `Clear` .

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

|Valore|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Commenti

Un'applicazione può eseguire un'operazione di immissione della macchina virtuale usando la funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) o [__vmx_vmresume](../intrinsics/vmx-vmresume.md) . La funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) può essere usata solo con una VMCS il cui stato di avvio è `Clear` e la funzione [__vmx_vmresume](../intrinsics/vmx-vmresume.md) può essere usata solo con un VMCS il cui stato di avvio è `Launched` . Di conseguenza, usare la funzione [__vmx_vmclear](../intrinsics/vmx-vmclear.md) per impostare lo stato di avvio di un VMCS su `Clear` . Usare la funzione [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) per la prima operazione di immissione della macchina virtuale e la funzione [__vmx_vmresume](../intrinsics/vmx-vmresume.md) per le successive operazioni di inserimento nella macchina virtuale.

La funzione `__vmx_vmclear` è equivalente alle `VMCLEAR` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32", numero documento C97063-002, nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__vmx_vmclear`|x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md)\
[__vmx_vmresume](../intrinsics/vmx-vmresume.md)
