---
title: "MSBuild Error MSB3161 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.CircularDependency"
helpviewer_keywords: 
  - "MSB3161"
ms.assetid: 2871d071-7c3a-4103-8b14-6ee56564a7f7
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3161
**MSB3161: dipendenza circolare rilevata tra i seguenti package compilati: '\<package\>'**  
  
 Questo avviso viene generato quando vi è una dipendenza circolare nel grafico di dipendenze del package del programma di avvio automatico \(ad esempio, A→B→C→A\).  In questi casi il programma di avvio automatico non è in grado di stabilire quale package installare per primo.  
  
### Per correggere l'errore  
  
-   Rimuovere la dipendenza circolare, modificando le dipendenze descritte nei file di package del programma di avvio automatico oppure evitando di installare uno dei dei package interdipendenti.  
  
## Vedere anche  
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)   
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)