---
title: "Portabilit&#224; in base ai limiti ABI (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: abbd405e-3038-427c-8c24-e00598f0936a
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Portabilit&#224; in base ai limiti ABI (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Tipi sufficiente portabili e di utilizzo convenzioni i limiti binari dell'interfaccia.  Un "tipo" è portabile tipo incorporato c o una struttura che contiene solo i tipi incorporati C.  I tipi di classe possono essere utilizzati solo quando il chiamante e il chiamato aderiscono in layout, nella convenzione di chiamata, e così via. Questa operazione è possibile solo quando entrambi vengono compilati con lo stesso compilatore e le impostazioni del compilatore.  
  
## Come appiattire una classe per la portabilità C  
 Quando i chiamanti possono essere compilati con un altro compilatore\/linguaggio, è "" appiattire un "C" extern API con una convenzione di chiamata specifica:  
  
```cpp  
// class widget {  
//   widget();  
//   ~widget();  
//   double method( int, gadget& );  
// };  
extern “C” {    // functions using explicit “this”  
  struct widget;   // + opaque type (fwd decl only)  
  widget* STDCALL widget_create();    // ctor → create new  “this”  
  void STDCALL widget_destroy( widget* );    // dtor → consume “this”  
  double STDCALL widget_method( widget*, int, gadget* );    // method → use “this”  
}  
  
```  
  
## Vedere anche  
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)