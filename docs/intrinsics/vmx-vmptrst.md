---
title: __vmx_vmptrst | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __vmx_vmptrst
dev_langs:
- C++
helpviewer_keywords:
- __vmx_vmptrst intrinsic
- VMPTRST instruction
ms.assetid: 8dc66e47-03a0-41b0-8e25-c1485f42817a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b1014d41ea53405ea96ea5a3e19e627d72663f21
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50074943"
---
# <a name="vmxvmptrst"></a>__vmx_vmptrst

**Sezione specifica Microsoft**

Contiene il puntatore alla struttura di controllo di una macchina virtuale corrente (VMCS) all'indirizzo specificato.

## <a name="syntax"></a>Sintassi

```
void __vmx_vmptrst( 
   unsigned __int64 *VmcsPhysicalAddress 
);
```

### <a name="parameters"></a>Parametri

*VmcsPhysicalAddress*<br/>
[in] L'indirizzo in cui è archiviato il puntatore VMCS corrente.

## <a name="remarks"></a>Note

Il puntatore VMCS è un indirizzo fisico a 64 bit.

La funzione `__vmx_vmptrst` è equivalente alle `VMPTRST` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmptrst`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmptrld](../intrinsics/vmx-vmptrld.md)