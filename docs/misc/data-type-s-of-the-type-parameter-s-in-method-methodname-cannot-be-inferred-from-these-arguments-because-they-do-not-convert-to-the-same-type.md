---
title: "Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo &#39;&lt;nomemetodo&gt;&#39; perch&#233; non vengono convertiti nello stesso tipo | Microsoft Docs"
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
  - "vbc36660"
  - "bc36660"
  - "vbc36657"
  - "bc36657"
helpviewer_keywords: 
  - "BC36660"
  - "BC36657"
ms.assetid: e80c5afd-e16d-4f03-bdf1-c79c4286114b
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo &#39;&lt;nomemetodo&gt;&#39; perch&#233; non vengono convertiti nello stesso tipo
Non è possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo '\<nomemetodo\>' perché non vengono convertiti nello stesso tipo. Per correggere l'errore, provare a specificare i tipi di dati in modo esplicito.  
  
 Si è provato a usare l'inferenza del tipo per determinare il tipo o i tipi di dati del parametro o dei parametri di tipo durante la valutazione di una chiamata a una routine generica. Il compilatore non ha trovato un tipo di dati che soddisfi i vincoli di tutti gli argomenti. Di conseguenza, ha segnalato questo errore.  
  
> [!NOTE]
>  Quando non è possibile specificare gli argomenti \(ad esempio per gli operatori di query nelle espressioni di query\), il messaggio di errore visualizzato non contiene la seconda frase.  
  
 Il codice seguente illustra l'errore.  
  
```vb#  
Option Strict Off Module Module1 Sub Main() '' Not valid. Integer and Date do not convert to the same type. 'targetMethod(19, #3/4/2007#) End Sub Sub targetMethod(Of T)(ByVal p1 As T, ByVal p2 As T) End Sub End Module  
```  
  
 **ID errore:** BC36660 e BC36657  
  
### Per correggere l'errore  
  
-   Può essere possibile convertire uno o più argomenti in modo esplicito in un tipo compatibile, come mostrato nel codice seguente:  
  
    ```  
    targetMethod(19, #3/4/2007#.ToOADate)  
    ```  
  
-   Può essere possibile specificare un tipo di dati per il parametro o i parametri di tipo in cui vengono convertiti gli argomenti, come mostrato nel codice seguente:  
  
    ```  
    targetMethod(Of String)(19, #3/4/2007#)  
    ```  
  
## Vedere anche  
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)   
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)