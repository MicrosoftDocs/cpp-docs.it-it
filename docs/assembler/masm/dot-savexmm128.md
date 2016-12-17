---
title: ".SAVEXMM128 | Microsoft Docs"
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
  - ".SAVEXMM128"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".SAVEXMM128 directive"
ms.assetid: 551eb472-b8d0-47b1-8d82-995d1f485723
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .SAVEXMM128
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera uno a `UWOP_SAVE_XMM128` oppure  `UWOP_SAVE_XMM128_FAR` la voce di codice epilogo per il registro specificato XMM e l'offset utilizzando il prologo corrente è formattato in offset.  MASM sceglierà la codifica più efficiente.  
  
## Sintassi  
  
```  
.savexmm128 xmmreg , offset  
```  
  
## Note  
 .SAVEXMM128 consente agli utenti di ml64.exe specificare come una funzione del frame rimossi e solo che è consentito all'interno del prologo, che si estende da [PROC](../../assembler/masm/proc.md) Dichiarazione di FRAME a  [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva.  Queste direttive non generano codice; generano solo `.xdata` e  `.pdata`.  .SAVEXMM128 deve essere preceduto dalle istruzioni che effettivamente implementano le azioni essere rimosso.  È opportuno eseguire il wrapping delle direttive di rimuovere che il codice da rimuovere in una macro per assicurarsi che il contratto.  
  
 `offset` deve essere un multiplo di 16.  
  
 Per ulteriori informazioni, vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)