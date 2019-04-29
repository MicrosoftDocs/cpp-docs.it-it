---
title: __svm_clgi
ms.date: 11/04/2016
f1_keywords:
- __svm_clgi
helpviewer_keywords:
- CLGI instruction
- __svm_clgi intrinsic
ms.assetid: 6640f5ab-9472-46f9-a042-e15c4f1ff858
ms.openlocfilehash: fe25141499a19a265e2ac3ec746664ecd6cc9a2e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390308"
---
# <a name="svmclgi"></a>__svm_clgi

**Sezione specifica Microsoft**

Cancella il flag di interrupt globale.

## <a name="syntax"></a>Sintassi

```
void __svm_clgi( void );
```

## <a name="remarks"></a>Note

La funzione `__svm_clgi` è equivalente alle `CLGI` istruzioni in linguaggio macchina. Il flag di interrupt global determina se il microprocessore Ignora, vengono posticipati o gestione degli interrupt a causa di eventi, ad esempio un completamento i/o, un avviso di temperatura hardware o un'eccezione di debug.

Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: Sistema di programmazione,"documento numero 24593, revisione 3.11, la [corporation AMD](https://developer.amd.com/resources/developer-guides-manuals/) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_clgi`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__svm_stgi](../intrinsics/svm-stgi.md)