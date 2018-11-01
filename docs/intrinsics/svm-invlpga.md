---
title: __svm_invlpga
ms.date: 11/04/2016
f1_keywords:
- __svm_invlpga
helpviewer_keywords:
- __svm_invlpga intrinsic
- INVLPGA instruction
ms.assetid: aa6578ce-8278-464b-8815-a0fc45330915
ms.openlocfilehash: 2d356cf7426c558c8ac0312eff02c0cb9de9c859
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50544300"
---
# <a name="svminvlpga"></a>__svm_invlpga

**Sezione specifica Microsoft**

Invalida la voce di mapping indirizzo nel translation lookaside buffer del computer. I parametri specificano l'indirizzo virtuale e un identificatore dello spazio di indirizzi della pagina da invalidare.

## <a name="syntax"></a>Sintassi

```
void __svm_invlpga(void *Va, int ASID);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Valutazione della vulnerabilità*|[in] L'indirizzo virtuale della pagina da invalidare.|
|*ASID*|[in] L'indirizzo dello spazio identificatore (ASID) della pagina da invalidare.|

## <a name="remarks"></a>Note

La funzione `__svm_invlpga` è equivalente alle `INVLPGA` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: programmazione di sistema," documento numero 24593, revisione 3.11, la [corporation AMD](https://developer.amd.com/resources/developer-guides-manuals/) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_invlpga`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)