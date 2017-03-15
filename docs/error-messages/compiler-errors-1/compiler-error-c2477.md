---
title: "Errore del compilatore C2477 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2477"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2477"
ms.assetid: 60bc324b-6605-4833-8099-a291efc712e7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2477
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': i membri dati statici non possono essere inizializzati tramite classi derivate  
  
 Un membro dati static di una classe basata su template è stato inizializzato in modo non corretto.  Si tratta di una notevole modifica rispetto alle versioni del compilatore Visual C\+\+ precedenti a Visual Studio .NET 2003, apportata in conformità allo standard ISO C\+\+.  
  
 Il seguente codice di esempio genera l'errore C2477:  
  
```  
// C2477.cpp  
// compile with: /Za /c  
template <class T>  
struct S {  
   static int n;  
};  
  
struct X {};  
struct A: S<X> {};  
  
int A::n = 0;   // C2477  
  
template<>  
int S<X>::n = 0;  
```