---
title: "MSBuild Error MSB1002 | Microsoft Docs"
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
  - "MSBuild.UnexpectedParametersError"
helpviewer_keywords: 
  - "MSB1002"
ms.assetid: 798c9690-6d99-4f21-a491-ab44d3f3c552
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1002
**Questa opzione non accetta parametri.**  
  
 Non è possibile definire parametri per questa opzione.  È necessario solo il nome dell'opzione, che non deve essere seguito dai due punti.  
  
### Per correggere l'errore  
  
-   Per questa opzione digitare il comando senza parametri, ovvero, anziché specificare `msbuild /<switch>:<parameters>`, digitare `msbuild /<switch>`  
  
-   Rimuovere i due punti che seguono il nome dell'opzione, ovvero, anziché specificare `msbuild /<switch>:`, digitare `msbuild /<switch>`  
  
## Vedere anche  
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)