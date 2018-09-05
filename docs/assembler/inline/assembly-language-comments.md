---
title: Commenti in linguaggio assembly | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- assembly language [C++], comments
- comments [C++], assembly language
- macros [C++], assembly language
- __asm keyword [C++], instructions
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 02f4c493bac5c2a066dc0b24e2a566d49345288d
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43683326"
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