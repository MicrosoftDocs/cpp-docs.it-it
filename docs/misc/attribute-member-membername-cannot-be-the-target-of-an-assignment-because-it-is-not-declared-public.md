---
title: "Il membro di attributo &#39;&lt;nomemembro&gt;&#39; non pu&#242; essere la destinazione di un&#39;assegnazione perch&#233; non &#232; dichiarato &#39;Public&#39; | Microsoft Docs"
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
  - "vbc31511"
  - "bc31511"
helpviewer_keywords: 
  - "BC31511"
ms.assetid: f8c958f6-58a4-4aff-b8c3-f2e9481e8132
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il membro di attributo &#39;&lt;nomemembro&gt;&#39; non pu&#242; essere la destinazione di un&#39;assegnazione perch&#233; non &#232; dichiarato &#39;Public&#39;
Si è provato ad assegnare un valore a un membro privato di un attributo.  
  
 **ID errore:** BC31511  
  
### Per correggere l'errore  
  
1.  Rimuovere l'assegnazione.  
  
2.  Se si usano gli attributi personalizzati che sono stati sviluppati, modificare il modificatore di accesso del membro dell'attributo in `Public`.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)   
 [Public](../Topic/Public%20\(Visual%20Basic\).md)