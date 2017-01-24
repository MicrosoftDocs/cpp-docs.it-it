---
title: "Risoluzione dei problemi relativi alle eccezioni: System.OperationCanceledException | Microsoft Docs"
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
  - "OperationCanceledException (classe)"
ms.assetid: 275e2887-7491-432b-9b80-a21bb794be29
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.OperationCanceledException
Un'eccezione <xref:System.OperationCanceledException> viene generata quando viene avviata e poi annullata un'operazione con l'enumerazione <xref:Microsoft.VisualBasic.FileIO.UICancelOption> impostata su `ThrowException`.  
  
## Suggerimenti associati  
 Se non si desidera che questa eccezione venga generata, impostare <xref:System.OperationCanceledException> su `DoNothing`.  
 Il valore predefinito dell'enumerazione <xref:Microsoft.VisualBasic.FileIO.UICancelOption> è `ThrowException`. Se non si desidera che questa eccezione venga generata quando l'utente annulla l'operazione, impostare il valore dell'enumerazione su `DoNothing`.  
  
## Vedere anche  
 <xref:System.OperationCanceledException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)