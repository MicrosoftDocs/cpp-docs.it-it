---
title: "Il nome origine specificato in EventLogSource &#232; registrato in un log diverso da quello indicato in EventLogName | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 7317e100-098b-408d-86e5-7c74cf8558c7
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il nome origine specificato in EventLogSource &#232; registrato in un log diverso da quello indicato in EventLogName
`EventLog` sta provando a fare riferimento a un'origine registrata in un log diverso. Se si scrivono le voci in un log eventi, è necessario specificare la proprietà <xref:System.Diagnostics.EventLog.Source%2A>. La proprietà <xref:System.Diagnostics.EventLog.Source%2A> registra il componente con il log eventi come origine valida delle voci. Una singola origine può essere associata a \(e quindi scrivere voci in\) un solo log eventi alla volta.  
  
 Per impostazione predefinita, se si prova a scrivere una voce senza prima aver registrato il componente come origine valida, il sistema registra automaticamente l'origine con il log eventi, usando il valore della proprietà <xref:System.Diagnostics.EventLog.Source%2A> come stringa di origine.  
  
### Per correggere l'errore  
  
-   Verificare che l'origine sia registrata nel log corretto. A tale scopo, usare il metodo <xref:System.Diagnostics.EventLog.CreateEventSource%2A> o uno dei relativi overload per specificare una stringa che identifica in modo univoco il componente nel log eventi.  
  
## Vedere anche  
 [Administering Event Logs](http://msdn.microsoft.com/it-it/35f53238-bdd2-417b-acd8-2fd9f7397f18)   
 [Event Log References](http://msdn.microsoft.com/it-it/4af0661c-6c96-49f4-961d-b26ed9bc3e87)   
 [How to: Add Your Application as a Source of Event Log Entries](http://msdn.microsoft.com/it-it/948ff920-a739-4e66-a191-ee951512d42c)   
 [How to: Remove an Event Source](http://msdn.microsoft.com/it-it/bc66c900-4b8a-426a-b8e2-17031a20167e)