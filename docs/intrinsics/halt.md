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
ms.openlocfilehash: d99a87b1f3fd70d1fffb724629e9acded025732a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50617178"
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

Il `__halt` è equivalente alla funzione il `HLT` istruzioni in linguaggio macchina ed è disponibile solo in modalità kernel. Per altre informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento di Set di istruzioni," al [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)