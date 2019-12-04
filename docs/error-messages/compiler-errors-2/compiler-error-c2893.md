---
title: Errore del compilatore C2893
ms.date: 11/04/2016
f1_keywords:
- C2893
helpviewer_keywords:
- C2893
ms.assetid: ec0cbe43-005d-45da-8742-aaeb9b81d28e
ms.openlocfilehash: ca603eb94d5d528a7fed15e0320e1f5d88bf0629
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760876"
---
# <a name="compiler-error-c2893"></a>Errore del compilatore C2893

Non è stato possibile specializzare il modello di funzione ' nome modello '

Il compilatore non è riuscito a specializzare un modello di funzione. Questo errore può essere dovuto a numerose cause.

In generale, la modalità di risoluzione di un errore C2893 consiste nel rivedere la firma della funzione e verificare che sia possibile creare un'istanza di ogni tipo.

## <a name="example"></a>Esempio

C2893 si verifica perché il parametro di modello di `f``T` viene dedotto come `std::map<int,int>`, ma `std::map<int,int>` non dispone di alcun membro `data_type` (`T::data_type` non è possibile crearne un'istanza con `T = std::map<int,int>`). L'esempio seguente genera l'C2893.

```cpp
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
