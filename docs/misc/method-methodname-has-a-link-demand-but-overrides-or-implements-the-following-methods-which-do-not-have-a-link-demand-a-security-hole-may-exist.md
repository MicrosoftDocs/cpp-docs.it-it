---
title: "Il metodo &#39;&lt;nomemetodo&gt;&#39; &#232; associato a una richiesta di collegamento, ma esegue l&#39;override dei metodi elencati di seguito o li implementa. Tali metodi non sono associati a richieste di collegamento. &#200; possibile che esista una vulnerabilit&#224; di sicurezza: | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc42200"
  - "vbc42200"
helpviewer_keywords: 
  - "BC42200"
ms.assetid: c79d672e-638c-4d87-9b93-edf12ce84a52
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo &#39;&lt;nomemetodo&gt;&#39; &#232; associato a una richiesta di collegamento, ma esegue l&#39;override dei metodi elencati di seguito o li implementa. Tali metodi non sono associati a richieste di collegamento. &#200; possibile che esista una vulnerabilit&#224; di sicurezza:
Un'azione di richiesta collegamento di sicurezza è stata aggiunta al metodo. Tuttavia il metodo esegue l'override o implementa metodi che non presentano richieste di collegamento. Di conseguenza i metodi implementati o sottoposti a override possono essere chiamati con autorizzazioni insufficienti, che possono causare problemi di sicurezza.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42200  
  
### Per correggere l'errore  
  
-   Aggiungere richieste di collegamento ai metodi sottoposti a override e\/o implementati.  
  
## Vedere anche  
 [Link Demands](../Topic/Link%20Demands.md)   
 [Demand e LinkDemand](http://msdn.microsoft.com/it-it/1ab877f2-70f4-4e0d-8116-943999dfe8f5)   
 [Ottimizzazioni della sicurezza](http://msdn.microsoft.com/it-it/cf255069-d85d-4de3-914a-e4625215a7c0)