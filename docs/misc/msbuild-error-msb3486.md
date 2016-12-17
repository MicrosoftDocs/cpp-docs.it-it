---
title: "MSBuild Error MSB3486 | Microsoft Docs"
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
  - "MSBuild.SignFile.CertificateError"
helpviewer_keywords: 
  - "MSB3486"
ms.assetid: 75d03d8e-3a28-4010-b602-61fe037dec74
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3486
**MSB3486: impossibile ottenere certificato dall'archivio '\<archivio certificati\>'.**  
  
 L'attività `ResolveKeySource` di MSBuild genera questo errore quando il certificato corrispondente all'identificativo personale del file pfx del progetto non viene trovato nell'archivio personale dei certificati.  
  
### Per correggere l'errore  
  
-   Verificare che l'identificativo personale del file .pfx del progetto corrisponda a quello del certificato nell'archivio personale dei certificati.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)