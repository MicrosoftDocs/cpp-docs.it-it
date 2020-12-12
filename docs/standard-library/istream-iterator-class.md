---
description: 'Altre informazioni su: istream_iterator Class'
title: Classe istream_iterator
ms.date: 11/04/2016
f1_keywords:
- iterator/std::istream_iterator
- iterator/std::istream_iterator::char_type
- iterator/std::istream_iterator::istream_type
- iterator/std::istream_iterator::traits_type
helpviewer_keywords:
- std::istream_iterator [C++]
- std::istream_iterator [C++], char_type
- std::istream_iterator [C++], istream_type
- std::istream_iterator [C++], traits_type
ms.assetid: fb52a8cd-7f71-48d1-b73e-4b064e2a8d16
ms.openlocfilehash: 7247e96c68f1adcc145519fc1cca6b3401302854
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277908"
---
# <a name="istream_iterator-class"></a>Classe istream_iterator

Descrive un oggetto iteratore di input. Estrae gli oggetti della classe `Type` da un flusso di input, a cui accede tramite un oggetto archiviato di tipo `pointer` a `basic_istream`< `CharType`, `Traits`>.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type, class CharType = char, class Traits = char_traits<CharType>, class Distance = ptrdiff_t,>
class istream_iterator
: public iterator<
    input_iterator_tag, Type, Distance,
    const Type *,
    const Type&>;
```

### <a name="parameters"></a>Parametri

*Tipo*\
Tipo di oggetto da estrarre dal flusso di input.

*CharType*\
Tipo che rappresenta il tipo di carattere per `istream_iterator`. Questo argomento è facoltativo e il valore predefinito è **`char`** .

*Tratti*\
Tipo che rappresenta il tipo di carattere per `istream_iterator`. Questo argomento è facoltativo e il valore predefinito è `char_traits`< `CharType`>.

*Distanza*\
Tipo integrale con segno che rappresenta il tipo di differenza per `istream_iterator`. Questo argomento è facoltativo e il valore predefinito è `ptrdiff_t`.

Dopo la costruzione o l'incrementazione di un oggetto della classe istream_iterator con un puntatore archiviato diverso da Null, l'oggetto tenta di estrarre e archiviare un oggetto di tipo `Type` dal flusso di input associato. Se l'estrazione ha esito negativo, l'oggetto sostituisce il puntatore archiviato con un puntatore Null, creando così un indicatore di fine della sequenza.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[istream_iterator](#istream_iterator)|Costruisce un iteratore di fine flusso come `istream_iterator` predefinito o un `istream_iterator` inizializzato nel tipo di flusso dell'iteratore da cui legge.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[char_type](#char_type)|Tipo che fornisce il tipo di carattere di `istream_iterator`.|
|[istream_type](#istream_type)|Tipo che fornisce il tipo di flusso di `istream_iterator`.|
|[traits_type](#traits_type)|Tipo che fornisce il tipo di tratti di `istream_iterator`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore](#op_star)|L'operatore di dereferenziazione restituisce l'oggetto archiviato di tipo `Type` a cui punta `istream_iterator`.|
|[operatore->](#op_arrow)|Restituisce il valore di un numero, se presente.|
|[operatore + +](#op_add_add)|Estrae un oggetto incrementato dal flusso di input oppure copia tale oggetto prima di incrementarlo e restituisce la copia.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** std

## <a name="istream_iteratorchar_type"></a><a name="char_type"></a> istream_iterator:: char_type

Tipo che fornisce il tipo di carattere di `istream_iterator`.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello `Chartype`.

### <a name="example"></a>Esempio

```cpp
// istream_iterator_char_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   typedef istream_iterator<int>::char_type CHT1;
   typedef istream_iterator<int>::traits_type CHTR1;

   // Standard iterator interface for reading
   // elements from the input stream:
   cout << "Enter integers separated by spaces & then\n"
        << " any character ( try example: '2 4 f' ): ";

   // istream_iterator for reading int stream
   istream_iterator<int, CHT1, CHTR1> intRead ( cin );

   // End-of-stream iterator
   istream_iterator<int, CHT1, CHTR1> EOFintRead;

   while ( intRead != EOFintRead )
   {
      cout << "Reading:  " << *intRead << endl;
      ++intRead;
   }
   cout << endl;
}
```

## <a name="istream_iteratoristream_iterator"></a><a name="istream_iterator"></a> istream_iterator:: istream_iterator

Costruisce un iteratore di fine flusso come `istream_iterator` predefinito o un `istream_iterator` inizializzato nel tipo di flusso dell'iteratore da cui legge.

```cpp
istream_iterator();

istream_iterator(istream_type& _Istr);
```

### <a name="parameters"></a>Parametri

*_Istr*\
Flusso di input da leggere usato per inizializzare l'oggetto `istream_iterator`.

### <a name="remarks"></a>Commenti

Il primo costruttore inizializza il puntatore del flusso di input con un puntatore Null e crea un iteratore di fine flusso. Il secondo costruttore inizializza il puntatore del flusso di input con *&_Istr*, quindi tenta di estrarre e archiviare un oggetto di tipo `Type` .

L'iteratore di fine flusso può essere usato per verificare se un oggetto `istream_iterator` ha raggiunto la fine di un flusso.

### <a name="example"></a>Esempio

```cpp
// istream_iterator_istream_iterator.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>

