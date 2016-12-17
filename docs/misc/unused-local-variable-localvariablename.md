---
title: "Variabile locale non usata: &#39;&#39;&lt;nomevariabilelocale&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc42024"
  - "BC42024"
helpviewer_keywords: 
  - "BC42024"
ms.assetid: 749b1315-0f85-4f7e-b68b-8cc4346c502b
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Variabile locale non usata: &#39;&#39;&lt;nomevariabilelocale&gt;&#39;
Una variabile locale di una routine è dichiarata, ma non viene mai usata.  
  
 Potrebbe esserci un errore di ortografia nelle variabili locali della routine. Se questa variabile è di fatto usata in un'altra istruzione, ma con una grafia diversa, si presenta al compilatore come se si trattasse di due variabili diverse.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42024  
  
### Per correggere l'errore  
  
1.  Verificare se le variabili locali incluse nelle routine contengono errori di ortografia. Tenere presente che maiuscole e minuscole si equivalgono. I nomi `ABC` e `abc` fanno riferimento alla stessa variabile.  
  
2.  Se non sono presenti errori di ortografia, rimuovere la dichiarazione della variabile oppure usarla in un'altra istruzione della routine.  
  
## Vedere anche  
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)   
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)