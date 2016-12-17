---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Reflection.AmbiguousMatchException | Microsoft Docs"
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
  - "System.Reflection.AmbiguousMatchException (eccezione)"
  - "AmbiguousMatchException (eccezione)"
ms.assetid: f92b5c51-42b6-4c2e-83df-0d598b3b41c4
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Reflection.AmbiguousMatchException
Eccezione generata quando durante l'associazione a un metodo vengono individuati più metodi corrispondenti ai criteri di associazione specificati.  
  
## Note  
 Un'eccezione <xref:System.Reflection.AmbiguousMatchException> viene generata quando l'applicazione chiama una classe e non è in grado di determinare la classe o la classe di overload da utilizzare. L'associazione tenta di individuare la classe appropriata da utilizzare in base al numero di parametri e al tipo di parametri. Se vengono individuate più classi accettabili, verrà generata questa eccezione.  
  
## Vedere anche  
 <xref:System.Reflection.AmbiguousMatchException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)