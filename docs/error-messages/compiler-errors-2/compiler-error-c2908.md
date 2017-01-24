---
title: "Errore del compilatore C2908 | Microsoft Docs"
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
  - "C2908"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2908"
ms.assetid: 49cd2a21-cad8-4ba0-9a0b-3a0190d9344c
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2908
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

specializzazione esplicita. È stata già creata un'istanza di 'modello'  
  
 Una specializzazione del template primario precede quella esplicita.  
  
 Il seguente codice di esempio genera l'errore C2908:  
  
```  
// C2908.cpp  
// compile with: /c  
template<class T> class X {};  
  
void f() {  
X<int> x;   //specialization and instantiation  
            //of X<int>  
}  
  
template<> class X<int> {}  // C2908, explicit specialization  
```