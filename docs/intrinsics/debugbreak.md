---
title: __debugbreak
ms.date: 11/04/2016
f1_keywords:
- __debugbreak_cpp
- __debugbreak
helpviewer_keywords:
- breakpoints, __debugbreak intrinsic
- __debugbreak intrinsic
ms.assetid: 1d1e1c0c-891a-4613-ae4b-d790094ba830
ms.openlocfilehash: 8e5d53998b6ca37d2f60e9b86aed8df07c256ded
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65708181"
---
# <a name="debugbreak"></a>__debugbreak

**Sezione specifica Microsoft**

Genera un punto di interruzione nel codice in corrispondenza del quale all'utente verrà richiesto di eseguire il debugger.

## <a name="syntax"></a>Sintassi

```
void __debugbreak();
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`__debugbreak`|x86, x64, ARM, ARM64|\<intrin.h>|

## <a name="remarks"></a>Note

Il `__debugbreak` compilatore intrinseche, in modo analogo a [DebugBreak](https://msdn.microsoft.com/library/windows/desktop/ms679297.aspx), è un modo Win32 portabile da un punto di interruzione.

> [!NOTE]
>  Durante la compilazione con **/clr**, una funzione contenente `__debugbreak` verrà compilata per MSIL. `asm int 3` determina la compilazione di una funzione per il codice nativo. Per altre informazioni, vedere [ASM](../assembler/inline/asm.md).

Ad esempio:

```
main() {
   __debugbreak();
}
```

è simile a:

```
main() {
   __asm {
      int 3
   }
}
```

in un computer x86.

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
