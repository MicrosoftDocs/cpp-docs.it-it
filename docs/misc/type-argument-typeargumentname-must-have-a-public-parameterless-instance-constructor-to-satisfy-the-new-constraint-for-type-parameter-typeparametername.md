---
title: "L&#39;argomento di tipo &#39;&lt;nomeargomentotipo&gt;&#39; deve avere un costruttore di istanza pubblico senza parametri per soddisfare il vincolo &#39;New&#39; per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "12/08/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc32083"
  - "BC32083"
helpviewer_keywords: 
  - "BC32083"
ms.assetid: 56bf25f1-375c-4b5d-9969-45eba8b3b66c
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;argomento di tipo &#39;&lt;nomeargomentotipo&gt;&#39; deve avere un costruttore di istanza pubblico senza parametri per soddisfare il vincolo &#39;New&#39; per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39;
Un argomento di tipo fornisce un tipo senza costruttore senza parametri accessibile a un parametro di tipo con il vincolo [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md).  
  
 Un elenco di vincoli impone requisiti per l'argomento di tipo passato al parametro di tipo. Uno dei requisiti può essere che l'argomento di tipo deve esporre un costruttore senza parametri a cui il codice di creazione possa accedere. Per specificare questo requisito, l'elenco di vincoli comprende il vincolo `New`.  
  
 **ID errore:** BC32083  
  
### Per correggere l'errore  
  
1.  Verificare che il nome del tipo generico e il nome del tipo nell'argomento di tipo siano stati digitati correttamente.  
  
2.  Scegliere un tipo per l'argomento di tipo che espone un costruttore senza parametri accessibile. Questo particolare tipo generico non può essere richiamato a meno che non si possa fornire un tale argomento di tipo a questo parametro di tipo.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Procedura: utilizzare una classe generica](../Topic/How%20to:%20Use%20a%20Generic%20Class%20\(Visual%20Basic\).md)