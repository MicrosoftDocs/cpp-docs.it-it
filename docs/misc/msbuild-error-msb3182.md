---
title: "MSBuild Error MSB3182 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.TargetPathTooLong"
helpviewer_keywords: 
  - "MSB3182"
ms.assetid: b257a206-b12b-453b-97d8-2cb9a0d3dcc9
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3182
**MSB3182: il nome file '\<file\>' contiene più di '\<lunghezza\>' caratteri.**  
  
 Questo avviso viene generato quando il valore della proprietà `TargetPath` contiene troppi caratteri.  Può applicarsi al manifesto dell'applicazione o a quello di distribuzione.  
  
### Per correggere l'errore  
  
-   Modificare il valore della proprietà `TargetPath` in modo che contenga il numero di caratteri consentito.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)