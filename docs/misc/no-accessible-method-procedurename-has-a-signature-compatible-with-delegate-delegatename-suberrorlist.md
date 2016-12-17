---
title: "Nessun metodo accessibile &#39;&lt;nomeroutine&gt;&#39; ha una firma compatibile con il delegato &#39;&lt;nomedelegato&gt;&#39;:&lt;elencoerrori&gt; | Microsoft Docs"
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
  - "bc30950"
  - "vbc30950"
helpviewer_keywords: 
  - "BC30950"
ms.assetid: c1938099-2c03-491e-b599-d0c43bf94baf
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Nessun metodo accessibile &#39;&lt;nomeroutine&gt;&#39; ha una firma compatibile con il delegato &#39;&lt;nomedelegato&gt;&#39;:&lt;elencoerrori&gt;
Un'istruzione di assegnazione assegna l'indirizzo di una routine a una variabile delegato, ma il compilatore non riesce a trovare una versione della routine con una firma corrispondente.  
  
 Quando il codice usa l'indirizzo di una routine, il compilatore cerca di trovare una versione di quella routine con un elenco di parametri che corrisponda a quello del delegato. Se la routine è definita in diverse versioni di overload, il compilatore cerca di trovare una versione singola con una firma corrispondente. Per altre informazioni, vedere [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md).  
  
 Se il compilatore non trova alcuna versione della routine con una firma corrispondente, viene generato questo errore. Questa situazione può verificarsi ad esempio se la routine o il delegato sono generici e se viene passato un argomento di tipo che assegna una firma che non corrisponde all'altra firma.  
  
 **ID errore:** BC30950  
  
### Per correggere l'errore  
  
1.  Ridefinire la routine o il delegato in modo che abbiano elenchi di parametri corrispondenti.  
  
     \-oppure\-  
  
     Definire un nuovo delegato con un elenco di parametri che corrisponda a quello della routine o definire una nuova routine con un elenco di parametri che corrisponda a quello del delegato.  
  
2.  Se la routine o il delegato è generico, passare un argomento di tipo che faccia in modo che la sua firma corrisponda con l'altra.  
  
## Vedere anche  
 [AddressOf Operator](../Topic/AddressOf%20Operator%20\(Visual%20Basic\).md)   
 [Delegate Statement](../Topic/Delegate%20Statement.md)   
 [NOT IN BUILD: Delegati e operatore AddressOf](http://msdn.microsoft.com/it-it/7b2ed932-8598-4355-b2f7-5cedb23ee86f)   
 [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)