---
description: 'Altre informazioni su: __lidt'
title: __lidt
ms.date: 09/02/2019
f1_keywords:
- __lidt
- __lidt_cpp
helpviewer_keywords:
- LIDT instruction
- __lidt intrinsic
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
ms.openlocfilehash: 9b9f4bc51bab07a578671932c16548a0a49d155b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167773"
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

|Intrinsic|Architettura|
|---------------|------------------|
|`__lidt`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La `__lidt` funzione è equivalente all' `LIDT` istruzione del computer ed è disponibile solo in modalità kernel. Per ulteriori informazioni, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Instruction Set Reference" nel sito di [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__sidt](../intrinsics/sidt.md)
