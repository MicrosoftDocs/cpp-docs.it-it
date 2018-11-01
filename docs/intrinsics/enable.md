---
title: _enable
ms.date: 11/04/2016
f1_keywords:
- _enable
- _enable_cpp
helpviewer_keywords:
- enable intrinsic
- _enable intrinsic
- ssm instruction
ms.assetid: 8bee669b-6bd8-4e25-9383-bb7d57295b4d
ms.openlocfilehash: 1d129db17b489972555efb0b5df2de52e01fa649
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50631240"
---
# <a name="enable"></a>_enable

**Sezione specifica Microsoft**

Abilita gli interrupt.

## <a name="syntax"></a>Sintassi

```
void _enable(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_enable`|x86, ARM, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

`_enable` indica al processore di impostare il flag di interrupt. Su sistemi x86, questa funzione genera l'istruzione Set Interrupt Flag (`sti`).

Questa funzione è disponibile solo in modalità kernel. Se usato in modalità utente, viene generata un'eccezione istruzione privilegiata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)