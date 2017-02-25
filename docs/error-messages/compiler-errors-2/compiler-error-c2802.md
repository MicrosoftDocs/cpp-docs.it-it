---
title: "Errore del compilatore C2802 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2802"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2802"
ms.assetid: 08b68c0e-9382-40ac-8949-39a7a2749e05
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2802
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il membro static 'operator operatore' non ha parametri formali  
  
 Un operatore dichiarato da una funzione membro `static` deve avere almeno un parametro.  
  
 Il seguente codice di esempio genera l'errore C2802:  
  
```  
// C2802.cpp  
// compile with: /clr /c  
ref class A {  
   static operator+ ();   // C2802  
   static operator+ (A^, A^);   // OK  
};  
```