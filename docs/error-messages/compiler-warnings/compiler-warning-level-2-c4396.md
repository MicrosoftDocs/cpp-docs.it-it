---
title: Avviso del compilatore (livello 2) C4396
ms.date: 11/04/2016
f1_keywords:
- C4396
helpviewer_keywords:
- C4396
ms.assetid: 7cd6b283-db17-4574-b299-03e0b913ad70
ms.openlocfilehash: f37fcc7ece09bb9028a522ec6baf85d0e0e585c2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161815"
---
# <a name="compiler-warning-level-2-c4396"></a>Avviso del compilatore (livello 2) C4396

"name": impossibile utilizzare l'identificatore inline quando una dichiarazione Friend fa riferimento alla specializzazione di un modello di funzione

Una specializzazione di un modello di funzione non può specificare uno degli identificatori [inline](../../cpp/inline-functions-cpp.md) . Il compilatore genera l'avviso C4396 e ignora l'identificatore inline.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere l'identificatore `inline`, `__inline`o `__forceinline` dalla dichiarazione di funzione Friend.

## <a name="example"></a>Esempio

Il codice di esempio seguente mostra una dichiarazione di funzione Friend non valida con un identificatore `inline` .

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
