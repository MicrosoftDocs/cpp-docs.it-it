---
title: "&#39;&lt;nomeroutine&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;nomeroutinebase&gt;&#39; perch&#233; si differenziano per i vincoli del parametro di tipo | Microsoft Docs"
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
  - "BC32077"
  - "vbc32077"
helpviewer_keywords: 
  - "BC32077"
ms.assetid: 9be1a88d-c1a4-4f12-8e72-74abb2be565d
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeroutine&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;nomeroutinebase&gt;&#39; perch&#233; si differenziano per i vincoli del parametro di tipo
Una routine generica prova a eseguire l'override di una routine della classe base generica, ma contiene elenchi di vincoli diversi nei parametri di tipo.  
  
 Per eseguire l'override di una routine della classe base, la routine di override deve corrispondere non solo alla firma completa della routine della classe base, ma anche al livello di accesso della routine e al meccanismo di passaggio di ogni parametro.  
  
 Per eseguire l'override di una routine di classe base generica, la routine di override deve corrispondere anche al numero di parametri di tipo e all'elenco di vincoli di ciascuna di esse.  
  
 Per altre informazioni sui requisiti di override, vedere [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC32077  
  
### Per correggere l'errore  
  
-   Se si prevede di eseguire l'override della routine della casse base, verificare che i vincoli del parametro di tipo corrispondano esattamente a quelli della routine della classe base.  
  
-   Se i vincoli del parametro di tipo devono rimanere così come sono, non è possibile eseguire l'override della routine della classe base. Rimuovere la parola chiave `Overrides` dalla dichiarazione.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)