---
description: 'Altre informazioni su: _disable'
title: _disable
ms.date: 09/02/2019
f1_keywords:
- _disable_cpp
- _disable
helpviewer_keywords:
- _disable intrinsic
- rsm instruction
- disable intrinsic
ms.assetid: 52da3df9-815c-4524-9839-6d1742cff5c6
ms.openlocfilehash: c118315a4fea2dad401cc5c6f3621a8ec3b1794c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337101"
---
# <a name="_disable"></a>_disable

**Specifico di Microsoft**

Disabilita gli interrupt.

## <a name="syntax"></a>Sintassi

```C
void _disable(void);
```

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_disable`|x86, ARM, x64, ARM64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

`_disable` indica al processore di deselezionare il flag di interrupt. Su sistemi x86, questa funzione genera l'istruzione Clear Interrupt Flag (`cli`).

Questa funzione è disponibile solo in modalità kernel. Se usato in modalità utente, viene generata un'eccezione istruzione privilegiata in fase di esecuzione.

Sulle piattaforme ARM e ARM64 questa routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
