---
title: __invlpg
ms.date: 11/04/2016
f1_keywords:
- __invlpg
- __invlpg_cpp
helpviewer_keywords:
- invlpg instruction
- __invlpg intrinsic
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
ms.openlocfilehash: 0ff46aa15fbb8728ce02255209a32f01a168609b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50629385"
---
# <a name="invlpg"></a>__invlpg

**Sezione specifica Microsoft**

Genera l'errore x86 `invlpg` istruzione, che invalida il buffer di translation lookaside (TLB) per la pagina associata alla memoria a cui punta `Address`.

## <a name="syntax"></a>Sintassi

```
void __invlpg(
   void* Address
);
```

#### <a name="parameters"></a>Parametri

*Indirizzo*<br/>
[in] Un indirizzo a 64 bit.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__invlpg`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

La funzione intrinseca `__invlpg` genera un'istruzione privilegiata ed è disponibile solo in modalità kernel con un livello di privilegio (CPL) pari a 0.

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)