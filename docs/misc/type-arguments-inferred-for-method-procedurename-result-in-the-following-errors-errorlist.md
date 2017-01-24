---
title: "Con gli argomenti di tipo dedotti per il metodo &#39;&lt;nomeroutine&gt;&#39; vengono restituiti i seguenti errori: &lt;elencoerrori&gt; | Microsoft Docs"
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
  - "bc30954"
  - "vbc30954"
helpviewer_keywords: 
  - "BC30954"
ms.assetid: 796592c4-70b7-45be-9322-db09e9095d7d
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Con gli argomenti di tipo dedotti per il metodo &#39;&lt;nomeroutine&gt;&#39; vengono restituiti i seguenti errori: &lt;elencoerrori&gt;
Una routine generica viene chiamata senza fornire alcun argomento di tipo e gli argomenti di tipo dedotto generano una o più violazioni di vincoli.  
  
 Di norma, quando si richiama un tipo generico, si fornisce un argomento di tipo per ogni parametro di tipo definito dal tipo generico. Se non si specifica alcun argomento di tipo, il compilatore prova a dedurre i tipi da passare ai parametri di tipo. Se i tipi derivati non soddisfano uno o più vincoli del parametro di tipo, il compilatore genera questo errore.  
  
 Un *vincolo* su un parametro di tipo limita gli argomenti di tipo che possono essere passati a esso. Ad esempio, un parametro di tipo potrebbe essere vincolato in modo da essere una classe che implementa l'interfaccia <xref:System.IComparable%601>. Per altre informazioni, vedere la sezione "Vincoli" in [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC30954  
  
### Per correggere l'errore  
  
-   Fornire gli argomenti di tipo alla routine generica in modo che il compilatore non sia costretto a dedurli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)