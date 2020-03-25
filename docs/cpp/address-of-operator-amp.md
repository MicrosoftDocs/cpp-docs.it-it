---
title: 'Operatore address-of: &amp;'
ms.date: 11/04/2016
f1_keywords:
- '&'
helpviewer_keywords:
- address-of operator (&)
- '& operator'
- '& operator [C++], address-of operator'
ms.assetid: 2828221a-15f6-4acc-87fe-25e34feebb88
ms.openlocfilehash: 4c9ae9aedaec202c8798ab454ee5df1a68278a6d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181603"
---
# <a name="address-of-operator-amp"></a>Operatore address-of: &amp;

## <a name="syntax"></a>Sintassi

```
& cast-expression
```

## <a name="remarks"></a>Osservazioni

L'operatore address-of unario ( **&** ) accetta l'indirizzo del relativo operando. L'operando dell'operatore address-of può essere un indicatore di funzione o un l-value che designa un oggetto che non è un campo di bit.

L'operatore address-of può essere applicato solo a variabili di tipo fondamentale, struttura, classe o di unione dichiarate a livello di file oppure a riferimenti a matrice con indice. In queste espressioni, un'espressione costante che non include l'operatore address-of può essere aggiunta o sottratta dall'espressione address-of.

Se applicato a funzioni oppure a valori l-value, il risultato dell'espressione è un tipo puntatore (valore r-value) derivato dal tipo dell'operando. Se, ad esempio, l'operando è di tipo **char**, il risultato dell'espressione è di tipo puntatore a **char**. L'operatore address-of, applicato a oggetti **const** o **volatile** , restituisce `const type *` o `volatile type *`, dove **Type** è il tipo dell'oggetto originale.

Quando si applica l'operatore address-of a un nome completo, il risultato dipende dal fatto che il *nome qualificato* specifichi un membro statico. Se il membro è statico, il risultato è un puntatore al tipo specificato nella dichiarazione del membro. Se il membro non è statico, il risultato è un puntatore al *nome* del membro della classe indicata da *qualified-class-name*. (Per altre informazioni su *qualified-class-name*, vedere [espressioni primarie](../cpp/primary-expressions.md) ). Nel frammento di codice seguente viene illustrato il modo in cui il risultato è diverso, a seconda che il membro sia statico:

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

L'indirizzo di una funzione in overload può essere preso in considerazione solo quando è chiaro a quale versione della funzione viene fatto riferimento. Per informazioni su come ottenere l'indirizzo di una particolare funzione in overload, vedere [Overload della funzione](function-overloading.md) .

L'applicazione dell'operatore address-of a un tipo riferimento restituisce lo stesso risultato dell'applicazione dell'operatore all'oggetto cui il riferimento è associato. Ad esempio:

## <a name="example"></a>Esempio

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

## <a name="output"></a>Output

```Output
&d equals &rd
```

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

## <a name="output"></a>Output

```Output
25
```

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Dichiaratore di riferimento lvalue: &](../cpp/lvalue-reference-declarator-amp.md)<br/>
[Operatori address-of e di riferimento indiretto](../c-language/indirection-and-address-of-operators.md)
