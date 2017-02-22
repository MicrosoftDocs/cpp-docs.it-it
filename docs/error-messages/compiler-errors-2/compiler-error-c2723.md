---
title: "Errore del compilatore C2723 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2723"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2723"
ms.assetid: 86925601-2297-4cfd-94e2-2caf27c474c4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2723
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': identificatore 'specifier' non valido nella definizione di funzione  
  
 L'identificatore non può essere visualizzato con una definizione di funzione di fuori di una dichiarazione di classe.  L'identificatore `virtual` può essere specificato solo in una dichiarazione di funzione membro all'interno di una dichiarazione di classe.  
  
 L'esempio seguente genera l'errore C2723 e mostra come risolverlo:  
  
```  
// C2723.cpp  
struct X {  
   virtual void f();  
   virtual void g();  
};  
  
virtual void X::f() {}   // C2723  
  
// try the following line instead  
void X::g() {}  
```