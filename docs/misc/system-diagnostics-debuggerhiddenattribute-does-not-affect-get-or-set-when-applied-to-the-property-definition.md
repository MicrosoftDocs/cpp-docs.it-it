---
title: "System.Diagnostics.DebuggerHiddenAttribute non influisce su &#39;Get&#39; o &#39;Set&#39; quando viene applicato alla definizione della propriet&#224; | Microsoft Docs"
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
  - "bc40051"
  - "vbc40051"
helpviewer_keywords: 
  - "BC40051"
ms.assetid: 623d5e48-7fb2-48a9-bbbb-92914b08c01c
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# System.Diagnostics.DebuggerHiddenAttribute non influisce su &#39;Get&#39; o &#39;Set&#39; quando viene applicato alla definizione della propriet&#224;
System.Diagnostics.DebuggerHiddenAttribute non influisce su 'Get' o 'Set' quando viene applicato alla definizione della proprietà. Applicare l'attributo direttamente alle routine 'Get' e 'Set' come necessario.  
  
 L'attributo <xref:System.Diagnostics.DebuggerHiddenAttribute> viene applicato a una dichiarazione di proprietà.  
  
 Il codice sorgente può applicare l'attributo <xref:System.Diagnostics.DebuggerHiddenAttribute> a una routine. In questo modo si segnala al debugger di Visual Studio di non fermarsi all'interno della routine e di non consentire l'impostazione di alcun punto di interruzione nella routine.  
  
 Nonostante sia possibile applicare l'attributo <xref:System.Diagnostics.DebuggerHiddenAttribute> a una proprietà, non produce alcun effetto. L'effetto desiderato può essere ottenuto soltanto se lo si applica alla routine `Get` o `Set` della proprietà.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40051  
  
### Per correggere l'errore  
  
-   Rimuovere l'attributo <xref:System.Diagnostics.DebuggerHiddenAttribute> dalla dichiarazione di proprietà e applicarlo alla routine `Get` o `Set` della proprietà in base alle necessità.  
  
## Vedere anche  
 <xref:System.Diagnostics.DebuggerHiddenAttribute>   
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [Property Statement](../Topic/Property%20Statement.md)   
 [Get Statement](../Topic/Get%20Statement.md)   
 [Set Statement](../Topic/Set%20Statement%20\(Visual%20Basic\).md)