---
title: 'Operatore di conversione esplicita di tipi: ()'
ms.date: 11/04/2016
helpviewer_keywords:
- explicit data type conversion operator
- conversions [C++], explicit
- operators [C++], explicit type conversion
- data type conversion [C++], explicit
- type conversion [C++], explicit conversions
ms.assetid: 54272006-5ffb-45ed-8283-27152ab97529
ms.openlocfilehash: c168653a82b4d4c5023de1f76a1e6269625c74d8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81354867"
---
# <a name="explicit-type-conversion-operator-"></a>Operatore di conversione esplicita di tipi: ()

Il linguaggio C++ consente la conversione esplicita del tipo mediante una sintassi simile a quella della chiamata di funzione.

## <a name="syntax"></a>Sintassi

```
simple-type-name ( expression-list )
```

## <a name="remarks"></a>Osservazioni

Un *simple-type-name* seguito da un *expression-list* racchiuso tra parentesi costruisce un oggetto del tipo specificato utilizzando le espressioni specificate. Nell'esempio seguente viene illustrata una conversione di tipo esplicita per il tipo int:

```cpp
int i = int( d );
```

Nell'esempio seguente `Point` viene illustrata una classe.

## <a name="example"></a>Esempio

```cpp
// expre_Explicit_Type_Conversion_Operator.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class Point
{
public:
    // Define default constructor.
    Point() { _x = _y = 0; }
    // Define another constructor.
    Point( int X, int Y ) { _x = X; _y = Y; }

    // Define "accessor" functions as
    // reference types.
    unsigned& x() { return _x; }
    unsigned& y() { return _y; }
    void Show()   { cout << "x = " << _x << ", "
                         << "y = " << _y << "\n"; }
private:
    unsigned _x;
    unsigned _y;
};

int main()
{
    Point Point1, Point2;

    // Assign Point1 the explicit conversion
    //  of ( 10, 10 ).
    Point1 = Point( 10, 10 );

    // Use x() as an l-value by assigning an explicit
    //  conversion of 20 to type unsigned.
    Point1.x() = unsigned( 20 );
    Point1.Show();

    // Assign Point2 the default Point object.
    Point2 = Point();
    Point2.Show();
}
```

## <a name="output"></a>Output

```Output
x = 20, y = 10
x = 0, y = 0
```

Sebbene l'esempio precedente dimostri la conversione del tipo esplicita mediante le costanti, la stessa tecnica può essere utilizzata per eseguire queste conversioni di oggetti. Nel frammento di codice che segue viene illustrata questa alternativa:

```cpp
int i = 7;
float d;

d = float( i );
```

Le conversioni esplicite dei tipi possono essere specificate utilizzando la sintassi di "cast". L'esempio precedente, riscritto utilizzando la sintassi di cast, è:

```cpp
d = (float)i;
```

Sia le conversioni eseguite con il cast che con la funzione danno gli stessi risultati quando si esegue la conversione di valori singoli. Tuttavia, nella sintassi stile-funzione è possibile specificare più argomenti per la conversione. Questa differenza è importante per i tipi definiti dall'utente. Si consideri una classe `Point` e le relative conversioni:

```cpp
struct Point
{
    Point( short x, short y ) { _x = x; _y = y; }
    ...
    short _x, _y;
};
...
Point pt = Point( 3, 10 );
```

Nell'esempio precedente, che utilizza la conversione in stile funzione, viene illustrato come convertire due `Point`valori (uno per *x* e uno per *y*) nel tipo definito dall'utente .

> [!CAUTION]
> Si consiglia di utilizzare con cautela le conversioni esplicite del tipo, poiché queste eseguono l'override del controllo del tipo incorporato del compilatore C++.

La notazione [cast](../cpp/cast-operator-parens.md) deve essere utilizzata per le conversioni in tipi che non hanno un *simple-type-name* (ad esempio, i tipi puntatore o di riferimento). La conversione in tipi che possono essere espressi con un *simple-type-name* possono essere scritti in entrambi i campi.

La definizione del tipo all'interno dei cast non è consentita.

## <a name="see-also"></a>Vedere anche

[Espressioni in forma suffissa](../cpp/postfix-expressions.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
