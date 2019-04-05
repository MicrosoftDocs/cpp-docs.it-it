---
title: __vmx_vmptrld
ms.date: 11/04/2016
f1_keywords:
- __vmx_vmptrld
helpviewer_keywords:
- __vmx_vmptrld intrinsic
- VMPTRLD instruction
ms.assetid: 95c9ec5b-1a81-41ba-983e-327bd6a65fcb
ms.openlocfilehash: e3d552720d454a4f22af368616b3953452c6db0e
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59040423"
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

### <a name="parameters"></a>Parametri

*VmcsPhysicalAddress*<br/>
[in] L'indirizzo in cui è archiviato il puntatore VMCS.

## <a name="return-value"></a>Valore restituito

0<br/>
Operazione completata.

1<br/>
Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.

2<br/>
Operazione non riuscita senza stato disponibile.

## <a name="remarks"></a>Note

Il puntatore VMCS è un indirizzo fisico a 64 bit.

La funzione `__vmx_vmptrld` è equivalente alle `VMPTRLD` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmptrld`|X64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmptrst](../intrinsics/vmx-vmptrst.md)