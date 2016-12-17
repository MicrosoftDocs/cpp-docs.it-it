---
title: "MSBuild Error MSB4133 | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB4133"
ms.assetid: 5f18937a-fda1-4315-81f9-7cee02802a6d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4133
**MSB4133: impossibile trovare la definizione della versione strumenti predefinita "\<x.x.\>" specificata.**  
  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] non è in grado di trovare il set di strumenti definito nel file di progetto come `DefaultToolsVersion`.  
  
### Per correggere l'errore  
  
-   Assicurarsi che `DefaultToolsVersion` sia specificato correttamente e che il set di strumenti sia definito nel Registro di sistema o nel file di configurazione di [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)].  
  
## Vedere anche  
 <xref:Microsoft.Build.BuildEngine.Toolset>   
 [Project Element \(MSBuild\)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)