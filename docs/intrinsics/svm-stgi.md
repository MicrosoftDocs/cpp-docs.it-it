---
title: __svm_stgi
ms.date: 11/04/2016
f1_keywords:
- __svm_stgi
helpviewer_keywords:
- __svm_stgi intrinsic
- STGI instruction
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
ms.openlocfilehash: ea138f17a24af21afa937991f77bd1e2a689c3f7
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59024790"
---
# <a name="svmstgi"></a>__svm_stgi

**Sezione specifica Microsoft**

Imposta il flag di interrupt globale.

## <a name="syntax"></a>Sintassi

```
void __svm_stgi(void);
```

## <a name="remarks"></a>Note

La funzione `__svm_stgi` è equivalente alle `STGI` istruzioni in linguaggio macchina. Il flag di interrupt global determina se il microprocessore Ignora, vengono posticipati o gestione degli interrupt a causa di eventi, ad esempio un completamento i/o, un avviso di temperatura hardware o un'eccezione di debug.

Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: Sistema di programmazione,"documento numero 24593, revisione 3.11, la [corporation AMD](https://developer.amd.com/resources/developer-guides-manuals/) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_stgi`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__svm_clgi](../intrinsics/svm-clgi.md)