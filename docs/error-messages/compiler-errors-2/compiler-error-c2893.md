---
title: Errore del compilatore C2893 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2893
dev_langs:
- C++
helpviewer_keywords:
- C2893
ms.assetid: ec0cbe43-005d-45da-8742-aaeb9b81d28e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: db3b71a05ece6b79672d47699dc68e0eb5bb1f60
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33246698"
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