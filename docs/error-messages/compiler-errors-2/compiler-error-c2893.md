---
title: "Errore del compilatore C2893 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2893"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2893"
ms.assetid: ec0cbe43-005d-45da-8742-aaeb9b81d28e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C2893
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile specializzare il template di funzione 'nome modello'  
  
 È risultato impossibile specializzare un template di funzione.  Le cause di questo errore possono essere molte.  
  
 In generale, è possibile correggere l'errore C2893 verificando la firma della funzione e assicurandosi che sia possibile creare un'istanza di ciascun tipo.  
  
## Esempio  
 L'errore C2893 si verifica perché viene dedotto che il parametro di modello `T` di `f` è `std::map<int,int>`, ma `std::map<int,int>` non contiene alcun membro `data_type`. Non è possibile creare un'istanza di `T::data_type` con `T = std::map<int,int>`.  Nell'esempio seguente viene generato l'errore C2893:  
  
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