---
title: __readdr
ms.date: 11/04/2016
f1_keywords:
- __readdr
helpviewer_keywords:
- __readdr intrinsic
ms.assetid: 061b05da-c85e-4052-b392-106f14bb84f1
ms.openlocfilehash: 7e6f485eef5e3c54cb406d0c2b3abe824dbf584b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438766"
---
# <a name="readdr"></a>__readdr

Legge il valore del Registro di debug specificato.

## <a name="syntax"></a>Sintassi

```
unsigned         __readdr(unsigned int DebugRegister);
unsigned __int64 __readdr(unsigned int DebugRegister);
```

#### <a name="parameters"></a>Parametri

*DebugRegister*<br/>
[in] Registrare una costante compreso tra 0 e 7 che identifica il debug.

## <a name="return-value"></a>Valore restituito

Il valore del Registro di debug specificato.

## <a name="remarks"></a>Note

Queste funzioni intrinseche sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__readdr`|x86, x64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__readeflags](../intrinsics/readeflags.md)