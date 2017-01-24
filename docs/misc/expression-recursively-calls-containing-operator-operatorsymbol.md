---
title: "L&#39;espressione chiama in modo ricorsivo l&#39;operatore &#39;&lt;simbolooperatore&gt;&#39; che la contiene | Microsoft Docs"
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
  - "BC42004"
  - "vbc42004"
helpviewer_keywords: 
  - "BC42004"
ms.assetid: a874c44a-3aec-447d-90f7-5659f1b2f5f6
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;espressione chiama in modo ricorsivo l&#39;operatore &#39;&lt;simbolooperatore&gt;&#39; che la contiene
Un'espressione all'interno di una routine di operatore usa l'operatore da definire. Questo fa sì che la routine di operatore chiami se stessa per effetto dei tipi di dati usati.  
  
 La routine di operatore che si sta definendo chiama se stessa se usa lo stesso operatore con uno degli operandi specificati di seguito:  
  
-   Gli stessi operandi per cui si sta definendo l'operatore  
  
-   Gli operandi degli stessi tipi di dati per cui si sta definendo l'operatore oppure  
  
-   Gli operandi di tipi di dati che vengono ampliati ai tipi di dati per cui si sta definendo l'operatore.  
  
 Una *chiamata ricorsiva* avviene quando una routine chiama se stessa. Le chiamate ricorsive possono generare un *ciclo infinito* in cui il controllo passa ripetutamente attraverso lo stesso set di istruzioni fino a quando l'applicazione non viene terminata esternamente. Se il codice non include uno o più test utilizzabili per terminare la ricorsione, si rischia di generare un ciclo infinito.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42004  
  
### Per correggere l'errore  
  
-   Se la logica richiede che la routine di operatore chiami se stessa, accertarsi di testare almeno una condizione che avverrà con certezza in un determinato momento e usare questo test per terminare le chiamate ricorsive.  
  
-   Se la logica non richiede che la routine di operatore chiami se stessa, rimuovere le eventuali chiamate ricorsive o sostituirle con istruzioni che non chiamino la loro stessa routine.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)