int main( )
{
   using namespace std;

   // Used in conjunction with copy algorithm
   // to put elements into a vector read from cin
   vector<int> vec ( 4 );
   vector <int>::iterator Iter;

   cout << "Enter 4 integers separated by spaces & then\n"
        << " a character ( try example: '2 4 6 8 a' ): ";
   istream_iterator<int> intvecRead ( cin );

   // Default constructor will test equal to end of stream
   // for delimiting source range of vecor
   copy ( intvecRead , istream_iterator<int>( ) , vec.begin ( ) );
   cin.clear ( );

   cout << "vec = ";
   for ( Iter = vec.begin( ) ; Iter != vec.end( ) ; Iter++ )
      cout << *Iter << " "; cout << endl;
}
```

## <a name="istream_iteratoristream_type"></a><a name="istream_type"></a> istream_iterator:: istream_type

Tipo che fornisce il tipo di flusso di `istream_iterator`.

```cpp
typedef basic_istream<CharType, Traits> istream_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo di `basic_istream` \< **CharType**, **Traits**> .

### <a name="example"></a>Esempio

Vedere [istream_iterator](#istream_iterator) per un esempio di come dichiarare e usare `istream_type`.

## <a name="istream_iteratoroperator"></a><a name="op_star"></a> istream_iterator:: operator *

L'operatore di dereferenziazione restituisce l'oggetto archiviato di tipo `Type` a cui punta `istream_iterator`.

```cpp
const Type& operator*() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto archiviato di tipo `Type` .

### <a name="example"></a>Esempio

```cpp
// istream_iterator_operator.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>

int main( )
{
   using namespace std;

   cout << "Enter integers separated by spaces & then\n"
        << " a character ( try example: '2 4 6 8 a' ): ";

   // istream_iterator from stream cin
   istream_iterator<int> intRead ( cin );

   // End-of-stream iterator
   istream_iterator<int> EOFintRead;

   while ( intRead != EOFintRead )
   {
      cout << "Reading:  " << *intRead << endl;
      ++intRead;
   }
   cout << endl;
}
```

## <a name="istream_iteratoroperator-gt"></a><a name="op_arrow"></a> istream_iterator:: operator-&gt;

Restituisce il valore di un numero, se presente.

```cpp
const Type* operator->() const;
```

### <a name="return-value"></a>Valore restituito

Valore di un membro, se presente.

### <a name="remarks"></a>Commenti

`i->m` equivale a `(*i).m`

L'operatore restituisce `&*this`.

### <a name="example"></a>Esempio

```cpp
// istream_iterator_operator_vm.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>
#include <complex>

using namespace std;

int main( )
{
   cout << "Enter complex numbers separated by spaces & then\n"
        << " a character pair ( try example: '(1,2) (3,4) (a,b)' ): ";

   // istream_iterator from stream cin
   istream_iterator< complex<double> > intRead ( cin );

   // End-of-stream iterator
   istream_iterator<complex<double> > EOFintRead;

   while ( intRead != EOFintRead )
   {
      cout << "Reading the real part: " << intRead ->real( ) << endl;
      cout << "Reading the imaginary part: " << intRead ->imag( ) << endl;
      ++intRead;
   }
   cout << endl;
}
```

## <a name="istream_iteratoroperator"></a><a name="op_add_add"></a> istream_iterator:: operator + +

Estrae un oggetto incrementato dal flusso di input oppure copia tale oggetto prima di incrementarlo e restituisce la copia.

```cpp
istream_iterator<Type, CharType, Traits, Distance>& operator++();

istream_iterator<Type, CharType, Traits, Distance> operator++(int);
```

### <a name="return-value"></a>Valore restituito

Il primo operatore membro restituisce un riferimento all'oggetto incrementato di tipo `Type` Estratto dal flusso di input e la seconda funzione membro restituisce una copia dell'oggetto.

### <a name="example"></a>Esempio

```cpp
// istream_iterator_operator_incr.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>

int main( )
{
   using namespace std;

   cout << "Enter integers separated by spaces & then\n"
        << " a character ( try example: '2 4 6 8 a' ): ";

   // istream_iterator from stream cin
   istream_iterator<int> intRead ( cin );

   // End-of-stream iterator
   istream_iterator<int> EOFintRead;

   while ( intRead != EOFintRead )
   {
      cout << "Reading:  " << *intRead << endl;
      ++intRead;
   }
   cout << endl;
}
```

## <a name="istream_iteratortraits_type"></a><a name="traits_type"></a> istream_iterator:: traits_type

Tipo che fornisce il tipo di tratti di `istream_iterator`.

```cpp
typedef Traits traits_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello *Traits*.

### <a name="example"></a>Esempio

```cpp
// istream_iterator_traits_type.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;

   typedef istream_iterator<int>::char_type CHT1;
   typedef istream_iterator<int>::traits_type CHTR1;

   // Standard iterator interface for reading
   // elements from the input stream:
   cout << "Enter integers separated by spaces & then\n"
        << " any character ( try example: '10 20 a' ): ";

   // istream_iterator for reading int stream
   istream_iterator<int, CHT1, CHTR1> intRead ( cin );

   // End-of-stream iterator
   istream_iterator<int, CHT1, CHTR1> EOFintRead;

   while ( intRead != EOFintRead )
   {
      cout << "Reading:  " << *intRead << endl;
      ++intRead;
   }
   cout << endl;
}
```

## <a name="see-also"></a>Vedere anche

[Struct input_iterator_tag](../standard-library/input-iterator-tag-struct.md)\
[Struct iterator](../standard-library/iterator-struct.md)\
[\<iterator>](../standard-library/iterator.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
