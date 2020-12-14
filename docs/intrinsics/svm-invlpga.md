---
description: 'Altre informazioni su: __svm_invlpga'
title: __svm_invlpga
ms.date: 09/02/2019
f1_keywords:
- __svm_invlpga
helpviewer_keywords:
- __svm_invlpga intrinsic
- INVLPGA instruction
ms.assetid: aa6578ce-8278-464b-8815-a0fc45330915
ms.openlocfilehash: dc976f535381fcfdfec0da5c1a280c4df281c114
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314750"
---
# <a name="__svm_invlpga"></a>__svm_invlpga

**Specifico di Microsoft**

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

## <a name="remarks"></a>Commenti

La funzione `__svm_invlpga` è equivalente alle `INVLPGA` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento relativo al volume 2 della programmazione di sistema "AMD64 Architecture Programmer", il documento numero 24593, revisione 3,11, nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__svm_invlpga`|x86, x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
