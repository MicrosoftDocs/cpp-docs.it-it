---
title: __svm_stgi
ms.date: 09/02/2019
f1_keywords:
- __svm_stgi
helpviewer_keywords:
- __svm_stgi intrinsic
- STGI instruction
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
ms.openlocfilehash: 6bd731951b440d3d2597d54c9a52d9f8640a5c5f
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219842"
---
# <a name="__svm_stgi"></a>__svm_stgi

**Sezione specifica Microsoft**

Imposta il flag di interrupt globale.

## <a name="syntax"></a>Sintassi

```C
void __svm_stgi(void);
```

## <a name="remarks"></a>Note

La funzione `__svm_stgi` è equivalente alle `STGI` istruzioni in linguaggio macchina. Il flag di interrupt globale determina se il microprocessore ignora, posticipa o gestisce gli interrupt, a causa di eventi quali il completamento di un I/O, un avviso di temperatura hardware o un'eccezione di debug.

Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare "AMD64 Architecture Programmer ' s Manual volume 2: Programmazione di sistema "nel sito di [AMD Corporation](https://developer.amd.com/resources/developer-guides-manuals/) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__svm_stgi`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__svm_clgi](../intrinsics/svm-clgi.md)
