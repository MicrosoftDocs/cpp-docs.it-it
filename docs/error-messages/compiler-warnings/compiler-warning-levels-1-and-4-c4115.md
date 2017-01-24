---
title: "Avviso del compilatore (livelli 1 e 4) C4115 | Microsoft Docs"
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
  - "C4115"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4115"
ms.assetid: f3f94e72-fc49-4d09-b3e7-23d68e61152f
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livelli 1 e 4) C4115
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': definizione di tipo denominato tra parentesi  
  
 Il simbolo specificato viene usato per definire una struttura, un'unione o un tipo enumerato all'interno di un'espressione con parentesi. L'ambito della definizione potrebbe essere imprevisto.  
  
 In una chiamata di funzione C, la definizione ha ambito globale. In una chiamata C\+\+, la definizione ha lo stesso ambito della funzione chiamata.  
  
 L'avviso può anche essere generato da dichiaratori tra parentesi, ad esempio i prototipi, che non sono espressioni con parentesi.  
  
 L'avviso è di livello 1 con i programmi C\+\+ e C compilati in compatibilità ANSI \(\/Za\). Negli altri casi, è di livello 3.