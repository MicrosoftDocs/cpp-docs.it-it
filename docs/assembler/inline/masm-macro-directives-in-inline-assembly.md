---
title: "Direttive macro MASM nell&#39;assembly inline | Microsoft Docs"
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
  - "direttive, macro"
  - "assembly inline, direttive macro"
  - "macro, direttive"
  - "MASM (Microsoft Macro Assembler), direttive macro dell'assembly inline"
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttive macro MASM nell&#39;assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 L'assembler inline non è un Macro Assembler.  Non è possibile utilizzare le direttive di macro di MASM \(**MACRO**, `REPT`, **IRC**, `IRP` e `ENDM`\) o gli operatori di macro \(**\<\>\!**, **&**, `%` e `.TYPE`\).  Un blocco `__asm` può tuttavia utilizzare le direttive per il preprocessore C.  Per ulteriori informazioni, vedere [Utilizzo di C o C\+\+ in \_\_asm Blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Utilizzo di linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)