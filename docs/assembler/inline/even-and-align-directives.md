---
title: "Direttive EVEN e ALIGN Directives | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "align"
  - "EVEN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ALIGN (direttiva)"
  - "direttive, MASM"
  - "EVEN (direttiva)"
  - "MASM (Microsoft Macro Assembler), direttive"
  - "NOP (nessuna istruzione di operazione)"
ms.assetid: 7357ab2d-4a5c-43ca-accb-a5f21cdfcde5
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttive EVEN e ALIGN Directives
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Sebbene l'assembler inline non supporti la maggior parte delle direttive di MASM, supporta `EVEN` e **ALIGN**.  Queste istruzioni inseriscono le istruzioni **NOP** \(nessuna operazione\) nel codice assembly in base alle necessità per allineare le etichette ai limiti specifici.  Ciò rende le operazioni instruction\-fetch più efficienti per alcuni processori.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Utilizzo di linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)