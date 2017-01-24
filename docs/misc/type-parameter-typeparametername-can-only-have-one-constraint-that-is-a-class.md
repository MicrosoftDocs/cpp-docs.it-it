---
title: "Il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39;pu&#242; avere solo un vincolo costituito da una classe | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32047"
  - "vbc32047"
helpviewer_keywords: 
  - "BC32047"
ms.assetid: ac7ab76b-5300-4c79-b519-5a1287ed5fa9
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39;pu&#242; avere solo un vincolo costituito da una classe
Un elenco di vincoli include più di una classe.  
  
 Un elenco di vincoli in un parametro di tipo può accettare un numero qualsiasi di interfacce, ma al massimo una classe. Un argomento di tipo per quel parametro di tipo deve ereditare da quella classe e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non supporta l'ereditarietà multipla.  
  
 **ID errore:** BC32047  
  
### Per correggere l'errore  
  
-   Selezionare una classe e includere solo quella classe nell'elenco di vincoli.  
  
-   Può essere possibile definire parametri di tipo aggiuntivi per inserire la classe o le classi che non è stato possibile aggiungere all'elenco di vincoli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)