---
title: "Errore del compilatore CS0003 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0003"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0003"
ms.assetid: 6aee4b0e-e24f-47b5-8281-ca4c7ee8a3cf
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0003
Memoria insufficiente  
  
 Il compilatore non è riuscito ad allocare memoria virtuale sufficiente per completare la compilazione. Chiudere tutte le applicazioni non necessarie e ricompilare.  
  
 È anche consigliabile aumentare le dimensioni del file di paging e accertarsi di avere spazio disponibile su disco.  
  
 Questo errore può essere causato anche dalla presenza di versioni non corrispondenti di [!INCLUDE[winsdklong](../dotnet/includes/winsdklong_md.md)] e del compilatore C\# oppure di uno o più file danneggiati che supportano il compilatore C\#. Reinstallare Visual Studio.