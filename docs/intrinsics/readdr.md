---
title: __readdr
ms.date: 09/02/2019
f1_keywords:
- __readdr
helpviewer_keywords:
- __readdr intrinsic
ms.assetid: 061b05da-c85e-4052-b392-106f14bb84f1
ms.openlocfilehash: fbaf9e761f9f1450ccd12dc378ab6e498aa0df08
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857879"
---
# <a name="__readdr"></a>__readdr

**Sezione specifica Microsoft**

Legge il valore del registro di debug specificato.

## <a name="syntax"></a>Sintassi

```C
unsigned         __readdr(unsigned int DebugRegister); /* x86 */
unsigned __int64 __readdr(unsigned int DebugRegister); /* x64 */
```

### <a name="parameters"></a>Parametri

\ *DebugRegister*
in Costante compreso tra 0 e 7 che identifica il registro di debug.

## <a name="return-value"></a>Valore restituito

Valore del registro di debug specificato.

## <a name="remarks"></a>Note

Queste funzioni intrinseche sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti di

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readdr`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__readeflags](../intrinsics/readeflags.md)
