---
title: "Errore del compilatore C3860 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3860"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3860"
ms.assetid: 1fb5110d-594e-4f1c-8773-888233af1313
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3860
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nell'elenco degli argomenti di tipo situato dopo il nome del tipo di classe i parametri devono essere riportati nell'ordine utilizzato nell'elenco dei parametri di tipo  
  
 Un elenco di argomenti di modello o di tipo generico è stato specificato in modo non corretto.  
  
 Il seguente codice di esempio genera l'errore C3860:  
  
```  
// C3860.cpp  
// compile with: /LD  
template <class T1, class T2>  
struct A {  
   void f();  
};  
  
template <class T2, class T1>  
void A<T1, T2>::f() {}   // C3860  
```  
  
 Possibile soluzione:  
  
```  
// C3860b.cpp  
// compile with: /c  
template <class T1, class T2>  
struct A {  
   void f();  
};  
  
template <class T2, class T1>  
void A<T2, T1>::f() {}  
```  
  
 L'errore C3860 può verificarsi anche quando si utilizzano i generics:  
  
```  
// C3860c.cpp  
// compile with: /clr  
generic<class T,class U>  
ref struct GC {  
   void f();  
};  
  
generic<class T, class U>  
void GC<T,T>::f() {}   // C3860  
```  
  
 Possibile soluzione:  
  
```  
// C3860d.cpp  
// compile with: /clr /c  
generic<class T,class U>  
ref struct GC {  
   void f();  
};  
  
generic<class T, class U>  
void GC<T,U>::f() {}  
```