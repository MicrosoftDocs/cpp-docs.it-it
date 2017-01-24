---
title: "Risoluzione dei problemi relativi alle eccezioni: System.NotCancelableException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "NotCancelableException (classe)"
ms.assetid: 36b82d4b-f075-4af5-993a-3e763a7e254a
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.NotCancelableException
Un'eccezione `NotCancelableException` viene generata quando viene eseguito un tentativo di annullare un'operazione che non può essere annullata.  
  
## Suggerimenti associati  
 Non tentare di annullare l'operazione.  
 Alcune operazioni non possono essere annullate e generano questa eccezione quando viene eseguito un tentativo di questo tipo. In tali casi, non includere un'opzione che consenta all'utente di annullare l'operazione.  
  
## Vedere anche  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)