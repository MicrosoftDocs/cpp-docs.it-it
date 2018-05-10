---
title: Funzioni &lt;complex&gt;| Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- xcomplex/std::abs
- xcomplex/std::acos
- xcomplex/std::acosh
- xcomplex/std::arg
- xcomplex/std::conj
- xcomplex/std::cos
- xcomplex/std::cosh
- xcomplex/std::exp
- xxcomplex/std::imag
- xcomplex/std::log
- xcomplex/std::log10
- xcomplex/std::norm
- xcomplex/std::polar
- xcomplex/std::pow
- xxcomplex/std::real
- xcomplex/std::sin
- xcomplex/std::sinh
- xcomplex/std::sqrt
- xcomplex/std::tan
- xcomplex/std::tanh
ms.assetid: 58b14e94-0e0c-493e-8237-8b4d685904a2
helpviewer_keywords:
- std::abs [C++]
- std::arg [C++]
- std::conj [C++]
- std::cos [C++]
- std::cosh [C++]
- std::exp [C++]
- std::imag [C++]
- std::log [C++]
- std::log10
- std::norm [C++]
- std::polar [C++]
- std::pow [C++]
- std::real [C++]
- std::sin [C++]
- std::sinh [C++]
- std::sqrt [C++]
- std::tan [C++]
- std::tanh [C++]
ms.openlocfilehash: 040104eeb43ccfe6225821b7318346bc1fe60f92
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="ltcomplexgt-functions"></a>Funzioni &lt;complex&gt;

