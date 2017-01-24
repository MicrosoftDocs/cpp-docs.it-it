---
title: "Commenti in linguaggio assembly | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__asm (parola chiave) [C++], istruzioni"
  - "linguaggio dell'assembly [C++], commenti"
  - "TODO (commenti) [C++], linguaggio dell'assembly"
  - "macro [C++], linguaggio dell'assembly"
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Commenti in linguaggio assembly
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Specifici di Microsoft  
 Le istruzioni in un  `__asm`blocco può utilizzare i commenti del linguaggio assembly:  
  
```  
__asm mov ax, offset buff ; Load address of buff  
```  
  
 Poiché C macro si espandono in una riga logica, evitare di utilizzare i commenti del linguaggio assembly nelle macro.  \(Vedere  [definizione blocchi ASM come macro C](../../assembler/inline/defining-asm-blocks-as-c-macros.md).\) Un  `__asm`blocco può contenere anche i commenti di tipo C; Per ulteriori informazioni, vedere  [utilizzando C o C\+\+ in blocchi ASM](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).  
  
 **FINE specifico di Microsoft**  
  
## Vedere anche  
 [Utilizzo di linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)