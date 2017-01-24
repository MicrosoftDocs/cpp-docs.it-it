---
title: "MSBuild Error MSB2008 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.UnrecognizedChildElement"
helpviewer_keywords: 
  - "MSB2008"
ms.assetid: 3c2afda0-a116-4b2f-af0c-c0f0d1541325
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB2008
**Il sistema del progetto di Visual Studio non è in grado di convertire progetti "{0}".  Può essere utilizzato solo per convertire progetti client C\# e VB.**  
  
 Solo i progetti di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] e [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)] validi possono essere convertiti utilizzando [!INCLUDE[vstecmsbuild](../build/includes/vstecmsbuild_md.md)].  
  
### Per correggere l'errore  
  
-   Se il progetto è un progetto di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] o di [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)], verificare se il file di progetto è stato modificato o danneggiato.  In tal caso, aprire il progetto nella versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] in cui è stato creato, salvarlo, quindi tentare nuovamente la conversione.  
  
-   Se il progetto non è un progetto di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] o di [!INCLUDE[csprcs](../ide/includes/csprcs_md.md)], convertirlo utilizzando lo strumento appropriato.  
  
## Vedere anche  
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)