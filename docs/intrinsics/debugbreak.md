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
ms.openlocfilehash: 97932dfe0e187a13b72ae5fe70d761224721c3ff
ms.sourcegitcommit: 1acb6755e11379026a96f63facac4d33f4dc47ae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/21/2019
ms.locfileid: "67314250"
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

In ARM64, il `__debugbreak` intrinseco viene compilato nell'istruzione `brk #0xF000`.

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
