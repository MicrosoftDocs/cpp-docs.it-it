---
title: "La struttura &#39;&lt;nomestruttura&gt;&#39;&#39; non pu&#242; contenere un&#39;istanza di se stessa: &lt;errore&gt; | Microsoft Docs"
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
  - "vbc30294"
  - "bc30294"
helpviewer_keywords: 
  - "BC30294"
ms.assetid: 17780e11-2425-4860-9345-b5db019d2bf3
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La struttura &#39;&lt;nomestruttura&gt;&#39;&#39; non pu&#242; contenere un&#39;istanza di se stessa: &lt;errore&gt;
Una struttura dichiara una variabile e la inizializza con un'istanza di se stessa.  
  
 Una struttura può contenere istanze di altre strutture, ma non un'istanza interna di se stessa. Un tentativo di eseguire questa operazione potrebbe causare una ricorsione infinita.  
  
 **ID errore:** BC30294  
  
### Per correggere l'errore  
  
1.  Controllare l'ortografia dell'espressione di inizializzazione nell'istruzione di dichiarazione.  
  
2.  Se si intende creare un'altra istanza della stessa struttura, è necessario dichiararla e crearla al di fuori della struttura.  
  
## Vedere anche  
 [Structures](../Topic/Structures%20\(Visual%20Basic\).md)   
 [Structure Statement](../Topic/Structure%20Statement.md)