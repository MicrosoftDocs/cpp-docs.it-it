---
title: "&#39;&lt;nomepropriet&#224;&gt;&#39; non pu&#242; essere esposto a COM come propriet&#224; &#39;Let&#39; | Microsoft Docs"
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
  - "bc42102"
  - "vbc42102"
helpviewer_keywords: 
  - "BC42102"
ms.assetid: b77c5b7c-ac43-4b2d-b8bc-582e65e6f7e7
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomepropriet&#224;&gt;&#39; non pu&#242; essere esposto a COM come propriet&#224; &#39;Let&#39;
'\<nomeproprietà\>' non può essere esposto a COM come proprietà 'Let'. Non sarà possibile assegnare valori non oggetto \(quali numeri o stringhe\) a questa proprietà da Visual Basic 6.0 usando l'istruzione 'Let'.  
  
 Una classe che usa un blocco di attributi `COMClassAttribute` dichiara una proprietà `Public` con tipo di dati `Object`. Un'applicazione Visual Basic 6.0 può accedere a questa proprietà come `Variant`, ma può solo assegnare un riferimento a un oggetto con l'istruzione `Set`. Non può assegnare un tipo valore con l'istruzione `Let`.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42102  
  
### Per risolvere questo avviso  
  
-   È consigliabile informare i potenziali utenti di questa classe di Visual Basic 6.0 dell'impossibilità di usare questa proprietà con l'istruzione `Let`.  
  
## Vedere anche  
 [Default Property Changes in Visual Basic](http://msdn.microsoft.com/it-it/9b8cfad7-40ac-4b83-affb-1ff781755a4c)   
 [Property Statement](../Topic/Property%20Statement.md)   
 [Public](../Topic/Public%20\(Visual%20Basic\).md)   
 [Object Data Type](../Topic/Object%20Data%20Type.md)   
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Classe ComClassAttribute](http://msdn.microsoft.com/it-it/5c2f0835-9210-47dc-bc59-5c1769953574)