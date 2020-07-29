---
title: Overload degli operatori di incremento e decremento (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- increment operators [C++]
- increment operators [C++], types of
- decrement operators [C++]
- decrement operators [C++], types of
ms.assetid: 5423c6ce-3999-4a77-92f6-ad540add1b1d
ms.openlocfilehash: 10cda57b74a7da57f2d48b91854b5d37c8d181f1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87186984"
---
# <a name="increment-and-decrement-operator-overloading-c"></a>Overload degli operatori di incremento e decremento (C++)

Gli operatori di incremento e decremento rientrano in una categoria speciale poiché esistono due varianti di ciascuno:

- Incremento prefisso e incremento suffisso

- Decremento prefisso e decremento suffisso

Quando si creano le funzioni dell'operatore di overload, può essere utile implementare versioni separate della forma prefissa e suffissa di questi operatori. Per distinguere tra i due, viene osservata la regola seguente: il formato di prefisso dell'operatore viene dichiarato esattamente allo stesso modo di qualsiasi altro operatore unario; il form suffisso accetta un argomento aggiuntivo di tipo **`int`** .

> [!NOTE]
> Quando si specifica un operatore di overload per la forma suffissa dell'operatore di incremento o decremento, l'argomento aggiuntivo deve essere di tipo. **`int`** se si specifica un altro tipo, verrà generato un errore.

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

L'argomento di tipo **`int`** che indica la forma suffissa dell'operatore di incremento o decremento non viene comunemente utilizzato per passare argomenti. Di solito contiene il valore 0. Tuttavia, può essere utilizzato nel modo seguente:

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

Non esiste una sintassi per l'utilizzo degli operatori di incremento o decremento per passare questi valori; è necessario utilizzare la chiamata esplicita, come mostrato nel codice precedente. Un modo più semplice per implementare questa funzionalità è eseguire l'overload dell'operatore di addizione/assegnazione ( **+=** ).

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](../cpp/operator-overloading.md)
