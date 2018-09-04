---
title: Operatori e direttive dati in Assembly Inline | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
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
ms.openlocfilehash: 6aff2f4c5ce5e7f5592aa9ec707d002c57f0eac0
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43678737"
---
# <a name="data-directives-and-operators-in-inline-assembly"></a>Operatori e direttive dati in assembly inline

**Sezione specifica Microsoft**

Sebbene un blocco `__asm` possa fare riferimento a oggetti e tipi di dati C o C++, non può definire gli oggetti dati con le direttive o gli operatori di MASM. In particolare, non è possibile utilizzare le direttive definition **DB**, `DW`, **gg**, `DQ`, `DT`, e `DF`, o gli operatori `DUP` o **Ciò**. Anche le strutture e i record di MASM non sono disponibili. L'assembler inline non accetta le direttive `STRUC`, `RECORD`, **larghezza**, o **maschera**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>