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
ms.openlocfilehash: e1ece6d6f4040b81b55d8400407d46f165b56b53
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59024517"
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