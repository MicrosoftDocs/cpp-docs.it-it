---
title: Direttive macro di MASM in assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- directives, macros
- inline assembly, macro directives
- macros, directives
- MASM (Microsoft Macro Assembler), inline assembly macro directives
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
ms.openlocfilehash: 964f70aeef6e0e62ac4b941b2cc26d3e7c7ef466
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87191794"
---
# <a name="masm-macro-directives-in-inline-assembly"></a>Direttive macro di MASM in assembly inline

**Specifico di Microsoft**

L'assembler inline non è un Macro Assembler. Non è possibile utilizzare le direttive macro di MASM (**macro**, `REPT` , **IRC**, `IRP` e `ENDM` ) o operatori macro ( **<>** , **!**, **&** , `%` e `.TYPE` ). Un **`__asm`** blocco può tuttavia utilizzare le direttive per il preprocessore C. Per ulteriori informazioni, vedere [utilizzo di C o C++ nei blocchi di __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
