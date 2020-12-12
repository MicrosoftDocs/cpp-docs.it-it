---
description: 'Altre informazioni su: errore del compilatore C2893'
title: Errore del compilatore C2893
ms.date: 11/04/2016
f1_keywords:
- C2893
helpviewer_keywords:
- C2893
ms.assetid: ec0cbe43-005d-45da-8742-aaeb9b81d28e
ms.openlocfilehash: 42e31327096a539feeb691c698b52f57ecb615a5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278259"
---
# <a name="compiler-error-c2893"></a>Errore del compilatore C2893

Non è stato possibile specializzare il modello di funzione ' nome modello '

Il compilatore non è riuscito a specializzare un modello di funzione. Questo errore può essere dovuto a numerose cause.

In generale, la modalità di risoluzione di un errore C2893 consiste nel rivedere la firma della funzione e verificare che sia possibile creare un'istanza di ogni tipo.

## <a name="example"></a>Esempio

C2893 si verifica perché `f` il parametro di modello `T` è dedotto come `std::map<int,int>` , ma non `std::map<int,int>` include alcun membro `data_type` (non è `T::data_type` possibile crearne un'istanza con `T = std::map<int,int>` .). L'esempio seguente genera l'C2893.

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
