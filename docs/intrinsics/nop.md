---
title: __nop
ms.date: 11/04/2016
f1_keywords:
- __nop
helpviewer_keywords:
- nop instruction
- __nop intrinsic
ms.assetid: 7a2a938b-87e0-476d-a348-03ea7635b6b9
ms.openlocfilehash: 1e76110c1ef0c4b98c295578189eedc99d76eeb9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396626"
---
# <a name="nop"></a>__nop

**Sezione specifica Microsoft**

Genera codice macchina specifico della piattaforma che non esegue alcuna operazione.

## <a name="syntax"></a>Sintassi

```
void __nop();
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__nop`|x86, ARM, x64, ARM64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="remarks"></a>Note

La funzione `__nop` è equivalente alle `NOP` istruzioni in linguaggio macchina. Per altre informazioni su x86 e x64, eseguire una ricerca per il documento, "architettura Intel Software Developer Manual, il Volume 2: Istruzione Set Reference,"al [Intel Corporation](https://software.intel.com/articles/intel-sdm) sito.

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__noop](../intrinsics/noop.md)
