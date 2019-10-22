---
title: complex&lt;long double&gt;
ms.date: 11/04/2016
f1_keywords:
- std::complex<long double>
- complex<long double>
- std.complex<long double>
helpviewer_keywords:
- complex<long double> function
ms.assetid: 37591991-b385-46e9-b727-d534dbc10432
ms.openlocfilehash: afd85321ee443359f17850384b06b854dfe89985
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688225"
---
# <a name="complexltlong-doublegt"></a>complex&lt;long double&gt;

Questo modello di classe specializzato in modo esplicito descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **long double**, il primo che rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.

## <a name="syntax"></a>Sintassi

```cpp
template <>
class complex<long double> {
public:
    constexpr complex(
    long double _RealVal = 0,
    long double _ImagVal = 0);

complex(
    constexpr complex<long double>& complexNum);

// rest same as class template complex
};
```

### <a name="parameters"></a>Parametri

@No__t_1 *_RealVal*
Valore di tipo **long double** per la parte reale del numero complesso da costruire.

@No__t_1 *_ImagVal*
Valore di tipo **long double** per la parte immaginaria del numero complesso da costruire.

\ *complexNum*
Numero complesso di tipo **Double** o di tipo **float** le cui parti reale e immaginaria vengono usate per inizializzare un numero complesso di tipo **long double** da costruire.

## <a name="return-value"></a>Valore restituito

Numero complesso di tipo **long double**.

## <a name="remarks"></a>Note

La specializzazione esplicita del modello di classe `complex` a una classe complessa di tipo **long double** differisce dal modello di classe solo nei costruttori che definisce. La conversione da **long double** a **float** può essere implicita, ma la conversione da **Double** a **long double** deve essere **esplicita**. L'uso di una conversione **esplicita** esclude l'inizializzazione con conversione del tipo tramite la sintassi di assegnazione.

Per ulteriori informazioni sul modello di classe `complex` e sui relativi membri, vedere [classe Complex](../standard-library/complex-class.md).

**Specifico di Microsoft**: i tipi **long double** e **Double** hanno la stessa rappresentazione, ma sono tipi distinti. Per altre informazioni, vedere [tipi fondamentali](../cpp/fundamental-types-cpp.md).

## <a name="example"></a>Esempio

```cpp
// complex_comp_ld.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
    using namespace std;
    double pi = 3.14159265359;

    // The first constructor specifies real & imaginary parts
    complex<long double> c1( 4.0 , 5.0 );
    cout << "Specifying initial real & imaginary parts,\n"
        << " as type float gives c1 = " << c1 << endl;

    // The second constructor initializes values of the real &
    // imaginary parts using those of complex number of type float
    complex<float> c2float( 1.0 , 3.0 );
    complex<long double> c2longdouble ( c2float );
    cout << "Implicit conversion from type float to type long double,"
        << "\n gives c2longdouble = " << c2longdouble << endl;

    // The third constructor initializes values of the real &
    // imaginary parts using those of a complex number
    // of type double
    complex<double> c3double( 3.0 , 4.0 );
    complex<long double> c3longdouble( c3double );
    cout << "Implicit conversion from type long double to type float,"
        << "\n gives c3longdouble = " << c3longdouble << endl;

    // The modulus and argument of a complex number can be recovered
    double absc3 = abs( c3longdouble );
    double argc3 = arg( c3longdouble );
    cout << "The modulus of c3 is recovered from c3 using: abs( c3 ) = "
        << absc3 << endl;
    cout << "Argument of c3 is recovered from c3 using:\n arg( c3 ) = "
        << argc3 << " radians, which is " << argc3 * 180 / pi
        << " degrees." << endl;
}
```

```Output
Specifying initial real & imaginary parts,
as type float gives c1 = (4,5)
Implicit conversion from type float to type long double,
gives c2longdouble = (1,3)
Implicit conversion from type long double to type float,
gives c3longdouble = (3,4)
The modulus of c3 is recovered from c3 using: abs( c3 ) = 5
Argument of c3 is recovered from c3 using:
arg( c3 ) = 0.927295 radians, which is 53.1301 degrees.
```

## <a name="requirements"></a>Requisiti

**Intestazione**: \<complex>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Classe complex](../standard-library/complex-class.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
