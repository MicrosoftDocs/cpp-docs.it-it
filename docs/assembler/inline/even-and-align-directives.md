---
title: Direttive EVEN e ALIGN | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: conceptual
f1_keywords:
- align
- EVEN
dev_langs:
- C++
helpviewer_keywords:
- EVEN directive
- directives, MASM
- MASM (Microsoft Macro Assembler), directives
- NOP (no operation instruction)
- ALIGN directive
ms.assetid: 7357ab2d-4a5c-43ca-accb-a5f21cdfcde5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 06a1007c50e3490e5b14e4da886494557be0d37e
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43688301"
---
# <a name="even-and-align-directives"></a>Direttive EVEN e ALIGN

**Sezione specifica Microsoft**

Sebbene l'assembler inline non supporta la maggior parte delle direttive di MASM, supporta infatti `EVEN` e **ALIGN**. Queste istruzioni inseriscono **NOP** (nessuna operazione) le istruzioni nel codice dell'assembly in base alle necessità per allineare le etichette ai limiti specifici. Ciò rende le operazioni instruction-fetch più efficienti per alcuni processori.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>