||||
|-|-|-|
|[abs](#abs)|[arg](#arg)|[conj](#conj)|
|[cos](#cos)|[cosh](#cosh)|[exp](#exp)|
|[imag](#imag)|[log](#log)|[log10](#log10)|
|[norm](#norm)|[polar](#polar)|[pow](#pow)|
|[real](#real)|[sin](#sin)|[sinh](#sinh)|
|[sqrt](#sqrt)|[tan](#tan)|[tanh](#tanh)|

## <a name="abs"></a>  abs

Calcola il modulo di un numero complesso.

```cpp
template <class Type>
Type abs(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Il numero complesso il cui modulo devono essere determinati.

### <a name="return-value"></a>Valore restituito

Modulo di un numero complesso.

### <a name="remarks"></a>Note

Il *modulo* di un numero complesso è una misura della lunghezza del vettore che rappresenta il numero complesso. Il modulo di un numero complesso a + bi è sqrt (a<sup>2</sup> + b<sup>2</sup>), scritto &#124;a + bi&#124;. La *norma* di un numero complesso a + bi è (a<sup>2</sup> + b<sup>2</sup>), in modo che il modulo di un numero complesso sia la radice quadrata della sua norma.

### <a name="example"></a>Esempio

```cpp
// complex_abs.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Complex numbers can be entered in polar form with
   // modulus and argument parameter inputs but are
   // stored in Cartesian form as real & imag coordinates
   complex <double> c1 ( polar ( 5.0 ) );   // Default argument = 0
   complex <double> c2 ( polar ( 5.0 , pi / 6 ) );
   complex <double> c3 ( polar ( 5.0 , 13 * pi / 6 ) );
   cout << "c1 = polar ( 5.0 ) = " << c1 << endl;
   cout << "c2 = polar ( 5.0 , pi / 6 ) = " << c2 << endl;
   cout << "c3 = polar ( 5.0 , 13 * pi / 6 ) = " << c3 << endl;

   // The modulus and argument of a complex number can be recovered
   // using abs & arg member functions
   double absc1 = abs ( c1 );
   double argc1 = arg ( c1 );
   cout << "The modulus of c1 is recovered from c1 using: abs ( c1 ) = "
        << absc1 << endl;
   cout << "Argument of c1 is recovered from c1 using:\n arg ( c1 ) = "
        << argc1 << " radians, which is " << argc1 * 180 / pi
        << " degrees." << endl;

   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is recovered from c2 using: abs ( c2 ) = "
        << absc2 << endl;
   cout << "Argument of c2 is recovered from c2 using:\n arg ( c2 ) = "
        << argc2 << " radians, which is " << argc2 * 180 / pi
        << " degrees." << endl;

   // Testing if the principal angles of c2 and c3 are the same
   if ( (arg ( c2 ) <= ( arg ( c3 ) + .00000001) ) ||
        (arg ( c2 ) >= ( arg ( c3 ) - .00000001) ) )
      cout << "The complex numbers c2 & c3 have the "
           << "same principal arguments."<< endl;
   else
      cout << "The complex numbers c2 & c3 don't have the "
           << "same principal arguments." << endl;
}
```

```Output
c1 = polar ( 5.0 ) = (5,0)
c2 = polar ( 5.0 , pi / 6 ) = (4.33013,2.5)
c3 = polar ( 5.0 , 13 * pi / 6 ) = (4.33013,2.5)
The modulus of c1 is recovered from c1 using: abs ( c1 ) = 5
Argument of c1 is recovered from c1 using:
 arg ( c1 ) = 0 radians, which is 0 degrees.
The modulus of c2 is recovered from c2 using: abs ( c2 ) = 5
Argument of c2 is recovered from c2 using:
 arg ( c2 ) = 0.523599 radians, which is 30 degrees.
The complex numbers c2 & c3 have the same principal arguments.
```

## <a name="arg"></a>  arg

Estrae l'argomento da un numero complesso.

```cpp
template <class Type>
Type arg(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Il numero complesso il cui argomento devono essere determinati.

### <a name="return-value"></a>Valore restituito

Argomento del numero complesso.

### <a name="remarks"></a>Note

Il *argomento* è l'angolo di rotazione vettore complesso con l'asse reale positivo del piano complesso. Per un numero complesso *+ bi*, l'argomento è uguale a arctan (*b / a*). L'angolo ha un senso positivo se misurato in senso antiorario rispetto all'asse reale positivo, ha un senso negativo se misurato in senso orario. I valori dell'entità sono maggiori di - pi e minore di o uguali a + pi greco.

### <a name="example"></a>Esempio

```cpp
// complex_arg.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Complex numbers can be entered in polar form with
   // modulus and argument parameter inputs but are
   // stored in Cartesian form as real & imag coordinates
   complex <double> c1 ( polar ( 5.0 ) );   // Default argument = 0
   complex <double> c2 ( polar ( 5.0 , pi / 6 ) );
   complex <double> c3 ( polar ( 5.0 , 13 * pi / 6 ) );
   cout << "c1 = polar ( 5.0 ) = " << c1 << endl;
   cout << "c2 = polar ( 5.0 , pi / 6 ) = " << c2 << endl;
   cout << "c3 = polar ( 5.0 , 13 * pi / 6 ) = " << c3 << endl;

   // The modulus and argument of a complex number can be rcovered
   // using abs & arg member functions
   double absc1 = abs ( c1 );
   double argc1 = arg ( c1 );
   cout << "The modulus of c1 is recovered from c1 using: abs ( c1 ) = "
        << absc1 << endl;
   cout << "Argument of c1 is recovered from c1 using:\n arg ( c1 ) = "
        << argc1 << " radians, which is " << argc1 * 180 / pi
        << " degrees." << endl;

   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is recovered from c2 using: abs ( c2 ) = "
        << absc2 << endl;
   cout << "Argument of c2 is recovered from c2 using:\n arg ( c2 ) = "
        << argc2 << " radians, which is " << argc2 * 180 / pi
        << " degrees." << endl;

   // Testing if the principal angles of c2 and c3 are the same
   if ( (arg ( c2 ) <= ( arg ( c3 ) + .00000001) ) ||
        (arg ( c2 ) >= ( arg ( c3 ) - .00000001) ) )
      cout << "The complex numbers c2 & c3 have the "
           << "same principal arguments."<< endl;
   else
      cout << "The complex numbers c2 & c3 don't have the "
           << "same principal arguments." << endl;
}
```

```Output
c1 = polar ( 5.0 ) = (5,0)
c2 = polar ( 5.0 , pi / 6 ) = (4.33013,2.5)
c3 = polar ( 5.0 , 13 * pi / 6 ) = (4.33013,2.5)
The modulus of c1 is recovered from c1 using: abs ( c1 ) = 5
Argument of c1 is recovered from c1 using:
 arg ( c1 ) = 0 radians, which is 0 degrees.
The modulus of c2 is recovered from c2 using: abs ( c2 ) = 5
Argument of c2 is recovered from c2 using:
 arg ( c2 ) = 0.523599 radians, which is 30 degrees.
The complex numbers c2 & c3 have the same principal arguments.
```

## <a name="conj"></a>  conj

Restituisce il complesso coniugato di un numero complesso.

```cpp
template <class Type>
complex<Type> conj(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso le cui complesso coniugato viene restituito.

### <a name="return-value"></a>Valore restituito

Complesso coniugato di un numero complesso di input.

### <a name="remarks"></a>Note

Il complesso coniugato di un numero complesso *+ bi* è *-bi*. Il prodotto di un numero complesso e il relativo coniugato sono la norma del numero *a*2 + *b*2.

### <a name="example"></a>Esempio

```cpp
// complex_conj.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;

   complex <double> c1 ( 4.0 , 3.0 );
   cout << "The complex number c1 = " << c1 << endl;

   double dr1 = real ( c1 );
   cout << "The real part of c1 is real ( c1 ) = "
        << dr1 << "." << endl;

   double di1 = imag ( c1 );
   cout << "The imaginary part of c1 is imag ( c1 ) = "
        << di1 << "." << endl;

   complex <double> c2 = conj ( c1 );
   cout << "The complex conjugate of c1 is c2 = conj ( c1 )= "
        << c2 << endl;

   double dr2 = real ( c2 );
   cout << "The real part of c2 is real ( c2 ) = "
        << dr2 << "." << endl;

   double di2 = imag ( c2 );
   cout << "The imaginary part of c2 is imag ( c2 ) = "
        << di2 << "." << endl;

   // The real part of the product of a complex number
   // and its conjugate is the norm of the number
   complex <double> c3 = c1 * c2;
   cout << "The norm of (c1 * conj (c1) ) is c1 * c2 = "
        << real( c3 ) << endl;
}
```

```Output
The complex number c1 = (4,3)
The real part of c1 is real ( c1 ) = 4.
The imaginary part of c1 is imag ( c1 ) = 3.
The complex conjugate of c1 is c2 = conj ( c1 )= (4,-3)
The real part of c2 is real ( c2 ) = 4.
The imaginary part of c2 is imag ( c2 ) = -3.
The norm of (c1 * conj (c1) ) is c1 * c2 = 25
```

## <a name="cos"></a>  cos

Restituisce il coseno di un numero complesso.

```cpp
template <class Type>
complex<Type> cos(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso viene determinato il cui coseno.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde al coseno del numero complesso di input.

### <a name="remarks"></a>Note

Identità che definiscono coseni complessi:

cos ( *z*) = (1/2)\*( exp ( *iz*) + exp (- *iz*) )

cos ( *z*) = cos ( *a* + *bi*) = cos ( *a*) cosh ( *b*) - isin ( *a*) sinh ( *b*)

### <a name="example"></a>Esempio

```cpp
// complex_cos.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 3.0 , 4.0 );
   cout << "Complex number c1 = " << c1 << endl;

   // Values of cosine of a complex number c1
   complex <double> c2 = cos ( c1 );
   cout << "Complex number c2 = cos ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // Cosines of the standard angles in the first
   // two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( polar (1.0, pi / 6) );
   v1.push_back( cos ( vc1 ) );
   complex <double> vc2  ( polar (1.0, pi / 3) );
   v1.push_back( cos ( vc2 ) );
   complex <double> vc3  ( polar (1.0, pi / 2) );
   v1.push_back( cos ( vc3) );
   complex <double> vc4  ( polar (1.0, 2 * pi / 3) );
   v1.push_back( cos ( vc4 ) );
   complex <double> vc5  ( polar (1.0, 5 * pi / 6) );
   v1.push_back( cos ( vc5 ) );
   complex <double> vc6  ( polar (1.0,  pi ) );
   v1.push_back( cos ( vc6 ) );

   cout << "The complex components cos (vci), where abs (vci) = 1"
        << "\n& arg (vci) = i * pi / 6 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << endl;
}
```

```Output
Complex number c1 = (3,4)
Complex number c2 = cos ( c1 ) = (-27.0349,-3.85115)
The modulus of c2 is: 27.3079
The argument of c2 is: -3.00009 radians, which is -171.893 degrees.

The complex components cos (vci), where abs (vci) = 1
& arg (vci) = i * pi / 6 of the vector v1 are:
(0.730543,-0.39695)
(1.22777,-0.469075)
(1.54308,1.21529e-013)
(1.22777,0.469075)
(0.730543,0.39695)
(0.540302,-1.74036e-013)
```

## <a name="cosh"></a>  cosh

Restituisce il coseno iperbolico di un numero complesso.

```cpp
template <class Type>
complex<Type> cosh(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso viene determinato il cui coseno iperbolico.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde al coseno iperbolico del numero complesso di input.

### <a name="remarks"></a>Note

Identità che definiscono coseni iperbolici:

cos ( *z*) = (1/2)\*( exp ( *z*) + exp (- *z*) )

cos ( *z*) = cosh ( *a + bi*) = cosh ( *a*) cos ( *b*) + isinh ( *a*) sin ( *b*)

### <a name="example"></a>Esempio

```cpp
// complex_cosh.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 3.0 , 4.0 );
   cout << "Complex number c1 = " << c1 << endl;

   // Values of cosine of a complex number c1
   complex <double> c2 = cosh ( c1 );
   cout << "Complex number c2 = cosh ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // Hyperbolic cosines of the standard angles
   // in the first two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( polar (1.0, pi / 6) );
   v1.push_back( cosh ( vc1 ) );
   complex <double> vc2  ( polar (1.0, pi / 3) );
   v1.push_back( cosh ( vc2 ) );
   complex <double> vc3  ( polar (1.0, pi / 2) );
   v1.push_back( cosh ( vc3) );
   complex <double> vc4  ( polar (1.0, 2 * pi / 3) );
   v1.push_back( cosh ( vc4 ) );
   complex <double> vc5  ( polar (1.0, 5 * pi / 6) );
   v1.push_back( cosh ( vc5 ) );
   complex <double> vc6  ( polar (1.0,  pi ) );
   v1.push_back( cosh ( vc6 ) );

   cout << "The complex components cosh (vci), where abs (vci) = 1"
        << "\n& arg (vci) = i * pi / 6 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << endl;
}
```

```Output
Complex number c1 = (3,4)
Complex number c2 = cosh ( c1 ) = (-6.58066,-7.58155)
The modulus of c2 is: 10.0392
The argument of c2 is: -2.28564 radians, which is -130.957 degrees.

The complex components cosh (vci), where abs (vci) = 1
& arg (vci) = i * pi / 6 of the vector v1 are:
(1.22777,0.469075)
(0.730543,0.39695)
(0.540302,-8.70178e-014)
(0.730543,-0.39695)
(1.22777,-0.469075)
(1.54308,2.43059e-013)
```

## <a name="exp"></a>  exp

Restituisce la funzione esponenziale di un numero complesso.

```cpp
template <class Type>
complex<Type> exp(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso il cui viene determinato esponenziale.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde all'esponenziale del numero complesso di input.

### <a name="example"></a>Esempio

```cpp
// complex_exp.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main() {
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 1 , pi/6 );
   cout << "Complex number c1 = " << c1 << endl;

   // Value of exponential of a complex number c1:
   // note the argument of c2 is determined by the
   // imaginary part of c1 & the modulus by the real part
   complex <double> c2 = exp ( c1 );
   cout << "Complex number c2 = exp ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // Exponentials of the standard angles
   // in the first two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( 0.0 , -pi );
   v1.push_back( exp ( vc1 ) );
   complex <double> vc2  ( 0.0, -2 * pi / 3 );
   v1.push_back( exp ( vc2 ) );
   complex <double> vc3  ( 0.0, 0.0 );
   v1.push_back( exp ( vc3 ) );
   complex <double> vc4  ( 0.0, pi / 3 );
   v1.push_back( exp ( vc4 ) );
   complex <double> vc5  ( 0.0 , 2 * pi / 3 );
   v1.push_back( exp ( vc5 ) );
   complex <double> vc6  ( 0.0, pi );
   v1.push_back( exp ( vc6 ) );

   cout << "The complex components exp (vci), where abs (vci) = 1"
        << "\n& arg (vci) = i * pi / 3 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )
      cout <<  ( * Iter1 ) << "\n     with argument = "
           << ( 180/pi ) * arg ( *Iter1 )
           << " degrees\n     modulus = "
           << abs ( * Iter1 ) << endl;
}
```

## <a name="imag"></a>  imag

Estrae il componente immaginario di un numero complesso.

```cpp
template <class Type>
Type imag(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Il numero complesso di cui parte reale da estrarre.

### <a name="return-value"></a>Valore restituito

Parte immaginaria del numero complesso come funzione globale.

### <a name="remarks"></a>Note

Non è possibile usare questa funzione di modello per modificare la parte reale del numero complesso. Per modificare la parte reale, è necessario assegnare il valore del componente a un nuovo numero complesso.

### <a name="example"></a>Esempio

```cpp
// complexc_imag.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   complex <double> c1 ( 4.0 , 3.0 );
   cout << "The complex number c1 = " << c1 << endl;

   double dr1 = real ( c1 );
   cout << "The real part of c1 is real ( c1 ) = "
        << dr1 << "." << endl;

   double di1 = imag ( c1 );
   cout << "The imaginary part of c1 is imag ( c1 ) = "
        << di1 << "." << endl;
}
```

```Output
The complex number c1 = (4,3)
The real part of c1 is real ( c1 ) = 4.
The imaginary part of c1 is imag ( c1 ) = 3.
```

## <a name="log"></a>  log

Restituisce il logaritmo naturale di un numero complesso.

```cpp
template <class Type>
complex<Type> log(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso le cui calcolare il logaritmo naturale viene determinato.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde al logaritmo naturale del numero complesso di input.

### <a name="remarks"></a>Note

I raggi si trovano lungo l'asso reale negativo.

### <a name="example"></a>Esempio

```cpp
// complex_log.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main() {
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 3.0 , 4.0 );
   cout << "Complex number c1 = " << c1 << endl;

   // Values of log of a complex number c1
   complex <double> c2 = log ( c1 );
   cout << "Complex number c2 = log ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // log of the standard angles
   // in the first two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( polar (1.0, pi / 6) );
   v1.push_back( log ( vc1 ) );
   complex <double> vc2  ( polar (1.0, pi / 3) );
   v1.push_back( log ( vc2 ) );
   complex <double> vc3  ( polar (1.0, pi / 2) );
   v1.push_back( log ( vc3) );
   complex <double> vc4  ( polar (1.0, 2 * pi / 3) );
   v1.push_back( log ( vc4 ) );
   complex <double> vc5  ( polar (1.0, 5 * pi / 6) );
   v1.push_back( log ( vc5 ) );
   complex <double> vc6  ( polar (1.0,  pi ) );
   v1.push_back( log ( vc6 ) );

   cout << "The complex components log (vci), where abs (vci) = 1 "
        << "\n& arg (vci) = i * pi / 6 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )
      cout << *Iter1 << " " << endl;
}
```

## <a name="log10"></a>  log10

Restituisce il logaritmo in base 10 di un numero complesso.

```cpp
template <class Type>
complex<Type> log10(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso le cui logaritmo in base 10 viene determinato.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde al logaritmo in base 10 del numero complesso di input.

### <a name="remarks"></a>Note

I raggi si trovano lungo l'asso reale negativo.

### <a name="example"></a>Esempio

```cpp
// complex_log10.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main() {
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 3.0 , 4.0 );
   cout << "Complex number c1 = " << c1 << endl;

   // Values of log10 of a complex number c1
   complex <double> c2 = log10 ( c1 );
   cout << "Complex number c2 = log10 ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // log10 of the standard angles
   // in the first two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( polar (1.0, pi / 6) );
   v1.push_back( log10 ( vc1 ) );
   complex <double> vc2  ( polar (1.0, pi / 3) );
   v1.push_back( log10 ( vc2 ) );
   complex <double> vc3  ( polar (1.0, pi / 2) );
   v1.push_back( log10 ( vc3) );
   complex <double> vc4  ( polar (1.0, 2 * pi / 3) );
   v1.push_back( log10 ( vc4 ) );
   complex <double> vc5  ( polar (1.0, 5 * pi / 6) );
   v1.push_back( log10 ( vc5 ) );
   complex <double> vc6  ( polar (1.0,  pi ) );
   v1.push_back( log10 ( vc6 ) );

   cout << "The complex components log10 (vci), where abs (vci) = 1"
        << "\n& arg (vci) = i * pi / 6 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << endl;
}
```

## <a name="norm"></a>  norm

Estrae la norma di un numero complesso.

```cpp
template <class Type>
Type norm(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Il numero complesso di cui norm devono essere determinati.

### <a name="return-value"></a>Valore restituito

Norma di un numero complesso.

### <a name="remarks"></a>Note

La norma di un numero complesso *a + bi* è *(a*<sup>2</sup> *+ b*<sup>2</sup>*).* La norma di un numero complesso è il quadrato del suo modulo. Il modulo di un numero complesso è una misura della lunghezza del vettore che rappresenta il numero complesso. Il modulo di un numero complesso *a + bi* è `sqrt`*(a*<sup>2</sup> *+ b*<sup>2</sup>*),* scritto *&#124;a + bi&#124;.*

### <a name="example"></a>Esempio

```cpp
// complex_norm.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Complex numbers can be entered in polar form with
   // modulus and argument parameter inputs but are
   // stored in Cartesian form as real & imag coordinates
   complex <double> c1 ( polar ( 5.0 ) );   // Default argument = 0
   complex <double> c2 ( polar ( 5.0 , pi / 6 ) );
   complex <double> c3 ( polar ( 5.0 , 13 * pi / 6 ) );
   cout << "c1 = polar ( 5.0 ) = " << c1 << endl;
   cout << "c2 = polar ( 5.0 , pi / 6 ) = " << c2 << endl;
   cout << "c3 = polar ( 5.0 , 13 * pi / 6 ) = " << c3 << endl;

   if ( (arg ( c2 ) <= ( arg ( c3 ) + .00000001) ) ||
        (arg ( c2 ) >= ( arg ( c3 ) - .00000001) ) )
      cout << "The complex numbers c2 & c3 have the "
           << "same principal arguments."<< endl;
   else
      cout << "The complex numbers c2 & c3 don't have the "
           << "same principal arguments." << endl;

   // The modulus and argument of a complex number can be recovered
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is recovered from c2 using: abs ( c2 ) = "
        << absc2 << endl;
   cout << "Argument of c2 is recovered from c2 using:\n arg ( c2 ) = "
        << argc2 << " radians, which is " << argc2 * 180 / pi
        << " degrees." << endl;

   // The norm of a complex number is the square of its modulus
   double normc2 = norm ( c2 );
   double sqrtnormc2 = sqrt ( normc2 );
   cout << "The norm of c2 given by: norm ( c2 ) = " << normc2 << endl;
   cout << "The modulus of c2 is the square root of the norm: "
        << "sqrt ( normc2 ) = " << sqrtnormc2 << ".";
}
```

```Output
c1 = polar ( 5.0 ) = (5,0)
c2 = polar ( 5.0 , pi / 6 ) = (4.33013,2.5)
c3 = polar ( 5.0 , 13 * pi / 6 ) = (4.33013,2.5)
The complex numbers c2 & c3 have the same principal arguments.
The modulus of c2 is recovered from c2 using: abs ( c2 ) = 5
Argument of c2 is recovered from c2 using:
 arg ( c2 ) = 0.523599 radians, which is 30 degrees.
The norm of c2 given by: norm ( c2 ) = 25
The modulus of c2 is the square root of the norm: sqrt ( normc2 ) = 5.
```

## <a name="polar"></a>  polar

Restituisce il numero complesso, che corrisponde a un modulo e un argomento specificati, in formato cartesiano.

```cpp
template <class Type>
complex<Type> polar(const Type& _Modulus, const Type& _Argument = 0);
```

### <a name="parameters"></a>Parametri

*_Modulus* il modulo del numero complesso in fase di input.

*_Argument* l'argomento del numero complesso in fase di input.

### <a name="return-value"></a>Valore restituito

Formato cartesiano del numero complesso specificato in formato polare.

### <a name="remarks"></a>Note

Il form polare di un numero complesso fornisce il modulo *r* e l'argomento *p*, in cui questi parametri sono correlati ai componenti cartesiani reali e immaginari *un* e *b* da equazioni *un* = r \* cos *p* e *b* = *r* \* sin *p*.

### <a name="example"></a>Esempio

```cpp
// complex_polar.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Complex numbers can be entered in polar form with
   // modulus and argument parameter inputs but are
   // stored in Cartesian form as real & imag coordinates
   complex <double> c1 ( polar ( 5.0 ) );   // Default argument = 0
   complex <double> c2 ( polar ( 5.0 , pi / 6 ) );
   complex <double> c3 ( polar ( 5.0 , 13 * pi / 6 ) );
   cout << "c1 = polar ( 5.0 ) = " << c1 << endl;
   cout << "c2 = polar ( 5.0 , pi / 6 ) = " << c2 << endl;
   cout << "c3 = polar ( 5.0 , 13 * pi / 6 ) = " << c3 << endl;

   if ( (arg ( c2 ) <= ( arg ( c3 ) + .00000001) ) ||
        (arg ( c2 ) >= ( arg ( c3 ) - .00000001) ) )
      cout << "The complex numbers c2 & c3 have the "
           << "same principal arguments."<< endl;
   else
      cout << "The complex numbers c2 & c3 don't have the "
           << "same principal arguments." << endl;

   // the modulus and argument of a complex number can be rcovered
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is recovered from c2 using: abs ( c2 ) = "
        << absc2 << endl;
   cout << "Argument of c2 is recovered from c2 using:\n arg ( c2 ) = "
        << argc2 << " radians, which is " << argc2 * 180 / pi
        << " degrees." << endl;
}
```

```Output
c1 = polar ( 5.0 ) = (5,0)
c2 = polar ( 5.0 , pi / 6 ) = (4.33013,2.5)
c3 = polar ( 5.0 , 13 * pi / 6 ) = (4.33013,2.5)
The complex numbers c2 & c3 have the same principal arguments.
The modulus of c2 is recovered from c2 using: abs ( c2 ) = 5
Argument of c2 is recovered from c2 using:
 arg ( c2 ) = 0.523599 radians, which is 30 degrees.
```

## <a name="pow"></a>  pow

Valuta il numero complesso ottenuto mediante l'elevamento di una base corrispondente a un numero complesso alla potenza di un altro numero complesso.

```cpp
template <class Type>
complex<Type> pow(const complex<Type>& _Base, int _Power);

template <class Type>
complex<Type> pow(const complex<Type>& _Base, const Type& _Power);

template <class Type>
complex<Type> pow(const complex<Type>& _Base, const complex<Type>& _Power);

template <class Type>
complex<Type> pow(const Type& _Base, const complex<Type>& _Power);
```

### <a name="parameters"></a>Parametri

`_Base` Il numero che è del tipo di parametro per il numero complesso che costituisce la base da elevare a potenza dalla funzione membro o un numero complesso.

*Risparmio energia* l'integer o un numero complesso o un numero che è del tipo di parametro per il numero complesso che è la potenza di base da elevare a dalla funzione membro.

### <a name="return-value"></a>Valore restituito

Numero complesso ottenuto elevando a una certa potenza la base specificata.

### <a name="remarks"></a>Note

Ogni funzione converte in modo efficiente i due operandi nel tipo restituito, restituendo **left** convertito elevato a **right**.

Il raggio si trova lungo l'asso reale negativo.

### <a name="example"></a>Esempio

```cpp
// complex_pow.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // First member function
   // type complex<double> base & type integer power
   complex <double> cb1 ( 3 , 4);
   int cp1 = 2;
   complex <double> ce1 = pow ( cb1 ,cp1 );

   cout << "Complex number for base cb1 = " << cb1 << endl;
   cout << "Integer for power = " << cp1 << endl;
   cout << "Complex number returned from complex base and integer power:"
        << "\n ce1 = cb1 ^ cp1 = " << ce1 << endl;
   double absce1 = abs ( ce1 );
   double argce1 = arg ( ce1 );
   cout << "The modulus of ce1 is: " << absce1 << endl;
   cout << "The argument of ce1 is: "<< argce1 << " radians, which is "
        << argce1 * 180 / pi << " degrees." << endl << endl;

   // Second member function
   // type complex<double> base & type double power
   complex <double> cb2 ( 3 , 4 );
   double cp2 = pi;
   complex <double> ce2 = pow ( cb2 ,cp2 );

   cout << "Complex number for base cb2 = " << cb2 << endl;
   cout << "Type double for power cp2 = pi = " << cp2 << endl;
   cout << "Complex number returned from complex base and double power:"
        << "\n ce2 = cb2 ^ cp2 = " << ce2 << endl;
   double absce2 = abs ( ce2 );
   double argce2 = arg ( ce2 );
   cout << "The modulus of ce2 is: " << absce2 << endl;
   cout << "The argument of ce2 is: "<< argce2 << " radians, which is "
        << argce2 * 180 / pi << " degrees." << endl << endl;

   // Third member function
   // type complex<double> base & type complex<double> power
   complex <double> cb3 ( 3 , 4 );
   complex <double> cp3 ( -2 , 1 );
   complex <double> ce3 = pow ( cb3 ,cp3 );

   cout << "Complex number for base cb3 = " << cb3 << endl;
   cout << "Complex number for power cp3= " << cp3 << endl;
   cout << "Complex number returned from complex base and complex power:"
        << "\n ce3 = cb3 ^ cp3 = " << ce3 << endl;
   double absce3 = abs ( ce3 );
   double argce3 = arg ( ce3 );
   cout << "The modulus of ce3 is: " << absce3 << endl;
   cout << "The argument of ce3 is: "<< argce3 << " radians, which is "
        << argce3 * 180 / pi << " degrees." << endl << endl;

   // Fourth member function
   // type double base & type complex<double> power
   double cb4 = pi;
   complex <double> cp4 ( 2 , -1 );
   complex <double> ce4 = pow ( cb4 ,cp4 );

   cout << "Type double for base cb4 = pi = " << cb4 << endl;
   cout << "Complex number for power cp4 = " << cp4 << endl;
   cout << "Complex number returned from double base and complex power:"
        << "\n ce4 = cb4 ^ cp4 = " << ce4 << endl;
   double absce4 = abs ( ce4 );
   double argce4 = arg ( ce4 );
   cout << "The modulus of ce4 is: " << absce4 << endl;
   cout << "The argument of ce4 is: "<< argce4 << " radians, which is "
        << argce4 * 180 / pi << " degrees." << endl << endl;
}
```

```Output
Complex number for base cb1 = (3,4)
Integer for power = 2
Complex number returned from complex base and integer power:
 ce1 = cb1 ^ cp1 = (-7,24)
The modulus of ce1 is: 25
The argument of ce1 is: 1.85459 radians, which is 106.26 degrees.

Complex number for base cb2 = (3,4)
Type double for power cp2 = pi = 3.14159
Complex number returned from complex base and double power:
 ce2 = cb2 ^ cp2 = (-152.915,35.5475)
The modulus of ce2 is: 156.993
The argument of ce2 is: 2.91318 radians, which is 166.913 degrees.

Complex number for base cb3 = (3,4)
Complex number for power cp3= (-2,1)
Complex number returned from complex base and complex power:
 ce3 = cb3 ^ cp3 = (0.0153517,-0.00384077)
The modulus of ce3 is: 0.0158249
The argument of ce3 is: -0.245153 radians, which is -14.0462 degrees.

Type double for base cb4 = pi = 3.14159
Complex number for power cp4 = (2,-1)
Complex number returned from double base and complex power:
 ce4 = cb4 ^ cp4 = (4.07903,-8.98725)
The modulus of ce4 is: 9.8696
The argument of ce4 is: -1.14473 radians, which is -65.5882 degrees.
```

## <a name="real"></a>  real

Estrae il componente reale di un numero complesso.

```cpp
template <class Type>
Type real(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Il numero complesso di cui parte reale da estrarre.

### <a name="return-value"></a>Valore restituito

Parte reale del numero complesso come funzione globale.

### <a name="remarks"></a>Note

Non è possibile usare questa funzione di modello per modificare la parte reale del numero complesso. Per modificare la parte reale, è necessario assegnare il valore del componente a un nuovo numero complesso.

### <a name="example"></a>Esempio

```cpp
// complex_real.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   complex <double> c1 ( 4.0 , 3.0 );
   cout << "The complex number c1 = " << c1 << endl;

   double dr1 = real ( c1 );
   cout << "The real part of c1 is real ( c1 ) = "
        << dr1 << "." << endl;

   double di1 = imag ( c1 );
   cout << "The imaginary part of c1 is imag ( c1 ) = "
        << di1 << "." << endl;
}
```

```Output
The complex number c1 = (4,3)
The real part of c1 is real ( c1 ) = 4.
The imaginary part of c1 is imag ( c1 ) = 3.
```

## <a name="sin"></a>  sin

Restituisce il seno di un numero complesso.

```cpp
template <class Type>
complex<Type> sin(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso viene determinato il cui seno.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde al seno del numero complesso di input.

### <a name="remarks"></a>Note

Identità che definiscono seni complessi:

sin ( *z*) = (1/2 *i*)\*( exp ( *iz*) - exp (- *iz*) )

sin ( *z*) = sin ( *a + bi*) = sin ( *a*) cosh ( *b*) + icos ( *a*) sinh ( *b*)

### <a name="example"></a>Esempio

```cpp
// complex_sin.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 3.0 , 4.0 );
   cout << "Complex number c1 = " << c1 << endl;

   // Values of sine of a complex number c1
   complex <double> c2 = sin ( c1 );
   cout << "Complex number c2 = sin ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // sines of the standard angles in the first
   // two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( polar ( 1.0, pi / 6 ) );
   v1.push_back( sin ( vc1 ) );
   complex <double> vc2  ( polar ( 1.0, pi / 3 ) );
   v1.push_back( sin ( vc2 ) );
   complex <double> vc3  ( polar ( 1.0, pi / 2 ) );
   v1.push_back( sin ( vc3 ) );
   complex <double> vc4  ( polar ( 1.0, 2 * pi / 3 ) );
   v1.push_back( sin ( vc4 ) );
   complex <double> vc5  ( polar ( 1.0, 5 * pi / 6 ) );
   v1.push_back( sin ( vc5 ) );
   complex <double> vc6  ( polar ( 1.0, pi ) );
   v1.push_back( sin ( vc6 ) );

   cout << "The complex components sin (vci), where abs (vci) = 1"
        << "\n& arg (vci) = i * pi / 6 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << endl;
}
```

```Output
Complex number c1 = (3,4)
Complex number c2 = sin ( c1 ) = (3.85374,-27.0168)
The modulus of c2 is: 27.2903
The argument of c2 is: -1.42911 radians, which is -81.882 degrees.

The complex components sin (vci), where abs (vci) = 1
& arg (vci) = i * pi / 6 of the vector v1 are:
(0.85898,0.337596)
(0.670731,0.858637)
(-1.59572e-013,1.1752)
(-0.670731,0.858637)
(-0.85898,0.337596)
(-0.841471,-1.11747e-013)
```

## <a name="sinh"></a>  sinh

Restituisce il seno iperbolico di un numero complesso.

```cpp
template <class Type>
complex<Type> sinh(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso viene determinato il cui seno iperbolico.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde al seno iperbolico del numero complesso di input.

### <a name="remarks"></a>Note

Identità che definiscono seni iperbolici:

sinh ( *z*) (1/2) =\*(exp ( *z*)-exp (- *z*))

sinh ( *z*) = sinh ( *a + bi*) = sinh ( *a*) cos ( *b*) + *i*cosh ( *a*) sin ( *b*)

### <a name="example"></a>Esempio

```cpp
// complex_sinh.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 3.0 , 4.0 );
   cout << "Complex number c1 = " << c1 << endl;

   // Values of sine of a complex number c1
   complex <double> c2 = sinh ( c1 );
   cout << "Complex number c2 = sinh ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // Hyperbolic sines of the standard angles in
   // the first two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( polar ( 1.0, pi / 6 ) );
   v1.push_back( sinh ( vc1 ) );
   complex <double> vc2  ( polar ( 1.0, pi / 3 ) );
   v1.push_back( sinh ( vc2 ) );
   complex <double> vc3  ( polar ( 1.0, pi / 2 ) );
   v1.push_back( sinh ( vc3) );
   complex <double> vc4  ( polar ( 1.0, 2 * pi / 3 ) );
   v1.push_back( sinh ( vc4 ) );
   complex <double> vc5  ( polar ( 1.0, 5 * pi / 6 ) );
   v1.push_back( sinh ( vc5 ) );
   complex <double> vc6  ( polar ( 1.0, pi ) );
   v1.push_back( sinh ( vc6 ) );

   cout << "The complex components sinh (vci), where abs (vci) = 1"
        << "\n& arg (vci) = i * pi / 6 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << endl;
}
```

```Output
Complex number c1 = (3,4)
Complex number c2 = sinh ( c1 ) = (-6.54812,-7.61923)
The modulus of c2 is: 10.0464
The argument of c2 is: -2.28073 radians, which is -130.676 degrees.

The complex components sinh (vci), where abs (vci) = 1
& arg (vci) = i * pi / 6 of the vector v1 are:
(0.858637,0.670731)
(0.337596,0.85898)
(-5.58735e-014,0.841471)
(-0.337596,0.85898)
(-0.858637,0.670731)
(-1.1752,-3.19145e-013)
```

## <a name="sqrt"></a>  sqrt

Calcola la radice quadrata di un numero complesso.

```cpp
template <class Type>
complex<Type> sqrt(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Il numero complesso di cui calcolare la radice quadrata da trovare.

### <a name="return-value"></a>Valore restituito

Radice quadrata di un numero complesso.

### <a name="remarks"></a>Note

La radice quadrata avrà un angolo di fase nell'intervallo semiaperto (-pi/2, pi/2].

I raggi nel piano complesso si trovano lungo l'asse reale negativo.

La radice quadrata di un numero complesso avrà un modulo che è la radice quadrata del numero di input e un argomento che è la metà del numero di input.

### <a name="example"></a>Esempio

```cpp
// complex_sqrt.cpp
// compile with: /EHsc
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;

   // Complex numbers can be entered in polar form with
   // modulus and argument parameter inputs but are
   // stored in Cartesian form as real & imag coordinates
   complex <double> c1 ( polar ( 25.0 , pi / 2 ) );
   complex <double> c2 = sqrt ( c1 );
   cout << "c1 = polar ( 5.0 ) = " << c1 << endl;
   cout << "c2 = sqrt ( c1 ) = " << c2 << endl;

   // The modulus and argument of a complex number can be recovered
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is recovered from c2 using: abs ( c2 ) = "
        << absc2 << endl;
   cout << "Argument of c2 is recovered from c2 using:\n arg ( c2 ) = "
        << argc2 << " radians, which is " << argc2 * 180 / pi
        << " degrees." << endl;

   // The modulus and argument of c2 can be directly calculated
   absc2 = sqrt( abs ( c1 ) );
   argc2 = 0.5 * arg ( c1 );
   cout << "The modulus of c2 = sqrt( abs ( c1 ) ) =" << absc2 << endl;
   cout << "The argument of c2 = ( 1 / 2 ) * arg ( c1 ) ="
        << argc2 << " radians,\n which is " << argc2 * 180 / pi
        << " degrees." << endl;
}
```

```Output
c1 = polar ( 5.0 ) = (-2.58529e-012,25)
c2 = sqrt ( c1 ) = (3.53553,3.53553)
The modulus of c2 is recovered from c2 using: abs ( c2 ) = 5
Argument of c2 is recovered from c2 using:
 arg ( c2 ) = 0.785398 radians, which is 45 degrees.
The modulus of c2 = sqrt( abs ( c1 ) ) =5
The argument of c2 = ( 1 / 2 ) * arg ( c1 ) =0.785398 radians,
 which is 45 degrees.
```

## <a name="tan"></a> tan

Restituisce la tangente di un numero complesso.

```cpp
template <class Type>
complex<Type> tan(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso le cui tangente viene determinato.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde alla tangente del numero complesso di input.

### <a name="remarks"></a>Note

Identità che definiscono la cotangente complessa:

tan ( *z*) = sin ( *z*) / cos ( *z*) = (exp ( *iz*)-exp (- *iz*)) / *i*(exp ( *iz*) + exp (- *iz*))

### <a name="example"></a>Esempio

```cpp
// complex_tan.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 3.0 , 4.0 );
   cout << "Complex number c1 = " << c1 << endl;

   // Values of cosine of a complex number c1
   complex <double> c2 = tan ( c1 );
   cout << "Complex number c2 = tan ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // Hyperbolic tangent of the standard angles
   // in the first two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( polar ( 1.0, pi / 6 ) );
   v1.push_back( tan ( vc1 ) );
   complex <double> vc2  ( polar ( 1.0, pi / 3 ) );
   v1.push_back( tan ( vc2 ) );
   complex <double> vc3  ( polar ( 1.0, pi / 2 ) );
   v1.push_back( tan ( vc3) );
   complex <double> vc4  ( polar ( 1.0, 2 * pi / 3 ) );
   v1.push_back( tan ( vc4 ) );
   complex <double> vc5  ( polar ( 1.0, 5 * pi / 6 ) );
   v1.push_back( tan ( vc5 ) );
   complex <double> vc6  ( polar ( 1.0,  pi ) );
   v1.push_back( tan ( vc6 ) );

   cout << "The complex components tan (vci), where abs (vci) = 1"
        << "\n& arg (vci) = i * pi / 6 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )
      cout << *Iter1 << endl;
}
```

```Output
Complex number c1 = (3,4)
Complex number c2 = tan ( c1 ) = (-0.000187346,0.999356)
The modulus of c2 is: 0.999356
The argument of c2 is: 1.57098 radians, which is 90.0107 degrees.

The complex components tan (vci), where abs (vci) = 1
& arg (vci) = i * pi / 6 of the vector v1 are:
(0.713931,0.85004)
(0.24356,0.792403)
(-4.34302e-014,0.761594)
(-0.24356,0.792403)
(-0.713931,0.85004)
(-1.55741,-7.08476e-013)
```

## <a name="tanh"></a>  tanh

Restituisce la tangente iperbolica di un numero complesso.

```cpp
template <class Type>
complex<Type> tanh(const complex<Type>& complexNum);
```

### <a name="parameters"></a>Parametri

`complexNum` Numero complesso le cui tangente iperbolica viene determinato.

### <a name="return-value"></a>Valore restituito

Numero complesso che corrisponde alla tangente iperbolica del numero complesso di input.

### <a name="remarks"></a>Note

Identità che definiscono la cotangente iperbolica:

Tanh ( *z*) = sinh ( *z*) / cosh ( *z*) = (exp ( *z*)-exp (- *z*)) / (exp ( *z*) exp + (- *z*))

### <a name="example"></a>Esempio

```cpp
// complex_tanh.cpp
// compile with: /EHsc
#include <vector>
#include <complex>
#include <iostream>

int main( )
{
   using namespace std;
   double pi = 3.14159265359;
   complex <double> c1 ( 3.0 , 4.0 );
   cout << "Complex number c1 = " << c1 << endl;

   // Values of cosine of a complex number c1
   complex <double> c2 = tanh ( c1 );
   cout << "Complex number c2 = tanh ( c1 ) = " << c2 << endl;
   double absc2 = abs ( c2 );
   double argc2 = arg ( c2 );
   cout << "The modulus of c2 is: " << absc2 << endl;
   cout << "The argument of c2 is: "<< argc2 << " radians, which is "
        << argc2 * 180 / pi << " degrees." << endl << endl;

   // Hyperbolic tangents of the standard angles
   // in the first two quadrants of the complex plane
   vector <complex <double> > v1;
   vector <complex <double> >::iterator Iter1;
   complex <double> vc1  ( polar ( 1.0, pi / 6 ) );
   v1.push_back( tanh ( vc1 ) );
   complex <double> vc2  ( polar ( 1.0, pi / 3 ) );
   v1.push_back( tanh ( vc2 ) );
   complex <double> vc3  ( polar ( 1.0, pi / 2 ) );
   v1.push_back( tanh ( vc3 ) );
   complex <double> vc4  ( polar ( 1.0, 2 * pi / 3 ) );
   v1.push_back( tanh ( vc4 ) );
   complex <double> vc5  ( polar ( 1.0, 5 * pi / 6 ) );
   v1.push_back( tanh ( vc5 ) );
   complex <double> vc6  ( polar ( 1.0, pi ) );
   v1.push_back( tanh ( vc6 ) );

   cout << "The complex components tanh (vci), where abs (vci) = 1"
        << "\n& arg (vci) = i * pi / 6 of the vector v1 are:\n" ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << endl;
}
```

```Output
Complex number c1 = (3,4)
Complex number c2 = tanh ( c1 ) = (1.00071,0.00490826)
The modulus of c2 is: 1.00072
The argument of c2 is: 0.00490474 radians, which is 0.281021 degrees.

The complex components tanh (vci), where abs (vci) = 1
& arg (vci) = i * pi / 6 of the vector v1 are:
(0.792403,0.24356)
(0.85004,0.713931)
(-3.54238e-013,1.55741)
(-0.85004,0.713931)
(-0.792403,0.24356)
(-0.761594,-8.68604e-014)
```

## <a name="see-also"></a>Vedere anche

[\<complex>](../standard-library/complex.md)<br/>
