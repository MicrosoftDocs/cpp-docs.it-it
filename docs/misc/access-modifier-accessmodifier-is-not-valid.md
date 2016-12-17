---
title: "Il modificatore di accesso &#39;&lt;modificatoreaccesso&gt;&#39; non &#232; valido | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31100"
  - "vbc31100"
helpviewer_keywords: 
  - "BC31100"
ms.assetid: 1cd71acc-0b54-4f64-8d61-75b272d293cb
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il modificatore di accesso &#39;&lt;modificatoreaccesso&gt;&#39; non &#232; valido
Un'[Get Statement](../Topic/Get%20Statement.md) o un'[Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md) specifica un livello di accesso meno restrittivo di quello specificato per la proprietà che lo contiene.  
  
 È sempre possibile specificare un livello di accesso per la proprietà. Inoltre, è possibile specificare un livello di accesso diverso al massimo per una delle routine della proprietà \(`Get` o `Set`\), sempre che sia più restrittiva rispetto al livello di accesso della proprietà. Ad esempio, se la proprietà è `Friend`, è possibile specificare `Private` per una routine della proprietà, ma non `Public`. Non è possibile specificare livelli di accesso per entrambe le routine della proprietà.  
  
 **ID errore:** BC31100  
  
### Per correggere l'errore  
  
-   Specificare un livello di accesso per la routine della proprietà più restrittivo di quello specificato per la proprietà o rimuovere il modificatore di accesso.  
  
-   Dichiarare il livello di accesso meno restrittivo nell'[Property Statement](../Topic/Property%20Statement.md) e quello più restrittivo in una delle routine della proprietà.  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Declare a Property with Mixed Access Levels](../Topic/How%20to:%20Declare%20a%20Property%20with%20Mixed%20Access%20Levels%20\(Visual%20Basic\).md)