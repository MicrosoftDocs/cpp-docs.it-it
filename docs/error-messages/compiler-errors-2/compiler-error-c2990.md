---
title: "Errore del compilatore C2990 | Microsoft Docs"
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
  - "C2990"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2990"
ms.assetid: 674e9f6a-6743-4af0-a7ed-cbe11103a2f8
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2990
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe': tipo di tipo non classe già dichiarato come tipo di classe  
  
 La classe non generica o non modello ridefinisce una classe generica o modello.  Cercare eventuali conflitti nei file di intestazione.  
  
 Il seguente codice di esempio genera l'errore C2990:  
  
```  
// C2990.cpp  
// compile with: /c  
template <class T>  
class C{};  
class C{};   // C2990  
```  
  
 L'errore C2990 può verificarsi anche quando si utilizzano i generics:  
  
```  
// C2990b.cpp  
// compile with: /clr /c  
generic <class T>  
ref struct GC;  
  
ref struct GC {};   // C2990  
```  
  
 L'errore C2990 può inoltre verificarsi in seguito a una modifica nel compilatore di Visual C\+\+ 2005: il compilatore richiede ora che più dichiarazioni per lo stesso tipo siano identiche rispetto alla specifica di modello.  
  
 Il seguente codice di esempio genera l'errore C2990:  
  
```  
// C2990c.cpp  
// compile with: /c  
template<class T>  
class A;  
  
template<class T>  
struct A2 {  
   friend class A;   // C2990  
};  
  
// OK  
template<class T>  
struct B {  
   template<class T>  
   friend class A;  
};  
```