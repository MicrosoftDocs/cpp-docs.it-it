---
description: 'Altre informazioni su: &lt; float complesso&gt;'
title: complex&lt;float&gt;
ms.date: 11/04/2016
f1_keywords:
- complex/std::complex<float>
helpviewer_keywords:
- complex<float> function
ms.assetid: 1178eb1e-39bd-4017-89cd-aea95f813939
ms.openlocfilehash: f3efa0425bbf7b6d1df4a6211d549ccf6693fd5c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97233851"
---
# <a name="complexltfloatgt"></a>complex&lt;float&gt;

Descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **`float`** , il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.

## <a name="syntax"></a>Sintassi

```cpp
template <>
class complex<float> {
public:
    constexpr complex(
    float _RealVal = 0,
    float _ImagVal = 0);

constexpr complex(
    const complex<float>& complexNum);

constexpr complex(
    const complex<double>& complexNum);

constexpr complex(
    const complex<long double>& complexNum);
// rest same as class template complex
};
```

### <a name="parameters"></a>Parametri

*_RealVal*\
Valore di tipo **`float`** per la parte reale del numero complesso da costruire.

*_ImagVal*\
Valore di tipo **`float`** per la parte immaginaria del numero complesso da costruire.

*complexNum*\
Numero complesso di tipo **`double`** o di tipo le **`long double`** cui parti reale e immaginaria vengono usate per inizializzare un numero complesso di tipo **`float`** costruito.

## <a name="return-value"></a>Valore restituito

Numero complesso di tipo **`float`** .

## <a name="remarks"></a>Commenti

La specializzazione esplicita del modello di classe Complex a una classe complessa di tipo **`float`** differisce dal modello di classe solo nei costruttori che definisce. La conversione da **`float`** a **`double`** può essere implicita, ma la conversione meno sicura da **`float`** a **`long double`** è obbligatoria **`explicit`** . L'uso di **`explicit`** regole esclude l'avvio con la conversione del tipo tramite la sintassi di assegnazione.

Per ulteriori informazioni sul modello di classe `complex` , vedere [classe Complex](../standard-library/complex-class.md). Per un elenco di membri del modello di classe `complex` , vedere.

## <a name="example"></a>Esempio

```cpp
// complex_comp_flt.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // The first constructor specifies real & imaginary parts
   complex <float> c1 ( 4.0 , 5.0 );
   cout << "Specifying initial real & imaginary parts,\n"
        << " as type float gives c1 = " << c1 << endl;

   // The second constructor initializes values of the real &
   // imaginary parts using those of complex number of type double
   complex <double> c2double ( 1.0 , 3.0 );
   complex <float> c2float ( c2double );
   cout << "Implicit conversion from type double to type float,"
        << endl << "gives c2float = " << c2float << endl;

   // The third constructor initializes values of the real &
   // imaginary parts using those of a complex number
   // of type long double
   complex <long double> c3longdouble ( 3.0 , 4.0 );
   complex <float> c3float ( c3longdouble );
   cout << "Explicit conversion from type long double to type float,"
        << endl << "gives c3float = " << c3float << endl;

   // The modulus and argument of a complex number can be recovered
   double absc3 = abs ( c3float);
   double argc3 = arg ( c3float);
   cout << "The modulus of c3 is recovered from c3 using: abs ( c3 ) = "
        << absc3 << endl;
   cout << "Argument of c3 is recovered from c3 using:"
        << endl << "arg ( c3 ) = "
        << argc3 << " radians, which is " << argc3 * 180 / pi
        << " degrees." << endl;
}
/* Output:
Specifying initial real & imaginary parts,
as type float gives c1 = (4,5)
Implicit conversion from type double to type float,
gives c2float = (1,3)
Explicit conversion from type long double to type float,
gives c3float = (3,4)
The modulus of c3 is recovered from c3 using: abs ( c3 ) = 5
Argument of c3 is recovered from c3 using:
arg ( c3 ) = 0.927295 radians, which is 53.1301 degrees.
*/
```

## <a name="requirements"></a>Requisiti

**Intestazione**: \<complex>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[Classe complessa](../standard-library/complex-class.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
