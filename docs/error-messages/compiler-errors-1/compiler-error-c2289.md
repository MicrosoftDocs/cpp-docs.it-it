---
title: "Errore del compilatore C2289 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2289"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2289"
ms.assetid: cb41a29e-1b06-47dc-bfce-8d73bd63a0df
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2289
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

stesso qualificatore di tipo utilizzato più di una volta  
  
 Una definizione o dichiarazione di tipo usa più volte un qualificatore di tipo \(`const`, `volatile`, `signed` o `unsigned`\). Questo causa un errore di compatibilità ANSI \(**\/Za**\).  
  
 L'esempio seguente genera l'errore C2286:  
  
```  
// C2289.cpp // compile with: /Za /c volatile volatile int i;   // C2289 volatile int j;   // OK  
```