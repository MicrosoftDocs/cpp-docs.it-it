---
title: __sidt
ms.date: 09/02/2019
f1_keywords:
- __sidt
helpviewer_keywords:
- sidt instruction
- __sidt intrinsic
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
ms.openlocfilehash: d6b685da0e02373307a3149c5b7b28213f37ad40
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222329"
---
# <a name="__sidt"></a>__sidt

**Sezione specifica Microsoft**

Archivia il valore del registro della tabella del descrittore di interrupt (IDTR) nella posizione di memoria specificata.

## <a name="syntax"></a>Sintassi

```C
void __sidt(void * Destination);
```

### <a name="parameters"></a>Parametri

*Destinazione*\
in Puntatore alla posizione di memoria in cui è archiviato il IDTR.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__sidt`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

La funzione `__sidt` è equivalente alle `SIDT` istruzioni in linguaggio macchina. Per ulteriori informazioni, cercare il documento "Intel Architecture Software Developer ' s Manual, volume 2: Riferimento al set di istruzioni "nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__lidt](../intrinsics/lidt.md)
