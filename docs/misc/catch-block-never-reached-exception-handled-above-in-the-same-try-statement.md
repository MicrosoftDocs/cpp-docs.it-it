---
title: "Il blocco &#39;Catch&#39; non &#232; mai stato raggiunto. &lt;eccezione&gt; viene gestito sopra nella stessa istruzione Try | Microsoft Docs"
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
  - "bc42031"
  - "vbc42031"
helpviewer_keywords: 
  - "BC42031"
ms.assetid: 7d15597c-5988-42ea-a853-63cbf78faaf3
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il blocco &#39;Catch&#39; non &#232; mai stato raggiunto. &lt;eccezione&gt; viene gestito sopra nella stessa istruzione Try
Un blocco `Catch` nel codice non è raggiungibile perché è gestito in un blocco `Try` precedente.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42031  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione ridondante.  
  
## Vedere anche  
 [Procedura: Rilevare un'eccezione in Visual Basic](http://msdn.microsoft.com/it-it/f3063c89-d2bf-49b1-91b5-b87edfb18b95)   
 [Procedura: Testare il codice con un blocco try…catch in Visual Basic](http://msdn.microsoft.com/it-it/8368e205-ed73-4185-a247-af84fb4fafa9)   
 [Procedura: Filtrare gli errori in un blocco catch in Visual Basic](http://msdn.microsoft.com/it-it/85964d0a-56e7-4301-a96e-5eaea23b7b9b)   
 [Procedura dettagliata: Gestione strutturata delle eccezioni \(Visual Basic\)](http://msdn.microsoft.com/it-it/440da655-4b32-490b-8b16-bfe46f41fa76)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)