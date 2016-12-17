---
title: "Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nometipo&gt;&#39; perch&#233; sono possibili pi&#249; tipi | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc36655"
  - "vbc36652"
  - "vbc36655"
  - "bc36652"
helpviewer_keywords: 
  - "BC36655"
  - "BC36652"
ms.assetid: 49836f20-c877-4267-8bdc-6f6d108fb8c0
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nometipo&gt;&#39; perch&#233; sono possibili pi&#249; tipi
Non è possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione '\<nomemetodo\>' definito in '\<nometipo\>' perché sono possibili più tipi. Per correggere l'errore, provare a specificare i tipi di dati in modo esplicito.  
  
 Si è provato a usare l'inferenza del tipo per determinare il tipo o i tipi di dati del parametro o dei parametri di tipo durante la valutazione di una chiamata a un metodo di estensione generico. Il compilatore rileva più tipi di dati per uno o più parametri di tipo e genera questo errore.  
  
> [!NOTE]
>  Quando non è possibile specificare gli argomenti \(ad esempio per gli operatori di query nelle espressioni di query\), il messaggio di errore visualizzato non contiene la seconda frase.  
  
 Il codice seguente illustra l'errore.  
  
```vb#  
Option Strict Off Imports System.Runtime.CompilerServices Module Module1 Sub Main() Dim caller As New Class1 '' Not valid. 'caller.targetExtension(1, "2") End Sub <Extension()> _ Sub targetExtension(Of T)(ByVal p0 As Class1, ByVal p1 As T, ByVal p2 As T) End Sub Class Class1 End Class End Module  
```  
  
 **ID errore:** BC36655 \(all'interno delle query [!INCLUDE[vbteclinq](../misc/includes/vbteclinq_md.md)]\) e BC36652 \(all'esterno delle query\)  
  
### Per correggere l'errore  
  
-   Se l'errore viene visualizzato al di fuori di una query, provare a specificare il tipo di dati del parametro o dei parametri di tipo in modo esplicito:  
  
    ```  
    caller.targetExtension(Of Integer)(1, "2") caller.targetExtension(Of String)(1, "2")  
    ```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)