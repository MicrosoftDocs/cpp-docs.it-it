---
title: Commenti in linguaggio assembly
ms.date: 08/30/2018
helpviewer_keywords:
- assembly language [C++], comments
- comments [C++], assembly language
- macros [C++], assembly language
- __asm keyword [C++], instructions
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
ms.openlocfilehash: a8b2c98c61d58d72e78dbffd4f3b6ed7707d2d7a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169604"
---
# <a name="assembly-language-comments"></a>Commenti in linguaggio assembly

**Sezione specifica Microsoft**

Le istruzioni in un blocco `__asm` possono utilizzare i commenti in linguaggio assembly:

```cpp
__asm mov ax, offset buff ; Load address of buff
```

Poiché le macro di C si espandono in una singola riga logica, evitare di utilizzare i commenti in linguaggio assembly nelle macro. (Vedere [definizione di blocchi di __asm come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md)). Un blocco di `__asm` può inoltre contenere commenti in stile C. Per ulteriori informazioni, vedere [utilizzo di C C++ o in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
