---
description: "Altre informazioni su: direttive e operatori di dati nell'assembly inline"
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
ms.openlocfilehash: a2b11aa95723245fc977f97f42b1de2f6c7306ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117952"
---
# <a name="data-directives-and-operators-in-inline-assembly"></a>Operatori e direttive dati in assembly inline

**Specifico di Microsoft**

Sebbene un **`__asm`** blocco possa fare riferimento a oggetti e tipi di dati C o C++, non può definire oggetti dati con direttive o operatori di MASM. In particolare, non è possibile usare le direttive di definizione **DB**, `DW` , **DD**,, `DQ` `DT` e `DF` o gli `DUP` operatori o. Anche le strutture e i record di MASM non sono disponibili. L'assembler inline non accetta le direttive `STRUC` , `RECORD` , **Width** o **mask**.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
