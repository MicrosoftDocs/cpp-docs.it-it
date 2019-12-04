---
title: Errore del compilatore C3492
ms.date: 11/04/2016
f1_keywords:
- C3492
helpviewer_keywords:
- C3492
ms.assetid: b1dc6342-9133-4b1f-a9c3-e8c65d20d121
ms.openlocfilehash: 37129c198096be91a8104aedcb508732d79e3630
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738310"
---
# <a name="compiler-error-c3492"></a>Errore del compilatore C3492

'var': impossibile acquisire un membro di un'unione anonima

Non è possibile acquisire un membro di un'unione senza nome.

### <a name="to-correct-this-error"></a>Per correggere l'errore

- Assegnare un nome all'unione e passare la struttura di unione completa all'elenco di acquisizione dell'espressione lambda.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3492 perché acquisisce un membro di un'unione anonima:

```cpp
// C3492a.cpp

int main()
{
   union
   {
      char ch;
      int x;
   };

   ch = 'y';
   [&x](char ch) { x = ch; }(ch); // C3492
}
```

## <a name="example"></a>Esempio

L'esempio seguente risolve l'errore C3492, assegnando un nome all'unione e passando la struttura di unione completa all'elenco di acquisizione dell'espressione lambda:

```cpp
// C3492b.cpp

int main()
{
   union
   {
      char ch;
      int x;
   } u;

   u.ch = 'y';
   [&u](char ch) { u.x = ch; }(u.ch);
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
