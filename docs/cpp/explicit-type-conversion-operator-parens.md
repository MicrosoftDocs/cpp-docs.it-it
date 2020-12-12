---
description: 'Ulteriori informazioni su: operatore di conversione esplicita del tipo: ()'
title: 'Operatore di conversione esplicita di tipi: ()'
ms.date: 11/04/2016
helpviewer_keywords:
- explicit data type conversion operator
- conversions [C++], explicit
- operators [C++], explicit type conversion
- data type conversion [C++], explicit
- type conversion [C++], explicit conversions
ms.assetid: 54272006-5ffb-45ed-8283-27152ab97529
ms.openlocfilehash: cb2a1ff742b71edf2f298512a55ab37dd3d37f77
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273384"
---
# <a name="explicit-type-conversion-operator-"></a>Operatore di conversione esplicita di tipi: ()

Il linguaggio C++ consente la conversione esplicita del tipo mediante una sintassi simile a quella della chiamata di funzione.

## <a name="syntax"></a>Sintassi

```
simple-type-name ( expression-list )
```

## <a name="remarks"></a>Osservazioni

Un *nome di tipo semplice* seguito da un *elenco di espressioni* racchiuso tra parentesi costruisce un oggetto del tipo specificato usando le espressioni specificate. Nell'esempio seguente viene illustrata una conversione di tipo esplicita per il tipo int:

```cpp
int i = int( d );
```

Nell'esempio seguente viene illustrata una `Point` classe.

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

Nell'esempio precedente, che usa la conversione di tipo funzione, viene illustrato come convertire due valori (uno per *x* e uno per *y*) nel tipo definito dall'utente `Point` .

> [!CAUTION]
> Si consiglia di utilizzare con cautela le conversioni esplicite del tipo, poiché queste eseguono l'override del controllo del tipo incorporato del compilatore C++.

La notazione [cast](../cpp/cast-operator-parens.md) deve essere utilizzata per le conversioni ai tipi che non hanno un *nome di tipo semplice* (ad esempio, un puntatore o tipi di riferimento). La conversione in tipi che possono essere espressi con un *nome di tipo semplice* può essere scritta in qualsiasi formato.

La definizione del tipo all'interno dei cast non è consentita.

## <a name="see-also"></a>Vedi anche

[Espressioni di suffisso](../cpp/postfix-expressions.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
