---
title: "Impossibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo &#39;&lt;nomemetodo&gt;&#39; | Microsoft Docs"
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
  - "vbc36648"
  - "bc36645"
  - "bc36648"
  - "vbc36645"
helpviewer_keywords: 
  - "BC36648"
  - "BC36645"
ms.assetid: cc8c67bb-6cbb-4d7c-ba26-fe1d38908434
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo &#39;&lt;nomemetodo&gt;&#39;
Impossibile dedurre da questi argomenti i tipi di dati dei parametri di tipo nel metodo '\<nomemetodo\>'. Per correggere l'errore, provare a specificare i tipi di dati in modo esplicito.  
  
 Si è provato a usare l'inferenza del tipo per determinare il tipo \(o tipi\) di dati del parametro \(o parametri\) di tipo durante la valutazione di una chiamata a una routine generica. Tuttavia, il compilatore non riesce a trovare un tipo di dati per i parametri di tipo in questo metodo e segnala l'errore.  
  
> [!NOTE]
>  Quando non è possibile specificare gli argomenti \(ad esempio per gli operatori di query nelle espressioni di query\), il messaggio di errore visualizzato non contiene la seconda frase.  
  
 Ad esempio, il codice seguente illustra l'errore.  
  
```vb#  
Module Module1 Sub Main() '' Not valid. 'GenericMethod("Hello", "World") End Sub Sub GenericMethod(Of T)(ByVal x As String, ByVal y As _ InterfaceExample(Of T)) End Sub End Module Interface InterfaceExample(Of T) End Interface  
```  
  
 **ID errore:** BC36648 e BC36645  
  
### Per correggere l'errore  
  
-   È possibile specificare un tipo di dati per il parametro o i parametri di tipo anziché basarsi sull'inferenza del tipo.  
  
## Vedere anche  
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)