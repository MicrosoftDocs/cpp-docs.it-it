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
ms.openlocfilehash: bcacb0cdd26181da3cf80a582866c1e30567d043
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87192353"
---
# <a name="data-directives-and-operators-in-inline-assembly"></a>Operatori e direttive dati in assembly inline

**Specifico di Microsoft**

Sebbene un **`__asm`** blocco possa fare riferimento a oggetti e tipi di dati C o C++, non può definire oggetti dati con direttive o operatori di MASM. In particolare, non è possibile usare le direttive di definizione **DB**, `DW` , **DD**,, `DQ` `DT` e `DF` o gli `DUP` operatori **THIS**o. Anche le strutture e i record di MASM non sono disponibili. L'assembler inline non accetta le direttive `STRUC` , `RECORD` , **Width**o **mask**.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
