---
title: "MSBuild Error MSB3187 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.PlatformMismatch"
helpviewer_keywords: 
  - "MSB3187"
ms.assetid: c5e93c14-b099-4176-bf1b-dbecc47fb3fd
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3187
**MSB3187: l'assembly '\<assembly\>' a cui si fa riferimento ha come destinazione un processore diverso rispetto all'applicazione.**  
  
 Questo avviso viene generato quando la piattaforma di destinazione dell'applicazione \(architettura del processore\) viene impostata su neutra \(MSIL\) e l'assembly a cui si fa riferimento non è neutro o se l'architettura dell'applicazione non è neutra e la dipendenza è neutra.  Inoltre se entrambe non sono neutre per piattaforma, le loro architetture dovranno corrispondere.  L'architettura dell'applicazione e l'architettura dell'assembly del punto di ingresso devono poi sempre corrispondere.  
  
### Per correggere l'errore  
  
-   Verificare che la piattaforma di destinazione dell'architettura \(architettura del processore\) corrisponda a tutti gli assembly a cui si fa riferimento e all'architettura dell'assembly del punto di ingresso.  
  
## Vedere anche  
 [Finestra di dialogo Impostazioni del compilatore avanzate \(Visual Basic\)](../Topic/Advanced%20Compiler%20Settings%20Dialog%20Box%20\(Visual%20Basic\).md)   
 [Pagina Compilazione, Progettazione progetti \(C\#\)](../Topic/Build%20Page,%20Project%20Designer%20\(C%23\).md)