---
title: "&#39;&lt;nomemembro&gt;&#39; non dichiarato | Microsoft Docs"
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
  - "vbc30816"
  - "bc30816"
helpviewer_keywords: 
  - "BC30816"
ms.assetid: d6704bed-bb76-47c6-ac28-09608d5e6912
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomemembro&gt;&#39; non dichiarato
'`<membername>`' non è dichiarato. La funzionalità di `Debug` oggetti è disponibile in `System.Diagnostics.Debug` nell'assembly `System`.  
  
 Non è possibile trovare il nome del membro specificato.  
  
 **ID errore:** BC30816  
  
### Per correggere l'errore  
  
1.  Verificare l'ortografia del membro.  
  
2.  Usare un'istruzione `Imports` o membri completi definiti in altri spazi dei nomi. Ad esempio, la funzione `WriteLine` è dichiarata nello spazio dei nomi `System.Diagnostics.Debug`.  
  
## Vedere anche  
 [Debug in Visual Studio](../Topic/Debugging%20in%20Visual%20Studio.md)