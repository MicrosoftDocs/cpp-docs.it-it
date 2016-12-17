---
title: "Impossibile leggere i campi delimitati. Le virgolette non sono un delimitatore consentito se EscapeQuotes &#232; impostato su True | Microsoft Docs"
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
  - "vbrTextFieldParser_IllegalDelimiter"
ms.assetid: ab8a0c3a-b89c-4617-9e31-7e81f5dca433
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile leggere i campi delimitati. Le virgolette non sono un delimitatore consentito se EscapeQuotes &#232; impostato su True
`TextFieldParser` non può leggere dal file perché sono state fornite le virgolette \("\) come delimitatore e `EscapeQuotes` è impostato su `True`.  
  
### Per correggere l'errore  
  
-   Impostare `EscapeQuotes` su `False`.  
  
## Vedere anche  
 [Metodo TextFieldParser.SetDelimiters](http://msdn.microsoft.com/it-it/21fa40ec-5866-4d0e-9fd9-c708a190dcc9)   
 [Proprietà TextFieldParser.Delimiters](http://msdn.microsoft.com/it-it/4eb18f4d-3011-40a9-b668-be93eed0444f)   
 [How to: Read From Comma\-Delimited Text Files](../Topic/How%20to:%20Read%20From%20Comma-Delimited%20Text%20Files%20in%20Visual%20Basic.md)   
 [TextFieldParser Object](../Topic/TextFieldParser%20Object.md)