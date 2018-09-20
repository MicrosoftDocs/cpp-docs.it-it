---
title: __writemsr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __writemsr
dev_langs:
- C++
helpviewer_keywords:
- Write Model Specific Register instruction
- wrmsr instruction
- __writemsr intrinsic
ms.assetid: 938b1553-51a8-4822-a818-6bed79b0fde5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 330e02b4f3b96461bd1dcb0e6bc6765aa41bda3e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438509"
---
# <a name="writemsr"></a>__writemsr

**Sezione specifica Microsoft**

Genera la scrittura in Model Specific Register (`wrmsr`) (istruzione).

## <a name="syntax"></a>Sintassi

```
void __writemsr( 
   unsigned long Register, 
   unsigned __int64 Value 
);
```

#### <a name="parameters"></a>Parametri

*Register*<br/>
[in] Il registro specifico di modello.

*Valore*<br/>
[in] Valore da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writemsr`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Questa funzione può essere usata solo in modalità kernel e questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)