---
title: 'Operatore address-of: &amp;'
description: Operatore address-of nel linguaggio C++.
ms.date: 10/02/2020
f1_keywords:
- '&'
helpviewer_keywords:
- address-of operator (&)
- '& operator'
- '& operator [C++], address-of operator'
ms.assetid: 2828221a-15f6-4acc-87fe-25e34feebb88
ms.openlocfilehash: 8ef7ad065281e4de58ddbdebea25950f8eb9dd06
ms.sourcegitcommit: 30792632548d1c71894f9fecbe2f554294b86020
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/06/2020
ms.locfileid: "91765280"
---
# <a name="address-of-operator-amp"></a>Operatore address-of: &amp;

## <a name="syntax"></a>Sintassi

> **`&`** *`cast-expression`*

## <a name="remarks"></a>Osservazioni

L'operatore unario address-of ( **`&`** ) accetta l'indirizzo del relativo operando. L'operando dell'operatore address-of può essere un indicatore di funzione o un l-value che designa un oggetto che non è un campo di bit.

L'operatore address-of può essere applicato solo a variabili di tipo fondamentale, struttura, classe o Unione dichiarate a livello di file oppure a riferimenti a matrici con indice. In queste espressioni, un'espressione costante che non include l'operatore address-of può essere aggiunta o sottratta dall'espressione address-of.

Se applicato a funzioni oppure a valori l-value, il risultato dell'espressione è un tipo puntatore (valore r-value) derivato dal tipo dell'operando. Se, ad esempio, l'operando è di tipo **`char`** , il risultato dell'espressione è di tipo puntatore a **`char`** . L'operatore address-of, applicato a **`const`** **`volatile`** oggetti o, restituisce `const type *` o `volatile type *` , dove `type` è il tipo dell'oggetto originale.

L'indirizzo di una funzione in overload può essere eseguito solo quando è chiaro a quale versione della funzione viene fatto riferimento. Per informazioni su come ottenere l'indirizzo di una particolare funzione in overload, vedere [Overload della funzione](function-overloading.md) .

Quando si applica l'operatore address-of a un nome completo, il risultato dipende dal fatto che il *nome qualificato* specifichi un membro statico. Se il membro è statico, il risultato è un puntatore al tipo specificato nella dichiarazione del membro. Per un membro che non è statico, il risultato è un puntatore al *nome* del membro della classe indicata da *qualified-class-name*. Per altre informazioni su *qualified-class-name*, vedere [espressioni primarie](../cpp/primary-expressions.md).

## <a name="example-address-of-static-member"></a>Esempio: indirizzo del membro statico

Nel frammento di codice seguente viene illustrato il modo in cui il risultato dell'operatore address-of è diverso, a seconda che il membro di una classe sia statico:

```cpp
// expre_Address_Of_Operator.cpp
// C2440 expected
class PTM {
public:
    int iValue;
    static float fValue;
};

int main() {
   int   PTM::*piValue = &PTM::iValue;  // OK: non-static
   float PTM::*pfValue = &PTM::fValue;  // C2440 error: static
   float *spfValue     = &PTM::fValue;  // OK
}
```

In questo esempio l'espressione `&PTM::fValue` contiene il tipo `float *` anziché il tipo `float PTM::*` perché `fValue` è un membro statico.

## <a name="example-address-of-a-reference-type"></a>Esempio: indirizzo di un tipo di riferimento

L'applicazione dell'operatore address-of a un tipo riferimento restituisce lo stesso risultato dell'applicazione dell'operatore all'oggetto cui il riferimento è associato. Ad esempio:

```cpp
// expre_Address_Of_Operator2.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
int main() {
   double d;        // Define an object of type double.
   double& rd = d;  // Define a reference to the object.

   // Obtain and compare their addresses
   if( &d == &rd )
      cout << "&d equals &rd" << endl;
}
```

```Output
&d equals &rd
```

## <a name="example-function-address-as-parameter"></a>Esempio: Indirizzo della funzione come parametro

Nell'esempio seguente viene utilizzato l'operatore address-of per passare un argomento di un puntatore a una funzione:

```cpp
// expre_Address_Of_Operator3.cpp
// compile with: /EHsc
// Demonstrate address-of operator &

#include <iostream>
using namespace std;

// Function argument is pointer to type int
int square( int *n ) {
   return (*n) * (*n);
}

int main() {
   int mynum = 5;
   cout << square( &mynum ) << endl;   // pass address of int
}
```

```Output
25
```

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori, precedenza e associatività predefiniti di C++](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Dichiaratore di riferimento lvalue: &](../cpp/lvalue-reference-declarator-amp.md)<br/>
[Operatori di riferimento indiretto e address-of](../c-language/indirection-and-address-of-operators.md)
