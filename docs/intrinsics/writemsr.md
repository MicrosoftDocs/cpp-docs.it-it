---
title: __writemsr
ms.date: 11/04/2016
f1_keywords:
- __writemsr
helpviewer_keywords:
- Write Model Specific Register instruction
- wrmsr instruction
- __writemsr intrinsic
ms.assetid: 938b1553-51a8-4822-a818-6bed79b0fde5
ms.openlocfilehash: ac57bac1d132c581ee12048b89d13ed1d1fdb7da
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59026344"
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