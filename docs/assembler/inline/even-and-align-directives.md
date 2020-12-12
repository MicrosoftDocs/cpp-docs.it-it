---
description: Altre informazioni sulle direttive EVEN e ALIGN
title: Direttive EVEN e ALIGN
ms.date: 08/30/2018
helpviewer_keywords:
- EVEN directive
- directives, MASM
- MASM (Microsoft Macro Assembler), directives
- NOP (no operation instruction)
- ALIGN directive
ms.assetid: 7357ab2d-4a5c-43ca-accb-a5f21cdfcde5
ms.openlocfilehash: adf633e99f1cb52a7849de24751d065a0344798f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117796"
---
# <a name="even-and-align-directives"></a>Direttive EVEN e ALIGN

**Specifico di Microsoft**

Sebbene l'assembler inline non supporti la maggior parte delle direttive MASM, supporta `EVEN` e **Allinea**. Queste direttive inseriscono istruzioni **NOP** (nessuna operazione) nel codice dell'assembly, in base alle esigenze, per allineare le etichette a limiti specifici. Ciò rende le operazioni instruction-fetch più efficienti per alcuni processori.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Uso del linguaggio assembly nei blocchi di __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
