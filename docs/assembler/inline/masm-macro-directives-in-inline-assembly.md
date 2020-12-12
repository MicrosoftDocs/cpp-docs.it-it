---
description: 'Altre informazioni su: direttive macro di MASM in assembly inline'
title: Direttive macro di MASM in assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- directives, macros
- inline assembly, macro directives
- macros, directives
- MASM (Microsoft Macro Assembler), inline assembly macro directives
ms.assetid: 83643a09-1699-40a8-8ef2-13502bc4ac2c
ms.openlocfilehash: 131066ad117e0f314ba0900e8ecd19eb4843c25b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117562"
---
# <a name="masm-macro-directives-in-inline-assembly"></a>Direttive macro di MASM in assembly inline

**Specifico di Microsoft**

L'assembler inline non è un Macro Assembler. Non è possibile utilizzare le direttive macro di MASM (**macro**, `REPT` , **IRC**, `IRP` e `ENDM` ) o operatori macro ( **<>** , **!**, **&** , `%` e `.TYPE` ). Un **`__asm`** blocco può tuttavia utilizzare le direttive per il preprocessore C. Per ulteriori informazioni, vedere [utilizzo di C o C++ nei blocchi di __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
