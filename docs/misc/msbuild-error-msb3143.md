---
title: "MSBuild Error MSB3143 | Microsoft Docs"
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
  - "MSBuild.GenerateBootstrapper.CopyPackageError"
helpviewer_keywords: 
  - "MSB3143"
ms.assetid: b4278c8c-31df-4b4f-9ef9-7b9327e8ee77
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3143
**MSB3143: errore durante il tentativo di copiare '\<file\>' per l'elemento '\<package\>': '\<errore\>'**  
  
 Questo errore si verifica quando i package dei programmi di avvio automatico vengono copiati nella directory di output di compilazione.  Alcune cause possibili di questo errore possono essere:  
  
-   Non si dispone dell'autorizzazione di copia nella directory di output di compilazione.  
  
-   Il disco è pieno.  
  
 Si tratta delle stesse ragioni potenziali dell'esito negativo di file.copy o directory.createdirectory.  
  
## Vedere anche  
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)   
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)