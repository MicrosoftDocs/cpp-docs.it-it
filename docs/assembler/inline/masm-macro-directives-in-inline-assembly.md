---
title: Direttive Macro di MASM in Assembly Inline | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- directives, macros
- inline assembly, macro directives
- macros, directives
- MASM (Microsoft Macro Assembler), inline assembly macro directives
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0df9f8584b87e511c43430a5c0df7dac61805ede
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="masm-macro-directives-in-inline-assembly"></a>Direttive macro di MASM in assembly inline
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 L'assembler inline non è un Macro Assembler. Non è possibile utilizzare direttive macro MASM (**MACRO**, `REPT`, **IRC**, `IRP`, e `ENDM`) o gli operatori di macro (**<>**, **!** ,  **&** , `%`, e `.TYPE`). Un blocco `__asm` può tuttavia utilizzare le direttive per il preprocessore C. Vedere [utilizzando C o C++ in blocchi ASM](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md) per ulteriori informazioni.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)