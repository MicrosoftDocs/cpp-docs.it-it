---
title: Direttive macro di MASM in assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- directives, macros
- inline assembly, macro directives
- macros, directives
- MASM (Microsoft Macro Assembler), inline assembly macro directives
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
ms.openlocfilehash: 7e1bed782d28a5bf7c934c3f57f50aae70038578
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62167257"
---
# <a name="masm-macro-directives-in-inline-assembly"></a>Direttive macro di MASM in assembly inline

**Sezione specifica Microsoft**

L'assembler inline non è un Macro Assembler. Non è possibile usare direttive macro di MASM (**MACRO**, `REPT`, **IRC**, `IRP`, e `ENDM`) o gli operatori di macro (**<>**, **!** , **&**, `%`, e `.TYPE`). Un blocco `__asm` può tuttavia utilizzare le direttive per il preprocessore C. Visualizzare [utilizzo di C o C++ in blocchi ASM](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md) per altre informazioni.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>