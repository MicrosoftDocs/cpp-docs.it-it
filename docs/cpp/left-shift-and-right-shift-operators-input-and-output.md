---
title: Operatori Left Shift e Right Shift (&gt; &gt; e &lt; &lt;)
ms.date: 08/13/2018
f1_keywords:
- <<
- '>>'
helpviewer_keywords:
- << operator [C++], with specific objects
- left shift operators [C++]
- right shift operators [C++]
- bitwise-shift operators [C++]
- '>> operator'
- shift operators [C++]
- operators [C++], shift
ms.assetid: 25fa0cbb-5fdd-4657-8745-b35f7d8f1606
ms.openlocfilehash: 2020c2dbbf8ff91ee692366f55c836be0b3dddb0
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825915"
---
# <a name="left-shift-and-right-shift-operators-gtgt-and-ltlt"></a>Operatori Left Shift e Right Shift (&gt; &gt; e &lt; &lt;)

Gli operatori di spostamento bit per bit sono l'operatore di**&gt;** spostamento a destra (), che sposta i bit di *Shift-Expression* a destra e l'operatore di spostamento**&lt;** a sinistra (), che sposta i bit di *Shift-Expression* a sinistra. <sup>1</sup>

## <a name="syntax"></a>Sintassi

> *cambio-espressione* `<<` *additiva-espressione*\
> *shift-expression* `>>` *additive-expression*

## <a name="remarks"></a>Osservazioni

> [!IMPORTANT]
> Le descrizioni e gli esempi seguenti sono validi in Windows per le architetture x86 e x64. L'implementazione degli operatori di spostamento a sinistra e a destra è significativamente diversa in Windows per i dispositivi ARM. Per ulteriori informazioni, vedere la sezione "operatori shift" del post di Blog [Hello ARM](https://blogs.msdn.com/b/vcblog/archive/2012/10/25/hello-arm-exploring-undefined-unspecified-and-implementation-defined-behavior-in-c.aspx) .

## <a name="left-shifts"></a>Spostamenti a sinistra

