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
ms.openlocfilehash: 63fa73988b9b9433a988035789a923ac73936214
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79441586"
---
# <a name="even-and-align-directives"></a>Direttive EVEN e ALIGN

**Sezione specifica Microsoft**

Sebbene l'assembler inline non supporti la maggior parte delle direttive MASM, supporta `EVEN` e **align**. Queste direttive inseriscono istruzioni **NOP** (nessuna operazione) nel codice dell'assembly, in base alle esigenze, per allineare le etichette a limiti specifici. Ciò rende le operazioni instruction-fetch più efficienti per alcuni processori.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>