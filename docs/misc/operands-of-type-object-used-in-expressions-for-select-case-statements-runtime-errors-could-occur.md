---
title: "Operandi di tipo Object usati in espressioni per istruzioni &#39;Select&#39; e &#39;Case&#39;; potrebbero verificarsi errori in fase di esecuzione | Microsoft Docs"
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
  - "vbc42036"
  - "bc42036"
helpviewer_keywords: 
  - "BC42036"
ms.assetid: f11e9c9f-aa66-4eb1-8f49-abf713bef885
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operandi di tipo Object usati in espressioni per istruzioni &#39;Select&#39; e &#39;Case&#39;; potrebbero verificarsi errori in fase di esecuzione
Una costruzione `Select`...`Case` usa una o più espressioni del [Object Data Type](../Topic/Object%20Data%20Type.md).  
  
 Quando una variabile o espressione restituisce `Object`, il compilatore deve eseguire un'*associazione tardiva*, che comporta l'esecuzione di operazioni supplementari in fase di esecuzione. Espone inoltre l'applicazione a possibili errori di runtime. Se ad esempio si assegna un oggetto <xref:System.Windows.Forms.Form> a una variabile `Object` e quindi si prova a confrontarla con un numero, viene generata un'eccezione <xref:System.InvalidCastException> perché Visual Basic non supporta la conversione di un oggetto <xref:System.Windows.Forms.Form> in un valore numerico.  
  
 Le espressioni contenute in una costruzione `Select`...`Case` devono presentare tutte lo stesso tipo di dati oppure tipi di dati strettamente correlati e convertibili tra di loro. Questo perché almeno un valore di ogni istruzione `Case` viene confrontato con l'espressione di test sulla quale si basa la costruzione `Select`...`Case`.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42036  
  
### Per correggere l'errore  
  
-   Se possibile, organizzare tutte le espressioni in modo che restituiscano i tipi di dati per i quali sono stati definiti gli operatori di confronto.  
  
## Vedere anche  
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)   
 [Arithmetic Operators in Visual Basic](../Topic/Arithmetic%20Operators%20in%20Visual%20Basic.md)   
 [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md)