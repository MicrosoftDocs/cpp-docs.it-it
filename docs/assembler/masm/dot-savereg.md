---
title: ".SAVEREG | Microsoft Docs"
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
  - ".SAVEREG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".SAVEREG directive"
ms.assetid: 1dbc2ef6-a197-40e7-9e55-fddcae8cef29
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .SAVEREG
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera uno a `UWOP_SAVE_NONVOL` oppure  `UWOP_SAVE_NONVOL_FAR` voce di codice epilogo per il registro specificato \(`reg`\) e compensare \(`offset`\) utilizzando offset corrente di prologo.  MASM sceglierà la codifica più efficiente.  
  
## Sintassi  
  
```  
.SAVEREG reg, offset  
```  
  
## Note  
 .SAVEREG Consente agli utenti di ml64.exe specificare come una funzione del frame rimossi e solo è valida all'interno del prologo, che si estende da [PROC](../../assembler/masm/proc.md) Dichiarazione di FRAME a  [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva.  Queste direttive non generano codice; generano solo `.xdata` e  `.pdata`.  .SAVEREG Deve essere preceduto dalle istruzioni che effettivamente implementano le azioni essere rimosso.  È opportuno eseguire il wrapping delle direttive di rimuovere che il codice da rimuovere in una macro per assicurarsi che il contratto.  
  
 Per ulteriori informazioni, vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)