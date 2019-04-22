---
title: _disable
ms.date: 11/04/2016
f1_keywords:
- _disable_cpp
- _disable
helpviewer_keywords:
- _disable intrinsic
- rsm instruction
- disable intrinsic
ms.assetid: 52da3df9-815c-4524-9839-6d1742cff5c6
ms.openlocfilehash: 93db063c6b53f0bec739ba134728b83379a21f53
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59024679"
---
# <a name="disable"></a>_disable

**Sezione specifica Microsoft**

Disabilita gli interrupt.

## <a name="syntax"></a>Sintassi

```
void _disable(void);
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_disable`|x86, ARM, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

`_disable` indica al processore di deselezionare il flag di interrupt. Su sistemi x86, questa funzione genera l'istruzione Clear Interrupt Flag (`cli`).

Questa funzione è disponibile solo in modalità kernel. Se usato in modalità utente, viene generata un'eccezione istruzione privilegiata in fase di esecuzione.

Su piattaforme ARM, questa routine è disponibile solo come un intrinseco.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)