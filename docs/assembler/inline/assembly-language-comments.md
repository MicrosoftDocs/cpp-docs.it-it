---
description: 'Altre informazioni su: Assembly-Language Commenti'
title: Commenti in linguaggio assembly
ms.date: 08/30/2018
helpviewer_keywords:
- assembly language [C++], comments
- comments [C++], assembly language
- macros [C++], assembly language
- __asm keyword [C++], instructions
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
ms.openlocfilehash: 704f5275afe5cb5629b2e7667fe9107417512198
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118004"
---
# <a name="assembly-language-comments"></a>Commenti in linguaggio assembly

**Specifico di Microsoft**

Le istruzioni in un **`__asm`** blocco possono usare i commenti in linguaggio assembly:

```cpp
__asm mov ax, offset buff ; Load address of buff
```

Poiché le macro di C si espandono in una singola riga logica, evitare di utilizzare i commenti in linguaggio assembly nelle macro. (Vedere [definizione di blocchi di __asm come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md)). Un **`__asm`** blocco può inoltre contenere commenti in stile c. per ulteriori informazioni, vedere [utilizzo di c o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
