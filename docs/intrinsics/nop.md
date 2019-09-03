---
title: __nop
ms.date: 09/02/2019
f1_keywords:
- __nop
helpviewer_keywords:
- nop instruction
- __nop intrinsic
ms.assetid: 7a2a938b-87e0-476d-a348-03ea7635b6b9
ms.openlocfilehash: 4561bcb84063f3707825c8ca164867d41500e2db
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221668"
---
# <a name="__nop"></a>__nop

**Sezione specifica Microsoft**

Genera codice computer specifico della piattaforma che non esegue alcuna operazione.

## <a name="syntax"></a>Sintassi

```C
void __nop();
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__nop`|x86, ARM, x64, ARM64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="remarks"></a>Note

La funzione `__nop` è equivalente alle `NOP` istruzioni in linguaggio macchina. Per ulteriori informazioni su x86 e x64, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Riferimento al set di istruzioni "nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__noop](../intrinsics/noop.md)
