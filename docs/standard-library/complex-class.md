---
title: complex (classe)
ms.date: 03/27/2019
f1_keywords:
- complex/std::complex::value_type
- complex/std::complex::imag
- complex/std::complex::real
helpviewer_keywords:
- std::complex [C++], value_type
- std::complex [C++], imag
- std::complex [C++], real
ms.assetid: d6492e1c-5eba-4bc5-835b-2a88001a5868
ms.openlocfilehash: 0c72726bfb92965a2152830d7ce77ae13f763d35
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78876204"
---
# <a name="complex-class"></a>complex (classe)

Il modello di classe descrive un oggetto che archivia due oggetti di tipo `Type`, uno che rappresenta la parte reale di un numero complesso e uno che rappresenta la parte immaginaria.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
class complex
```

## <a name="remarks"></a>Osservazioni

Oggetto della classe `Type`:

- Ha un costruttore predefinito pubblico, un distruttore, un costruttore di copia e un operatore di assegnazione con un comportamento convenzionale.

- È possibile assegnare valori interi oppure a virgola mobile oppure cast di tipo a valori con comportamento convenzionale.

- Definisce le funzioni matematiche e gli operatori aritmetici, come necessario, definiti per i tipi a virgola mobile, con un comportamento convenzionale.

In particolare, non possono esistere sottili differenze tra il costruttore di copia e la costruzione predefinita seguita dall'assegnazione. Nessuna delle operazioni sugli oggetti della classe `Type` può generare eccezioni.

Sono presenti specializzazioni esplicite di modelli di classe complessi per i tre tipi a virgola mobile. In questa implementazione, un valore di qualsiasi altro tipo `Type` è typecast a **Double** per i calcoli effettivi, con il **doppio** risultato assegnato nuovamente all'oggetto archiviato di tipo `Type`.

## <a name="members"></a>Members

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[complex](#complex)|Costruisce un numero complesso con parti reali e immaginarie specificate oppure come copia di un altro numero complesso.|

### <a name="typedefs"></a>Typedef

|||
|-|-|
|[value_type](#value_type)|Tipo che rappresenta il tipo di dati usato per rappresentare le parti reale e immaginaria di un numero complesso.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[imag](#imag)|Estrae il componente immaginario di un numero complesso.|
|[real](#real)|Estrae il componente reale di un numero complesso.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator*=](#op_star_eq)|Moltiplica un numero complesso di destinazione per un fattore che può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso.|
|[operator+=](#op_add_eq)|Aggiunge un numero a un numero complesso di destinazione, in cui il numero aggiunto può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso a cui viene aggiunto.|
|[operator-=](#operator-_eq)|Sottrae un numero da un numero complesso di destinazione, in cui il numero sottratto può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso a cui viene aggiunto.|
|[operator/=](#op_div_eq)|Divide un numero complesso di destinazione per un divisore che può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso.|
|[operator=](#op_eq)|Assegna un numero a un numero complesso di destinazione, in cui il numero assegnato può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso a cui viene assegnato.|

## <a name="complex"></a>complesso

Costruisce un numero complesso con parti reali e immaginarie specificate oppure come copia di un altro numero complesso.

```cpp
constexpr complex(
    const T& _RealVal = 0,
    const T& _ImagVal = 0);

template <class Other>
constexpr complex(
    const complex<Other>& complexNum);
