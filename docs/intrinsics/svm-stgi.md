---
title: __svm_stgi
ms.date: 11/04/2016
f1_keywords:
- __svm_stgi
helpviewer_keywords:
- __svm_stgi intrinsic
- STGI instruction
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
ms.openlocfilehash: 9f7e35bbecf4051e4a47c32753b3a221dd2a4cc1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50494666"
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

Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: programmazione di sistema," documento numero 24593, revisione 3.11, la [corporation AMD](https://developer.amd.com/resources/developer-guides-manuals/) sito.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_stgi`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__svm_clgi](../intrinsics/svm-clgi.md)