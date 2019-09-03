---
title: __vmx_vmptrst
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmptrst
helpviewer_keywords:
- __vmx_vmptrst intrinsic
- VMPTRST instruction
ms.assetid: 8dc66e47-03a0-41b0-8e25-c1485f42817a
ms.openlocfilehash: e559746be9e2a3fe5e81afa4d290265394db3e36
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219481"
---
# <a name="__vmx_vmptrst"></a>__vmx_vmptrst

**Sezione specifica Microsoft**

Archivia il puntatore alla struttura di controllo della macchina virtuale (VMCS) corrente in corrispondenza dell'indirizzo specificato.

## <a name="syntax"></a>Sintassi

```C
void __vmx_vmptrst(
   unsigned __int64 *VmcsPhysicalAddress
);
```

### <a name="parameters"></a>Parametri

*VmcsPhysicalAddress*\
in Indirizzo in cui è archiviato il puntatore VMCS corrente.

## <a name="remarks"></a>Note

Il puntatore VMCS è un indirizzo fisico a 64 bit.

La funzione `__vmx_vmptrst` è equivalente alle `VMPTRST` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32", numero documento C97063-002, nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmptrst`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmptrld](../intrinsics/vmx-vmptrld.md)
