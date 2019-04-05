---
title: __writedr
ms.date: 11/04/2016
f1_keywords:
- __writedr
helpviewer_keywords:
- __writedr intrinsic
ms.assetid: ac55c1ee-df2f-41d4-a429-6f369d2a934d
ms.openlocfilehash: c495e8c80029680512358198ca8fb0ce6e65414d
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59022481"
---
# <a name="writedr"></a>__writedr

Scrive il valore specificato per la registrazione di debug specificato.

## <a name="syntax"></a>Sintassi

```
void __writedr(unsigned DebugRegister, unsigned DebugValue);
void __writedr(unsigned DebugRegister, unsigned __int64 DebugValue);
```

#### <a name="parameters"></a>Parametri

*DebugRegister*<br/>
[in] Registrare un numero compreso tra 0 e 7 che identifica il debug.

*DebugValue*<br/>
[in] Registrare un valore da scrivere per il debug.

## <a name="remarks"></a>Note

Queste funzioni intrinseche sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writedr`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__readdr](../intrinsics/readdr.md)