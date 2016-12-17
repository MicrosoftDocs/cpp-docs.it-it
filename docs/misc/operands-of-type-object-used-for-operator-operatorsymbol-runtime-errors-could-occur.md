---
title: "Sono stati usati operandi di tipo Object per l&#39;operatore &#39;&lt;simbolooperatore&gt;&#39;. Potrebbero verificarsi errori di runtime | Microsoft Docs"
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
  - "BC42019"
  - "vbc42019"
helpviewer_keywords: 
  - "BC42019"
ms.assetid: f61944ba-863b-4a82-aae4-249bda52ec8d
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Sono stati usati operandi di tipo Object per l&#39;operatore &#39;&lt;simbolooperatore&gt;&#39;. Potrebbero verificarsi errori di runtime
Un'espressione usa un operatore in cui uno o entrambi gli operandi sono del [Object Data Type](../Topic/Object%20Data%20Type.md).  
  
 Quando una variabile o espressione restituisce `Object`, il compilatore deve eseguire un'*associazione tardiva*, che comporta l'esecuzione di operazioni supplementari in fase di esecuzione. Espone inoltre l'applicazione a possibili errori di runtime. Si supponga, ad esempio, di assegnare <xref:System.Windows.Forms.Form> a una variabile `Object` e quindi di provare a usarla con l'[\/ Operator](../Topic/-%20Operator%20\(Visual%20Basic\)3.md). In questo caso il runtime genera un'eccezione <xref:System.InvalidCastException> perché Visual Basic non può convertire un oggetto <xref:System.Windows.Forms.Form> in un valore numerico.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42019  
  
### Per correggere l'errore  
  
-   Se possibile, organizzare gli operandi in modo che restituiscano i tipi di dati per cui è stato definito l'operatore.  
  
## Vedere anche  
 [Arithmetic Operators in Visual Basic](../Topic/Arithmetic%20Operators%20in%20Visual%20Basic.md)