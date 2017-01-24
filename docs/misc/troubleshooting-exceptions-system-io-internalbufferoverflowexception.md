---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IO.InternalBufferOverflowException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "InternalBufferOverflowException (classe)"
ms.assetid: 1f58ca15-c4e4-4af9-9a3d-42d2cf919cbe
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IO.InternalBufferOverflowException
Un'eccezione <xref:System.IO.InternalBufferOverflowException> viene generata quando si verifica un overflow del buffer interno.  
  
## Suggerimenti associati  
 **Quando si utilizza FileSystemWatcher, escludere le notifiche di modifica non desiderate.**  
 Se si utilizza FileSystemWatcher, le modifiche ai file notificate vengono archiviate automaticamente in un buffer che viene creato e passato alle API dal componente. Se si apportano numerose modifiche in breve tempo, è possibile che si verifichi un overflow del buffer, che genera un'eccezione <xref:System.IO.InternalBufferOverflowException>, con conseguente perdita di tutte le modifiche. Per ovviare a questo problema, utilizzare le proprietà <xref:System.IO.FileSystemWatcher.NotifyFilter%2A> e <xref:System.IO.FileSystemWatcher.IncludeSubdirectories%2A> per escludere le notifiche di modifica non desiderate. Per altre informazioni, vedere <xref:System.IO.FileSystemWatcher>.  
  
## Note  
 È inoltre possibile aumentare la dimensione del buffer interno mediante la proprietà <xref:System.IO.FileSystemWatcher.InternalBufferSize%2A>. Tuttavia, poiché questa operazione ha effetti negativi sulle prestazioni, è preferibile limitare il più possibile la dimensione del buffer.  
  
## Vedere anche  
 <xref:System.IO.InternalBufferOverflowException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)