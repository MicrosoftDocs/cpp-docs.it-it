---
title: "complex&lt;double&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.complex<double>"
  - "complex<double>"
  - "std::complex<double>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzione complesso < double >"
ms.assetid: 0d0b9d2a-9b9b-410b-82a0-86b6df127e47
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# complex&lt;double&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che archivia una coppia ordinata di oggetti, entrambi di tipo **double***,* di cui il primo rappresenta la parte reale di un numero complesso e il secondo rappresenta la parte immaginaria.  
  
## Sintassi  
  
```  
template<>  
   class complex<double> {  
public:  
   constexpr complex(  
      double _RealVal = 0,   
      double _ImagVal = 0  
   );  
  
   constexpr complex(  
      const complex<double>& _ComplexNum  
   );  
   constexpr explicit complex(  
      const complex<long double>& _ComplexNum  
   );  
   // rest same as template class complex  
};  
```  
  
#### Parametri  
 `_RealVal`  
 Valore di tipo **double** per la parte reale del numero complesso che viene costruito.  
  
 `_ImagVal`  
 Valore di tipo **double** per la parte immaginaria del numero complesso che viene costruito.  
  
 `_ComplexNum`  
 Numero complesso di tipo **float** o di tipo `long double` le cui parti reale e immaginaria vengono usate per inizializzare un numero complesso di tipo **double** che viene costruito.  
  
## Valore restituito  
 Numero complesso di tipo **double**.  
  
## Note  
 La specializzazione esplicita della classe modello complex in una classe complex di tipo **double** si differenzia dalla classe modello solo per i costruttori definiti. La conversione da **float** a **double** può essere implicita, ma la conversione da `long double` a **double** deve essere **esplicita**. L'uso di una conversione **esplicita** esclude l'inizializzazione con conversione del tipo tramite la sintassi di assegnazione.  
  
 Per ulteriori informazioni sulla classe di modello `complex`, vedere [Classe complex](../standard-library/complex-class.md). Per un elenco dei membri della classe modello `complex`, vedere  
  
## Esempio  
  
```  
// complex_comp_dbl.cpp  
// compile with: /EHsc  
#include <complex>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   double pi = 3.14159265359;  
  
   // The first constructor specifies real & imaginary parts  
   complex <double> c1 ( 4.0 , 5.0 );  
   cout << "Specifying initial real & imaginary parts,\n"  
        << " as type double gives c1 = " << c1 << endl;  
  
   // The second constructor initializes values of the real &  
   // imaginary parts using those of complex number of type float  
   complex <float> c2float ( 4.0 , 5.0 );  
   complex <double> c2double ( c2float );  
   cout << "Implicit conversion from type float to type double,"  
        << "\n gives c2double = " << c2double << endl;  
  
   // The third constructor initializes values of the real &  
   // imaginary parts using those of a complex number  
   // of type long double  
   complex <long double> c3longdouble ( 4.0 , 5.0 );  
   complex <double> c3double ( c3longdouble );  
   cout << "Explicit conversion from type float to type double,"  
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
```  
  
 **Specifica le parti reali e immaginarie iniziale, come tipo double consente c1 \= \(4,5\) conversione implicita dal tipo float al tipo double, c2double offre \= \(4,5\) conversione esplicita dal tipo float al tipo double, c3longdouble offre \= \(4,5\) il modulo di c3 viene recuperato dall'utilizzo di c3: abs \(c3\) \= 6.40312 argomento di c3 viene recuperato dall'utilizzo di c3: arg \(c3\) \= 0.896055 radianti, ovvero 51.3402 gradi.**   
## Requisiti  
 **Intestazione**: \<complex\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Classe complex](../standard-library/complex-class.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)