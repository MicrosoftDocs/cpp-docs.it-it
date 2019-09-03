---
title: __writemsr
ms.date: 09/02/2019
f1_keywords:
- __writemsr
helpviewer_keywords:
- Write Model Specific Register instruction
- wrmsr instruction
- __writemsr intrinsic
ms.assetid: 938b1553-51a8-4822-a818-6bed79b0fde5
ms.openlocfilehash: 7819477edb8d4e6b18a1213a73ba67065ea7ff57
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219140"
---
# <a name="__writemsr"></a>__writemsr

**Sezione specifica Microsoft**

Genera l'istruzione Register (`wrmsr`) specifica del modello di scrittura.

## <a name="syntax"></a>Sintassi

```C
void __writemsr(
   unsigned long Register,
   unsigned __int64 Value
);
```

### <a name="parameters"></a>Parametri

*Registro*\
in Registro specifico del modello.

*Valore*\
in Valore da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writemsr`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Questa funzione può essere utilizzata solo in modalità kernel e questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
