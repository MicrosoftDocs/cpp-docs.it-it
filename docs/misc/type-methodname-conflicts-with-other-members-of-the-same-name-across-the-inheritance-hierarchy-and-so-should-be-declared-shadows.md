---
title: "&lt;tipo&gt; &#39;&lt;nomemetodo&gt;&#39; &#232; in conflitto con altri membri con lo stesso nome nella gerarchia di ereditariet&#224;, quindi deve essere dichiarato come &#39;Shadows&#39; | Microsoft Docs"
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
  - "vbc42000"
  - "bc42000"
helpviewer_keywords: 
  - "BC42000"
ms.assetid: 3081635f-99a9-4e90-997f-82251144d80f
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;tipo&gt; &#39;&lt;nomemetodo&gt;&#39; &#232; in conflitto con altri membri con lo stesso nome nella gerarchia di ereditariet&#224;, quindi deve essere dichiarato come &#39;Shadows&#39;
Un'interfaccia che eredita da una o più interfacce definisce una routine con lo stesso nome di una routine già definita in più interfacce di base. La routine in questa interfaccia deve nascondere una delle routine dell'interfaccia di base.  
  
 Si tratta di un messaggio di avviso. Per impostazione predefinita viene usato `Shadows`. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42000  
  
### Per correggere l'errore  
  
-   Se si intende nascondere una delle routine dell'interfaccia di base, aggiungere la parola chiave `Shadows` alla dichiarazione della nuova routine.  
  
-   Se non si intende nascondere alcuna routine dell'interfaccia di base, cambiare il nome della nuova routine.  
  
## Vedere anche  
 [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md)   
 [Shadowing in Visual Basic](../Topic/Shadowing%20in%20Visual%20Basic.md)