---
title: "Errore del compilatore CS1056 | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1056"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1056"
ms.assetid: bf66d164-ab5b-4181-b93e-a1d29620b4d2
caps.latest.revision: 15
caps.handback.revision: 15
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1056
Il carattere 'character' è imprevisto  
  
 Il compilatore C\# ha rilevato un carattere imprevisto e non è in grado di identificare il token in fase di elaborazione. Ad esempio, se il compilatore rileva un carattere dell'euro durante l'elaborazione di un identificatore, non sarà in grado di classificare l'identificatore perché un carattere dell'euro sarebbe valido solo all'interno di una stringa e il compilatore è consapevole di non elaborare una stringa.