```

### <a name="parameters"></a>Parametri

*_RealVal*\
Valore della parte reale usata per inizializzare il numero complesso da costruire.

*_ImagVal*\
Valore della parte immaginaria usata per inizializzare il numero complesso da costruire.

\ *complexNum*
Numero complesso le cui parti reale e immaginaria vengono usate per inizializzare il numero complesso da costruire.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza la parte reale archiviata per *\_RealVal* e la parte immaginaria archiviata *\_Imagval*. Il secondo costruttore inizializza la parte reale archiviata per `complexNum.real()` e la parte immaginaria archiviata `complexNum.imag()`.

In questa implementazione, se un convertitore non supporta le funzioni del modello membro, il modello:

```cpp
template <class Other>
complex(const complex<Other>& right);
```

viene sostituito con:

```cpp
complex(const complex& right);
```

che corrisponde al costruttore di copia.

### <a name="example"></a>Esempio

```cpp
// complex_complex.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
    using namespace std;
    double pi = 3.14159265359;

    // The first constructor specifies real & imaginary parts
    complex<double> c1( 4.0 , 5.0 );
    cout << "Specifying initial real & imaginary parts,"
        << "c1 = " << c1 << endl;

    // The second constructor initializes values of the real &
    // imaginary parts using those of another complex number
    complex<double> c2( c1 );
    cout << "Initializing with the real and imaginary parts of c1,"
        << " c2 = " << c2 << endl;

    // Complex numbers can be initialized in polar form
    // but will be stored in Cartesian form
    complex<double> c3( polar( sqrt( (double)8 ) , pi / 4 ) );
    cout << "c3 = polar( sqrt( 8 ) , pi / 4 ) = " << c3 << endl;

    // The modulus and argument of a complex number can be recovered
    double absc3 = abs( c3 );
    double argc3 = arg( c3 );
    cout << "The modulus of c3 is recovered from c3 using: abs( c3 ) = "
        << absc3 << endl;
    cout << "Argument of c3 is recovered from c3 using:\n arg( c3 ) = "
        << argc3 << " radians, which is " << argc3 * 180 / pi
        << " degrees." << endl;
}
```

## <a name="imag"></a>imag

Estrae il componente immaginario di un numero complesso.

```cpp
T imag() const;

