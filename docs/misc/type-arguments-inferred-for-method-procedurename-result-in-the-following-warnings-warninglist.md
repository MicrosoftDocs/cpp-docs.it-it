---
title: "Con gli argomenti di tipo dedotti per il metodo &#39;&lt;nomeroutine&gt;&#39; vengono restituiti i seguenti avvisi: &lt;elencoavvisi&gt; | Microsoft Docs"
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
  - "bc41006"
  - "vbc41006"
helpviewer_keywords: 
  - "BC41006"
ms.assetid: c789ffa9-0273-47f6-8915-78fc6a7d3d6d
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Con gli argomenti di tipo dedotti per il metodo &#39;&lt;nomeroutine&gt;&#39; vengono restituiti i seguenti avvisi: &lt;elencoavvisi&gt;
Una routine generica viene chiamata senza fornire alcun argomento di tipo e gli argomenti di tipo dedotto risultano in uno o più avvisi.  
  
 Di norma, quando si richiama un tipo generico, si fornisce un argomento di tipo per ogni parametro di tipo definito dal tipo generico. Se non si specifica alcun argomento di tipo, il compilatore prova a dedurre i tipi da passare ai parametri di tipo. Se i tipi dedotti provocano ambiguità o se creano una situazione che potrebbe provocare risultati imprevisti, il compilatore genera questo avviso.  
  
 Un *vincolo* su un parametro di tipo limita gli argomenti di tipo che possono essere passati a esso. Ad esempio, un parametro di tipo potrebbe essere vincolato in modo da essere una classe che implementa l'interfaccia <xref:System.IComparable%601>. Per altre informazioni, vedere la sezione "Vincoli" in [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md).  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC41006  
  
### Per correggere l'errore  
  
-   Fornire gli argomenti di tipo alla routine generica in modo che il compilatore non sia costretto a dedurli.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)