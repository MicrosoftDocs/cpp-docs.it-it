---
title: Commenti in linguaggio assembly
ms.date: 08/30/2018
helpviewer_keywords:
- assembly language [C++], comments
- comments [C++], assembly language
- macros [C++], assembly language
- __asm keyword [C++], instructions
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
ms.openlocfilehash: fc37658eccd99b61d45aa9a9a7a2675ef90eee89
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50578641"
---
# <a name="assembly-language-comments"></a>Commenti in linguaggio assembly

**Sezione specifica Microsoft**

Le istruzioni in un blocco `__asm` possono utilizzare i commenti in linguaggio assembly:

```cpp
__asm mov ax, offset buff ; Load address of buff
```

Poiché le macro di C si espandono in una singola riga logica, evitare di utilizzare i commenti in linguaggio assembly nelle macro. (Vedere [definizione dei blocchi ASM come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md).) Un' `__asm` blocco può inoltre contenere commenti in stile C; per altre informazioni, vedere [utilizzo di C o C++ in blocchi ASM](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>