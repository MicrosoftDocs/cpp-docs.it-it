---
title: "MSBuild Error MSB1004 | Microsoft Docs"
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
  - "MSBuild.MissingTargetError"
helpviewer_keywords: 
  - "MSB1004"
ms.assetid: aed36761-ab07-486c-b5eb-48ccb1c387dd
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1004
**Specificare il nome della destinazione.**  
  
 È necessario specificare almeno una destinazione con l'opzione **\/target**.  
  
### Per correggere l'errore  
  
1.  Specificare una o più destinazioni.  Per separare un elenco di destinazioni, è possibile utilizzare un punto e virgola o una virgola, ad esempio `/target:Clean;Compile`.  In alternativa, è possibile ripetere l'opzione, ad esempio `/t:Clean /t:` `Compile`  
  
## Vedere anche  
 [Targets](../Topic/MSBuild%20Targets.md)   
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)