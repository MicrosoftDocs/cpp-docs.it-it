---
title: "MSBuild Error MSB3165 | Microsoft Docs"
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
  - "vsdeploy.chm:13165"
  - "MSBuild.GenerateBootstrapper.DifferingPublicKeys"
helpviewer_keywords: 
  - "MSB3165"
ms.assetid: 2f50462e-947d-4211-b197-e58eddcfd373
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3165
**MSB3165: il valore dell'attributo '\<chiave pubblica\>' in '\<package\>' non corrisponde al valore del file '\<file\>'.**  
  
 Questo avviso si verifica quando la chiave pubblica specificata nel file di package del programma di avvio automatico non corrisponde alla firma del package redistribuibile sul disco o quando il package redistribuibile non è firmato.  La build assumerà il valore della chiave pubblica di quella su disco se è firmato o assumerà il valore hash del package redistribuibile sul disco se non è firmato.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)   
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)