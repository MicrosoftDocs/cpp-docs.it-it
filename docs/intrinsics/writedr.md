---
title: __writedr
ms.date: 09/02/2019
f1_keywords:
- __writedr
helpviewer_keywords:
- __writedr intrinsic
ms.assetid: ac55c1ee-df2f-41d4-a429-6f369d2a934d
ms.openlocfilehash: 715ef7432d506c2758c9c3da913e9c0ebb24e13f
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219232"
---
# <a name="__writedr"></a>__writedr

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

## <a name="remarks"></a>Note

Queste funzioni intrinseche sono disponibili solo in modalità kernel e le routine sono disponibili solo come intrinseci.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writedr`|x86, x64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__readdr](../intrinsics/readdr.md)
