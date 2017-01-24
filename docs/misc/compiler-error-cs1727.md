---
title: "Errore del compilatore CS1727 | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1727"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1727"
ms.assetid: 66478a58-e0f6-4886-b940-5473ad485a01
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1727
Impossibile inviare automaticamente la segnalazione errori senza autorizzazione. Visitare '' per autorizzare l'invio della segnalazione errori.  
  
 Il sito Web indicato nel testo dell'errore illustra come abilitare la segnalazione errori automatica per gli strumenti della riga di comando di [!INCLUDE[vsprvslong](../error-messages/compiler-errors-1/includes/vsprvslong_md.md)].  
  
## Esempio  
 L'esempio seguente genera l'errore CS1727.  
  
```  
// CS1727.cs // compile with: /errorreport:send // CS1727 expected class Test { static void Main(){} }  
```  
  
## Vedere anche  
 [\/errorreport \(Set Error Reporting Behavior\)](../Topic/-errorreport%20\(C%23%20Compiler%20Options\).md)