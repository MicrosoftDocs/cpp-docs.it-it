---
title: "Errore del compilatore C3227 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3227"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3227"
ms.assetid: 7939c23a-96c8-43c2-89e9-f217d132d155
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Errore del compilatore C3227
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'parametro': impossibile utilizzare 'parola chiave' per allocare un tipo generico  
  
 Per creare un'istanza di un tipo, è necessario un costruttore appropriato.  Il compilatore non è tuttavia in grado di garantirne la disponibilità.  
  
 Per correggere questo errore, è possibile utilizzare modelli anziché generics oppure uno dei diversi metodi per la creazione di istanze del tipo.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3227:  
  
```  
// C3227.cpp  
// compile with: /clr /c  
generic<class T> interface class ICreate {  
   static T Create();  
};  
  
generic <class T>  
where T : ICreate<T>  
ref class C {  
   void f() {  
      T t = new T;   // C3227  
  
      // OK  
      T t2 = ICreate<T>::Create();  
      T t3 = safe_cast<T>( System::Activator::CreateInstance(T::typeid) );  
   }  
};  
```