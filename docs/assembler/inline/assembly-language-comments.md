---
title: Commenti in linguaggio assembly | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 048635a874db604f872b4fa87d72bd06d0455438
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="assembly-language-comments"></a>Commenti in linguaggio assembly
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Le istruzioni in un blocco `__asm` possono utilizzare i commenti in linguaggio assembly:  
  
```  
__asm mov ax, offset buff ; Load address of buff  
```  
  
 Poiché le macro di C si espandono in una singola riga logica, evitare di utilizzare i commenti in linguaggio assembly nelle macro. (Vedere [definizione dei blocchi ASM come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md).) Un `__asm` blocco può inoltre contenere commenti in stile C; per ulteriori informazioni, vedere [utilizzando C o C++ in blocchi ASM](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)