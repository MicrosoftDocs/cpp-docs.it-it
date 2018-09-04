---
title: Direttive Macro di MASM in Assembly Inline | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
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
ms.openlocfilehash: 35ad22a9a4b79a31665ab6b156f8174d395bb0ee
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43687973"
---
# <a name="masm-macro-directives-in-inline-assembly"></a>Direttive macro di MASM in assembly inline

**Sezione specifica Microsoft**

L'assembler inline non è un Macro Assembler. Non è possibile usare direttive macro di MASM (**MACRO**, `REPT`, **IRC**, `IRP`, e `ENDM`) o gli operatori di macro (**<>**, **!** , **&**, `%`, e `.TYPE`). Un blocco `__asm` può tuttavia utilizzare le direttive per il preprocessore C. Visualizzare [utilizzo di C o C++ in blocchi ASM](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md) per altre informazioni.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>