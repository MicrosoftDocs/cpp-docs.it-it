---
title: "Nessuna &#39;&lt;nomeroutine&gt;&#39; accessibile &#232; specifica: &lt;elencofirme&gt; | Microsoft Docs"
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
  - "vbc30794"
  - "BC30794"
helpviewer_keywords: 
  - "BC30794"
ms.assetid: 51d54cbb-b530-4661-9952-5ccc17e4220b
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Nessuna &#39;&lt;nomeroutine&gt;&#39; accessibile &#232; specifica: &lt;elencofirme&gt;
Un'istruzione di assegnazione assegna l'indirizzo di una routine di overload a una variabile delegato, ma il compilatore non riesce a risolvere le diverse versioni di overload.  
  
 Quando il codice usa l'indirizzo di una routine definito in numerose versioni di overload, il compilatore deve decidere quale overload usare. Cerca una singola versione con un elenco di parametri che corrisponda all'elenco di parametri del delegato. Per altre informazioni, vedere [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md).  
  
 Se il compilatore trova più versioni della routine con una firma corrispondente, viene generato questo errore. Questa eventualità può verificarsi, ad esempio, se uno degli overload è generico e viene passato un argomento di tipo che fornisce una firma identica a quella di un altro overload.  
  
 **ID errore:** BC30794  
  
### Per correggere l'errore  
  
-   Se il conflitto è determinato da un overload generico con la stessa firma di un altro, modificare l'argomento di tipo passato all'overload generico.  
  
## Vedere anche  
 [AddressOf Operator](../Topic/AddressOf%20Operator%20\(Visual%20Basic\).md)   
 [Delegate Statement](../Topic/Delegate%20Statement.md)   
 [NOT IN BUILD: Delegati e operatore AddressOf](http://msdn.microsoft.com/it-it/7b2ed932-8598-4355-b2f7-5cedb23ee86f)   
 [Overload Resolution](../Topic/Overload%20Resolution%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)