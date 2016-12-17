---
title: "L&#39;inferenza del parametro di tipo &#39;&lt;nometipoparametro&gt;&#39; per il metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nometipo&gt;&#39; non &#232; riuscita | Microsoft Docs"
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
  - "vbc36589"
  - "bc36589"
helpviewer_keywords: 
  - "BC36589"
ms.assetid: 4676a7a5-934b-4b74-b640-48065fc07e94
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;inferenza del parametro di tipo &#39;&lt;nometipoparametro&gt;&#39; per il metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nometipo&gt;&#39; non &#232; riuscita
È stato chiamato un metodo di estensione senza fornire un elenco di argomenti di tipo e l'inferenza del tipo non è riuscita per uno degli argomenti di tipo.  
  
 Di norma, quando si chiama una routine generica, si fornisce un argomento di tipo per ogni parametro di tipo definito dalla routine. È però possibile omettere completamente l'elenco degli argomenti di tipo. In questo caso, il compilatore prova a dedurre il tipo di ogni argomento di tipo dal contesto della chiamata. Per altre informazioni, vedere "Inferenza di tipi" in [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC36589  
  
### Per correggere l'errore  
  
-   Verificare che i tipi degli argomenti normali siano tali che l'inferenza del tipo sia coerente con i parametri di tipo dichiarati per la routine generica.  
  
     \-oppure\-  
  
-   Chiamare la routine generica con un elenco completo di argomenti di tipo in modo da non rendere necessaria l'inferenza del tipo.  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)