---
title: "Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;typename&#39; perch&#233; non vengono convertiti nello stesso tipo | Microsoft Docs"
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
  - "vbc36658"
  - "bc36661"
  - "vbc36661"
  - "bc36658"
helpviewer_keywords: 
  - "BC36661"
  - "BC36658"
ms.assetid: 0bff97fd-cbe9-4433-8192-6498c6fb5d04
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;typename&#39; perch&#233; non vengono convertiti nello stesso tipo
Non è possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione '\<nomemetodo\>' definito in 'typename' perché non vengono convertiti nello stesso tipo. Per correggere l'errore, provare a specificare i tipi di dati in modo esplicito.  
  
 Si è provato a usare l'inferenza del tipo per determinare il tipo \(o i tipi\) di dati del parametro \(o dei parametri\) di tipo durante la valutazione di una chiamata a un metodo di estensione generico. Il compilatore non ha trovato un tipo di dati che soddisfi i vincoli di tutti gli argomenti. Di conseguenza, ha segnalato questo errore.  
  
> [!NOTE]
>  Quando non è possibile specificare gli argomenti \(ad esempio per gli operatori di query nelle espressioni di query\), il messaggio di errore visualizzato non contiene la seconda frase.  
  
 Il codice seguente illustra l'errore.  
  
```vb#  
Option Strict Off Module Module3 Sub Main() Dim c1 As New Class1 '' Not valid. Integer and Date do not convert to the same type. 'c1.targetMethod(19, #3/4/2007#) End Sub <System.Runtime.CompilerServices.Extension()> _ Sub targetMethod(Of T)(ByVal p0 As Class1, ByVal p1 As T, ByVal p2 As T) End Sub Class Class1 End Class End Module  
```  
  
 **ID errore:** BC36661 e BC36658  
  
### Per correggere l'errore  
  
-   Potrebbe essere possibile convertire uno o più argomenti in modo esplicito in un tipo compatibile, come illustrato nel codice seguente:  
  
    ```  
    c1.targetMethod(19, #3/4/2007#.ToOADate)  
    ```  
  
-   Potrebbe essere possibile specificare un tipo di dati per il parametro o i parametri di tipo in cui vengono convertiti gli argomenti, come illustrato nel codice seguente:  
  
    ```  
    c1.targetMethod(Of String)(19, #3/4/2007#)  
    ```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)   
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)