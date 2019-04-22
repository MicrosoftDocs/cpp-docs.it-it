---
title: Errore del compilatore C3490
ms.date: 11/04/2016
f1_keywords:
- C3490
helpviewer_keywords:
- C3490
ms.assetid: 7638559a-fd06-4527-a9c1-0c8ae68b3123
ms.openlocfilehash: 1e6c3c502290e88feec89877de7ad791084401cf
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59023256"
---
# <a name="compiler-error-c3490"></a>Errore del compilatore C3490

impossibile modificare 'var' perché l'accesso viene effettuato tramite un oggetto const

Un'espressione lambda dichiarata in un metodo `const` non può modificare i dati di membri non modificabili.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Rimuovere il modificatore `const` dalla dichiarazione di metodo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3490 perché modifica la variabile membro `_i` in un metodo `const` :

```
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

```
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