---
title: "Il riferimento a un membro non condiviso richiede un riferimento a un oggetto | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30469"
  - "vbc30469"
helpviewer_keywords: 
  - "BC30469"
ms.assetid: af503e8b-2e1f-4f91-a07f-b1ddd73dd4a6
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il riferimento a un membro non condiviso richiede un riferimento a un oggetto
Si è fatto riferimento a un membro non condiviso all'interno del codice, senza specificare un riferimento a un oggetto. Non è possibile usare il nome della classe per qualificare un membro non condiviso. È prima necessario dichiarare l'istanza come variabile oggetto e quindi fare riferimento a essa mediante il nome della variabile.  
  
 **ID errore:** BC30469  
  
### Per correggere l'errore  
  
1.  Dichiarare l'istanza come variabile oggetto.  
  
2.  Fare riferimento all'istanza mediante il nome della variabile.  
  
## Vedere anche  
 [NOT IN BUILD: Cenni preliminari sulle classi](http://msdn.microsoft.com/it-it/cc2355a2-cb98-4353-9440-736585aec46c)   
 [NOT IN BUILD: Membri condivisi in Visual Basic](http://msdn.microsoft.com/it-it/dbc3783f-83a2-4225-995d-c2d6d025663d)   
 [Shared](../Topic/Shared%20\(Visual%20Basic\).md)   
 [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9)