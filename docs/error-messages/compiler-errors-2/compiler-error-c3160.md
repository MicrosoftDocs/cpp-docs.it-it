---
title: Errore del compilatore C3160 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3160
dev_langs: C++
helpviewer_keywords: C3160
ms.assetid: a250c433-8adf-43b9-8dee-c3794e09b0a5
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: df09956b70d88b2ebb9efa542aad898f3d1295f2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3160"></a>Errore del compilatore C3160
'pointer': un membro dati di una classe gestita o WinRT non può avere questo tipo  
  
 I puntatori interni di Garbage Collection possono puntare all'interno di una classe gestita o WinRT. Poiché sono più lenti dei puntatori a un intero oggetto e richiedono una speciale gestione con il Garbage Collector, non è possibile dichiarare puntatori gestiti interni come membri di una classe.  
  
 L'esempio seguente genera l'errore C3160:  
  
```  
// C3160.cpp  
// compile with: /clr  
ref struct A {  
   // cannot create interior pointers inside a class  
   interior_ptr<int> pg;   // C3160  
   int g;   // OK  
   int* pg2;   // OK  
};  
  
int main() {  
   interior_ptr<int> pg2;   // OK  
}  
```  
