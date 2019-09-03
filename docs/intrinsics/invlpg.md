---
title: __invlpg
ms.date: 09/02/2019
f1_keywords:
- __invlpg
- __invlpg_cpp
helpviewer_keywords:
- invlpg instruction
- __invlpg intrinsic
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
ms.openlocfilehash: ba8bd81498f805992336b0dc4163fe18fa157a2c
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221892"
---
# <a name="__invlpg"></a>__invlpg

**Sezione specifica Microsoft**

Genera l'istruzione `invlpg` x86, che invalida translation lookaside buffer (tlb) per la pagina associata alla memoria a cui punta l' *Indirizzo*.

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

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__invlpg`|x86, x64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Il intrinseco `__invlpg` emette un'istruzione con privilegi ed è disponibile solo in modalità kernel con un livello di privilegio (CPL) pari a 0.

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
