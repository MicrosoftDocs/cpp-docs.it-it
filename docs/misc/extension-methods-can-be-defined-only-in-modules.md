---
title: "I metodi di estensione possono essere definiti solo nei moduli | Microsoft Docs"
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
  - "vbc36551"
  - "bc36551"
helpviewer_keywords: 
  - "BC36551"
ms.assetid: c832d523-5bf6-4baf-b91c-bd26d94453ed
caps.latest.revision: 22
caps.handback.revision: 22
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi di estensione possono essere definiti solo nei moduli
Questo errore si verifica quando un metodo di estensione è stato definito all'esterno di un modulo. In Visual Basic, tutti i metodi di estensione devono essere definiti all'interno di moduli standard.  
  
 **ID errore:** BC36551  
  
### Per correggere l'errore  
  
-   Inserire il metodo di estensione in un modulo.  
  
## Esempio  
 L'esempio seguente estende la classe `String` aggiungendo un metodo `Print`.  
  
```  
Imports StringUtility Imports System.Runtime.CompilerServices Namespace StringUtility <Extension()> _ Module StringExtensions <Extension()> _ Public Sub Print (ByVal str As String) Console.WriteLine(str) End Sub End Module End Namespace  
```  
  
## Vedere anche  
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Module \<keyword\>](../Topic/Module%20%3Ckeyword%3E%20\(Visual%20Basic\).md)   
 [Module Statement](../Topic/Module%20Statement.md)