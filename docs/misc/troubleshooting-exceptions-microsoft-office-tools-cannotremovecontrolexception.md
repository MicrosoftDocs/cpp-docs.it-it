---
title: "Risoluzione dei problemi relativi alle eccezioni: Microsoft.Office.Tools.CannotRemoveControlException | Microsoft Docs"
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
  - "Microsoft.Office.Tools.CannotRemoveControlException (eccezione)"
ms.assetid: 0c806cb7-b34b-4664-999b-4621efd97414
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: Microsoft.Office.Tools.CannotRemoveControlException
Quando si tenta di rimuovere a livello di codice un controllo che non era stato aggiunto a livello di codice, viene generata un'eccezione <xref:Microsoft.Office.Tools.CannotRemoveControlException>.  
  
## Suggerimenti associati  
 È possibile rimuovere un controllo a livello di codice solo se era stato aggiunto allo stesso modo.  
 -   È possibile rimuovere un controllo a livello di codice solo se era stato aggiunto allo stesso modo. Se il controllo era stato aggiunto al documento in fase di progettazione anziché in fase di esecuzione, non può essere rimosso.  
  
## Vedere anche  
 <xref:Microsoft.Office.Tools.CannotRemoveControlException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)