---
description: 'Altre informazioni su: __nop'
title: __nop
ms.date: 09/02/2019
f1_keywords:
- __nop
helpviewer_keywords:
- nop instruction
- __nop intrinsic
ms.assetid: 7a2a938b-87e0-476d-a348-03ea7635b6b9
ms.openlocfilehash: 55759e8324511b6ddaa2774bdfdc3554c0032c2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118927"
---
# <a name="__nop"></a>__nop

**Specifico di Microsoft**

Genera codice computer specifico della piattaforma che non esegue alcuna operazione.

## <a name="syntax"></a>Sintassi

```C
void __nop();
```

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__nop`|x86, ARM, x64, ARM64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="remarks"></a>Commenti

La funzione `__nop` è equivalente alle `NOP` istruzioni in linguaggio macchina. Per ulteriori informazioni su x86 e x64, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Instruction Set Reference" nel sito di [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__noop](../intrinsics/noop.md)
