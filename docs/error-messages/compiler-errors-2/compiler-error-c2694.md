---
title: "Errore del compilatore C2694 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2694"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2694"
ms.assetid: 8dc2cec2-67ae-4e16-8c0c-374425aca8bc
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2694
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'override': nella funzione virtuale di override sono specificate eccezioni meno restrittive rispetto alla funzione membro della classe base 'base'  
  
 È stato eseguito l'override di una funzione virtuale, ma in [\/Za](../../build/reference/za-ze-disable-language-extensions.md), la funzione di override presenta una [specifica di eccezione](../../cpp/exception-specifications-throw-cpp.md) meno restrittiva.  
  
 Il seguente codice di esempio genera l'errore C2694:  
  
```  
// C2694.cpp  
// compile with: /Za /c  
class MyBase {  
public:  
   virtual void f(void) throw(int) {  
   }  
};  
  
class Derived : public MyBase {  
public:  
   void f(void) throw(...) {}   // C2694  
   void f2(void) throw(int) {}   // OK  
};  
```