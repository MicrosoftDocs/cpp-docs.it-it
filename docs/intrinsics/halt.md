---
title: __halt
ms.date: 09/02/2019
f1_keywords:
- __halt
- __halt_cpp
helpviewer_keywords:
- __halt intrinsic
- HLT instruction
ms.assetid: a074f44a-101c-45a5-8a5e-cfd223c34002
ms.openlocfilehash: 66f5e05e7673523966ef35ac743fc585930b511c
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222157"
---
# <a name="__halt"></a>__halt

**Sezione specifica Microsoft**

Arresta il microprocessore fino a quando non si verifica un interrupt abilitato, un interrupt non mascherabile (NMI) o una reimpostazione.

## <a name="syntax"></a>Sintassi

```C
void __halt( void );
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__halt`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La `__halt` funzione è equivalente all'istruzione `HLT` del computer ed è disponibile solo in modalità kernel. Per ulteriori informazioni, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Riferimento al set di istruzioni "nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
