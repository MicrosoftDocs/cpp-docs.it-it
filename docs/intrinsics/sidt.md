---
description: 'Altre informazioni su: __sidt'
title: __sidt
ms.date: 09/02/2019
f1_keywords:
- __sidt
helpviewer_keywords:
- sidt instruction
- __sidt intrinsic
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
ms.openlocfilehash: 075351bc10981dd8453381e9ce9393a046dfd884
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306963"
---
# <a name="__sidt"></a>__sidt

**Specifico di Microsoft**

Archivia il valore del registro della tabella del descrittore di interrupt (IDTR) nella posizione di memoria specificata.

## <a name="syntax"></a>Sintassi

```C
void __sidt(void * Destination);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
in Puntatore alla posizione di memoria in cui è archiviato il IDTR.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__sidt`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

La funzione `__sidt` è equivalente alle `SIDT` istruzioni in linguaggio macchina. Per ulteriori informazioni, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Instruction Set Reference" nel sito di [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__lidt](../intrinsics/lidt.md)
