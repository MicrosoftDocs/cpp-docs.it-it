---
title: "La firma del metodo di estensione &#39;&lt;NomeMetodo&gt;&#39; definita in &#39;&lt;NomeTipo&gt;&#39; non &#232; uguale a quella del delegato &#39;&lt;NomeDelegato&gt;&#39; | Microsoft Docs"
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
  - "bc36580"
  - "vbc36580"
helpviewer_keywords: 
  - "BC36580"
ms.assetid: dc6b6a63-02b0-43d8-b6a7-c1cd397c6ee3
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La firma del metodo di estensione &#39;&lt;NomeMetodo&gt;&#39; definita in &#39;&lt;NomeTipo&gt;&#39; non &#232; uguale a quella del delegato &#39;&lt;NomeDelegato&gt;&#39;
Le firme del metodo di estensione e il delegato che si sta provando a usare non corrispondono. L'istruzione `Delegate` definisce i tipi di parametro e i tipi restituiti di una classe delegata. Qualsiasi routine con parametri, tipi e tipi restituiti corrispondenti può essere usata per creare un'istanza di questo tipo di delegato. Nell'esempio seguente viene segnalato questo errore perché la firma del metodo di estensione `Example` non è compatibile con la firma del delegato `Del`.  
  
```vb#  
' Definition of the delegate, with two parameters. Delegate Sub Del(ByVal m As Integer, ByVal s As String)  
```  
  
```vb#  
' Definition of the extension method, with one parameter. <Extension()> _ Sub Example(ByVal s As String) ' Body of the Sub. End Sub  
```  
  
```vb#  
'' This assignment causes the error. ' Dim exampleDel As Del = AddressOf Example  
```  
  
 **ID errore:** BC36580  
  
### Per correggere l'errore  
  
-   Verificare che il delegato e il metodo di estensione abbiano lo stesso numero di parametri.  
  
-   Verificare che l'ordine dei parametri sia lo stesso nel delegato e nel metodo di estensione.  
  
-   Confrontare il tipo di dati di ogni parametro del delegato con il tipo di dati del parametro del metodo di estensione corrispondente per assicurarsi che siano compatibili.  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Delegate Statement](../Topic/Delegate%20Statement.md)   
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)