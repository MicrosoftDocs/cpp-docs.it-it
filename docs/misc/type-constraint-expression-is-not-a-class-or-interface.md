---
title: "Il vincolo di tipo &#39;&lt;espressione&gt;&#39; non &#232; una classe o un&#39;interfaccia | Microsoft Docs"
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
  - "bc32048"
  - "vbc32048"
helpviewer_keywords: 
  - "BC32048"
ms.assetid: 68811886-44ac-43e1-9315-b39857310033
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il vincolo di tipo &#39;&lt;espressione&gt;&#39; non &#232; una classe o un&#39;interfaccia
Un elenco di vincoli comprende un'espressione che non rappresenta un vincolo valido per un parametro di tipo.  
  
 Un elenco di vincoli impone requisiti per l'argomento di tipo passato al parametro di tipo. Si possono specificare i requisiti seguenti in qualsiasi combinazione:  
  
-   L'argomento di tipo deve implementare una o più interfacce  
  
-   L'argomento di tipo deve ereditare al massimo da una classe  
  
-   L'argomento di tipo deve esporre un costruttore senza parametri a cui il codice di creazione possa accedere  
  
-   L'argomento di tipo deve essere un tipo riferimento oppure un tipo valore  
  
 **ID errore:** BC32048  
  
### Per correggere l'errore  
  
-   Verificare che l'espressione e i suoi elementi siano digitati correttamente.  
  
-   Se l'espressione non soddisfa l'elenco di requisiti precedente, rimuoverla dall'elenco di vincoli.  
  
-   Se l'espressione fa riferimento a un'interfaccia o a una classe, verificare che il compilatore possa accedere a quell'interfaccia o a quella classe. Potrebbe essere necessario qualificarne il nome e anche aggiungere un riferimento al progetto. Per altre informazioni, vedere "Riferimenti ai progetti" in [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9).  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Value Types and Reference Types](../Topic/Value%20Types%20and%20Reference%20Types.md)   
 [NOTINBUILD Procedura: Qualificare il nome di un elemento dichiarato](http://msdn.microsoft.com/it-it/6bd112f5-df6f-42b8-9427-a9225bfcbaab)   
 [How to: Add and Remove Project References](http://msdn.microsoft.com/it-it/f51b784d-0bc8-4c19-a898-e560d5ed696b)