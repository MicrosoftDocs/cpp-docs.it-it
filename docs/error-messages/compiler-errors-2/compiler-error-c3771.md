---
title: Errore del compilatore C3771 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3771
dev_langs:
- C++
helpviewer_keywords:
- C3771
ms.assetid: 68c23b25-7f21-4eaa-8f7e-38fda1130a69
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8adfdb1562cc9efbe208bd7c887b7c4aa77ddd82
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33272545"
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