---
title: "Errore del compilatore C3911 | Microsoft Docs"
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
  - "C3911"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3911"
ms.assetid: b786da59-0e99-479d-bc0d-551126e940f2
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3911
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'metodo\_accesso\_evento': la funzione deve avere il tipo 'firma'  
  
 Il metodo di accesso a un evento non è stato dichiarato correttamente.  
  
 Per ulteriori informazioni, vedere [event](../../windows/event-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3911:  
  
```  
// C3911.cpp  
// compile with: /clr  
using namespace System;  
delegate void H(String^, int);  
  
ref class X {  
   event H^ E1 {  
      void add() {}   // C3911  
      // try the following line instead  
      // void add(H ^ h) {}  
  
      void remove(){}  
      // try the following line instead  
      // void remove(H ^ h) {}  
  
      void raise(){}  
      // try the following line instead  
      // void raise(String ^ s, int i) {}  
   };  
};  
```