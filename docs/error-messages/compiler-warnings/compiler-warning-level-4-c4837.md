---
title: "Avviso del compilatore (livello 4) C4837 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4837"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4837"
ms.assetid: 9a3c7b6b-ffe4-443d-96af-43deb80d85b4
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4837
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

rilevato trigramma '??%c' sostituito da '%c'  
  
 Il trigraph rilevato è stato sostituito dal carattere indicato.  
  
 Il compilatore traduce i trigraph prima che venga completata qualsiasi altra elaborazione.  Utilizzare la sequenza di caratteri di escape `\?`, per impedire l'errata interpretazione di una sequenza di caratteri simile a un trigraph.  Per ulteriori informazioni sui trigraph, vedere [Trigrammi](../../c-language/trigraphs.md).  Per ulteriori informazioni sulle sequenze di escape, vedere [Sequenze di escape](../../c-language/escape-sequences.md).  
  
 L'avviso C4837 è disattivato per impostazione predefinita.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
### Per correggere l'errore  
  
1.  Utilizzare la sequenza di caratteri di escape `\?` anziché uno dei caratteri '?' nel codice sorgente.  
  
## Vedere anche  
 [Trigrammi](../../c-language/trigraphs.md)   
 [Sequenze di escape](../../c-language/escape-sequences.md)   
 [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md)