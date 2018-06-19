---
title: Operatori e direttive dati in Assembly Inline | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0bd3bc686cc8cee1a02e9df936f80f542bec26bd
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32051385"
---
# <a name="data-directives-and-operators-in-inline-assembly"></a>Operatori e direttive dati in assembly inline
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Sebbene un blocco `__asm` possa fare riferimento a oggetti e tipi di dati C o C++, non può definire gli oggetti dati con le direttive o gli operatori di MASM. In particolare, non è possibile utilizzare le direttive definizione **DB**, `DW`, **gg**, `DQ`, `DT`, e `DF`, o gli operatori `DUP` o  **QUESTO**. Anche le strutture e i record di MASM non sono disponibili. L'assembler inline non accetta le direttive `STRUC`, `RECORD`, **larghezza**, o **MASK**.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)