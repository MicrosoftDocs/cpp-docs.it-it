---
title: "Un altro log eventi ha gi&#224; registrato un&#39;origine con questo nome | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: e6f5cd95-bb3f-4845-84fb-ae623a9bd44e
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Un altro log eventi ha gi&#224; registrato un&#39;origine con questo nome
Si è provato a scrivere una voce in un log eventi ma l'origine specificata è stata registrata in un altro log eventi.  
  
 Per consentire al componente <xref:System.Diagnostics.EventLog> di scrivere voci in un log, è necessario impostare la proprietà <xref:System.Diagnostics.EventLog.Source%2A> sull'istanza del componente. Quando si esegue questa operazione, viene controllato che l'origine specificata sia registrata nel log eventi in cui viene scritto il componente e, se necessario, viene chiamata la proprietà <xref:System.Diagnostics.EventLog.CreateEventSource%2A>.  
  
### Per correggere l'errore  
  
1.  Rimuovere l'associazione tra l'origine e il primo log usando il metodo <xref:System.Diagnostics.EventLog.DeleteEventSource%2A> o <xref:System.Diagnostics.EventLog.DeleteEventSource%2A>.  
  
2.  Registrare l'origine nel nuovo log.  
  
## Vedere anche  
 [Oggetto My.Application.Log](../Topic/My.Application.Log%20Object.md)   
 [How to: Remove an Event Source](http://msdn.microsoft.com/it-it/bc66c900-4b8a-426a-b8e2-17031a20167e)   
 [How to: Add Your Application as a Source of Event Log Entries](http://msdn.microsoft.com/it-it/948ff920-a739-4e66-a191-ee951512d42c)