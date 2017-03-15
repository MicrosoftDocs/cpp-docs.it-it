---
title: "__super | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__super_cpp"
  - "__super"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__super (parola chiave) [C++]"
ms.assetid: f0957c31-9256-405b-b402-cad182404b5f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# __super
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Consente di dichiarare in modo esplicito che si sta chiamando un'implementazione della classe di base per una funzione di cui si esegue l'override.  
  
## Sintassi  
  
```  
  
__super::  
member_function  
();  
  
```  
  
## Note  
 Tutti i metodi accessibili della classe di base vengono considerati durante la fase di risoluzione dell'overload e la funzione che fornisce la corrispondenza migliore è quella che viene chiamata.  
  
 `__super` può essere visualizzato solo all'interno del corpo di una funzione membro.  
  
 `__super` non può essere utilizzato con una dichiarazione di utilizzo.  Per ulteriori informazioni, vedere [Dichiarazione using](../cpp/using-declaration.md).  
  
 Con l'introduzione di [attributi](../windows/cpp-attributes-reference.md) che inseriscono codice, il codice può contenere una o più classi di base di cui non è possibile conoscere i nomi ma che contengono i metodi che si desidera chiamare.  
  
## Esempio  
  
```  
// deriv_super.cpp  
// compile with: /c  
struct B1 {  
   void mf(int) {}  
};  
  
struct B2 {  
   void mf(short) {}  
  
   void mf(char) {}  
};  
  
struct D : B1, B2 {  
   void mf(short) {  
      __super::mf(1);   // Calls B1::mf(int)  
      __super::mf('s');   // Calls B2::mf(char)  
   }  
};  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)