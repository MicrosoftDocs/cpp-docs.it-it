---
title: "Non &#232; possibile specificare &#39;MustInherit&#39; per il tipo parziale &#39;&lt;nometipoparziale&gt;&#39; perch&#233; non pu&#242; essere combinato con &#39;NotInheritable&#39; specificato per uno degli altri tipi parziali | Microsoft Docs"
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
  - "vbc30926"
  - "BC30926"
helpviewer_keywords: 
  - "BC30926"
ms.assetid: 59a0b5d9-f53c-4234-88f4-dfc66342f143
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile specificare &#39;MustInherit&#39; per il tipo parziale &#39;&lt;nometipoparziale&gt;&#39; perch&#233; non pu&#242; essere combinato con &#39;NotInheritable&#39; specificato per uno degli altri tipi parziali
Una classe è definita in più dichiarazioni parziali, una delle quali specifica `MustInherit`, mentre un'altra specifica `NotInheritable`.  
  
 Quando si divide la definizione di una classe in diverse dichiarazioni parziali, il compilatore considera la classe come l'unione di tutte le sue dichiarazioni parziali. Questo riguarda non soltanto i membri, ma anche l'implementazione, l'ereditarietà e il livello di accesso.  
  
 Una classe non può essere sia *astratta* che *sealed*, ovvero non può al tempo stesso richiedere e proibire l'ereditarietà. Di conseguenza, non è possibile specificare sia `MustInherit` che `NotInheritable` per la stessa classe.  
  
 **ID errore:** BC30926  
  
### Per correggere l'errore  
  
-   Decidere se la classe deve richiedere o proibire l'ereditarietà o se non va specificata né l'una né l'altra caratteristica e rimuovere le parole chiave non corrette a fronte della decisione presa.  
  
## Vedere anche  
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)   
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)   
 [NotInheritable](../Topic/NotInheritable%20\(Visual%20Basic\).md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)