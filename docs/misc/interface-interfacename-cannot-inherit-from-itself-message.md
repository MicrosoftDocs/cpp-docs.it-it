---
title: "L&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; non pu&#242; ereditare da se stessa: &lt;messaggio&gt; | Microsoft Docs"
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
  - "vbc30296"
  - "BC30296"
helpviewer_keywords: 
  - "BC30296"
ms.assetid: a5bc1ae2-2083-4e26-b8a4-3c4dd951fd27
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; non pu&#242; ereditare da se stessa: &lt;messaggio&gt;
Un'[Inherits Statement](../Topic/Inherits%20Statement.md) nella definizione di un'interfaccia specifica la sua interfaccia personale.  
  
 Un'interfaccia può ereditare da un'altra interfaccia, che le fornisce tutti i membri dell'interfaccia dalla quale eredita, quindi non sarà necessario definire nuovamente tali membri. Un'interfaccia di questo tipo è detta *interfaccia derivata* e l'interfaccia da cui eredita è detta *interfaccia di base*.  
  
 Per un'interfaccia ereditare da se stessa non ha significato, perché possiede già tutti i suoi membri personali.  
  
 **ID errore:** BC30296  
  
### Per correggere l'errore  
  
1.  Controllare l'ortografia del nome dell'interfaccia nell'istruzione `Inherits`.  
  
2.  Se non si intende ereditare da un'interfaccia diversa, rimuovere completamente l'istruzione `Inherits`.  
  
3.  Esaminare il messaggio citato per ottenere suggerimenti.  
  
## Vedere anche  
 [NOT IN BUILD: Ereditarietà in Visual Basic](http://msdn.microsoft.com/it-it/e5e6e240-ed31-4657-820c-079b7c79313c)   
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)