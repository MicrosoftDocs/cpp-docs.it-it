---
title: "TN047: rilascio dei requisiti di transazione database | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TN047"
ms.assetid: f93c51cf-a8c0-43d0-aa47-7bcb8333d693
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN047: rilascio dei requisiti di transazione database
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota di tecnologia, che ha discusso i requisiti di transazione delle classi di database ODBC MFC, è ora obsoleta.  Prima di MFC 4,2, le classi di database è necessario che i cursori vengono mantenuti nei recordset dopo un'operazione di **Rollback** o di **CommitTrans**.  Se il driver ODBC e DBMS non supporta questo livello di mantenere il cursore, le classi di database non è abilitato le transazioni.  
  
 A partire da MFC 4,2, le classi di database sono state ridotte la restrizione della conservazione del cursore.  Le transazioni verranno abilitate se il driver supporta le.  Tuttavia, ora è necessario verificare gli effetti di un'operazione di **Rollback** o di **CommitTrans** sui recordset aperti.  Vedere le funzioni membro [CDatabase::GetCursorCommitBehavior](../Topic/CDatabase::GetCursorCommitBehavior.md) e [CDatabase::GetCursorRollbackBehavior](../Topic/CDatabase::GetCursorRollbackBehavior.md) per ulteriori informazioni.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)