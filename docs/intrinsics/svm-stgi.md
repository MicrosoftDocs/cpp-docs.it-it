---
title: __svm_stgi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __svm_stgi
dev_langs:
- C++
helpviewer_keywords:
- __svm_stgi intrinsic
- STGI instruction
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fd4d2593621c7c2cc36f84580a757e98f5e48c92
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431255"
---
# <a name="svmstgi"></a>__svm_stgi

**Sezione specifica Microsoft**

Imposta il flag di interrupt globale.

## <a name="syntax"></a>Sintassi

```
void __svm_stgi(void);
```

## <a name="remarks"></a>Note

Il `__svm_stgi` è equivalente alla funzione il `STGI` istruzioni in linguaggio macchina. Il flag di interrupt global determina se il microprocessore Ignora, vengono posticipati o gestione degli interrupt a causa di eventi, ad esempio un completamento i/o, un avviso di temperatura hardware o un'eccezione di debug.

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