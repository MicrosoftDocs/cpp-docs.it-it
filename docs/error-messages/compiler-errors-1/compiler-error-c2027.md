---
title: Errore del compilatore C2027 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2027
dev_langs: C++
helpviewer_keywords: C2027
ms.assetid: a39150c0-ec04-45ec-934c-a838bfe76627
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4f5b9713a665b97738178ef1ec488cf71017b5a1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2027"></a>Errore del compilatore C2027
utilizzo di tipo non definito 'type'  
  
 Un tipo non può essere utilizzato fino a quando non è definito. Per risolvere l'errore, assicurarsi che il tipo è completamente definito prima di farvi riferimento.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2027.  
  
```  
// C2027.cpp  
class C;  
class D {  
public:  
   void func() {  
   }  
};  
  
int main() {  
   C *pC;  
   pC->func();   // C2027  
  
   D *pD;  
   pD->func();  
}  
```  
  
## <a name="example"></a>Esempio  
 È possibile dichiarare un puntatore a un tipo dichiarato ma non definito.  Ma Visual C++ non consente un riferimento a un tipo non definito.  
  
 L'esempio seguente genera l'errore C2027.  
  
```  
// C2027_b.cpp  
class A;  
A& CreateA();  
  
class B;  
B* CreateB();  
  
int main() {  
   CreateA();   // C2027  
   CreateB();   // OK  
}  
```