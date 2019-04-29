---
title: Avviso del compilatore (livello 2) C4396
ms.date: 11/04/2016
f1_keywords:
- C4396
helpviewer_keywords:
- C4396
ms.assetid: 7cd6b283-db17-4574-b299-03e0b913ad70
ms.openlocfilehash: 84045ea2c285be8b1c1c9d1fd62b417db00dd29c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62402450"
---
# <a name="compiler-warning-level-2-c4396"></a>Avviso del compilatore (livello 2) C4396

"name": impossibile utilizzare l'identificatore inline quando una dichiarazione Friend fa riferimento alla specializzazione di un modello di funzione

Una specializzazione di un modello di funzione non può specificare uno degli identificatori [inline](../../cpp/inline-functions-cpp.md) . Il compilatore genera l'avviso C4396 e ignora l'identificatore inline.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere l'identificatore `inline`, `__inline`o `__forceinline` dalla dichiarazione di funzione Friend.

## <a name="example"></a>Esempio

Il codice di esempio seguente mostra una dichiarazione di funzione Friend non valida con un identificatore `inline` .

```
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