---
title: Errore del compilatore C3490
ms.date: 11/04/2016
f1_keywords:
- C3490
helpviewer_keywords:
- C3490
ms.assetid: 7638559a-fd06-4527-a9c1-0c8ae68b3123
ms.openlocfilehash: 940eae39222548ec74bda8ccb38e669748ffa74f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738401"
---
# <a name="compiler-error-c3490"></a>Errore del compilatore C3490

impossibile modificare 'var' perché l'accesso viene effettuato tramite un oggetto const

Un'espressione lambda dichiarata in un metodo `const` non può modificare i dati di membri non modificabili.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere il modificatore `const` dalla dichiarazione di metodo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3490 perché modifica la variabile membro `_i` in un metodo `const` :

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

## <a name="example"></a>Esempio

L'esempio seguente risolve l'errore C3490 rimuovendo il modificatore `const` dalla dichiarazione di metodo:

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
