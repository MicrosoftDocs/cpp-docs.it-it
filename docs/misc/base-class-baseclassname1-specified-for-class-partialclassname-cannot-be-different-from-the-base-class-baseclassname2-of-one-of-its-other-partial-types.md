---
title: "La classe base &#39;&lt;nomeclassebase1&gt;&#39; specificata per la classe &#39;&lt;nomeclasseparziale&gt;&#39; non pu&#242; essere diversa dalla classe base &#39;&lt;nomeclassebase2&gt;&#39; di uno degli altri tipi parziali | Microsoft Docs"
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
  - "BC30928"
  - "vbc30928"
helpviewer_keywords: 
  - "BC30928"
ms.assetid: da464f09-1016-4dec-beb7-3202cacd8e1e
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La classe base &#39;&lt;nomeclassebase1&gt;&#39; specificata per la classe &#39;&lt;nomeclasseparziale&gt;&#39; non pu&#242; essere diversa dalla classe base &#39;&lt;nomeclassebase2&gt;&#39; di uno degli altri tipi parziali
Una classe è definita in due o più dichiarazioni parziali contenenti più di un'[Inherits Statement](../Topic/Inherits%20Statement.md) che specificano diverse classi base.  
  
 Quando si divide la definizione di una classe in diverse dichiarazioni parziali, il compilatore considera la classe come l'unione di tutte le sue dichiarazioni parziali. Questo riguarda non soltanto i membri, ma anche l'implementazione, l'ereditarietà e il livello di accesso.  
  
 Una classe può implementare più interfacce ma non può ereditare da più di una classe base. Di conseguenza, tutte le istruzioni `Inherits` devono specificare la stessa classe base.  
  
 **ID errore:** BC30928  
  
### Per correggere l'errore  
  
-   Definire la classe base della classe parziale, quindi rimuovere dalle relative dichiarazioni parziali tutte le istruzioni `Inherits` che specificano un'altra classe base.  
  
## Vedere anche  
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)   
 [Inherits Statement](../Topic/Inherits%20Statement.md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)