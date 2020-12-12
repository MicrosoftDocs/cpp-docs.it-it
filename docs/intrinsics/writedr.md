---
description: 'Altre informazioni su: __writedr'
title: __writedr
ms.date: 09/02/2019
f1_keywords:
- __writedr
helpviewer_keywords:
- __writedr intrinsic
ms.assetid: ac55c1ee-df2f-41d4-a429-6f369d2a934d
ms.openlocfilehash: 3a52b8985a28268c430cbb1bfb7b2494e9004820
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331882"
---
# <a name="__writedr"></a>__writedr

**Specifico di Microsoft**

Scrive il valore specificato nel registro di debug specificato.

## <a name="syntax"></a>Sintassi

```C
void __writedr(unsigned DebugRegister, unsigned DebugValue); /* x86 */
void __writedr(unsigned DebugRegister, unsigned __int64 DebugValue); /* x64 */
```

### <a name="parameters"></a>Parametri

*DebugRegister*\
in Numero compreso tra 0 e 7 che identifica il registro di debug.

*DebugValue*\
in Valore da scrivere nel registro di debug.

## <a name="remarks"></a>Commenti

Queste funzioni intrinseche sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__writedr`|x86, x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__readdr](../intrinsics/readdr.md)
