---
title: __invlpg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __invlpg
- __invlpg_cpp
dev_langs:
- C++
helpviewer_keywords:
- invlpg instruction
- __invlpg intrinsic
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 01a35d110c56bba6b89c5bf34dedec61bde90794
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46403214"
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