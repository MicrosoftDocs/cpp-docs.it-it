---
title: "Errore del compilatore CS0656 | Microsoft Docs"
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
  - "CS0656"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0656"
ms.assetid: e695280a-e75d-4e8c-aec2-1f3fb455544a
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0656
Manca il membro 'object.member', necessario per il compilatore  
  
 Si è verificato uno dei problemi seguenti:  
  
-   L'installazione di Common Language Runtime è danneggiata.  
  
-   È presente un riferimento a un assembly che definisce un tipo disponibile anche in Common Language Runtime. Il tipo dell'assembly, tuttavia, non è definito nel modo previsto dal compilatore C\#.  
  
 Controllare i riferimenti per accertarsi che la versione di Common Language Runtime usata sia quella corretta.