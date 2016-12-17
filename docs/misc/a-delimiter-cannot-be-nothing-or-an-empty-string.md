---
title: "Un delimitatore non pu&#242; essere Nothing o una stringa vuota | Microsoft Docs"
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
  - "vbrTextFieldParser_DelimiterNothing"
ms.assetid: 8885fcd1-c201-409d-9a32-6ff2b13c0c13
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Un delimitatore non pu&#242; essere Nothing o una stringa vuota
`TextFieldParser` non riesce a leggere i contenuti dal file perché la proprietà `Delimiters` è impostata su `Nothing` o corrisponde a un oggetto `String` vuoto \(""\).  
  
### Per correggere l'errore  
  
-   Specificare un valore valido per `Delimiters`.  
  
## Vedere anche  
 [Metodo TextFieldParser.SetDelimiters](http://msdn.microsoft.com/it-it/21fa40ec-5866-4d0e-9fd9-c708a190dcc9)   
 [Proprietà TextFieldParser.Delimiters](http://msdn.microsoft.com/it-it/4eb18f4d-3011-40a9-b668-be93eed0444f)   
 [How to: Read From Comma\-Delimited Text Files](../Topic/How%20to:%20Read%20From%20Comma-Delimited%20Text%20Files%20in%20Visual%20Basic.md)   
 [TextFieldParser Object](../Topic/TextFieldParser%20Object.md)   
 [Parsing Text Files with the TextFieldParser Object](../Topic/Parsing%20Text%20Files%20with%20the%20TextFieldParser%20Object%20\(Visual%20Basic\).md)