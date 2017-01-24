---
title: "MSBuild Error MSB4134 | Microsoft Docs"
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
  - "MSB4134"
ms.assetid: 2e4e6beb-c0c9-40ef-b75c-1c16244eba10
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4134
**MSB4134: impossibile impostare DefaultToolsVersion dopo che un progetto è stato caricato nel motore.**  
  
 Questo errore si verifica quando viene effettuato un tentativo di modificare il valore di `DefaultToolsVersion` dopo che [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] ha già compilato un progetto.  
  
### Per correggere l'errore  
  
-   Modificare il valore di `DefaultToolsVersion` prima della compilazione un progetto.  
  
## Vedere anche  
 <xref:Microsoft.Build.Utilities.Task.BuildEngine%2A>   
 <xref:Microsoft.Build.Utilities.Task.BuildEngine2%2A>   
 [Project Element \(MSBuild\)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)