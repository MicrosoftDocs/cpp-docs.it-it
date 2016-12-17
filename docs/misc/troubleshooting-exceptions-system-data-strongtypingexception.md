---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Data.StrongTypingException | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "StrongTypingException (classe)"
ms.assetid: 90859ce2-3696-43cb-baf4-7daf98d8e2e1
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Data.StrongTypingException
Un errore <xref:System.Data.StrongTypingException> si verifica quando l'utente accede a un valore <xref:System.DBNull> in una proprietà <xref:System.Data.DataTable.DataSet%2A> fortemente tipizzata.  
  
## Suggerimenti associati  
 **Aggiungere la gestione degli errori per StrongTypingException.**  
 Inserire il codice che accede al metodo <xref:System.Data.DataTable.DataSet%2A> in un blocco `Try…Catch` e rilevare l'eccezione <xref:System.Data.StrongTypingException>.  
  
## Vedere anche  
 <xref:System.Data.DataTable.DataSet%2A>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Utilizzo di dataset in Visual Studio](../Topic/Dataset%20tools%20in%20Visual%20Studio.md)