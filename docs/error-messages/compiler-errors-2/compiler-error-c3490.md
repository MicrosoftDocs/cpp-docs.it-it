---
title: Errore del compilatore C3490
ms.date: 11/04/2016
f1_keywords:
- C3490
helpviewer_keywords:
- C3490
ms.assetid: 7638559a-fd06-4527-a9c1-0c8ae68b3123
ms.openlocfilehash: 76729f49358e2a05b425730517e88ba14f2909c6
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90685724"
---
# <a name="compiler-error-c3490"></a>Errore del compilatore C3490

impossibile modificare 'var' perché l'accesso viene effettuato tramite un oggetto const

Un'espressione lambda dichiarata in un **`const`** metodo non può modificare i dati dei membri non modificabili.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere il **`const`** modificatore dalla dichiarazione del metodo.

## <a name="examples"></a>Esempi

Nell'esempio seguente viene generato C3490 perché modifica la variabile membro `_i` in un **`const`** Metodo:

```cpp
// C3490a.cpp
// compile with: /c

class C
{
   void f() const
   {
      auto x = [=]() { _i = 20; }; // C3490
   }

   int _i;
};
```

Nell'esempio seguente viene risolto C3490 rimuovendo il **`const`** modificatore dalla dichiarazione del metodo:

```cpp
// C3490b.cpp
// compile with: /c

class C
{
   void f()
   {
      auto x = [=]() { _i = 20; };
   }

   int _i;
};
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
