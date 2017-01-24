---
title: "La classe &#39;&lt;nomeclasse&gt;&#39; non pu&#242; ereditare da se stessa: &lt;messaggio&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30257"
  - "bc30257"
helpviewer_keywords: 
  - "BC30257"
ms.assetid: 03e3034c-a0fa-4619-84b9-5bc9aa0dfe80
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La classe &#39;&lt;nomeclasse&gt;&#39; non pu&#242; ereditare da se stessa: &lt;messaggio&gt;
Un'[Inherits Statement](../Topic/Inherits%20Statement.md) nella definizione di una classe specifica la sua classe personale.  
  
 Una classe può ereditare da un'altra interfaccia, che le fornisce tutti i membri della classe dalla quale eredita, quindi non sarà necessario definire nuovamente tali membri. Una classe di questo tipo è detta *classe derivata* e la classe da cui eredita è detta *classe base*.  
  
 Per una classe ereditare da se stessa non ha significato, perché possiede già tutti i suoi membri personali.  
  
 **ID errore:** BC30257  
  
### Per correggere l'errore  
  
1.  Controllare l'ortografia del nome della classe nell'istruzione `Inherits`.  
  
2.  Se non si intende ereditare da una classe diversa, rimuovere completamente l'istruzione `Inherits`.  
  
3.  Esaminare il messaggio citato per ottenere suggerimenti.  
  
## Vedere anche  
 [NOT IN BUILD: Ereditarietà in Visual Basic](http://msdn.microsoft.com/it-it/e5e6e240-ed31-4657-820c-079b7c79313c)   
 [NOT IN BUILD: Cenni preliminari sulle classi](http://msdn.microsoft.com/it-it/cc2355a2-cb98-4353-9440-736585aec46c)