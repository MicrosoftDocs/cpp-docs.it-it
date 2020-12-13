---
description: 'Altre informazioni su: __halt'
title: __halt
ms.date: 09/02/2019
f1_keywords:
- __halt
- __halt_cpp
helpviewer_keywords:
- __halt intrinsic
- HLT instruction
ms.assetid: a074f44a-101c-45a5-8a5e-cfd223c34002
ms.openlocfilehash: e38478b14b59c910e6d6ac12f9cb69fa369e3459
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336977"
---
# <a name="__halt"></a>__halt

**Specifico di Microsoft**

Arresta il microprocessore fino a quando non si verifica un interrupt abilitato, un interrupt non mascherabile (NMI) o una reimpostazione.

## <a name="syntax"></a>Sintassi

```C
void __halt( void );
```

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__halt`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La `__halt` funzione è equivalente all' `HLT` istruzione del computer ed è disponibile solo in modalità kernel. Per ulteriori informazioni, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Instruction Set Reference" nel sito di [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
