---
title: "MSBuild Error MSB3164 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.PackageHomeSiteMissing"
helpviewer_keywords: 
  - "MSB3164"
ms.assetid: 5a1e31fc-0322-4d4e-8c26-013b1efb82c9
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3164
**MSB3164: nessun attributo 'HomeSite' specificato per '\<package\>'. Il package verrà pubblicato nello stesso percorso del programma di avvio automatico.**  
  
 Questo avviso viene generato quando l'utente desidera utilizzare lo HomeSite, ma le informazioni sullo HomeSite appropriate per il package specificato non sono disponibili.  
  
### Per correggere l'errore  
  
-   Aggiornare i file manifesto in modo che includano le informazioni sullo HomeSite.  
  
-   In alternativa, non utilizzare HomeSite.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)