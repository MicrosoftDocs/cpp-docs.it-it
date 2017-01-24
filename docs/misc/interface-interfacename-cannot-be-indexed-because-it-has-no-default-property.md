---
title: "L&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; non pu&#242; essere indicizzata perch&#233; non contiene propriet&#224; predefinite | Microsoft Docs"
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
  - "bc30547"
  - "vbc30547"
helpviewer_keywords: 
  - "BC30547"
ms.assetid: d9d83868-5e81-4ec5-878e-2303489d8f2f
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; non pu&#242; essere indicizzata perch&#233; non contiene propriet&#224; predefinite
Le espressioni di indice devono risultare in un valore il cui tipo sia una matrice, possegga un set di proprietà predefinite in overload o in un set di proprietà in overload. Un'interfaccia può avere solo un metodo o una proprietà predefinita. Ne consegue che può ereditare un'interfaccia contenente un metodo o una proprietà predefinita oppure che il suo blocco di definizione può contenere un metodo o una proprietà contrassegnata come predefinita.  
  
 **ID errore:** BC30547  
  
### Per correggere l'errore  
  
-   Fornire all'interfaccia una proprietà predefinita.  
  
## Vedere anche  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)