---
title: __svm_clgi
ms.date: 09/02/2019
f1_keywords:
- __svm_clgi
helpviewer_keywords:
- CLGI instruction
- __svm_clgi intrinsic
ms.assetid: 6640f5ab-9472-46f9-a042-e15c4f1ff858
ms.openlocfilehash: 740c76e5dcc8f94b9257272624a6ad3c1f9726c1
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219965"
---
# <a name="__svm_clgi"></a>__svm_clgi

**Sezione specifica Microsoft**

Cancella il flag di interrupt globale.

## <a name="syntax"></a>Sintassi

```C
void __svm_clgi( void );
```

## <a name="remarks"></a>Note

La funzione `__svm_clgi` è equivalente alle `CLGI` istruzioni in linguaggio macchina. Il flag di interrupt globale determina se il microprocessore ignora, posticipa o gestisce gli interrupt, a causa di eventi quali il completamento di un I/O, un avviso di temperatura hardware o un'eccezione di debug.

Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare "AMD64 Architecture Programmer ' s Manual volume 2: Programmazione di sistema "nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_clgi`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__svm_stgi](../intrinsics/svm-stgi.md)
