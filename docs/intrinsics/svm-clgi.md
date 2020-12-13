---
description: 'Altre informazioni su: __svm_clgi'
title: __svm_clgi
ms.date: 09/02/2019
f1_keywords:
- __svm_clgi
helpviewer_keywords:
- CLGI instruction
- __svm_clgi intrinsic
ms.assetid: 6640f5ab-9472-46f9-a042-e15c4f1ff858
ms.openlocfilehash: d0b372e28b0b119d3576dd87b34f1edf883f1337
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336857"
---
# <a name="__svm_clgi"></a>__svm_clgi

**Specifico di Microsoft**

Cancella il flag di interrupt globale.

## <a name="syntax"></a>Sintassi

```C
void __svm_clgi( void );
```

## <a name="remarks"></a>Osservazioni

La funzione `__svm_clgi` è equivalente alle `CLGI` istruzioni in linguaggio macchina. Il flag di interrupt globale determina se il microprocessore ignora, posticipa o gestisce gli interrupt, a causa di eventi quali il completamento di un I/O, un avviso di temperatura hardware o un'eccezione di debug.

Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare "AMD64 Architecture Programmer ' s Manual volume 2: System Programming" nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__svm_clgi`|x86, x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__svm_stgi](../intrinsics/svm-stgi.md)
