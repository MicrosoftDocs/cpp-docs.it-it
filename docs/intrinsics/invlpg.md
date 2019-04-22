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
ms.openlocfilehash: b4f941baae9f03ed288a99d59e2b06262962e339
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59023316"
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

*Address*<br/>
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