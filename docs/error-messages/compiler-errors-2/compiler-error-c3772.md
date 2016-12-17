---
title: "Errore del compilatore C3772 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3772"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3772"
ms.assetid: 63e938d4-088d-41cc-a562-5881a05b5710
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3772
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"name": dichiarazione di modello Friend non valida  
  
 Non è consentito dichiarare un elemento Friend di una specializzazione di modello di classe. Non è possibile dichiarare una specializzazione esplicita o parziale di un modello di classe se nella stessa istruzione viene dichiarato un elemento Friend di tale specializzazione. Il segnaposto *nome* identifica la dichiarazione non valida.  
  
### Per correggere l'errore  
  
-   Non dichiarare un elemento Friend di una specializzazione di modello di classe.  
  
-   Se possibile per l'applicazione usata, dichiarare un elemento Friend del modello di classe o dichiarare un elemento Friend di una determinata specializzazione parziale o esplicita.  
  
## Esempio  
 Nell'esempio di codice seguente viene generato un errore perché viene dichiarato un elemento Friend di una specializzazione parziale di un modello di classe.  
  
```  
// c3772.cpp // compile with: /c // A class template. template<class T> class A {}; // A partial specialization of the class template. template<class T> class A<T*> {}; // An explicit specialization. template<> class A<char>; class X { // Invalid declaration of a friend of a partial specialization. template<class T> friend class A<T*>; // C3772 // Instead, if it is appropriate for your application, declare a // friend of the class template. Consequently, all specializations // of the class template are friends: //    template<class T> friend class A; // Or declare a friend of a particular partial specialization: //    friend class A<int*>; // Or declare a friend of a particular explicit specialization: //    friend class A<char>; };  
```  
  
## Vedere anche  
 [Specifiche dei modelli](../Topic/Template%20Specifications.md)   
 [Specializzazione parziale di modelli di classe](../../cpp/template-specialization-cpp.md)   
 [Specializzazione esplicita di modelli di classe](../Topic/Explicit%20Specialization%20of%20Class%20Templates.md)