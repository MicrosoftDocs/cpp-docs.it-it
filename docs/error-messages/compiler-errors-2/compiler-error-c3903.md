---
title: "Errore del compilatore C3903 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3903"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3903"
ms.assetid: cf47d7ad-a3bd-4f75-a253-71586e7a3be6
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C3903
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'proprietà': non ha un metodo set o get  
  
 Una proprietà deve contenere almeno un metodo `get` o `set`.  Per ulteriori informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3903:  
  
```  
// C3903.cpp  
// compile with: /clr  
ref class X {  
   property int P {  
      void f(int){}  
      // Add one or both of the following lines.  
      // void set(int){}  
      // int get(){return 0;}  
   };   // C3903  
  
   property double Q[,,,,] {  
      void f(){}  
      // Add one or both of the following lines.  
      // void set(int, char, int, char, double, double){}  
      // double get(int, char, int, char, double){return 1.1;}  
   }   // C3903  
};  
```