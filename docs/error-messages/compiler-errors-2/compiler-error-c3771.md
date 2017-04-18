---
title: Errore del compilatore C3771 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3771
dev_langs:
- C++
helpviewer_keywords:
- C3771
ms.assetid: 68c23b25-7f21-4eaa-8f7e-38fda1130a69
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 65e7a7bd56096fbeec61b651ab494d82edef9c90
ms.openlocfilehash: 448bb34ce51cea50d1f1c5d61b28b13a7ea02ff8
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3771"></a>Errore del compilatore C3771
"identifier": impossibile trovare la dichiarazione Friend nell'ambito dello spazio dei nomi più vicino  
  
La dichiarazione di modello di classe per l' *identificatore* del modello specificato non è stato trovato nello spazio dei nomi corrente.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
-   Verificare che la dichiarazione di modello di classe per l'identificatore del modello sia definita nello spazio dei nomi corrente o che l'identificatore del modello sia un nome completo.  
  
## <a name="example"></a>Esempio  
Il codice di esempio seguente dichiara una funzione e un modello di classe nello spazio dei nomi `NA`ma tenta di dichiarare un modello di funzione Friend nello spazio dei nomi `NB`.  
  
```cpp  
// C3771.cpp   
// compile with: /c  
  
namespace NA {  
template<class T> class A {  
    void aFunction(T t) {};  
    };  
}  
// using namespace NA;  
namespace NB {  
    class X {  
        template<class T> friend void A<T>::aFunction(T); // C3771  
// try the following line instead  
//      template<class T> friend void NA::A<T>::aFunction(T);  
// or try "using namespace NA;" instead.  
    };  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
[Modelli](../../cpp/templates-cpp.md)  
