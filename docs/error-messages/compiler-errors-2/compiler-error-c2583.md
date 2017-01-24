---
title: "Errore del compilatore C2583 | Microsoft Docs"
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
  - "C2583"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2583"
ms.assetid: b1c952dc-872c-47e4-9fc8-4dd72bcee6f9
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2583
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': puntatore 'this' 'costante\/volatile' non valido per costruttori e distruttori  
  
 Un costruttore o un distruttore è dichiarato `const` o `volatile`,  ma questa operazione non è consentita.  
  
 Il seguente codice di esempio genera l'errore C2583:  
  
```  
// C2583.cpp  
// compile with: /c  
class A {  
public:  
   int i;  
   A() const;   // C2583  
  
   // try the following line instead  
   // A();  
};  
```