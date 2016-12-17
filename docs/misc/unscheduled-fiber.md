---
title: "Fiber non pianificato | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30948"
  - "vbc30948"
helpviewer_keywords: 
  - "BC30948"
ms.assetid: 982bf6d2-ce62-4451-8a23-82dacf8ee100
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Fiber non pianificato
Il debugger non è in grado di valutare l'espressione perché si trova in un fiber logico non pianificato su un thread fisico. Questa situazione può verificarsi se il processo è in esecuzione in un SQL Server usando i fiber.  
  
 Un fiber è costituito da uno stack e un contesto di registro e può essere eseguito su qualsiasi thread. Un fiber può essere escluso da un thread e riavviato in un secondo momento su un thread diverso.  
  
 **ID errore:** BC30948  
  
### Per correggere l'errore  
  
-   Verificare che il fiber sia pianificato su un thread fisico.  
  
## Vedere anche  
 [Debugging SQL](http://msdn.microsoft.com/it-it/f27c17e6-1d90-49f2-9fc0-d02e6a27f109)   
 [Debug in Visual Studio](../Topic/Debugging%20in%20Visual%20Studio.md)