---
title: "MSBuild Error MSB3021 | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.Copy.Error"
helpviewer_keywords: 
  - "MSB3021"
ms.assetid: 8cb3a860-6916-4406-b5c7-b1106b44b92a
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3021
**Impossibile copiare il file "'\<file\>'" in "'\<file\>'". '  \<errore\>'**  
  
 L'attività `Copy` non è in grado di copiare il file specificato.  
  
### Per correggere l'errore  
  
-   Verificare se il file di destinazione è bloccato \(in uso\) da un'altra applicazione.  Assicurarsi di disporre dell'autorizzazione per la lettura del file di origine e la scrittura del file di destinazione nella cartella di destinazione.  Se il percorso del file di destinazione è estremamente lunghi, potrebbe essere necessario copiare in un altro percorso.  
  
## Vedere anche  
 [Copy Task](../Topic/Copy%20Task.md)   
 [Tasks](../Topic/MSBuild%20Tasks.md)