---
title: "Errore irreversibile C1045 | Microsoft Docs"
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
  - "C1045"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1045"
ms.assetid: 766c2f89-4ecd-4281-adaa-14b270cc0829
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1045
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: specifiche di collegamento eccessivamente annidate  
  
 I riferimenti esterni annidati superano il limite del compilatore. I riferimenti esterni annidati sono consentiti con un tipo di collegamento esterno come `extern` "C\+\+". Ridurre il numero di riferimenti esterni annidati per risolvere l'errore.