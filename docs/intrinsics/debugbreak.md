---
title: __debugbreak
ms.date: 09/02/2019
f1_keywords:
- __debugbreak_cpp
- __debugbreak
helpviewer_keywords:
- breakpoints, __debugbreak intrinsic
- __debugbreak intrinsic
ms.assetid: 1d1e1c0c-891a-4613-ae4b-d790094ba830
ms.openlocfilehash: e4cf2c85818a878417c560ddb5a80f8690e60a93
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70217930"
---
# <a name="__debugbreak"></a>__debugbreak

**Sezione specifica Microsoft**

Genera un punto di interruzione nel codice in corrispondenza del quale all'utente verrà richiesto di eseguire il debugger.

## <a name="syntax"></a>Sintassi

```C
void __debugbreak();
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|Intestazione|
|---------------|------------------|------------|
|`__debugbreak`|x86, x64, ARM, ARM64|\<intrin.h>|

## <a name="remarks"></a>Note

La `__debugbreak` funzione intrinseca del compilatore, simile a [DebugBreak](/windows/win32/api/debugapi/nf-debugapi-debugbreak), è una modalità Win32 portabile per generare un punto di interruzione.

> [!NOTE]
> Quando si esegue la compilazione con **/CLR**, una `__debugbreak` funzione che contiene verrà compilata in MSIL. `asm int 3` determina la compilazione di una funzione per il codice nativo. Per ulteriori informazioni, vedere [__asm](../assembler/inline/asm.md).

Ad esempio:

```C
main() {
   __debugbreak();
}
```

è simile a:

```C
main() {
   __asm {
      int 3
   }
}
```

in un computer x86.

In ARM64, la `__debugbreak` funzione intrinseca viene compilata nell'istruzione. `brk #0xF000`

Questa routine è disponibile solo come funzione intrinseca.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
