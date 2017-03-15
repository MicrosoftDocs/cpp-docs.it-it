---
title: "ALIAS (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Alias"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ALIAS directive"
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# ALIAS (MASM)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**ALIAS** la direttiva crea un nome alternativo per una funzione.  In questo modo è possibile creare più nomi per una funzione, oppure creare librerie che consentono del linker \(LINK.exe\) esegue il mapping di una funzione obsoleta a una nuova funzione.  
  
## Sintassi  
  
```  
  
ALIAS  <  
alias  
> = <  
actual-name  
>  
  
```  
  
#### Parametri  
 `actual-name`  
 Il nome effettivo della funzione o di routine.  Le parentesi angolari sono necessarie.  
  
 `alias`  
 l'alternativa o il nome di alias.  Le parentesi angolari sono necessarie.  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)