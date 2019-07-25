---
title: complex&lt;float&gt;
ms.date: 11/04/2016
f1_keywords:
- complex/std::complex<float>
helpviewer_keywords:
- complex<float> function
ms.assetid: 1178eb1e-39bd-4017-89cd-aea95f813939
ms.openlocfilehash: bfe0e9dcb0bf8f8b74487404998e06d233097a39
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68453109"
---
# <a name="complexltfloatgt"></a>complex&lt;float&gt;

Descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **float**, il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.

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
// rest same as template class complex
};
```

### <a name="parameters"></a>Parametri

*_RealVal*\
Valore di tipo **float** per la parte reale del numero complesso che viene costruito.

*_ImagVal*\
Valore di tipo **float** per la parte immaginaria del numero complesso che viene costruito.

*complexNum*\
Numero complesso di tipo **Double** o di tipo **long double** le cui parti reale e immaginaria vengono usate per inizializzare un numero complesso di tipo **float** costruito.

## <a name="return-value"></a>Valore restituito

Numero complesso di tipo **float**.

## <a name="remarks"></a>Note

La specializzazione esplicita della classe modello complex in una classe complex di tipo **float** si differenzia dalla classe modello solo per i costruttori definiti. La conversione da **float** a **Double** può essere implicita, ma la conversione meno sicura da **float** a **long double** deve essere esplicita. L'uso di una conversione **esplicita** esclude l'inizializzazione con conversione del tipo tramite la sintassi di assegnazione.

Per altre informazioni sulla classe modello `complex`, vedere [Classe complex](../standard-library/complex-class.md). Per un elenco dei membri della classe modello `complex`, vedere

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

## <a name="see-also"></a>Vedere anche

[Classe complex](../standard-library/complex-class.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
