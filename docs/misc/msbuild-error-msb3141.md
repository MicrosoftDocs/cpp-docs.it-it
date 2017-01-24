---
title: "MSBuild Error MSB3141 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.MissingVerificationInformation"
  - "vsdeploy.chm:13141"
helpviewer_keywords: 
  - "MSB3141"
ms.assetid: f32ce5fd-bb82-4a8b-aebe-61efef89cdc1
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3141
**MSB3141: nessun attributo 'PublicKey' o 'Hash' specificato per il file '\<file\>' dell'elemento '\<package\>'."**  
  
 Questo errore si verifica quando si tenta di utilizzare HomeSite per i package di programma di avvio automatico.  Tuttavia, il manifesto del programma di avvio automatico non contiene le informazioni corrette per la verifica del file \(attributo PublicKey o Hash\) in fase di esecuzione.  
  
### Per correggere l'errore  
  
-   Scaricare il file di package per il quale mancano le informazioni e copiarlo nella cache del programma di avvio automatico.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)