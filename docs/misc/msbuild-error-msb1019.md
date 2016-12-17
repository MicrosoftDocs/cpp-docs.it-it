---
title: "MSBuild Error MSB1019 | Microsoft Docs"
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
  - "MSBuild.InvalidLoggerError"
helpviewer_keywords: 
  - "MSB1019"
ms.assetid: 5d0169f7-f878-433a-ac30-d9d6010130af
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1019
**Formato dell'opzione del logger non valido.**  
  
 L'opzione **\/logger** non è stata specificata correttamente.  Per specificare un logger è necessario fornire almeno l'assembly del logger o, se si desidera, specificare in modo esplicito il logger da caricare, fornendo sia la classe sia l'assembly del logger.  I parametri del logger sono facoltativi.  
  
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
  
     Esempio: \/`logger:XMLLogger,MyLogger,Version=1.0.2,Culture=neutral`  
  
## Vedere anche  
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)   
 [Build Loggers](../Topic/Build%20Loggers.md)