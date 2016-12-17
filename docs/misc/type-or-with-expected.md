---
title: "&#200; previsto il tipo o &#39;With&#39; | Microsoft Docs"
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
  - "vbc30988"
  - "bc30988"
helpviewer_keywords: 
  - "BC30988"
ms.assetid: ab9c0cee-9fe4-4764-a3c2-aec16e709d4c
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto il tipo o &#39;With&#39;
Quando si dichiara un'istanza di una classe, la parola chiave `New` deve essere seguita da un nome di tipo o da `With`. Ad esempio, le istruzioni seguenti dichiarano che `client` è un'istanza della classe `Customer`. Il nome di tipo `Customer` segue `New`.  
  
```  
' Dim client As New Customer()  
' The next declaration uses an object initializer.  
Dim client As New Customer() With {.Name = "Litware, Inc."}  
```  
  
 A partire da [!INCLUDE[vb_orcas_long](../misc/includes/vb_orcas_long_md.md)], è possibile dichiarare un oggetto come istanza di un tipo anonimo, nel qual caso non si specifica un tipo di dati. Nelle dichiarazioni di tipo anonimo la parola chiave `With` segue `New`.  
  
```  
Dim person = New With {.Name ="Mike Nash", .Age = 27}  
```  
  
 **ID errore:** BC30988  
  
### Per correggere l'errore  
  
-   Modificare la dichiarazione in modo che `New` sia seguito da `With` o da un nome di tipo.  
  
## Vedere anche  
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)   
 [NotInBuild: Istruzioni di dichiarazione in Visual Basic](http://msdn.microsoft.com/it-it/81f3c398-f45c-4d95-80bf-aa39d1a0fb30)