---
title: Direttive EVEN e ALIGN
ms.date: 08/30/2018
helpviewer_keywords:
- EVEN directive
- directives, MASM
- MASM (Microsoft Macro Assembler), directives
- NOP (no operation instruction)
- ALIGN directive
ms.assetid: 7357ab2d-4a5c-43ca-accb-a5f21cdfcde5
ms.openlocfilehash: b191ce0942d7596090bfd7948a37a5c9e6aac15e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80169435"
---
# <a name="even-and-align-directives"></a>Direttive EVEN e ALIGN

**Sezione specifica Microsoft**

Sebbene l'assembler inline non supporti la maggior parte delle direttive MASM, supporta `EVEN` e **align**. Queste direttive inseriscono istruzioni **NOP** (nessuna operazione) nel codice dell'assembly, in base alle esigenze, per allineare le etichette a limiti specifici. Ciò rende le operazioni instruction-fetch più efficienti per alcuni processori.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
