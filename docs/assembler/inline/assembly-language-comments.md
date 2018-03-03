---
title: Commenti in linguaggio assembly | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- assembly language [C++], comments
- comments [C++], assembly language
- macros [C++], assembly language
- __asm keyword [C++], instructions
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ee9ab1975a1146b598d7955d15b8e91a0f396724
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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