---
title: "MSBuild Error MSB4132 | Microsoft Docs"
ms.custom: ""
ms.date: "11/23/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB4132"
ms.assetid: 4ac265a7-0f8d-4fec-ba6e-cd70cbd5d89e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB4132
**MSB4132: versione degli strumenti "'\<versione\>'" non riconosciuta.**  
  
 [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] non è stato in grado di trovare un set di strumenti corrispondente al valore specificato di `ToolsVersion`.  
  
### Per correggere l'errore  
  
-   Specificare un valore `ToolsVersion` valido nel tag di progetto o dalla riga di comando quando si utilizza l'opzione **\/ToolsVersion** di MSBuild.  
  
## Vedere anche  
 <xref:Microsoft.Build.Tasks.MSBuild.ToolsVersion%2A>   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)