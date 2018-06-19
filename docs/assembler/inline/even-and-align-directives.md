---
title: Direttive EVEN e ALIGN | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: a43425a4038ffb140eeaa0a9d111a39fc5c11ff0
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32057955"
---
# <a name="even-and-align-directives"></a>Direttive EVEN e ALIGN
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Sebbene l'assembler inline non supporta la maggior parte delle direttive di MASM, supporta `EVEN` e **ALIGN**. Inseriscono queste direttive **NOP** (nessuna operazione) le istruzioni nel codice dell'assembly in base alle necessità per allineare le etichette ai limiti specifici. Ciò rende le operazioni instruction-fetch più efficienti per alcuni processori.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)