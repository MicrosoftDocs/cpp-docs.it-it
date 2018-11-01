---
title: __vmx_vmptrst
ms.date: 11/04/2016
f1_keywords:
- __vmx_vmptrst
helpviewer_keywords:
- __vmx_vmptrst intrinsic
- VMPTRST instruction
ms.assetid: 8dc66e47-03a0-41b0-8e25-c1485f42817a
ms.openlocfilehash: a736a632c7f711ac8fdcc4d73eaf2bd341d0c978
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50654233"
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