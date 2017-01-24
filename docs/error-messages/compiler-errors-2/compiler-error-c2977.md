---
title: "Errore del compilatore C2977 | Microsoft Docs"
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
  - "C2977"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2977"
ms.assetid: 3c4218e0-5d03-4a2b-b757-c507c35f3542
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2977
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': troppi argomenti di tipo  
  
 Un oggetto generico o modello contiene troppi argomenti effettivi. Controllare la dichiarazione generica o di modello per trovare il numero corretto di parametri.  
  
 L'esempio seguente genera l'errore C2977:  
  
```  
// C2977.cpp // compile with: /c template<class T, int i> class MyClass {}; template MyClass< int , 1, 1 >;   // C2977 template MyClass< int , 1 >;   // OK  
```  
  
 L'errore C2977 può verificarsi anche quando si usano i generics:  
  
```  
// C2977b.cpp // compile with: /clr // C2977 expected generic <class T, class U> void f(){} generic <class T> ref struct GC1 {}; int main() { // Delete the following 2 lines to resolve. GC1<int, char> ^ pgc1; f<int,int,int>(); // OK GC1<int> ^ pgc1; f<int, int>(); }  
```