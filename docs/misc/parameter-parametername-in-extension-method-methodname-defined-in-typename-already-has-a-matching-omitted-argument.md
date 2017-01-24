---
title: "Il parametro &#39;&lt;nomeparametro&gt;&#39; del metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nometipo&gt;&#39; ha gi&#224; un argomento omesso corrispondente | Microsoft Docs"
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
  - "bc36583"
  - "vbc36583"
helpviewer_keywords: 
  - "BC36583"
ms.assetid: 662072fa-abb8-43c3-8ca2-aefb20f2e902
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro &#39;&lt;nomeparametro&gt;&#39; del metodo di estensione &#39;&lt;nomemetodo&gt;&#39; definito in &#39;&lt;nometipo&gt;&#39; ha gi&#224; un argomento omesso corrispondente
Una chiamata di routine a un metodo di estensione omette un argomento in base alla posizione e quindi specifica l'argomento per nome. Ad esempio, la seguente chiamata al metodo di estensione `ABC` prima omette un argomento per il parametro `Y` e quindi lo fornisce per nome.  
  
```  
<Extension()> _ Public Sub ABC(ByVal X As Integer, Optional ByVal Y As Byte = 0, _ Optional ByVal Z As Byte = 0) End Sub ' . . . ' Calling extension method ABC. Dim number As Integer ' Not valid. ' number.ABC(, 4, Y:=5)  
```  
  
 **ID errore:** BC36583  
  
### Per correggere l'errore  
  
-   Specificare l'argomento in base alla posizione oppure rimuovere la virgola che lo omette.  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Passing Arguments by Position and by Name](../Topic/Passing%20Arguments%20by%20Position%20and%20by%20Name%20\(Visual%20Basic\).md)