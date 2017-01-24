---
title: "Il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; non pu&#242; essere dedotto | Microsoft Docs"
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
  - "bc36572"
  - "vbc36572"
helpviewer_keywords: 
  - "BC36572"
ms.assetid: 02264070-b055-4ab0-8d2a-eac4d90d9fdf
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; non pu&#242; essere dedotto
È stata chiamata una routine generica senza fornire un elenco di argomenti di tipo e l'inferenza del tipo non riesce per uno degli argomenti di tipo.  
  
 Di norma, quando si chiama una routine generica, si fornisce un argomento di tipo per ogni parametro di tipo definito dalla routine. È però possibile omettere completamente l'elenco degli argomenti di tipo. In questo caso, il compilatore prova a dedurre il tipo di ogni argomento di tipo dal contesto della chiamata. Per altre informazioni, vedere "Inferenza di tipi" in [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC36572  
  
### Per correggere l'errore  
  
-   Verificare che i tipi degli argomenti normali siano tali che l'inferenza del tipo sia coerente con i parametri di tipo dichiarati per la routine generica.  
  
     \-oppure\-  
  
-   Chiamare la routine generica con un elenco completo di argomenti di tipo in modo da non rendere necessaria l'inferenza del tipo.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)