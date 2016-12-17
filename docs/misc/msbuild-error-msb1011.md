---
title: "MSBuild Error MSB1011 | Microsoft Docs"
ms.custom: ""
ms.date: "11/23/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.AmbiguousProjectError"
helpviewer_keywords: 
  - "MSB1011"
ms.assetid: f3cb16e5-288c-4dba-941f-a0ed3bf92db7
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1011
**la cartella contiene più file di soluzione o di progetto. Specificare il file da utilizzare.**  
  
 Se sulla riga di comando non viene specificato alcun file di progetto, [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)] cerca nella cartella di lavoro corrente un file la cui estensione termini in "proj" o "sln" e utilizza tale file.  La cartella di lavoro corrente contiene più di un file con estensione che termina in "proj" o "sln".  
  
### Per correggere l'errore  
  
1.  Immettere il nome del file di progetto sulla riga di comando.  Anziché digitare `msbuild`, ad esempio, digitare `msbuild myapp.proj`.  
  
## Vedere anche  
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)