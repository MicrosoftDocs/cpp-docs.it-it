---
title: "Impossibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo &#39;&lt;nomemetodo&gt;&#39; perch&#233; sono possibili pi&#249; tipi | Microsoft Docs"
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
  - "bc36651"
  - "bc36654"
  - "vbc36651"
  - "vbc36654"
helpviewer_keywords: 
  - "BC36651"
  - "BC36654"
ms.assetid: d4bf408c-ca1f-44ad-855a-3df898de60c6
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo &#39;&lt;nomemetodo&gt;&#39; perch&#233; sono possibili pi&#249; tipi
Impossibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo '\<nomemetodo\>' perché sono possibili più tipi. Per correggere l'errore, provare a specificare i tipi di dati in modo esplicito.  
  
 Si è provato a usare l'inferenza del tipo per determinare il tipo o i tipi di dati del parametro o dei parametri di tipo durante la valutazione di una chiamata a una routine generica. Il compilatore rileva più tipi di dati per uno o più parametri di tipo e genera questo errore.  
  
> [!NOTE]
>  Quando non è possibile specificare gli argomenti \(ad esempio per gli operatori di query nelle espressioni di query\), il messaggio di errore visualizzato non contiene la seconda frase.  
  
 Il codice seguente illustra l'errore.  
  
```vb#  
Option Strict Off Module Module1 Sub Main() '' Not valid. 'targetMethod(1, "2") End Sub Sub targetMethod(Of T)(ByVal p1 As T, ByVal p2 As T) End Sub End Module  
```  
  
 **ID errore:** BC36654 \(all'interno delle query [!INCLUDE[vbteclinq](../misc/includes/vbteclinq_md.md)]\) e BC36651 \(all'esterno delle query\)  
  
### Per correggere l'errore  
  
-   Se l'errore viene visualizzato al di fuori di una query, provare a specificare il tipo di dati del parametro di tipo in modo esplicito:  
  
    ```  
    targetMethod(Of Integer)(1, "2")  
    ```  
  
## Vedere anche  
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)