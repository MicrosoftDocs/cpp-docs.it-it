---
description: 'Altre informazioni su: errore del compilatore C3771'
title: Errore del compilatore C3771
ms.date: 11/04/2016
f1_keywords:
- C3771
helpviewer_keywords:
- C3771
ms.assetid: 68c23b25-7f21-4eaa-8f7e-38fda1130a69
ms.openlocfilehash: f7d71952411632ded02bc5121c6f6668eddeabc0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291662"
---
# <a name="compiler-error-c3771"></a>Errore del compilatore C3771

"identifier": impossibile trovare la dichiarazione Friend nell'ambito dello spazio dei nomi più vicino

La dichiarazione di modello di classe per l' *identificatore* del modello specificato non è stato trovato nello spazio dei nomi corrente.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Verificare che la dichiarazione di modello di classe per l'identificatore del modello sia definita nello spazio dei nomi corrente o che l'identificatore del modello sia un nome completo.

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

## <a name="see-also"></a>Vedi anche

[Modelli](../../cpp/templates-cpp.md)
