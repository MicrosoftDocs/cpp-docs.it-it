---
title: "Avviso del compilatore (livello 1) C4041 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4041"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4041"
ms.assetid: 107ee9fd-4b88-4f22-a18f-a20726831095
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4041
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: termine output per il browser  
  
 Le informazioni di visualizzazione hanno superato il limite del compilatore.  
  
 Questo avviso può essere causato dalla compilazione con [\/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) \(informazioni di visualizzazione con variabili locali\).  
  
### Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Compilare con \/Fr \(informazioni di visualizzazione senza variabili locali\).  
  
2.  Disabilitare l'output per il browser \(compilare senza \/FR o \/Fr\).