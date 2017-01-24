---
title: "MSBuild Error MSB1007 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.MissingLoggerError"
helpviewer_keywords: 
  - "MSB1007"
ms.assetid: bf45dbc3-50cd-488a-87df-9e647cd71f10
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1007
**Specificare un logger.**  
  
 Per l'opzione **\/logger** è necessario specificare un logger.  
  
### Per correggere l'errore  
  
1.  Specificare un logger utilizzando sia la classe logger che l'assembly logger.  La sintassi di `<logger>` è:  
  
     `<logger class>,<logger assembly>[;<logger parameters>]`  
  
     La sintassi di `<logger class>` è:  
  
    ```  
    [<partial or full namespace>.]<logger class name>  
    ```  
  
     La sintassi di `<logger assembly>` è:  
  
    ```  
    {<assembly name>[,<strong name>] | <assembly file>}  
    ```  
  
     I `<logger parameters>` sono facoltativi e vengono passati al logger esattamente come vengono digitati.  
  
     Di seguito sono riportati alcuni esempi dell'opzione **\/logger**:  
  
     `/logger:XMLLogger,MyLogger,Version=1.0.2,Culture=neutral`  
  
     `/logger:XMLLogger,C:\Loggers\MyLogger.dll`  
  
     `/logger:XMLLogger,..  \Loggers\MyLogger.dll;OutputAsHTML`  
  
## Vedere anche  
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)