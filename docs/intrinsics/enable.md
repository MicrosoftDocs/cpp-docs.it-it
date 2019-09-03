---
title: _enable
ms.date: 09/02/2019
f1_keywords:
- _enable
- _enable_cpp
helpviewer_keywords:
- enable intrinsic
- _enable intrinsic
- ssm instruction
ms.assetid: 8bee669b-6bd8-4e25-9383-bb7d57295b4d
ms.openlocfilehash: 7adcd4eac807b8d0937efbbe6d89f8ad6dcb157c
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217880"
---
# <a name="_enable"></a>_enable

**Sezione specifica Microsoft**

Abilita gli interrupt.

## <a name="syntax"></a>Sintassi

```C
void _enable(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_enable`|x86, ARM, x64, ARM64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

`_enable` indica al processore di impostare il flag di interrupt. Su sistemi x86, questa funzione genera l'istruzione Set Interrupt Flag (`sti`).

Questa funzione è disponibile solo in modalità kernel. Se usato in modalità utente, viene generata un'eccezione istruzione privilegiata.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
