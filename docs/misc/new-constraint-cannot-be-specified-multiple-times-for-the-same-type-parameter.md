---
title: "Non &#232; possibile specificare il vincolo &#39;New&#39; pi&#249; volte per lo stesso parametro di tipo | Microsoft Docs"
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
  - "vbc32081"
  - "BC32081"
helpviewer_keywords: 
  - "BC32081"
ms.assetid: afcb30da-3973-4452-9cf3-c027f9866589
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile specificare il vincolo &#39;New&#39; pi&#249; volte per lo stesso parametro di tipo
Un elenco di vincoli include il vincolo [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md) più volte.  
  
 Un elenco di vincoli in un parametro di tipo può specificare che l'argomento di tipo passato al parametro di tipo deve esporre un costruttore senza parametri al quale il codice di creazione può accedere. Un tipo non può contenere più di un costruttore senza parametri e non è possibile specificare questo requisito più di una volta.  
  
 **ID errore:** BC32081  
  
### Per correggere l'errore  
  
-   Rimuovere qualsiasi parola chiave `New` ridondante. L'elenco di vincoli deve contenerne solo una.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)