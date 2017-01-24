---
title: "Risoluzione dei problemi relativi alle eccezioni: System.DeploymentFramework.DeploymentDownloadException | Microsoft Docs"
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
  - "DeploymentDownloadException (classe)"
  - "distribuzione dell'applicazione [C#], classe DeploymentDownloadException"
  - "distribuzione delle applicazioni [C#], classe DeploymentDownloadException"
ms.assetid: 55ec7af5-b1d1-4db2-8af8-3c708f521cc7
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.DeploymentFramework.DeploymentDownloadException
Un'eccezione `T:System.DeploymentFramework.DeploymentDownloadException` viene generata quando si verifica un'eccezione di rete di qualsiasi tipo durante il download di un aggiornamento di un'applicazione.  
  
## Suggerimenti associati  
 **Esaminare la proprietà InnerException per determinare l'eccezione System.Net o System.IO sottostante.**  
 Questa eccezione viene generata ogni volta che si verifica un'eccezione di rete durante il download di un aggiornamento di un'applicazione. Esaminare la proprietà <xref:System.Exception.InnerException%2A> dell'eccezione per determinare l'eccezione sottostante.  
  
## Vedere anche  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)