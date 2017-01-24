---
title: "MSBuild Error MSB3481 | Microsoft Docs"
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
  - "MSBuild.SignFile.CertNotInStore"
helpviewer_keywords: 
  - "MSB3481"
ms.assetid: 55f99775-3bd5-4e1b-b184-c6405d75e8ff
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3481
**MSB3481: impossibile trovare il certificato di firma.  Verificare che si trovi nell'archivio personale dell'utente corrente.**  
  
 Questo errore viene generato quando il certificato di firma non è stato trovato nell'archivio personale dell'utente.  Questo errore è simile a [MSBuild Error MSB3486](../misc/msbuild-error-msb3486.md), indicante che il certificato è stato trovato ma non corrisponde.  
  
### Per correggere l'errore  
  
-   Verificare che nell'archivio personale dei certificati dell'utente sia presente un certificato valido corrispondente al file pfx del progetto.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)