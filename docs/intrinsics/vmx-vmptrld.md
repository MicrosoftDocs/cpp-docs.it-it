---
title: __vmx_vmptrld | Documenti di Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __vmx_vmptrld
dev_langs:
- C++
helpviewer_keywords:
- __vmx_vmptrld intrinsic
- VMPTRLD instruction
ms.assetid: 95c9ec5b-1a81-41ba-983e-327bd6a65fcb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4f3304106662d290a208545061bf9f71b7f30c10
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48820945"
---
# <a name="vmxvmptrld"></a>__vmx_vmptrld

**Sezione specifica Microsoft**

Carica il puntatore alla struttura di controllo di una macchina virtuale corrente (VMCS) dall'indirizzo specificato.

## <a name="syntax"></a>Sintassi

```
int __vmx_vmptrld( 
   unsigned __int64 *VmcsPhysicalAddress 
);
```

#### <a name="parameters"></a>Parametri

[in] *`VmcsPhysicalAddress` l'indirizzo in cui è archiviato il puntatore VMCS.

## <a name="return-value"></a>Valore restituito

0 ha avuto esito positivo dell'operazione.

1. l'operazione non riuscita con stato esteso disponibile nel `VM-instruction error field` della VMCS corrente.

2. l'operazione non riuscita senza stato disponibile.

## <a name="remarks"></a>Note

Il puntatore VMCS è un indirizzo fisico a 64 bit.

Il `__vmx_vmptrld` è equivalente alla funzione il `VMPTRLD` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmptrld`|X64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmptrst](../intrinsics/vmx-vmptrst.md)