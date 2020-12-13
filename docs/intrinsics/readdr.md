---
description: 'Altre informazioni su: __readdr'
title: __readdr
ms.date: 09/02/2019
f1_keywords:
- __readdr
helpviewer_keywords:
- __readdr intrinsic
ms.assetid: 061b05da-c85e-4052-b392-106f14bb84f1
ms.openlocfilehash: b3b5952d940db91b278344ab45edb3e8b914c094
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341009"
---
# <a name="__readdr"></a>__readdr

**Specifico di Microsoft**

Legge il valore del registro di debug specificato.

## <a name="syntax"></a>Sintassi

```C
unsigned         __readdr(unsigned int DebugRegister); /* x86 */
unsigned __int64 __readdr(unsigned int DebugRegister); /* x64 */
```

### <a name="parameters"></a>Parametri

*DebugRegister*\
in Costante compreso tra 0 e 7 che identifica il registro di debug.

## <a name="return-value"></a>Valore restituito

Valore del registro di debug specificato.

## <a name="remarks"></a>Commenti

Queste funzioni intrinseche sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__readdr`|x86, x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__readeflags](../intrinsics/readeflags.md)
