---
title: complex&lt;long double&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std::complex<long double>
- complex<long double>
- std.complex<long double>
dev_langs:
- C++
helpviewer_keywords:
- complex<long double> function
ms.assetid: 37591991-b385-46e9-b727-d534dbc10432
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 75e4e8bc79cb972c19e200a4d8fc1340535cd297
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="complexltlong-doublegt"></a>complex&lt;long double&gt;
Descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo `long double`, di cui il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <>
class complex<long double> {
public:
    constexpr complex(
    long double _RealVal = 0,
    long double _ImagVal = 0);

complex(
    constexpr complex<long double>& complexNum);
// rest same as template class complex
};
```  
  
#### <a name="parameters"></a>Parametri  
 `_RealVal`  
 Valore di tipo **long double** per la parte reale del numero complesso da costruire.  
  
 `_ImagVal`  
 Valore di tipo `long double` per la parte immaginaria del numero complesso che viene costruito.  
  
 `complexNum`  
 Numero complesso di tipo **double** o di tipo **float** le cui parti reale e immaginaria vengono usate per inizializzare un numero complesso di tipo `long double` da costruire.  
  
## <a name="return-value"></a>Valore restituito  
 Numero complesso di tipo `long double`.  
  
## <a name="remarks"></a>Note  
 La specializzazione esplicita della classe modello complex in una classe complex di tipo `long double` si differenzia dalla classe modello solo per i costruttori definiti. La conversione da `long double` a **float** può essere implicita, ma la conversione da **double** a `long double` deve essere **esplicita**. L'uso di una conversione **esplicita** esclude l'inizializzazione con conversione del tipo tramite la sintassi di assegnazione.  
  
 Per altre informazioni sulla classe modello `complex`, vedere [Classe complex](../standard-library/complex-class.md). Per un elenco dei membri della classe modello `complex`, vedere  
  
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
   complex <long double> c1 ( 4.0 , 5.0 );  
   cout << "Specifying initial real & imaginary parts,\n"  
        << " as type float gives c1 = " << c1 << endl;  
  
   // The second constructor initializes values of the real &  
   // imaginary parts using those of complex number of type float  
   complex <float> c2float ( 1.0 , 3.0 );  
   complex <long double> c2longdouble ( c2float );  
   cout << "Implicit conversion from type float to type long double,"  
        << "\n gives c2longdouble = " << c2longdouble << endl;  
  
   // The third constructor initializes values of the real &  
   // imaginary parts using those of a complex number  
   // of type double  
   complex <double> c3double ( 3.0 , 4.0 );  
   complex <long double> c3longdouble ( c3double );  
   cout << "Implicit conversion from type long double to type float,"  
        << "\n gives c3longdouble = " << c3longdouble << endl;  
  
   // The modulus and argument of a complex number can be recovered  
   double absc3 = abs ( c3longdouble );  
   double argc3 = arg ( c3longdouble );  
   cout << "The modulus of c3 is recovered from c3 using: abs ( c3 ) = "  
        << absc3 << endl;  
   cout << "Argument of c3 is recovered from c3 using:\n arg ( c3 ) = "  
        << argc3 << " radians, which is " << argc3 * 180 / pi  
        << " degrees." << endl;  
}  
\* Output:   
Specifying initial real & imaginary parts,  
 as type float gives c1 = (4,5)  
Implicit conversion from type float to type long double,  
 gives c2longdouble = (1,3)  
Implicit conversion from type long double to type float,  
 gives c3longdouble = (3,4)  
The modulus of c3 is recovered from c3 using: abs ( c3 ) = 5  
Argument of c3 is recovered from c3 using:  
 arg ( c3 ) = 0.927295 radians, which is 53.1301 degrees.  
*\  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: \<complex>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Classe complex](../standard-library/complex-class.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)




