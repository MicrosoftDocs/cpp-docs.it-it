---
title: Errore del compilatore C2893 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2893
dev_langs: C++
helpviewer_keywords: C2893
ms.assetid: ec0cbe43-005d-45da-8742-aaeb9b81d28e
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d6a926b6cf935d1910681b77d95f60847205bc05
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2893"></a>Errore del compilatore C2893
Impossibile specializzare il modello di funzione 'nome modello'  
  
 Il compilatore non è stato possibile specializzare un modello di funzione. Può esistere molte cause di questo errore.  
  
 In generale, il modo per risolvere un errore C2893 è verificare la firma della funzione e verificare che è possibile creare un'istanza di ogni tipo.  
  
## <a name="example"></a>Esempio  
 Errore C2893 si verifica perché `f`del parametro di modello `T` viene dedotto da `std::map<int,int>`, ma `std::map<int,int>` dispone di alcun membro `data_type` (`T::data_type` non può essere creata un'istanza con `T = std::map<int,int>`.). L'esempio seguente genera l'errore C2893.  
  
```  
// C2893.cpp  
// compile with: /c /EHsc  
#include<map>  
using namespace std;  
class MyClass {};  
  
template<class T>   
inline typename T::data_type  
// try the following line instead  
// inline typename  T::mapped_type  
f(T const& p1, MyClass const& p2);  
  
template<class T>  
void bar(T const& p1) {  
    MyClass r;  
    f(p1,r);   // C2893  
}  
  
int main() {  
   map<int,int> m;  
   bar(m);  
}  
```