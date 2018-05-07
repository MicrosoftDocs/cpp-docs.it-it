---
title: Errore del compilatore C2438 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2438
dev_langs:
- C++
helpviewer_keywords:
- C2438
ms.assetid: 3a0ab3ba-d0e4-4d8f-971d-e503397cc827
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bf42740c137953007cab2c5301bff122b553e5f6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2438"></a>Errore del compilatore C2438
'identifier': Impossibile inizializzare i dati di classe statica tramite il costruttore  
  
 Un costruttore viene utilizzato per inizializzare un membro statico di una classe. Membri statici devono essere inizializzati in una definizione all'esterno della dichiarazione di classe.  
  
 L'esempio seguente genera l'errore C2438:  
  
```  
// C2438.cpp  
struct X {  
   X(int i) : j(i) {}   // C2438  
   static int j;  
};  
  
int X::j;  
  
int main() {  
   X::j = 1;  
}  
```