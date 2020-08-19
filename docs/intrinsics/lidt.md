---
title: __lidt
ms.date: 09/02/2019
f1_keywords:
- __lidt
- __lidt_cpp
helpviewer_keywords:
- LIDT instruction
- __lidt intrinsic
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
ms.openlocfilehash: 87a49643e7cd11ae57dc01130f250895cf012065
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88562493"
---
# <a name="__lidt"></a>__lidt

**Specifico di Microsoft**

Carica il registro della tabella del descrittore di interrupt (IDTR) con il valore nella posizione di memoria specificata.

## <a name="syntax"></a>Sintassi

```C
void __lidt(void * Source);
```

### <a name="parameters"></a>Parametri

*Origine*\
in Puntatore al valore da copiare in IDTR.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architecture|
|---------------|------------------|
|`__lidt`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Osservazioni

La `__lidt` funzione è equivalente all' `LIDT` istruzione del computer ed è disponibile solo in modalità kernel. Per ulteriori informazioni, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Instruction Set Reference" nel sito di [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__sidt](../intrinsics/sidt.md)
