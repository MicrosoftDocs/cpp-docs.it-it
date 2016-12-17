---
title: "Avviso del compilatore (livello 1) C4237 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4237"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4237"
ms.assetid: f2e86c4b-80d8-460e-9429-83c5f3f5d7ca
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4237
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

parola chiave 'parolachiave' non ancora supportata, riservata per un utilizzo futuro  
  
 Una parola chiave della specifica C\+\+ non è stata implementata nel compilatore di Visual C\+\+, ma non è disponibile come simbolo definito dall'utente.  
  
 Il seguente codice di esempio genera l'errore C4237:  
  
```  
// C4237.cpp  
// compile with: /W1 /c  
int export;   // C4237  
```