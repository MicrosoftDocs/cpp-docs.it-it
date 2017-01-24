---
title: "L&#39;operatore &#39;&lt;nomeoperatore&gt;&#39; non &#232; definito per i tipi &#39;&lt;nometipo1&gt;&#39; e &#39;&lt;nometipo2&gt;&#39; | Microsoft Docs"
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
  - "vbc31080"
  - "bc31080"
helpviewer_keywords: 
  - "BC31080"
ms.assetid: d2f77450-2bf2-4b1e-b95f-dbc7878f2777
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operatore &#39;&lt;nomeoperatore&gt;&#39; non &#232; definito per i tipi &#39;&lt;nometipo1&gt;&#39; e &#39;&lt;nometipo2&gt;&#39;
L'operatore '\<nomeoperatore\>' non è definito per i tipi '\<nometipo1\>' e '\<nometipo2\>'. Usare l'operatore 'Is' per confrontare due tipi riferimento.  
  
 Si è provato a usare un operatore in modo inappropriato per i tipi specificati. Questo errore può essere causato dall'uso dell'operatore "\=" anziché dell'operatore `Is` per confrontare due oggetti.  
  
 **ID errore:** BC31080  
  
### Per correggere l'errore  
  
1.  Usare l'operatore `Is` per confrontare due tipi riferimento.  
  
2.  Usare l'operatore `Not` in combinazione con l'operatore `Is` per indicare disuguaglianza. Ad esempio:  
  
     [!code-vb[VbVbalrOOP#89](../misc/codesnippet/VisualBasic/operator-operatorname-is-not-defined-for-types-typename1-and-typename2_1.vb)]  
  
## Vedere anche  
 [Is Operator](../Topic/Is%20Operator%20\(Visual%20Basic\).md)   
 [\= Operator](../Topic/=%20Operator%20\(Visual%20Basic\).md)   
 [Not Operator](../Topic/Not%20Operator%20\(Visual%20Basic\).md)