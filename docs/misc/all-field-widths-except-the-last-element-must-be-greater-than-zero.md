---
title: "Le larghezze di tutti i campi, ad eccezione dell&#39;ultimo elemento, devono essere maggiori di zero | Microsoft Docs"
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
  - "vbrTextFieldParser_FieldWidthsMustPositive"
ms.assetid: 41d8c661-a749-4c89-be56-905c6e7c3c9d
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le larghezze di tutti i campi, ad eccezione dell&#39;ultimo elemento, devono essere maggiori di zero
Le larghezze di tutti i campi, ad eccezione dell'ultimo elemento, devono essere maggiori di zero. Una larghezza di campo inferiore o uguale a zero nell'ultimo elemento indica che l'ultimo campo è di lunghezza variabile.  
  
 L'operazione ha avuto esito negativo perché la larghezza di un campo che non è l'ultimo elemento è impostata su un valore uguale o minore di zero. È possibile usare una larghezza di campo con un valore minore o uguale a zero nell'ultimo elemento per indicare che l'ultimo campo è di lunghezza variabile, ma non è possibile usarla per nessun altro elemento.  
  
### Per correggere l'errore  
  
-   Impostare la larghezza del campo di lunghezza corretta.  
  
## Vedere anche  
 [Metodo TextFieldParser.SetFieldWidths](http://msdn.microsoft.com/it-it/958fed9f-e0f3-4fc5-83b4-386156bdf036)   
 [Proprietà TextFieldParser.FieldWidths](http://msdn.microsoft.com/it-it/c6985360-60c6-494e-89e7-43b6b73f2597)   
 [How to: Read From Fixed\-width Text Files](../Topic/How%20to:%20Read%20From%20Fixed-width%20Text%20Files%20in%20Visual%20Basic.md)   
 [TextFieldParser Object](../Topic/TextFieldParser%20Object.md)