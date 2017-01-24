---
title: "Non &#232; possibile dedurre il parametro di tipo &#39;&lt;nomeparametroditipo&gt;&#39; per &#39;&lt;nomeroutinegenerica&gt;&#39; | Microsoft Docs"
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
  - "vbc32050"
  - "bc32050"
helpviewer_keywords: 
  - "BC32050"
ms.assetid: e4a69ffb-0764-4e5a-8de1-40f881a3f4fb
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre il parametro di tipo &#39;&lt;nomeparametroditipo&gt;&#39; per &#39;&lt;nomeroutinegenerica&gt;&#39;
È stata chiamata una routine generica senza fornire un elenco di argomenti di tipo e l'inferenza del tipo non riesce per uno degli argomenti di tipo.  
  
 Di norma, quando si chiama una routine generica, si fornisce un argomento di tipo per ogni parametro di tipo definito dalla routine. È però possibile omettere completamente l'elenco degli argomenti di tipo. In questo caso, il compilatore prova a dedurre il tipo di ogni argomento di tipo dal contesto della chiamata. Per altre informazioni, vedere "Inferenza di tipi" in [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md).  
  
 Una delle possibili cause degli errore di inferenza del tipo è la mancata corrispondenza di dimensioni tra un parametro di tipo e il tipo chiamante. Questa condizione è illustrata nel codice che segue.  
  
```  
Public Sub displayLargest(Of t As IComparable)(ByVal arg() As t) ' Insert code to find and display the largest element of arg(). End Sub Public Sub callGenericSub() Dim testValue As Integer findLargest(testValue) Dim testMatrix(,) As Integer findLargest(testMatrix) End Sub  
```  
  
 Nel codice precedente, le due chiamate a `findLargest` generano questo errore perché il parametro di tipo `t` richiede una matrice unidimensionale, mentre il compilatore deduce dalle chiamate che gli argomenti di tipo sono costituiti da una matrice scalare \(`testValue`\) e una matrice bidimensionale \(`testMatrix`\).  
  
 **ID errore:** BC32050  
  
### Per correggere l'errore  
  
-   Verificare che i tipi degli argomenti normali siano tali che l'inferenza del tipo sia coerente con i parametri di tipo dichiarati per la routine generica.  
  
     \-oppure\-  
  
-   Chiamare la routine generica con un elenco completo di argomenti di tipo in modo da non rendere necessaria l'inferenza del tipo.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)