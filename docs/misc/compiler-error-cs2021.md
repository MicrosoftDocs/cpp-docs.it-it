---
title: "Errore del compilatore CS2021 | Microsoft Docs"
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
  - "CS2021"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2021"
ms.assetid: 8379d77e-6586-4e43-9aab-7cdf3ffecf51
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS2021
Il nome file 'file' è troppo lungo o non valido  
  
 I nomi di file passati al compilatore C\# non devono essere più lunghi di `_MAX_PATH` \(definito in un file di intestazione di Windows\). il compilatore genererà questo errore nelle situazioni seguenti:  
  
-   Un nome file, incluso il percorso, è più lungo di `_MAX_PATH`.  
  
-   Il nome del file contiene caratteri non validi.  
  
-   Il nome del file contiene caratteri jolly dove questi non sono consentiti, ad esempio nei nomi di file di risorse.