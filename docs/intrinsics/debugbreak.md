---
description: 'Altre informazioni su: __debugbreak'
title: __debugbreak
ms.date: 09/02/2019
f1_keywords:
- __debugbreak_cpp
- __debugbreak
helpviewer_keywords:
- breakpoints, __debugbreak intrinsic
- __debugbreak intrinsic
ms.assetid: 1d1e1c0c-891a-4613-ae4b-d790094ba830
ms.openlocfilehash: 83a670d9fa9c1f6b41c1c405c59af71c7aa0c8a1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337114"
---
# <a name="__debugbreak"></a>__debugbreak

**Specifico di Microsoft**

Genera un punto di interruzione nel codice in corrispondenza del quale all'utente verrà richiesto di eseguire il debugger.

## <a name="syntax"></a>Sintassi

```C
void __debugbreak();
```

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|Intestazione|
|---------------|------------------|------------|
|`__debugbreak`|x86, x64, ARM, ARM64|\<intrin.h>|

## <a name="remarks"></a>Commenti

La funzione `__debugbreak` intrinseca del compilatore, simile a [DebugBreak](/windows/win32/api/debugapi/nf-debugapi-debugbreak), è una modalità Win32 portabile per generare un punto di interruzione.

> [!NOTE]
> Quando si esegue la compilazione con **/CLR**, una funzione che contiene `__debugbreak` verrà compilata in MSIL. `asm int 3` determina la compilazione di una funzione per il codice nativo. Per ulteriori informazioni, vedere [__asm](../assembler/inline/asm.md).

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

In ARM64, la funzione `__debugbreak` intrinseca viene compilata nell'istruzione `brk #0xF000` .

Questa routine è disponibile solo come funzione intrinseca.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
