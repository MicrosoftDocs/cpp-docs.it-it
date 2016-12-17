---
title: "Non &#232; possibile convertire &#39;type1&#39; in &#39;type2&#39; | Microsoft Docs"
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
  - "bc31193"
  - "vbc31193"
helpviewer_keywords: 
  - "BC31193"
ms.assetid: f25a9f5b-7741-4cd6-b85a-b19037ed8e49
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile convertire &#39;type1&#39; in &#39;type2&#39;
Non è possibile convertire 'type1' in 'type2'. Si può usare la proprietà 'Value' per ottenere il valore stringa del primo elemento di 'parentElement'.  
  
 Si è provato a eseguire implicitamente il cast di un valore letterale XML a un tipo specifico. Non è possibile eseguire implicitamente il cast del valore letterale XML al tipo specificato.  
  
 **ID errore:** BC31193  
  
### Per correggere l'errore  
  
-   Usare la proprietà `Value` del valore letterale XML per fare riferimento al relativo valore come `String`. Usare la funzione `CType`, un'altra funzione di conversione del tipo oppure la classe <xref:System.Convert> per eseguire il cast del valore come tipo specificato.  
  
## Vedere anche  
 <xref:System.Convert>   
 [Accessing XML in Visual Basic](../Topic/Accessing%20XML%20in%20Visual%20Basic.md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)   
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)