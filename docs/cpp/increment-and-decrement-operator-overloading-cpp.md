---
title: Overload degli operatori di incremento e decremento (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- increment operators [C++]
- increment operators [C++], types of
- decrement operators [C++]
- decrement operators [C++], types of
ms.assetid: 5423c6ce-3999-4a77-92f6-ad540add1b1d
ms.openlocfilehash: 4413c2bba600d1118870faca9a15b20398ec4dd4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62183568"
---
# <a name="increment-and-decrement-operator-overloading-c"></a>Overload degli operatori di incremento e decremento (C++)

Gli operatori di incremento e decremento rientrano in una categoria speciale poiché esistono due varianti di ciascuno:

- Incremento prefisso e incremento suffisso

- Decremento prefisso e decremento suffisso

Quando si creano le funzioni dell'operatore di overload, può essere utile implementare versioni separate della forma prefissa e suffissa di questi operatori. Per distinguere tra i due, si osserva la regola seguente: La forma prefissa dell'operatore viene dichiarata esattamente come qualsiasi altro operatore unario; forma suffissa accetta un argomento aggiuntivo typu **int**.

> [!NOTE]
>  Quando si specifica un operatore di overload per la forma suffissa dell'operatore di incremento o decremento, l'argomento aggiuntivo deve essere di tipo **int**; specifica un qualsiasi altro tipo genera un errore.

Di seguito viene illustrato come definire gli operatori di incremento e di decremento in forma prefissa e suffissa per la classe `Point`:

```cpp
// increment_and_decrement1.cpp
class Point
{
public:
   // Declare prefix and postfix increment operators.
   Point& operator++();       // Prefix increment operator.
   Point operator++(int);     // Postfix increment operator.

   // Declare prefix and postfix decrement operators.
   Point& operator--();       // Prefix decrement operator.
   Point operator--(int);     // Postfix decrement operator.

   // Define default constructor.
   Point() { _x = _y = 0; }

   // Define accessor functions.
   int x() { return _x; }
   int y() { return _y; }
private:
   int _x, _y;
};

// Define prefix increment operator.
Point& Point::operator++()
{
   _x++;
   _y++;
   return *this;
}

// Define postfix increment operator.
Point Point::operator++(int)
{
   Point temp = *this;
   ++*this;
   return temp;
}

// Define prefix decrement operator.
Point& Point::operator--()
{
   _x--;
   _y--;
   return *this;
}

// Define postfix decrement operator.
Point Point::operator--(int)
{
   Point temp = *this;
   --*this;
   return temp;
}
int main()
{
}
```

Gli stessi operatori possono essere definiti in ambito file (a livello globale) mediante l'utilizzo delle intestazioni di funzione:

```cpp
friend Point& operator++( Point& )      // Prefix increment
friend Point& operator++( Point&, int ) // Postfix increment
friend Point& operator--( Point& )      // Prefix decrement
friend Point& operator--( Point&, int ) // Postfix decrement
```

L'argomento di tipo **int** che denota la forma suffissa di incremento o operatore di decremento non viene comunemente usato per passare gli argomenti. Di solito contiene il valore 0. Tuttavia, può essere utilizzato nel modo seguente:

```cpp
// increment_and_decrement2.cpp
class Int
{
public:
    Int &operator++( int n );
private:
    int _i;
};

Int& Int::operator++( int n )
{
    if( n != 0 )    // Handle case where an argument is passed.
        _i += n;
    else
        _i++;       // Handle case where no argument is passed.
    return *this;
}
int main()
{
   Int i;
   i.operator++( 25 ); // Increment by 25.
}
```

Non esiste una sintassi per l'utilizzo degli operatori di incremento o decremento per passare questi valori; è necessario utilizzare la chiamata esplicita, come mostrato nel codice precedente. Un modo più semplice per implementare questa funzionalità è eseguire l'overload dell'operatore di addizione/assegnazione (**+=**).

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](../cpp/operator-overloading.md)