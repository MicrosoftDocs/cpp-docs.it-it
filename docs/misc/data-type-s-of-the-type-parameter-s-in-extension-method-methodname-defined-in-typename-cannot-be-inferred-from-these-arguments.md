---
title: "Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
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
  - "bc36649"
  - "vbc36646"
  - "bc36646"
  - "vbc36649"
helpviewer_keywords: 
  - "BC36649"
  - "BC36646"
ms.assetid: 55274b01-6d78-4950-861e-07d9273ef76e
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nometipo&gt;&#39;
Non è possibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo di estensione '\<nomemetodo\>' definito in '\<nometipo\>'. Per correggere l'errore, provare a specificare i tipi di dati in modo esplicito.  
  
 Si è provato a usare l'inferenza del tipo per determinare il tipo \(o i tipi\) di dati del parametro \(o dei parametri\) di tipo durante la valutazione di una chiamata a un metodo di estensione generico. Tuttavia, il compilatore non riesce a trovare un tipo di dati per i parametri di tipo in questo metodo e segnala l'errore.  
  
> [!NOTE]
>  Quando non è possibile specificare gli argomenti \(ad esempio per gli operatori di query nelle espressioni di query\), il messaggio di errore visualizzato non contiene la seconda frase.  
  
 Il codice seguente illustra l'errore.  
  
```vb#  
Module Module1 Sub Main() Dim classInstance As ClassExample '' Not valid. 'classInstance.GenericExtensionMethod("Hello", "World") End Sub <System.Runtime.CompilerServices.Extension()> _ Sub GenericExtensionMethod(Of T)(ByVal classEx As ClassExample, _ ByVal x As String, ByVal y As _ InterfaceExample(Of T)) End Sub End Module Interface InterfaceExample(Of T) End Interface Class ClassExample End Class  
```  
  
 **ID errore:** BC36649 e BC36646  
  
### Per correggere l'errore  
  
-   È possibile specificare un tipo di dati per il parametro o i parametri di tipo anziché basarsi sull'inferenza del tipo.  
  
## Vedere anche  
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)   
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)