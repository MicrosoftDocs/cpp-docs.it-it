---
title: Avviso del compilatore (livello 2) C4396
ms.date: 11/04/2016
f1_keywords:
- C4396
helpviewer_keywords:
- C4396
ms.assetid: 7cd6b283-db17-4574-b299-03e0b913ad70
ms.openlocfilehash: fec6875fdb2e8a60e71fe08da1ed4e8fa82e4641
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87206042"
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
