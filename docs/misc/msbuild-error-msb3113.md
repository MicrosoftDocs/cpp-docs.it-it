---
title: "MSBuild Error MSB3113 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.ResolveFailedInReadWriteMode"
helpviewer_keywords: 
  - "MSB3113"
ms.assetid: 81e73738-e6ee-4651-9f48-acb1feef3ff5
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3113
**MSB3113: impossibile trovare il file '\<file\>'.**  
  
 Questo errore viene generato quando viene rilevato un riferimento non risolvibile durante la creazione di un nuovo manifesto.  Può aver avuto origine dal file di progetto o come parametro di attività.  
  
### Per correggere l'errore  
  
-   Verificare che il file di progetto e i parametri di compilazione nel caso di compilazione personalizzata non presentino conflitti nei riferimenti dei file.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)