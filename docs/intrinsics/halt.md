---
title: __halt
ms.date: 11/04/2016
f1_keywords:
- __halt
- __halt_cpp
helpviewer_keywords:
- __halt intrinsic
- HLT instruction
ms.assetid: a074f44a-101c-45a5-8a5e-cfd223c34002
ms.openlocfilehash: dd68c88a13035ca25f89304bcd84267a73978420
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59025951"
---
# <a name="halt"></a>__halt

**Sezione specifica Microsoft**

Interrompe il microprocessore fino a quando non si verifica un interrupt abilitato, un interrupt non mascherabile (NMI) o la reimpostazione.

## <a name="syntax"></a>Sintassi

```
void __halt( void );
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__halt`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il `__halt` è equivalente alla funzione il `HLT` istruzioni in linguaggio macchina ed è disponibile solo in modalità kernel. Per altre informazioni, cercare il documento, "architettura Intel Software Developer Manual, il Volume 2: Istruzione Set Reference,"al [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)