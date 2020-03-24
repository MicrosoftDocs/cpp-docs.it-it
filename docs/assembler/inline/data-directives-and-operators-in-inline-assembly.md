---
title: Operatori e direttive dati in assembly inline
ms.date: 08/30/2018
helpviewer_keywords:
- data directives [C++]
- __asm keyword [C++], referencing limitations
- MASM (Microsoft Macro Assembler), directives
- directives [C++], MASM
- MASM (Microsoft Macro Assembler), structures
- operators [MASM]
- inline assembly, operators
- inline assembly, data directives
- MASM (Microsoft Macro Assembler), operators
- structures [C++], MASM
ms.assetid: fb7410c7-156a-4131-bcfc-211aa70533e3
ms.openlocfilehash: 916dce0346bebfc5ff65ca558ae75317a187660a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169539"
---
# <a name="data-directives-and-operators-in-inline-assembly"></a>Operatori e direttive dati in assembly inline

**Sezione specifica Microsoft**

Sebbene un blocco `__asm` possa fare riferimento a oggetti e tipi di dati C o C++, non può definire gli oggetti dati con le direttive o gli operatori di MASM. In particolare, non è possibile usare le direttive di definizione **DB**, `DW`, **DD**, `DQ`, `DT`e `DF`oppure gli operatori `DUP` **o.** Anche le strutture e i record di MASM non sono disponibili. L'assembler inline non accetta le direttive `STRUC`, `RECORD`, **Width**o **mask**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
