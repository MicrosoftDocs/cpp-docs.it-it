---
title: Errore del compilatore C2073 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2073
dev_langs: C++
helpviewer_keywords: C2073
ms.assetid: 57908234-be7a-4ce9-b0a7-8b1ad621865e
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2503073e960f93cbede95bf54d2d4d1bd079c185
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2073"></a>Errore del compilatore C2073
'identifier': gli elementi della matrice parzialmente inizializzata devono avere un costruttore predefinito  
  
 Numero insufficiente di inizializzatori sono stato specificato per una matrice di tipi definiti dall'utente o costanti. Se un inizializzatore esplicito e il costruttore corrispondente non sono specificati per un membro di matrice, è necessario specificare un costruttore predefinito.  
  
 L'esempio seguente genera l'errore C2073:  
  
```  
// C2073.cpp  
class A {  
public:  
   A( int );   // constructor for ints only  
};  
A a[3] = { A(1), A(2) };   // C2073, no default constructor  
```  
  
```  
// C2073b.cpp  
// compile with: /c  
class B {  
public:  
   B();   // default constructor declared  
   B( int );  
};  
B b[3] = { B(1), B(2) };   // OK  
```