---
title: __svm_invlpga
ms.date: 09/02/2019
f1_keywords:
- __svm_invlpga
helpviewer_keywords:
- __svm_invlpga intrinsic
- INVLPGA instruction
ms.assetid: aa6578ce-8278-464b-8815-a0fc45330915
ms.openlocfilehash: e0f8ef02efdb64f70bb65f6f017449fcc03beca1
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219895"
---
# <a name="__svm_invlpga"></a>__svm_invlpga

**Sezione specifica Microsoft**

Invalida la voce di mapping degli indirizzi nel buffer di ricerca della traduzione del computer. I parametri specificano l'indirizzo virtuale e l'identificatore dello spazio di indirizzi della pagina da invalidare.

## <a name="syntax"></a>Sintassi

```C
void __svm_invlpga(void *Vaddr, int as_id);
```

### <a name="parameters"></a>Parametri

*Vaddr*\
in Indirizzo virtuale della pagina da invalidare.

*as_id*\
in Identificatore dello spazio indirizzi (ASID) della pagina da invalidare.

## <a name="remarks"></a>Note

La funzione `__svm_invlpga` è equivalente alle `INVLPGA` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "volume 2 Manual Programmer Architecture AMD64: Programmazione del sistema, "numero di documento 24593, revisione 3,11, nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_invlpga`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
