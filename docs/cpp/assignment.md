---
title: Assegnazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], assignment
- assignment operators [C++], overloaded
ms.assetid: d87e4f89-f8f5-42c1-9d3c-184bca9d0e15
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 05f88eaaef32c509b400441830b5dcc311bf6769
ms.sourcegitcommit: 7127467af82147657d0fd7a41fe9c633c4a8453c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/27/2018
ms.locfileid: "43054015"
---
# <a name="assignment"></a>Assegnazione

L'operatore di assegnazione (**=**) è, in senso stretto, un operatore binario. La relativa dichiarazione è identica a qualsiasi altro operatore binario, con le seguenti eccezioni:

- Deve essere una funzione membro non statica. No **operatore =** può essere dichiarato come una funzione non membro.
- Non è ereditato da classi derivate.
- Un valore predefinito **operatore =** funzione può essere generata dal compilatore per i tipi di classe, se non ne esiste alcuno.

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

L'argomento fornito è il lato destro dell'espressione. L'operatore restituisce l'oggetto per mantenere il comportamento dell'operatore di assegnazione, che restituisce il valore del lato sinistro una volta completata l'assegnazione. In questo modo il concatenamento delle assegnazioni, ad esempio:

```cpp
pt1 = pt2 = pt3;
```

L'operatore di assegnazione di copia non deve essere confuso con il costruttore di copia. Quest'ultimo viene chiamato durante la creazione di un nuovo oggetto da una esistente:

```cpp
// Copy constructor is called--not overloaded copy assignment operator!
Point pt3 = pt1;

// The previous initialization is line is similar to the following:
Point pt4(pt1); // Copy constructor call
```

> [!NOTE]
> È consigliabile seguire le [regola pari a tre](https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)) che una classe che definisce un operatore di assegnazione di copia debba definire in modo esplicito anche costruttore di copia, distruttore e, a partire da c++11, costruttore e spostamento di assegnazione di spostamento operatore.

## <a name="see-also"></a>Vedere anche

- [Overload degli operatori](../cpp/operator-overloading.md)
- [Costruttori di copia e operatori di assegnazione di copia (C++)](../cpp/copy-constructors-and-copy-assignment-operators-cpp.md)