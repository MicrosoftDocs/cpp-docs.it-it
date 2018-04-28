---
title: Direttive Macro di MASM in Assembly Inline | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- directives, macros
- inline assembly, macro directives
- macros, directives
- MASM (Microsoft Macro Assembler), inline assembly macro directives
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cfd8e3ca5fb6bf65a288c17b1754d567b2b081a8
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="masm-macro-directives-in-inline-assembly"></a>Direttive macro di MASM in assembly inline
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 L'assembler inline non è un Macro Assembler. Non è possibile utilizzare direttive macro MASM (**MACRO**, `REPT`, **IRC**, `IRP`, e `ENDM`) o gli operatori di macro (**<>**, **!** , **&**, `%`, e `.TYPE`). Un blocco `__asm` può tuttavia utilizzare le direttive per il preprocessore C. Vedere [utilizzando C o C++ in blocchi ASM](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md) per ulteriori informazioni.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)