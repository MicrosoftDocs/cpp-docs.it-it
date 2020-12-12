---
description: 'Altre informazioni su: __invlpg'
title: __invlpg
ms.date: 09/02/2019
f1_keywords:
- __invlpg
- __invlpg_cpp
helpviewer_keywords:
- invlpg instruction
- __invlpg intrinsic
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
ms.openlocfilehash: 16d8f51c8bf36ea94be7b1325ee5bed256c29693
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167903"
---
# <a name="__invlpg"></a>__invlpg

**Specifico di Microsoft**

Genera l' `invlpg` istruzione x86, che invalida translation lookaside buffer (tlb) per la pagina associata alla memoria a cui punta l' *Indirizzo*.

## <a name="syntax"></a>Sintassi

```C
void __invlpg(
   void* Address
);
```

### <a name="parameters"></a>Parametri

*Indirizzo*\
in Indirizzo a 64 bit.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__invlpg`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Il intrinseco `__invlpg` emette un'istruzione con privilegi ed è disponibile solo in modalità kernel con un livello di privilegio (CPL) pari a 0.

Questa routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