L'operatore di spostamento a sinistra fa in modo che i bit in *Shift-Expression* vengano spostati a sinistra del numero di posizioni specificato da *additive-expression*. Le posizioni dei bit liberate dall'operazione di spostamento vengono riempite con zero. Uno spostamento a sinistra è uno spostamento logico (i bit spostati oltre la fine vengono eliminati, incluso il bit di segno). Per ulteriori informazioni sui tipi di turni bit per bit, vedere [turni bit per bit](https://en.wikipedia.org/wiki/Bitwise_shift).

Nell'esempio seguente vengono illustrate operazioni di spostamento a sinistra tramite numeri senza segno. Viene mostrato ciò che accade ai bit che rappresentano il valore come bitset. Per ulteriori informazioni, vedere [classe bits](../standard-library/bitset-class.md).

```cpp
#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned short short1 = 4;
    bitset<16> bitset1{short1};   // the bitset representation of 4
    cout << bitset1 << endl;  // 0b00000000'00000100

    unsigned short short2 = short1 << 1;     // 4 left-shifted by 1 = 8
    bitset<16> bitset2{short2};
    cout << bitset2 << endl;  // 0b00000000'00001000

    unsigned short short3 = short1 << 2;     // 4 left-shifted by 2 = 16
    bitset<16> bitset3{short3};
    cout << bitset3 << endl;  // 0b00000000'00010000
}
```

Se si sposta a sinistra un numero con segno coinvolgendo il bit di segno, il risultato sarà indefinito. Nell'esempio seguente viene illustrato cosa accade quando un bit viene spostato a sinistra nella posizione del bit di segno.

```cpp
#include <iostream>
#include <bitset>

using namespace std;

int main() {
    short short1 = 16384;
    bitset<16> bitset1(short1);
    cout << bitset1 << endl;  // 0b01000000'00000000

    short short3 = short1 << 1;
    bitset<16> bitset3(short3);  // 16384 left-shifted by 1 = -32768
    cout << bitset3 << endl;  // 0b10000000'00000000

    short short4 = short1 << 14;
    bitset<16> bitset4(short4);  // 4 left-shifted by 14 = 0
    cout << bitset4 << endl;  // 0b00000000'00000000
}
```

## <a name="right-shifts"></a>Spostamenti a destra

L'operatore di spostamento a destra fa in modo che lo schema di bit in *Shift-Expression* venga spostato a destra del numero di posizioni specificato da *additive-expression*. Per i numeri senza segno, le posizioni dei bit liberate dall'operazione di spostamento vengono riempite con zero. Per i numeri con segno, il bit di segno viene utilizzato per riempire le posizioni dei bit liberate. In altre parole, se il numero è positivo, si utilizza 0, se il numero è negativo, si utilizza 1.

> [!IMPORTANT]
> Il risultato di uno spostamento a destra di un numero negativo con segno è dipendente dall'implementazione. Sebbene il compilatore Microsoft C++ usi il bit di segno per riempire le posizioni dei bit sgomberate, non esiste alcuna garanzia che anche altre implementazioni eseguano questa operazione.

Nell'esempio seguente vengono illustrate operazioni di spostamento a destra tramite numeri senza segno:

```cpp
#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned short short11 = 1024;
    bitset<16> bitset11{short11};
    cout << bitset11 << endl;     // 0b00000100'00000000

    unsigned short short12 = short11 >> 1;  // 512
    bitset<16> bitset12{short12};
    cout << bitset12 << endl;     // 0b00000010'00000000

    unsigned short short13 = short11 >> 10;  // 1
    bitset<16> bitset13{short13};
    cout << bitset13 << endl;     // 0b00000000'00000001

    unsigned short short14 = short11 >> 11;  // 0
    bitset<16> bitset14{short14};
    cout << bitset14 << endl;     // 0b00000000'00000000
}
```

Nell'esempio seguente vengono illustrate operazioni di spostamento a destra tramite numeri con segno positivi.

```cpp
#include <iostream>
#include <bitset>

using namespace std;

int main() {
    short short1 = 1024;
    bitset<16> bitset1(short1);
    cout << bitset1 << endl;     // 0b00000100'00000000

    short short2 = short1 >> 1;  // 512
    bitset<16> bitset2(short2);
    cout << bitset2 << endl;     // 0b00000010'00000000

    short short3 = short1 >> 11;  // 0
    bitset<16> bitset3(short3);
    cout << bitset3 << endl;     // 0b00000000'00000000
}
```

Nell'esempio seguente vengono illustrate operazioni di spostamento a destra tramite numeri interi con segno negativi.

```cpp
#include <iostream>
#include <bitset>

using namespace std;

int main() {
    short neg1 = -16;
    bitset<16> bn1(neg1);
    cout << bn1 << endl;  // 0b11111111'11110000

    short neg2 = neg1 >> 1; // -8
    bitset<16> bn2(neg2);
    cout << bn2 << endl;  // 0b11111111'11111000

    short neg3 = neg1 >> 2; // -4
    bitset<16> bn3(neg3);
    cout << bn3 << endl;  // 0b11111111'11111100

    short neg4 = neg1 >> 4; // -1
    bitset<16> bn4(neg4);
    cout << bn4 << endl;  // 0b11111111'11111111

    short neg5 = neg1 >> 5; // -1
    bitset<16> bn5(neg5);
    cout << bn5 << endl;  // 0b11111111'11111111
}
```

## <a name="shifts-and-promotions"></a>Spostamenti e promozioni

Le espressioni su entrambi i lati di un operatore di spostamento devono essere tipi integrali. Le promozioni integrali vengono eseguite in base alle regole descritte in [conversioni standard](standard-conversions.md). Il tipo del risultato corrisponde al tipo dell' *espressione Shift*promossa.

Nell'esempio seguente una variabile di tipo **char** viene promossa a un valore **int**.

```cpp
#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    char char1 = 'a';

    auto promoted1 = char1 << 1;   // 194
    cout << typeid(promoted1).name() << endl;  // int

    auto promoted2 = char1 << 10;  // 99328
    cout << typeid(promoted2).name() << endl;  // int
}
```

## <a name="additional-details"></a>Altri dettagli

Il risultato di un'operazione di spostamento non è definito se *additive-expression* è negativo o se *additive-expression* è maggiore o uguale al numero di bit nell' *espressione Shift*(innalzata di livello). Non viene eseguita alcuna operazione di spostamento se *additive-expression* è 0.

```cpp
#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned int int1 = 4;
    bitset<32> b1{int1};
    cout << b1 << endl;    // 0b00000000'00000000'00000000'00000100

    unsigned int int2 = int1 << -3;  // C4293: '<<' : shift count negative or too big, undefined behavior
    unsigned int int3 = int1 >> -3;  // C4293: '>>' : shift count negative or too big, undefined behavior
    unsigned int int4 = int1 << 32;  // C4293: '<<' : shift count negative or too big, undefined behavior
    unsigned int int5 = int1 >> 32;  // C4293: '>>' : shift count negative or too big, undefined behavior
    unsigned int int6 = int1 << 0;
    bitset<32> b6{int6};
    cout << b6 << endl;    // 0b00000000'00000000'00000000'00000100 (no change)
}
```

## <a name="footnotes"></a>Note a piè di pagina

<sup>1</sup> di seguito è riportata la descrizione degli operatori shift nella specifica ISO c++ 11 (incis/ISO/IEC 14882-2011 [2012]), sezioni 5.8.2 e 5.8.3.

Il valore di `E1 << E2` è `E1` spostato a sinistra di `E2` posizioni di bit. I bit vuoti vengono riempiti con zero. Se `E1` dispone di un tipo senza segno, il valore del risultato è **E1 × 2**<sup>**E2**</sup>, modulo ridotto uno più del valore massimo rappresentabile nel tipo di risultato. In caso contrario `E1` , se ha un tipo con segno e un valore non negativo e **E1 × 2**<sup>**E2**</sup> è rappresentabile nel tipo senza segno corrispondente del tipo di risultato, tale valore, convertito nel tipo di risultato, è il valore risultante. in caso contrario, il comportamento non è definito.

Il valore di `E1 >> E2` è `E1` spostato a destra di `E2` posizioni di bit. Se `E1` ha un tipo senza segno o se `E1` ha un tipo con segno e un valore non negativo, il valore del risultato è la parte integrale del quoziente di **E1/2**<sup>**E2**</sup>. Se `E1` dispone di un tipo signed e di un valore negativo, il valore risultante sarà definito dall'implementazione.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
