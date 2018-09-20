---
title: __lidt | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __lidt
- __lidt_cpp
dev_langs:
- C++
helpviewer_keywords:
- LIDT instruction
- __lidt intrinsic
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f1c2424b949b0276e500b46c34b943b0ef0eb597
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46399119"
---
# <a name="lidt"></a>__lidt

**Sezione specifica Microsoft**

Carica il Registro di tabella di descrittore di interrupt (IDTR) con il valore nella posizione di memoria specificata.

## <a name="syntax"></a>Sintassi

```
void __lidt(void * Source);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Source*|[in] Puntatore al valore di IDTR da copiare.|

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__lidt`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Il `__lidt` è equivalente alla funzione il `LIDT` istruzioni in linguaggio macchina ed è disponibile solo in modalità kernel. Per altre informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento di Set di istruzioni," al [Intel Corporation](https://software.intel.com/en-us/articles/intel-sdm) sito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__sidt](../intrinsics/sidt.md)