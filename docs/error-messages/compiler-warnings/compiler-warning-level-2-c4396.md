---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4396'
title: Avviso del compilatore (livello 2) C4396
ms.date: 11/04/2016
f1_keywords:
- C4396
helpviewer_keywords:
- C4396
ms.assetid: 7cd6b283-db17-4574-b299-03e0b913ad70
ms.openlocfilehash: ab8743c748044456fa1826c805f8d652d76c403d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97173519"
---
# <a name="compiler-warning-level-2-c4396"></a>Avviso del compilatore (livello 2) C4396

"name": impossibile utilizzare l'identificatore inline quando una dichiarazione Friend fa riferimento alla specializzazione di un modello di funzione

Una specializzazione di un modello di funzione non può specificare uno degli identificatori [inline](../../cpp/inline-functions-cpp.md) . Il compilatore genera l'avviso C4396 e ignora l'identificatore inline.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere l' **`inline`** **`__inline`** identificatore, o **`__forceinline`** dalla dichiarazione di funzione Friend.

## <a name="example"></a>Esempio

Nell'esempio di codice seguente viene illustrata una dichiarazione di funzione Friend non valida con un **`inline`** identificatore.

```cpp
// C4396.cpp
// compile with: /W2 /c

class X;
template<class T> void Func(T t, int i);

class X {
    friend inline void Func<char>(char t, int i);  //C4396
// try the following line instead
//    friend void Func<char>(char t, int i);
    int i;
};
```
