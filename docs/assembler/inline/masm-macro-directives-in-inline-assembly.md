---
title: Direttive macro di MASM in assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- directives, macros
- inline assembly, macro directives
- macros, directives
- MASM (Microsoft Macro Assembler), inline assembly macro directives
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
ms.openlocfilehash: 38b73346fc52f6b5efe478f8eb960ad049fae924
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169279"
---
# <a name="masm-macro-directives-in-inline-assembly"></a>Direttive macro di MASM in assembly inline

**Sezione specifica Microsoft**

L'assembler inline non è un Macro Assembler. Non è possibile utilizzare le direttive macro di MASM (**macro**, `REPT`, **IRC**, `IRP`e `ENDM`) o operatori di macro ( **<>** , **!** , **&** , `%`e `.TYPE`). Un blocco `__asm` può tuttavia utilizzare le direttive per il preprocessore C. Per ulteriori informazioni, vedere [utilizzo di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
