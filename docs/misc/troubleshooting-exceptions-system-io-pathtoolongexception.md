---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IO.PathTooLongException | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
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
  - "PathTooLongException (classe)"
ms.assetid: 8912c425-bf91-42e3-82d8-bee6b2062db3
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IO.PathTooLongException
Un'eccezione <xref:System.IO.PathTooLongException> viene generata quando un percorso o un nome di file contiene un numero di caratteri superiore alla lunghezza massima definita dal sistema.  
  
## Suggerimenti associati  
 **Assicurarsi che il percorso non sia più lungo del valore massimo definito dal sistema.**  
 Nelle piattaforme Windows i percorsi devono contenere meno di 248 caratteri e i nomi di file meno di 260 caratteri.  
  
## Vedere anche  
 <xref:System.IO.PathTooLongException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Procedura: analizzare percorsi di file](../Topic/How%20to:%20Parse%20File%20Paths%20in%20Visual%20Basic.md)