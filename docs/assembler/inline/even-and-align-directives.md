---
title: Direttive EVEN e ALIGN
ms.date: 08/30/2018
f1_keywords:
- align
- EVEN
helpviewer_keywords:
- EVEN directive
- directives, MASM
- MASM (Microsoft Macro Assembler), directives
- NOP (no operation instruction)
- ALIGN directive
ms.assetid: 7357ab2d-4a5c-43ca-accb-a5f21cdfcde5
ms.openlocfilehash: 522d5689d680d0fc334743d2802abe21570dd6f3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50604362"
---
# <a name="even-and-align-directives"></a>Direttive EVEN e ALIGN

**Sezione specifica Microsoft**

Sebbene l'assembler inline non supporta la maggior parte delle direttive di MASM, supporta infatti `EVEN` e **ALIGN**. Queste istruzioni inseriscono **NOP** (nessuna operazione) le istruzioni nel codice dell'assembly in base alle necessità per allineare le etichette ai limiti specifici. Ciò rende le operazioni instruction-fetch più efficienti per alcuni processori.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>