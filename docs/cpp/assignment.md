---
description: 'Altre informazioni su: assegnazione'
title: Assegnazione
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C++], assignment
- assignment operators [C++], overloaded
ms.assetid: d87e4f89-f8f5-42c1-9d3c-184bca9d0e15
ms.openlocfilehash: 696706202e70e8baf50dda34ac98ff9bca5dcda2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319488"
---
# <a name="assignment"></a>Assegnazione

L'operatore di assegnazione ( **=** ) è, in modo rigoroso, un operatore binario. La relativa dichiarazione è identica a qualsiasi altro operatore binario, con le seguenti eccezioni:

- Deve essere una funzione membro non statica. Non è possibile dichiarare **operator =** come funzione non membro.
- Non è ereditato da classi derivate.
- Una funzione **operator =** predefinita può essere generata dal compilatore per i tipi di classe, se non ne esiste alcuno.

Nell'esempio seguente viene illustrato come dichiarare un operatore di assegnazione:

```cpp
class Point
{
public:
    int _x, _y;

    // Right side of copy assignment is the argument.
    Point& operator=(const Point&);
};

// Define copy assignment operator.
Point& Point::operator=(const Point& otherPoint)
{
    _x = otherPoint._x;
    _y = otherPoint._y;

    // Assignment operator returns left side of assignment.
    return *this;
}

int main()
{
    Point pt1, pt2;
    pt1 = pt2;
}
```

L'argomento fornito è il lato destro dell'espressione. L'operatore restituisce l'oggetto per mantenere il comportamento dell'operatore di assegnazione, che restituisce il valore del lato sinistro una volta completata l'assegnazione. In questo modo è possibile concatenare le assegnazioni, ad esempio:

```cpp
pt1 = pt2 = pt3;
```

L'operatore di assegnazione di copia non deve essere confuso con il costruttore di copia. Quest'ultimo viene chiamato durante la costruzione di un nuovo oggetto da uno esistente:

```cpp
// Copy constructor is called--not overloaded copy assignment operator!
Point pt3 = pt1;

// The previous initialization is similar to the following:
Point pt4(pt1); // Copy constructor call.
```

> [!NOTE]
> È consigliabile seguire la [regola di tre](https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)) che una classe che definisce un operatore di assegnazione di copia deve anche definire in modo esplicito il costruttore di copia, il distruttore e, a partire da c++ 11, costruttore di spostamento e operatore di assegnazione di spostamento.

## <a name="see-also"></a>Vedi anche

- [Overload degli operatori](../cpp/operator-overloading.md)
- [Costruttori di copia e operatori di assegnazione di copia (C++)](../cpp/copy-constructors-and-copy-assignment-operators-cpp.md)
