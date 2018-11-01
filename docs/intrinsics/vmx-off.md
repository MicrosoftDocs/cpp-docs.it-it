---
title: __vmx_off
ms.date: 11/04/2016
f1_keywords:
- __vmx_off
helpviewer_keywords:
- VMXOFF instruction
- __vmx_off intrinsic
ms.assetid: 78a32d46-9291-406c-b982-a550855aff18
ms.openlocfilehash: 24f57195b60a788c0189a295fa7b6e4818a93d83
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50440287"
---
# <a name="vmxoff"></a>__vmx_off

**Sezione specifica Microsoft**

Disattiva l'operazione della macchina virtuale (VMX) le estensioni del processore.

## <a name="syntax"></a>Sintassi

```
void __vmx_off();
```

## <a name="remarks"></a>Note

La funzione `__vmx_off` è equivalente alle `VMXOFF` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_off`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)