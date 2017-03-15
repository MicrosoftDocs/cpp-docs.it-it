---
title: "Errore del compilatore C3904 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3904"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3904"
ms.assetid: 08297605-e4f2-4c6c-b637-011f1fd40631
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3904
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione di accesso\_proprietà': deve specificare numero parametro\/i  
  
 Controllare il numero di parametri dei metodi `get` e `set` in base alle dimensioni della proprietà.  
  
-   Il numero di parametri del metodo `get` deve essere uguale al numero di dimensioni della proprietà o zero se le proprietà non sono indicizzate.  
  
-   Il numero di parametri del metodo `set` deve essere superiore di almeno uno al numero di dimensioni della proprietà.  
  
 Per ulteriori informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3904:  
  
```  
// C3904.cpp  
// compile with: /clr /c  
ref class X {  
   property int P {  
      // set  
      void set();   // C3904  
      // try the following line instead  
      // void set(int);  
  
      // get  
      int get(int, int);   // C3904  
      // try the following line instead  
      // int get();  
   };  
};  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3904:  
  
```  
// C3904b.cpp  
// compile with: /clr /c  
ref struct X {  
   property int Q[double, double, float, float, void*, int] {  
      // set  
      void set(double, void*);   // C3904  
      // try the following line instead  
      // void set(double, double, float, float, void*, int, int);  
  
      // get  
      int get();   // C3904  
      // try the following line instead  
      // int get(double, double, float, float, void*, int);  
   }  
};  
```