---
title: "Non &#232; possibile selezionare elementi XML dal tipo &#39;type&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc36807"
  - "bc36807"
helpviewer_keywords: 
  - "BC36807"
ms.assetid: 01c19899-2b44-41e9-a99c-35edfa0deaf1
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile selezionare elementi XML dal tipo &#39;type&#39;
È stato fatto riferimento a un elemento figlio XML per un oggetto che non è di tipo <xref:System.Xml.Linq.XElement>, <xref:System.Xml.Linq.XDocument> o `IEnumerable(Of XElement)`. Per altre informazioni, vedere [XML Child Axis Property](../Topic/XML%20Child%20Axis%20Property%20\(Visual%20Basic\).md).  
  
```vb#  
' Generates an error. Dim var = "sample text".<child>  
```  
  
 **ID errore:** BC36807  
  
### Per correggere l'errore  
  
-   Se si fa riferimento a un attributo di un oggetto, quest'ultimo deve essere fortemente tipizzato come <xref:System.Xml.Linq.XElement>, <xref:System.Xml.Linq.XDocument> o `IEnumerable(Of XElement)`. Di seguito è riportato un esempio:  
  
    ```vb#  
    Dim elem As XElement = <root> <child /> </root> Dim var = elem.<child>  
    ```  
  
## Vedere anche  
 [XML Child Axis Property](../Topic/XML%20Child%20Axis%20Property%20\(Visual%20Basic\).md)   
 [XML Axis Properties](../Topic/XML%20Axis%20Properties%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)