---
title: Errore del compilatore C2893 | Microsoft Docs
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
ms.openlocfilehash: 73d4f838f030db3667b08295006c2ea1df94c87b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46026179"
---
# <a name="compiler-error-c2893"></a>Errore del compilatore C2893

Impossibile specializzare il modello di funzione 'nome del modello'

Il compilatore non è stato possibile specializzare un modello di funzione. Possono esistere molte cause di questo errore.

In generale, il modo per risolvere un errore C2893 è per verificare la firma della funzione e verificare che è possibile creare un'istanza di ogni tipo.

## <a name="example"></a>Esempio

C2893 si verifica perché `f`del parametro di modello `T` viene dedotto per essere `std::map<int,int>`, ma `std::map<int,int>` dispone di alcun membro `data_type` (`T::data_type` non è possibile creare istanze con `T = std::map<int,int>`.). L'esempio seguente genera l'errore C2893.

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