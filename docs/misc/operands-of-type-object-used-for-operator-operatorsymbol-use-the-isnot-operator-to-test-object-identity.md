---
title: "Operandi di tipo Object usati per l&#39;operatore &#39;&lt;simbolooperatore&gt;&#39;. Utilizzare l&#39;operatore &#39;IsNot&#39; per verificare l&#39;identit&#224; dell&#39;oggetto | Microsoft Docs"
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
  - "vbc42032"
  - "bc42032"
helpviewer_keywords: 
  - "BC42032"
ms.assetid: f43b163b-f8f6-489d-ba9e-df6398ccc553
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operandi di tipo Object usati per l&#39;operatore &#39;&lt;simbolooperatore&gt;&#39;. Utilizzare l&#39;operatore &#39;IsNot&#39; per verificare l&#39;identit&#224; dell&#39;oggetto
Un'espressione usa l'operatore `<>` con uno o entrambi gli operandi del [Object Data Type](../Topic/Object%20Data%20Type.md).  
  
 Si consiglia di usare l'operatore `Is` o `IsNot` per determinare se due riferimenti a oggetti si riferiscono alla stessa istanza dell'oggetto. Vedere "Confronto di oggetti" in [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md).  
  
 Quando una variabile o espressione restituisce `Object`, il compilatore deve eseguire un'*associazione tardiva*, che comporta l'esecuzione di operazioni supplementari in fase di esecuzione. Espone inoltre l'applicazione a possibili errori di runtime. Ad esempio, se si assegna un oggetto <xref:System.Windows.Forms.Form> a una variabile `Object` e si prova a usarlo con l'operatore `<>`, il runtime genera <xref:System.InvalidCastException> perché Visual Basic non può convertire un oggetto <xref:System.Windows.Forms.Form> in un tipo di dati appropriato per il confronto di valori. Anche se entrambi gli operandi restituiscono il tipo <xref:System.Windows.Forms.Form>, l'operazione non riesce perché `<>` non è definito per gli operandi <xref:System.Windows.Forms.Form>.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42032  
  
### Per correggere l'errore  
  
-   Se si vuole determinare se due riferimenti a oggetti si riferiscono alla stessa istanza dell'oggetto, usare l'operatore `Is` o `IsNot`.  
  
## Vedere anche  
 [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md)   
 [IsNot Operator](../Topic/IsNot%20Operator%20\(Visual%20Basic\).md)   
 [How to: Determine Whether Two Objects Are Related](../Topic/How%20to:%20Determine%20Whether%20Two%20Objects%20Are%20Related%20\(Visual%20Basic\).md)   
 [How to: Determine Whether Two Objects Are Identical](../Topic/How%20to:%20Determine%20Whether%20Two%20Objects%20Are%20Identical%20\(Visual%20Basic\).md)