---
title: "Risoluzione dei problemi relativi alle eccezioni: System.TypeInitializationException | Microsoft Docs"
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
  - "TypeInitializationException (eccezione)"
  - "System.TypeInitializationException (eccezione)"
ms.assetid: c77e81fd-1518-49a1-8213-3f169658f5f5
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.TypeInitializationException
Eccezione generata come wrapper per l'eccezione generata dall'inizializzatore di classi.  
  
## Note  
 Quando un inizializzatore di classi non inizializza un tipo, viene creata un'eccezione <xref:System.TypeInitializationException> che viene passata come riferimento all'eccezione generata dall'inizializzatore di classi del tipo. La proprietà <xref:System.Exception.InnerException%2A> dell'eccezione <xref:System.TypeInitializationException> contiene l'eccezione sottostante.  
  
## Vedere anche  
 <xref:System.TypeInitializationException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)