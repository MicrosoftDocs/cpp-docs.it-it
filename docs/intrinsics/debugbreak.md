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
ms.openlocfilehash: b52c34014402a235e03c45f82dcd1e5c542e4919
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59023100"
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
|`__debugbreak`|x86, ARM, x64|\<intrin.h>|

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