T imag(const T& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Numero complesso di cui estrarre il valore immaginario.

### <a name="return-value"></a>Valore restituito

Parte immaginaria del numero complesso.

### <a name="remarks"></a>Osservazioni

Per un numero complesso *a + bi*, la parte o il componente fittizio è *im (a + BI) = b*.

### <a name="example"></a>Esempio

```cpp
// complex_imag.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
    using namespace std;

    complex<double> c1( 4.0 , 3.0 );
    cout << "The complex number c1 = " << c1 << endl;

    double dr1 = c1.real();
    cout << "The real part of c1 is c1.real() = "
        << dr1 << "." << endl;

    double di1 = c1.imag();
    cout << "The imaginary part of c1 is c1.imag() = "
        << di1 << "." << endl;
}
```

```Output
The complex number c1 = (4,3)
The real part of c1 is c1.real() = 4.
The imaginary part of c1 is c1.imag() = 3.
```

## <a name="op_star_eq"></a>operatore * =

Moltiplica un numero complesso di destinazione per un fattore che può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso.

```cpp
template <class Other>
complex& operator*=(const complex<Other>& right);

complex<Type>& operator*=(const Type& right);

complex<Type>& operator*=(const complex<Type>& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Numero complesso o numero dello stesso tipo del parametro del numero complesso di destinazione.

### <a name="return-value"></a>Valore restituito

Numero complesso moltiplicato per il numero specificato come parametro.

### <a name="remarks"></a>Osservazioni

L'operazione viene sottoposta a overload in modo da poter eseguire semplici operazioni aritmetiche senza convertire i dati in un formato particolare.

### <a name="example"></a>Esempio

```cpp
// complex_op_me.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main()
{
    using namespace std;
    double pi = 3.14159265359;

    // Example of the first member function
    // type complex<double> multiplied by type complex<double>
    complex<double> cl1( polar ( 3.0 , pi / 6 ) );
    complex<double> cr1( polar ( 2.0 , pi / 3 ) );
    cout << "The left-side complex number is cl1 = " << cl1 << endl;
    cout << "The right-side complex number is cr1 = " << cr1 << endl;

    complex<double> cs1 = cl1 * cr1;
    cout << "Quotient of two complex numbers is: cs1 = cl1 * cr1 = "
        << cs1 << endl;

    // This is equivalent to the following operation
    cl1 *= cr1;
    cout << "Quotient of two complex numbers is also: cl1 *= cr1 = "
        << cl1 << endl;

    double abscl1 = abs ( cl1 );
    double argcl1 = arg ( cl1 );
    cout << "The modulus of cl1 is: " << abscl1 << endl;
    cout << "The argument of cl1 is: "<< argcl1 << " radians, which is "
        << argcl1 * 180 / pi << " degrees." << endl << endl;

    // Example of the second member function
    // type complex<double> multiplied by type double
    complex<double> cl2 ( polar ( 3.0 , pi / 6 ) );
    double cr2 = 5.0;
    cout << "The left-side complex number is cl2 = " << cl2 << endl;
    cout << "The right-side complex number is cr2 = " << cr2 << endl;

    complex<double> cs2 = cl2 * cr2;
    cout << "Quotient of two complex numbers is: cs2 = cl2 * cr2 = "
        << cs2 << endl;

    // This is equivalent to the following operation
    cl2 *= cr2;
    cout << "Quotient of two complex numbers is also: cl2 *= cr2 = "
        << cl2 << endl;

    double abscl2 = abs ( cl2 );
    double argcl2 = arg ( cl2 );
    cout << "The modulus of cl2 is: " << abscl2 << endl;
    cout << "The argument of cl2 is: "<< argcl2 << " radians, which is "
        << argcl2 * 180 / pi << " degrees." << endl;
}
```

## <a name="op_add_eq"></a>operatore + =

Aggiunge un numero a un numero complesso di destinazione, in cui il numero aggiunto può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso a cui viene aggiunto.

```cpp
template <class Other>
complex<Type>& operator+=(const complex<Other>& right);

complex<Type>& operator+=(const Type& right);

complex<Type>& operator+=(const complex<Type>& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Numero complesso o numero dello stesso tipo del parametro del numero complesso di destinazione.

### <a name="return-value"></a>Valore restituito

Numero complesso che aveva il numero specificato come parametro.

### <a name="remarks"></a>Osservazioni

L'operazione viene sottoposta a overload in modo da poter eseguire semplici operazioni aritmetiche senza convertire i dati in un formato particolare.

### <a name="example"></a>Esempio

```cpp
// complex_op_pe.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Example of the first member function
   // type complex<double> added to type complex<double>
   complex<double> cl1( 3.0 , 4.0 );
   complex<double> cr1( 2.0 , -1.0 );
   cout << "The left-side complex number is cl1 = " << cl1 << endl;
   cout << "The right-side complex number is cr1 = " << cr1 << endl;

   complex<double> cs1 = cl1 + cr1;
   cout << "The sum of the two complex numbers is: cs1 = cl1 + cr1 = "
        << cs1 << endl;

   // This is equivalent to the following operation
   cl1 += cr1;
   cout << "The complex number cr1 added to the complex number cl1 is:"
        << "\n cl1 += cr1 = " << cl1 << endl;

   double abscl1 = abs( cl1 );
   double argcl1 = arg( cl1 );
   cout << "The modulus of cl1 is: " << abscl1 << endl;
   cout << "The argument of cl1 is: "<< argcl1 << " radians, which is "
        << argcl1 * 180 / pi << " degrees." << endl << endl;

   // Example of the second member function
   // type double added to type complex<double>
   complex<double> cl2( -2 , 4 );
   double cr2 =5.0;
   cout << "The left-side complex number is cl2 = " << cl2 << endl;
   cout << "The right-side complex number is cr2 = " << cr2 << endl;

   complex<double> cs2 = cl2 + cr2;
   cout << "The sum of the two complex numbers is: cs2 = cl2 + cr2 = "
        << cs2 << endl;

   // This is equivalent to the following operation
   cl2 += cr2;
   cout << "The complex number cr2 added to the complex number cl2 is:"
        << "\n cl2 += cr2 = " << cl2 << endl;

   double abscl2 = abs( cl2 );
   double argcl2 = arg( cl2 );
   cout << "The modulus of cl2 is: " << abscl2 << endl;
   cout << "The argument of cl2 is: "<< argcl2 << " radians, which is "
        << argcl2 * 180 / pi << " degrees." << endl << endl;
}
```

```Output
The left-side complex number is cl1 = (3,4)
The right-side complex number is cr1 = (2,-1)
The sum of the two complex numbers is: cs1 = cl1 + cr1 = (5,3)
The complex number cr1 added to the complex number cl1 is:
cl1 += cr1 = (5,3)
The modulus of cl1 is: 5.83095
The argument of cl1 is: 0.54042 radians, which is 30.9638 degrees.

The left-side complex number is cl2 = (-2,4)
The right-side complex number is cr2 = 5
The sum of the two complex numbers is: cs2 = cl2 + cr2 = (3,4)
The complex number cr2 added to the complex number cl2 is:
cl2 += cr2 = (3,4)
The modulus of cl2 is: 5
The argument of cl2 is: 0.927295 radians, which is 53.1301 degrees.
```

## <a name="operator-_eq"></a>operatore-=

Sottrae un numero da un numero complesso di destinazione, in cui il numero sottratto può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso a cui viene aggiunto.

```cpp
template <class Other>
complex<Type>& operator-=(const complex<Other>& complexNum);

complex<Type>& operator-=(const Type& _RealPart);

complex<Type>& operator-=(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

\ *complexNum*
Numero complesso da sottrarre dal numero complesso di destinazione.

*_RealPart*\
Numero reale da sottrarre dal numero complesso di destinazione.

### <a name="return-value"></a>Valore restituito

Numero complesso che aveva il numero specificato come parametro sottratto dal numero.

### <a name="remarks"></a>Osservazioni

L'operazione viene sottoposta a overload in modo da poter eseguire semplici operazioni aritmetiche senza convertire i dati in un formato particolare.

### <a name="example"></a>Esempio

```cpp
// complex_op_se.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Example of the first member function
   // type complex<double> subtracted from type complex<double>
   complex<double> cl1( 3.0 , 4.0 );
   complex<double> cr1( 2.0 , -1.0 );
   cout << "The left-side complex number is cl1 = " << cl1 << endl;
   cout << "The right-side complex number is cr1 = " << cr1 << endl;

   complex<double> cs1 = cl1 - cr1;
   cout << "The difference between the two complex numbers is:"
        << "\n cs1 = cl1 - cr1 = " << cs1 << endl;

   // This is equivalent to the following operation
   cl1 -= cr1;
   cout << "Complex number cr1 subtracted from complex number cl1 is:"
        << "\n cl1 -= cr1 = " << cl1 << endl;

   double abscl1 = abs( cl1 );
   double argcl1 = arg( cl1 );
   cout << "The modulus of cl1 is: " << abscl1 << endl;
   cout << "The argument of cl1 is: "<< argcl1 << " radians, which is "
        << argcl1 * 180 / pi << " degrees." << endl << endl;

   // Example of the second member function
   // type double subtracted from type complex<double>
   complex<double> cl2( 2.0 , 4.0 );
   double cr2 = 5.0;
   cout << "The left-side complex number is cl2 = " << cl2 << endl;
   cout << "The right-side complex number is cr2 = " << cr2 << endl;

   complex<double> cs2 = cl2 - cr2;
   cout << "The difference between the two complex numbers is:"
        << "\n cs2 = cl2 - cr2 = " << cs2 << endl;

   // This is equivalent to the following operation
   cl2  -= cr2;
   cout << "Complex number cr2 subtracted from complex number cl2 is:"
        << "\n cl2 -= cr2 = " << cl2 << endl;

   double abscl2 = abs( cl2 );
   double argcl2 = arg( cl2 );
   cout << "The modulus of cl2 is: " << abscl2 << endl;
   cout << "The argument of cl2 is: "<< argcl2 << " radians, which is "
        << argcl2 * 180 / pi << " degrees." << endl << endl;
}
```

```Output
The left-side complex number is cl1 = (3,4)
The right-side complex number is cr1 = (2,-1)
The difference between the two complex numbers is:
cs1 = cl1 - cr1 = (1,5)
Complex number cr1 subtracted from complex number cl1 is:
cl1 -= cr1 = (1,5)
The modulus of cl1 is: 5.09902
The argument of cl1 is: 1.3734 radians, which is 78.6901 degrees.

The left-side complex number is cl2 = (2,4)
The right-side complex number is cr2 = 5
The difference between the two complex numbers is:
cs2 = cl2 - cr2 = (-3,4)
Complex number cr2 subtracted from complex number cl2 is:
cl2 -= cr2 = (-3,4)
The modulus of cl2 is: 5
The argument of cl2 is: 2.2143 radians, which is 126.87 degrees.
```

## <a name="op_div_eq"></a>operatore/=

Divide un numero complesso di destinazione per un divisore che può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso.

```cpp
template <class Other>
complex<Type>& operator/=(const complex<Other>& complexNum);

complex<Type>& operator/=(const Type& _RealPart);

complex<Type>& operator/=(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

\ *complexNum*
Numero complesso da sottrarre dal numero complesso di destinazione.

*_RealPart*\
Numero reale da sottrarre dal numero complesso di destinazione.

### <a name="return-value"></a>Valore restituito

Numero complesso diviso per il numero specificato come parametro.

### <a name="remarks"></a>Osservazioni

L'operazione viene sottoposta a overload in modo da poter eseguire semplici operazioni aritmetiche senza convertire i dati in un formato particolare.

### <a name="example"></a>Esempio

```cpp
// complex_op_de.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Example of the first member function
   // type complex<double> divided by type complex<double>
   complex<double> cl1( polar (3.0 , pi / 6 ) );
   complex<double> cr1( polar (2.0 , pi / 3 ) );
   cout << "The left-side complex number is cl1 = " << cl1 << endl;
   cout << "The right-side complex number is cr1 = " << cr1 << endl;

   complex<double> cs1 = cl1 / cr1;
   cout << "The quotient of the two complex numbers is: cs1 = cl1 /cr1 = "
        << cs1 << endl;

   // This is equivalent to the following operation
   cl1 /= cr1;
   cout << "Quotient of two complex numbers is also: cl1 /= cr1 = "
        << cl1 << endl;

   double abscl1 = abs( cl1 );
   double argcl1 = arg( cl1 );
   cout << "The modulus of cl1 is: " << abscl1 << endl;
   cout << "The argument of cl1 is: "<< argcl1 << " radians, which is "
        << argcl1 * 180 / pi << " degrees." << endl << endl;

   // Example of the second member function
   // type complex<double> divided by type double
   complex<double> cl2( polar(3.0 , pi / 6 ) );
   double cr2 =5;
   cout << "The left-side complex number is cl2 = " << cl2 << endl;
   cout << "The right-side complex number is cr2 = " << cr2 << endl;

   complex<double> cs2 = cl2 / cr2;
   cout << "The quotient of the two complex numbers is: cs2 /= cl2 cr2 = "
        << cs2 << endl;

   // This is equivalent to the following operation
   cl2 /= cr2;
   cout << "Quotient of two complex numbers is also: cl2 = /cr2 = "
        << cl2 << endl;

   double abscl2 = abs( cl2 );
   double argcl2 = arg( cl2 );
   cout << "The modulus of cl2 is: " << abscl2 << endl;
   cout << "The argument of cl2 is: "<< argcl2 << " radians, which is "
        << argcl2 * 180 / pi << " degrees." << endl << endl;
}
```

```Output
The left-side complex number is cl1 = (2.59808,1.5)
The right-side complex number is cr1 = (1,1.73205)
The quotient of the two complex numbers is: cs1 = cl1 /cr1 = (1.29904,-0.75)
Quotient of two complex numbers is also: cl1 /= cr1 = (1.29904,-0.75)
The modulus of cl1 is: 1.5
The argument of cl1 is: -0.523599 radians, which is -30 degrees.

The left-side complex number is cl2 = (2.59808,1.5)
The right-side complex number is cr2 = 5
The quotient of the two complex numbers is: cs2 /= cl2 cr2 = (0.519615,0.3)
Quotient of two complex numbers is also: cl2 = /cr2 = (0.519615,0.3)
The modulus of cl2 is: 0.6
The argument of cl2 is: 0.523599 radians, which is 30 degrees.
```

## <a name="op_eq"></a>operatore =

Assegna un numero a un numero complesso di destinazione, in cui il numero assegnato può essere complesso o dello stesso tipo delle parti reale e immaginaria del numero complesso a cui viene assegnato.

```cpp
template <class Other>
complex<Type>& operator=(const complex<Other>& right);

complex<Type>& operator=(const Type& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Numero complesso o numero dello stesso tipo del parametro del numero complesso di destinazione.

### <a name="return-value"></a>Valore restituito

Numero complesso a cui è stato assegnato il numero specificato come parametro.

### <a name="remarks"></a>Osservazioni

L'operazione viene sottoposta a overload in modo da poter eseguire semplici operazioni aritmetiche senza convertire i dati in un formato particolare.

### <a name="example"></a>Esempio

```cpp
// complex_op_as.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Example of the first member function
   // type complex<double> assigned to type complex<double>
   complex<double> cl1( 3.0 , 4.0 );
   complex<double> cr1( 2.0 , -1.0 );
   cout << "The left-side complex number is cl1 = " << cl1 << endl;
   cout << "The right-side complex number is cr1 = " << cr1 << endl;

   cl1  = cr1;
   cout << "The complex number cr1 assigned to the complex number cl1 is:"
        << "\ncl1 = cr1 = " << cl1 << endl;

   // Example of the second member function
   // type double assigned to type complex<double>
   complex<double> cl2( -2 , 4 );
   double cr2 =5.0;
   cout << "The left-side complex number is cl2 = " << cl2 << endl;
   cout << "The right-side complex number is cr2 = " << cr2 << endl;

   cl2 = cr2;
   cout << "The complex number cr2 assigned to the complex number cl2 is:"
        << "\ncl2 = cr2 = " << cl2 << endl;

   cl2 = complex<double>(3.0, 4.0);
   cout << "The complex number (3, 4) assigned to the complex number cl2 is:"
        << "\ncl2 = " << cl2 << endl;
}
```

```Output
The left-side complex number is cl1 = (3,4)
The right-side complex number is cr1 = (2,-1)
The complex number cr1 assigned to the complex number cl1 is:
cl1 = cr1 = (2,-1)
The left-side complex number is cl2 = (-2,4)
The right-side complex number is cr2 = 5
The complex number cr2 assigned to the complex number cl2 is:
cl2 = cr2 = (5,0)
The complex number (3, 4) assigned to the complex number cl2 is:
cl2 = (3,4)
```

## <a name="real"></a>reale

Ottiene o imposta il componente reale di un numero complesso.

```cpp
constexpr T real() const;

T real(const T& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Numero complesso di cui estrarre il valore reale.

### <a name="return-value"></a>Valore restituito

Parte reale del numero complesso.

### <a name="remarks"></a>Osservazioni

Per un numero complesso *a + bi*, la parte o il componente reale è *re (a + BI) = a*.

### <a name="example"></a>Esempio

```cpp
// complex_class_real.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;

   complex<double> c1( 4.0 , 3.0 );
   cout << "The complex number c1 = " << c1 << endl;

   double dr1 = c1.real();
   cout << "The real part of c1 is c1.real() = "
        << dr1 << "." << endl;

   double di1 = c1.imag();
   cout << "The imaginary part of c1 is c1.imag() = "
        << di1 << "." << endl;
}
```

```Output
The complex number c1 = (4,3)
The real part of c1 is c1.real() = 4.
The imaginary part of c1 is c1.imag() = 3.
```

## <a name="value_type"></a>value_type

Tipo che rappresenta il tipo di dati usato per rappresentare le parti reale e immaginaria di un numero complesso.

```cpp
typedef Type value_type;
```

### <a name="remarks"></a>Osservazioni

`value_type` è un sinonimo del parametro di modello `Type` complesso di classe.

### <a name="example"></a>Esempio

```cpp
// complex_valuetype.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
    using namespace std;
    complex<double>::value_type a = 3, b = 4;

    complex<double> c1 ( a , b );
    cout << "Specifying initial real & imaginary parts"
        << "\nof type value_type: "
        << "c1 = " << c1 << "." << endl;
}
```

```Output
Specifying initial real & imaginary parts
of type value_type: c1 = (3,4).
```

## <a name="see-also"></a>Vedere anche

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Sicurezza dei thread nella libreria standard C++)
