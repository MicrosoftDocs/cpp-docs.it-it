---
title: Errore del compilatore C2073 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2073
dev_langs:
- C++
helpviewer_keywords:
- C2073
ms.assetid: 57908234-be7a-4ce9-b0a7-8b1ad621865e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 27d68b36460eaf291647f097385f2645d4f384ac
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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