---
title: Classe basic_string | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- xstring/std::basic_string
- xstring/std::basic_string::allocator_type
- xstring/std::basic_string::const_iterator
- xstring/std::basic_string::const_pointer
- xstring/std::basic_string::const_reference
- xstring/std::basic_string::const_reverse_iterator
- xstring/std::basic_string::difference_type
- xstring/std::basic_string::iterator
- xstring/std::basic_string::npos
- xstring/std::basic_string::pointer
- xstring/std::basic_string::reference
- xstring/std::basic_string::reverse_iterator
- xstring/std::basic_string::size_type
- xstring/std::basic_string::traits_type
- xstring/std::basic_string::value_type
- xstring/std::basic_string::append
- xstring/std::basic_string::assign
- xstring/std::basic_string::at
- xstring/std::basic_string::back
- xstring/std::basic_string::begin
- xstring/std::basic_string::c_str
- xstring/std::basic_string::capacity
- xstring/std::basic_string::cbegin
- xstring/std::basic_string::cend
- xstring/std::basic_string::clear
- xstring/std::basic_string::compare
- xstring/std::basic_string::copy
- xstring/std::basic_string::crbegin
- xstring/std::basic_string::crend
- xstring/std::basic_string::_Copy_s
- xstring/std::basic_string::data
- xstring/std::basic_string::empty
- xstring/std::basic_string::end
- xstring/std::basic_string::erase
- xstring/std::basic_string::find
- xstring/std::basic_string::find_first_not_of
- xstring/std::basic_string::find_first_of
- xstring/std::basic_string::find_last_not_of
- xstring/std::basic_string::find_last_of
- xstring/std::basic_string::front
- xstring/std::basic_string::get_allocator
- xstring/std::basic_string::insert
- xstring/std::basic_string::length
- xstring/std::basic_string::max_size
- xstring/std::basic_string::pop_back
- xstring/std::basic_string::push_back
- xstring/std::basic_string::rbegin
- xstring/std::basic_string::rend
- xstring/std::basic_string::replace
- xstring/std::basic_string::reserve
- xstring/std::basic_string::resize
- xstring/std::basic_string::rfind
- xstring/std::basic_string::shrink_to_fit
- xstring/std::basic_string::size
- xstring/std::basic_string::substr
- xstring/std::basic_string::swap
dev_langs:
- C++
helpviewer_keywords:
- std::basic_string [C++]
- std::basic_string [C++], allocator_type
- std::basic_string [C++], const_iterator
- std::basic_string [C++], const_pointer
- std::basic_string [C++], const_reference
- std::basic_string [C++], const_reverse_iterator
- std::basic_string [C++], difference_type
- std::basic_string [C++], iterator
- std::basic_string [C++], npos
- std::basic_string [C++], pointer
- std::basic_string [C++], reference
- std::basic_string [C++], reverse_iterator
- std::basic_string [C++], size_type
- std::basic_string [C++], traits_type
- std::basic_string [C++], value_type
- std::basic_string [C++], append
- std::basic_string [C++], assign
- std::basic_string [C++], at
- std::basic_string [C++], back
- std::basic_string [C++], begin
- std::basic_string [C++], c_str
- std::basic_string [C++], capacity
- std::basic_string [C++], cbegin
- std::basic_string [C++], cend
- std::basic_string [C++], clear
- std::basic_string [C++], compare
- std::basic_string [C++], copy
- std::basic_string [C++], crbegin
- std::basic_string [C++], crend
- std::basic_string [C++], _Copy_s
- std::basic_string [C++], data
- std::basic_string [C++], empty
- std::basic_string [C++], end
- std::basic_string [C++], erase
- std::basic_string [C++], find
- std::basic_string [C++], find_first_not_of
- std::basic_string [C++], find_first_of
- std::basic_string [C++], find_last_not_of
- std::basic_string [C++], find_last_of
- std::basic_string [C++], front
- std::basic_string [C++], get_allocator
- std::basic_string [C++], insert
- std::basic_string [C++], length
- std::basic_string [C++], max_size
- std::basic_string [C++], pop_back
- std::basic_string [C++], push_back
- std::basic_string [C++], rbegin
- std::basic_string [C++], rend
- std::basic_string [C++], replace
- std::basic_string [C++], reserve
- std::basic_string [C++], resize
- std::basic_string [C++], rfind
- std::basic_string [C++], shrink_to_fit
- std::basic_string [C++], size
- std::basic_string [C++], substr
- std::basic_string [C++], swap
ms.assetid: a9c3e0a2-39bf-4c8a-b093-9abe30839591
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b86f8bca0cade273fc3b6bc1e7c936bf917bb4ba
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48235984"
---
# <a name="basicstring-class"></a>Classe basic_string

Le sequenze controllate da un oggetto della classe modello `basic_string` sono rappresentate dalla classe stringa C++ standard e in genere vengono definite stringhe, ma non devono essere confuse con le stringhe in formato C con terminazione Null usate nella libreria standard C++. La stringa C++ standard è un contenitore che consente l'uso di stringhe come tipi normali, ad esempio come operazioni di confronto e concatenazione, iteratori, algoritmi della libreria standard C++ e copia e assegnazione con Managed Memory dell'allocatore della classe. Se è necessario convertire una stringa C++ standard in una stringa in formato C con terminazione Null, usare il membro [basic_string::c_str](#c_str).

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class Traits = char_traits<CharType>, class Allocator = allocator<CharType>>
class basic_string;
```

### <a name="parameters"></a>Parametri

*CharType*<br/>
Tipo di dati di un singolo carattere da archiviare nella stringa. La libreria Standard C++ fornisce le specializzazioni di questa classe modello, con le definizioni dei tipi [stringa](../standard-library/string-typedefs.md#string) per gli elementi di tipo **char**, [wstring](../standard-library/string-typedefs.md#wstring), per **wchar_t**, [u16string](../standard-library/string-typedefs.md#u16string) per `char16_t`, e [u32string](../standard-library/string-typedefs.md#u32string) per `char32_t`.

*Tratti*<br/>
Diverse proprietà importanti del `CharType` elementi in una specializzazione basic_string vengono descritti dalla classe `Traits`. Il valore predefinito è `char_traits`< `CharType`>.

*Allocatore*<br/>
Tipo che rappresenta l'oggetto allocatore archiviato che incapsula i dettagli relativi all'allocazione e alla deallocazione di memoria della stringa. Il valore predefinito è **allocator**< `CharType`>.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_string](#basic_string)|Costruisce una stringa vuota o inizializzata in base a caratteri specifici oppure che rappresenta una copia di tutto o parte di un altro oggetto stringa o stringa C.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo che rappresenta la classe `allocator` per un oggetto stringa.|
|[const_iterator](#const_iterator)|Tipo che fornisce un iteratore ad accesso casuale in grado di accedere e leggere un elemento **const** nella stringa.|
|[const_pointer](#const_pointer)|Tipo che fornisce un puntatore a un elemento **const** in una stringa.|
|[const_reference](#const_reference)|Tipo che fornisce un riferimento a un elemento **const** archiviato in una stringa per la lettura e l'esecuzione di operazioni **const**.|
|[const_reverse_iterator](#const_reverse_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento **const** nella stringa.|
|[difference_type](#difference_type)|Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno della stessa stringa.|
|[iterator](#iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in una stringa.|
|[npos](#npos)|Un valore integrale senza segno inizializzato su -1 che indica "non trovato" o "tutti i caratteri rimanenti" quando una funzione di ricerca ha esito negativo.|
|[pointer](#pointer)|Tipo che fornisce un puntatore a un elemento carattere in una matrice di stringhe o caratteri.|
|[reference](#reference)|Tipo che fornisce un riferimento a un elemento archiviato in una stringa.|
|[reverse_iterator](#reverse_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare un elemento in una stringa invertita.|
|[size_type](#size_type)|Tipo integrale senza segno per il numero di elementi in una stringa.|
|[traits_type](#traits_type)|Tipo per i tratti dei caratteri degli elementi archiviati in una stringa.|
|[value_type](#value_type)|Tipo che rappresenta il tipo di caratteri archiviati in una stringa.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[append](#append)|Aggiunge caratteri alla fine di una stringa.|
|[assign](#assign)|Assegna nuovi valori di caratteri al contenuto di una stringa.|
|[at](#at)|Restituisce un riferimento all'elemento in una posizione specificata nella stringa.|
|[back](#back)||
|[begin](#begin)|Restituisce un iteratore che punta al primo elemento nella stringa.|
|[c_str](#c_str)|Converte il contenuto di una stringa come stringa in formato C con terminazione Null.|
|[capacity](#capacity)|Restituisce il numero massimo di elementi che è possibile archiviare in una stringa senza aumentare l'allocazione di memoria della stringa.|
|[cbegin](#cbegin)|Restituisce un iteratore const che punta al primo elemento nella stringa.|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in una stringa.|
|[clear](#clear)|Cancella tutti gli elementi di una stringa.|
|[compare](#compare)|Confronta una stringa con una stringa specificata per determinare se le due stringhe sono uguali oppure se una è minore dell'altra a livello lessicografico.|
|[copy](#copy)|Copia al massimo un numero specificato di caratteri da una posizione indicizzata all'interno di una stringa di origine in una matrice di caratteri di destinazione. Deprecato. Usare [basic_string::_Copy_s](#copy_s).|
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento in una stringa invertita.|
|[crend](#crend)|Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in una stringa invertita.|
|[_Copy_s](#copy_s)|Copia al massimo un numero specificato di caratteri da una posizione indicizzata all'interno di una stringa di origine in una matrice di caratteri di destinazione.|
|[data](#data)|Converte il contenuto di una stringa in una matrice di caratteri.|
|[empty](#empty)|Verifica se la stringa contiene caratteri.|
|[end](#end)|Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in una stringa.|
|[erase](#erase)|Rimuove un elemento o un intervallo di elementi in una stringa da una posizione specificata.|
|[find](#find)|Cerca in avanti in una stringa la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.|
|[find_first_not_of](#find_first_not_of)|Cerca in una stringa il primo carattere che non è un elemento di una stringa specificata.|
|[find_first_of](#find_first_of)|Cerca in una stringa il primo carattere che corrisponde a un elemento di una stringa specificata.|
|[find_last_not_of](#find_last_not_of)|Cerca in una stringa l'ultimo carattere che non è un elemento di una stringa specificata.|
|[find_last_of](#find_last_of)|Cerca in una stringa l'ultimo carattere che è un elemento di una stringa specificata.|
|[front](#front)|Restituisce un riferimento al primo elemento in una stringa.|
|[get_allocator](#get_allocator)|Restituisce una copia dell'oggetto `allocator` usato per costruire la stringa.|
|[insert](#insert)|Inserisce un elemento, un numero di elementi o un intervallo di elementi nella stringa in una posizione specificata.|
|[length](#length)|Restituisce il numero corrente di elementi in una stringa.|
|[max_size](#max_size)|Restituisce il numero massimo di caratteri che una stringa può contenere.|
|[pop_back](#pop_back)|Cancella l'ultimo elemento della stringa.|
|[push_back](#push_back)|Aggiunge un elemento alla fine della stringa.|
|[rbegin](#rbegin)|Restituisce un iteratore al primo elemento in una stringa invertita.|
|[rend](#rend)|Restituisce un iteratore che punta alla posizione immediatamente successiva all'ultimo elemento in una stringa invertita.|
|[replace](#replace)|Sostituisce gli elementi in una stringa in una posizione specificata con i caratteri specificati o i caratteri copiati da altri intervalli, stringhe o stringhe C.|
|[reserve](#reserve)|Imposta la capacità della stringa su un numero grande almeno quanto un numero specificato.|
|[resize](#resize)|Specifica una nuova dimensione per una stringa, aggiungendo o cancellando gli elementi in base alle esigenze.|
|[rfind](#rfind)|Cerca all'indietro in una stringa la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.|
|[shrink_to_fit](#shrink_to_fit)|Rimuove la capacità in eccesso della stringa.|
|[size](#size)|Restituisce il numero corrente di elementi in una stringa.|
|[substr](#substr)|Copia una sottostringa di al massimo un numero di caratteri da una stringa a partire da una posizione specificata.|
|[swap](#swap)|Scambia il contenuto di due stringhe.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator+=](#op_add_eq)|Aggiunge caratteri a una stringa.|
|[operator=](#op_eq)|Assegna nuovi valori di caratteri al contenuto di una stringa.|
|[operator&#91;&#93;](#op_at)|Fornisce un riferimento al carattere con un indice specificato in una stringa.|

## <a name="remarks"></a>Note

Se a una funzione viene richiesto di generare una sequenza più lunga di [max_size](#max_size) elementi, la funzione segnala un errore di lunghezza generando un oggetto di tipo [length_error](../standard-library/length-error-class.md).

I riferimenti, i puntatori e gli iteratori che definiscono gli elementi della sequenza controllata possono diventare non validi dopo una chiamata a una funzione che modifica la sequenza controllata o dopo la prima chiamata a una funzione membro non **const**.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<string>

**Spazio dei nomi:** std

## <a name="allocator_type"></a>  basic_string::allocator_type

Tipo che rappresenta la classe allocatore per un oggetto stringa.

```cpp
typedef Allocator allocator_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `Allocator`.

### <a name="example"></a>Esempio

```cpp
// basic_string_allocator_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   // The following lines declare objects
   // that use the default allocator.
   string s1;
   basic_string <char>::allocator_type xchar = s1.get_allocator( );
   // You can now call functions on the allocator class xchar used by s1
}
```

## <a name="append"></a>  basic_string::append

Aggiunge caratteri alla fine di una stringa.

```cpp
basic_string<CharType, Traits, Allocator>& append(
    const value_type* ptr);

basic_string<CharType, Traits, Allocator>& append(
    const value_type* ptr,
    size_type count);

basic_string<CharType, Traits, Allocator>& append(
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off,
    size_type count);

basic_string<CharType, Traits, Allocator>& append(
    const basic_string<CharType, Traits, Allocator>& str);

basic_string<CharType, Traits, Allocator>& append(
    size_type count,
    value_type _Ch);

template <class InputIterator>
basic_string<CharType, Traits, Allocator>& append(
    InputIterator first,
    InputIterator last);

basic_string<CharType, Traits, Allocator>& append(
    const_pointer first,
    const_pointer last);

basic_string<CharType, Traits, Allocator>& append(
    const_iterator first,
    const_iterator last);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
La stringa C da aggiungere.

*str*<br/>
La stringa i cui caratteri devono essere aggiunti.

*Off*<br/>
Indice della parte della stringa di origine che fornisce i caratteri da aggiungere.

*count*<br/>
Il numero massimo di caratteri da aggiungere dalla stringa di origine.

*CH*<br/>
Il valore di caratteri da aggiungere.

*first*<br/>
Iteratore di input che punta al primo elemento dell'intervallo da aggiungere.

*last*<br/>
Iteratore di input, const_pointer o const_iterator che punta alla posizione dell'elemento immediatamente successivo all'ultimo elemento nell'intervallo da aggiungere.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto stringa che viene aggiunto con i caratteri passati dalla funzione membro.

### <a name="remarks"></a>Note

I caratteri possono essere aggiunti a una stringa usando il [operator + =](#op_add_eq) o le funzioni membro `append` oppure [push_back](#push_back). `operator+=` Aggiunge i valori di argomento singolo durante il più argomenti `append` funzione membro consente a una parte specifica di una stringa da aggiungere.

### <a name="example"></a>Esempio

```cpp
// basic_string_append.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // appending a C-string to a string
   string str1a ( "Hello " );
   cout << "The original string str1 is: " << str1a << endl;
   const char *cstr1a = "Out There ";
   cout << "The C-string cstr1a is: " << cstr1a << endl;
   str1a.append ( cstr1a );
   cout << "Appending the C-string cstr1a to string str1 gives: "
        << str1a << "." << endl << endl;

   // The second member function
   // appending part of a C-string to a string
   string str1b ( "Hello " );
   cout << "The string str1b is: " << str1b << endl;
   const char *cstr1b = "Out There ";
   cout << "The C-string cstr1b is: " << cstr1b << endl;
   str1b.append ( cstr1b , 3 );
   cout << "Appending the 1st part of the C-string cstr1b "
        << "to string str1 gives: " << str1b << "."
        << endl << endl;

   // The third member function
   // appending part of one string to another
   string str1c ( "Hello " ), str2c ( "Wide World " );
   cout << "The string str2c is: " << str2c << endl;
   str1c.append ( str2c , 5 , 5 );
   cout << "The appended string str1 is: "
        << str1c << "." << endl << endl;

   // The fourth member function
   // appending one string to another in two ways,
   // comparing append and operator [ ]
   string str1d ( "Hello " ), str2d ( "Wide " ), str3d ( "World " );
   cout << "The  string str2d is: " << str2d << endl;
   str1d.append ( str2d );
   cout << "The appended string str1d is: "
        << str1d << "." << endl;
   str1d += str3d;
   cout << "The doubly appended strig str1 is: "
        << str1d << "." << endl << endl;

   // The fifth member function
   // appending characters to a string
   string str1e ( "Hello " );
   str1e.append ( 4 , '!' );
   cout << "The string str1 appended with exclamations is: "
        << str1e << endl << endl;

   // The sixth member function
   // appending a range of one string to another
   string str1f ( "Hello " ), str2f ( "Wide World " );
   cout << "The string str2f is: " << str2f << endl;
   str1f.append ( str2f.begin ( ) + 5 , str2f.end ( ) - 1 );
   cout << "The appended string str1 is: "
        << str1f << "." << endl << endl;
}
```

```Output
The original string str1 is: Hello
The C-string cstr1a is: Out There
Appending the C-string cstr1a to string str1 gives: Hello Out There .

The string str1b is: Hello
The C-string cstr1b is: Out There
Appending the 1st part of the C-string cstr1b to string str1 gives: Hello Out.

The string str2c is: Wide World
The appended string str1 is: Hello World.

The  string str2d is: Wide
The appended string str1d is: Hello Wide .
The doubly appended strig str1 is: Hello Wide World .

The string str1 appended with exclamations is: Hello !!!!

The string str2f is: Wide World
The appended string str1 is: Hello World.
```

## <a name="assign"></a>  basic_string::assign

Assegna nuovi valori di caratteri al contenuto di una stringa.

```cpp
basic_string<CharType, Traits, Allocator>& assign(
    const value_type* ptr);

basic_string<CharType, Traits, Allocator>& assign(
    const value_type* ptr,
    size_type count);

basic_string<CharType, Traits, Allocator>& assign(
    const basic_string<CharType, Traits, Allocator>& str,
    size_type off,
    size_type count);

basic_string<CharType, Traits, Allocator>& assign(
    const basic_string<CharType, Traits, Allocator>& str);

basic_string<CharType, Traits, Allocator>& assign(
    size_type count,
    value_type _Ch);

template <class InIt>
basic_string<CharType, Traits, Allocator>& assign(
    InputIterator first,
    InputIterator last);

basic_string<CharType, Traits, Allocator>& assign(
    const_pointer first,
    const_pointer last);

basic_string<CharType, Traits, Allocator>& assign(
    const_iterator first,
    const_iterator last);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Un puntatore ai caratteri della stringa C da assegnare alla stringa di destinazione.

*count*<br/>
Il numero di caratteri deve essere assegnato dalla stringa di origine.

*str*<br/>
La stringa di origine i cui caratteri devono essere assegnati alla stringa di destinazione.

*CH*<br/>
Il valore di caratteri da assegnare.

*first*<br/>
Un iteratore di input, const_pointer o const_iterator che punta al primo carattere dell'intervallo della stringa di origine da assegnare all'intervallo di destinazione.

*last*<br/>
Un iteratore di input, const_pointer o const_iterator che punta al carattere immediatamente successivo all'ultimo carattere dell'intervallo della stringa di origine da assegnare all'intervallo di destinazione.

*Off*<br/>
La posizione da cui si inizia ad assegnare i nuovi caratteri.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto stringa cui vengono assegnati nuovi caratteri dalla funzione membro.

### <a name="remarks"></a>Note

È possibile assegnare alle stringhe nuovi valori di caratteri. Il nuovo valore può essere una stringa e una stringa C o un singolo carattere. Il [operatore =](#op_eq) possono essere usati se il nuovo valore può essere descritto da un singolo parametro; in caso contrario la funzione membro `assign`, con più parametri, può essere utilizzato per specificare quale parte della stringa deve essere assegnato a una destinazione stringa.

### <a name="example"></a>Esempio

```cpp
// basic_string_assign.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function assigning the
   // characters of a C-string to a string
   string str1a;
   const char *cstr1a = "Out There";
   cout << "The C-string cstr1a is: " << cstr1a <<  "." << endl;
   str1a.assign ( cstr1a );
   cout << "Assigning the C-string cstr1a to string str1 gives: "
        << str1a << "." << endl << endl;

   // The second member function assigning a specific
   // number of the of characters a C-string to a string
   string  str1b;
   const char *cstr1b = "Out There";
   cout << "The C-string cstr1b is: " << cstr1b << endl;
   str1b.assign ( cstr1b , 3 );
   cout << "Assigning the 1st part of the C-string cstr1b "
        << "to string str1 gives: " << str1b << "."
        << endl << endl;

   // The third member function assigning a specific number
   // of the characters from one string to another string
   string str1c ( "Hello " ), str2c ( "Wide World " );
   cout << "The string str2c is: " << str2c << endl;
   str1c.assign ( str2c , 5 , 5 );
   cout << "The newly assigned string str1 is: "
        << str1c << "." << endl << endl;

   // The fourth member function assigning the characters
   // from one string to another string in two equivalent
   // ways, comparing the assign and operator =
   string str1d ( "Hello" ), str2d ( "Wide" ), str3d ( "World" );
   cout << "The original string str1 is: " << str1d << "." << endl;
   cout << "The string str2d is: " << str2d << endl;
   str1d.assign ( str2d );
   cout << "The string str1 newly assigned with string str2d is: "
        << str1d << "." << endl;
   cout << "The string str3d is: " << str3d << "." << endl;
   str1d = str3d;
   cout << "The string str1 reassigned with string str3d is: "
        << str1d << "." << endl << endl;

   // The fifth member function assigning a specific
   // number of characters of a certain value to a string
   string str1e ( "Hello " );
   str1e.assign ( 4 , '!' );
   cout << "The string str1 assigned with eclamations is: "
        << str1e << endl << endl;

   // The sixth member function assigning the value from
   // the range of one string to another string
   string str1f ( "Hello " ), str2f ( "Wide World " );
   cout << "The string str2f is: " << str2f << endl;
   str1f.assign ( str2f.begin ( ) + 5 , str2f.end ( ) - 1 );
   cout << "The string str1 assigned a range of string str2f is: "
        << str1f << "." << endl << endl;
}
```

```Output
The C-string cstr1a is: Out There.
Assigning the C-string cstr1a to string str1 gives: Out There.

The C-string cstr1b is: Out There
Assigning the 1st part of the C-string cstr1b to string str1 gives: Out.

The string str2c is: Wide World
The newly assigned string str1 is: World.

The original string str1 is: Hello.
The string str2d is: Wide
The string str1 newly assigned with string str2d is: Wide.
The string str3d is: World.
The string str1 reassigned with string str3d is: World.

The string str1 assigned with eclamations is: !!!!

The string str2f is: Wide World
The string str1 assigned a range of string str2f is: World.
```

## <a name="at"></a>  basic_string::at

Fornisce un riferimento al carattere con un indice specificato in una stringa.

```cpp
const_reference at(size_type _Off) const;


reference at(size_type _Off);
```

### <a name="parameters"></a>Parametri

*Off*<br/>
L'indice della posizione dell'elemento a cui fare riferimento.

### <a name="return-value"></a>Valore restituito

Un riferimento al carattere della stringa in corrispondenza della posizione specificata dall'indice di parametro.

### <a name="remarks"></a>Note

Il primo elemento della stringa ha un indice zero e gli elementi seguenti sono indicizzati consecutivamente interi positivi, in modo che una stringa di lunghezza *n* dispone di un *n*elemento th indicizzati in base al numero *n -* 1.

Il membro [operatore&#91; &#93; ](#op_at) risulta più veloce rispetto alla funzione membro `at` per fornire accesso in lettura e scrittura agli elementi di una stringa.

Il membro `operator[]` non verifica se l'indice passato come parametro è valido, ma la funzione membro `at` non e pertanto deve essere usati se la validità non è certa. Un indice non valido, ovvero un indice minore di zero oppure maggiore o uguale alla dimensione della stringa, passata alla funzione membro `at` genera una [classe out_of_range](../standard-library/out-of-range-class.md) eccezione. Un indice non valido passato a `operator[]` causa un comportamento non definito, mentre l'indice uguale alla lunghezza della stringa è un indice valido per le stringhe const e l'operatore restituisce il carattere null quando l'indice viene passato.

Il riferimento restituito può essere invalidato da riallocazioni o modifiche delle stringhe per le stringhe non **const**.

### <a name="example"></a>Esempio

```cpp
// basic_string_at.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ( "Hello world" ), str2 ( "Goodbye world" );
   const string  cstr1 ( "Hello there" ), cstr2 ( "Goodbye now" );
   cout << "The original string str1 is: " << str1 << endl;
   cout << "The original string str2 is: " << str2 << endl;

   // Element access to the non const strings
   basic_string <char>::reference refStr1 = str1 [6];
   basic_string <char>::reference refStr2 = str2.at ( 3 );

   cout << "The character with an index of 6 in string str1 is: "
        << refStr1 << "." << endl;
   cout << "The character with an index of 3 in string str2 is: "
        << refStr2 << "." << endl;

   // Element access to the const strings
   basic_string <char>::const_reference crefStr1 = cstr1 [ cstr1.length ( ) ];
   basic_string <char>::const_reference crefStr2 = cstr2.at ( 8 );

   if ( crefStr1 == '\0' )
      cout << "The null character is returned as a valid reference."
           << endl;
   else
      cout << "The null character is not returned." << endl;
   cout << "The character with index 8 in the const string cstr2 is: "
        << crefStr2 << "." << endl;
}
```

## <a name="back"></a>  basic_string::back

Restituisce un riferimento all'ultimo elemento nella stringa.

```cpp
const_reference back() const;


reference back();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'ultimo elemento della stringa, che deve essere non vuoto.

### <a name="remarks"></a>Note

## <a name="basic_string"></a>  basic_string::basic_string

Costruisce una stringa che è vuota, che è inizializzata da caratteri specifici o che è una copia di tutta o parte di un altro oggetto stringa o di una stringa (che termina con Null) in stile C.

```cpp
basic_string();

explicit basic_string(
    const allocator_type& _Al);

basic_string(
    const basic_string& right);

basic_string(
    basic_string&& right);

basic_string(
    const basic_string& right,
    size_type _Roff,
    size_type count = npos);

basic_string(
    const basic_string& right,
    size_type _Roff,
    size_type count,
    const allocator_type& _Al);

basic_string(
    const value_type* ptr,
    size_type count);

basic_string(
    const value_type* ptr,
    size_type count,
    const allocator_type& _Al);

basic_string(
    const value_type* ptr);

basic_string(
    const value_type* ptr,
    const allocator_type& _Al);

basic_string(
    size_type count,
    value_type _Ch);

basic_string(
    size_type count,
    value_type _Ch,
    const allocator_type& _Al);

template <class InputIterator>
basic_string(
    InputIterator first,
    InputIterator last);

template <class InputIterator>
basic_string(
    InputIterator first,
    InputIterator last,
    const allocator_type& _Al);

basic_string(
    const_pointer first,
    const_pointer last);

basic_string(
    const_iterator first,
    const_iterator last);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Stringa C i cui caratteri devono essere usati per inizializzare l'oggetto `string` costruito. Questo valore non può essere un puntatore Null.

*_Al*<br/>
Classe allocatore di archiviazione per l'oggetto stringa costruito.

*count*<br/>
Numero dei caratteri da inizializzare.

*right*<br/>
Stringa per inizializzare la stringa costruita.

*_Roff*<br/>
Indice di un carattere in una stringa che è il primo da usare per inizializzare i valori di carattere per la stringa costruita.

*CH*<br/>
Valore di carattere da copiare nella stringa costruita.

*first*<br/>
Iteratore di input, const_pointer o const_iterator che punta al primo elemento nell'intervallo di origine da inserire.

*last*<br/>
Iteratore di input, const_pointer o const_iterator che punta alla posizione di quello oltre l'ultimo elemento nell'intervallo di origine da inserire.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto stringa costruito dai costruttori.

### <a name="remarks"></a>Note

Tutti i costruttori archiviano [basic_string::allocator_type](#allocator_type) e inizializzano la sequenza controllata. L'oggetto allocatore è l'argomento `al`, se presente. Per il costruttore di copia, è `right.`[basic_string::get_allocator](#get_allocator)`()`. Altrimenti, è `Alloc()`.

la sequenza controllata viene inizializzata in una copia della sequenza di operandi specificata dagli operandi rimanenti. Un costruttore senza una sequenza di operandi specifica una sequenza controllata iniziale vuota. Se `InputIterator` è di tipo integer in un costruttore di modello, la sequenza di operandi _F `irst,  last` si comporta esattamente come `(size_type) first, (value_type) last`.

### <a name="example"></a>Esempio

```cpp
// basic_string_ctor.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function initializing with a C-string
   const char *cstr1a = "Hello Out There.";
   basic_string <char> str1a ( cstr1a , 5);
   cout << "The string initialized by C-string cstr1a is: "
        << str1a << "." << endl;

   // The second member function initializing with a string
   string  str2a ( "How Do You Do" );
   basic_string <char> str2b ( str2a , 7 , 7 );
   cout << "The string initialized by part of the string cstr2a is: "
        << str2b << "." << endl;

   // The third member function initializing a string
   // with a number of characters of a specific value
   basic_string <char> str3a ( 5, '9' );
   cout << "The string initialized by five number 9s is: "
        << str3a << endl;

   // The fourth member function creates an empty string
   // and string with a specified allocator
   basic_string <char> str4a;
   string str4b;
   basic_string <char> str4c ( str4b.get_allocator( ) );
   if (str4c.empty ( ) )
      cout << "The string str4c is empty." << endl;
   else
      cout << "The string str4c is not empty." << endl;

   // The fifth member function initializes a string from
   // another range of characters
   string str5a ( "Hello World" );
   basic_string <char> str5b ( str5a.begin ( ) + 5 , str5a.end ( ) );
   cout << "The string initialized by another range is: "
        << str5b << "." << endl;
}
```

## <a name="begin"></a>  basic_string::begin

Restituisce un iteratore che punta al primo elemento nella stringa.

```cpp
const_iterator begin() const;


iterator begin();
```

### <a name="return-value"></a>Valore restituito

Iteratore ad accesso casuale che punta al primo elemento della sequenza o appena oltre la fine di una sequenza vuota.

### <a name="example"></a>Esempio

```cpp
// basic_string_begin.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( ) {
   using namespace std;
   string str1 ( "No way out." ), str2;
   basic_string <char>::iterator strp_Iter, str1_Iter, str2_Iter;
   basic_string <char>::const_iterator str1_cIter;

   str1_Iter = str1.begin ( );
   cout << "The first character of the string str1 is: "
        << *str1_Iter << endl;
   cout << "The full original string str1 is: " << str1 << endl;

   // The dereferenced iterator can be used to modify a character
*str1_Iter = 'G';
   cout << "The first character of the modified str1 is now: "
        << *str1_Iter << endl;
   cout << "The full modified string str1 is now: " << str1 << endl;

   // The following line would be an error because iterator is const
   // *str1_cIter = 'g';

   // For an empty string, begin is equivalent to end
   if (  str2.begin ( ) == str2.end ( ) )
      cout << "The string str2 is empty." << endl;
   else
      cout << "The string str2 is not empty." << endl;
}
```

## <a name="c_str"></a>  basic_string::c_str

Converte il contenuto di una stringa come stringa in formato C con terminazione Null.

```cpp
const value_type *c_str() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore alla versione in formato C della stringa di richiamo.  Il valore del puntatore non è valido dopo la chiamata a una funzione non const, contenente il distruttore, nella classe basic_string nell'oggetto.

### <a name="remarks"></a>Note

Gli oggetti di tipo string appartenenti alla classe modello C++ basic_string\<char> non terminano necessariamente con null. Il carattere null ' \0 ' viene usato come carattere speciale in una stringa C per contrassegnare la fine della stringa ma non ha alcun significato particolare in un oggetto di tipo string e può essere parte della stringa come qualsiasi altro carattere. È una conversione automatica dal **const char** <strong>\*</strong> in stringhe, ma la stringa di classe non fornisce conversioni automatiche di stringhe in formato C in oggetti di tipo **basic_string\<char >**.

La stringa in formato C restituita non deve essere modificata o eliminata poiché la modifica potrebbe invalidare il puntatore alla stringa in quanto la stringa ha una durata limitata ed è di proprietà della classe string.

### <a name="example"></a>Esempio

```cpp
// basic_string_c_str.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   string  str1 ( "Hello world" );
   cout << "The original string object str1 is: "
        << str1 << endl;
   cout << "The length of the string object str1 = "
        << str1.length ( ) << endl << endl;

   // Converting a string to an array of characters
   const char *ptr1 = 0;
   ptr1= str1.data ( );
   cout << "The modified string object ptr1 is: " << ptr1
        << endl;
   cout << "The length of character array str1 = "
        << strlen ( ptr1) << endl << endl;

   // Converting a string to a C-style string
   const char *c_str1 = str1.c_str ( );
   cout << "The C-style string c_str1 is: " << c_str1
        << endl;
   cout << "The length of C-style string str1 = "
        << strlen ( c_str1) << endl << endl;
}
```

```Output
The original string object str1 is: Hello world
The length of the string object str1 = 11

The modified string object ptr1 is: Hello world
The length of character array str1 = 11

The C-style string c_str1 is: Hello world
The length of C-style string str1 = 11
```

## <a name="capacity"></a>  basic_string::capacity

Restituisce il numero massimo di elementi che è possibile archiviare in una stringa senza aumentare l'allocazione di memoria della stringa.

```cpp
size_type capacity() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni dello spazio di archiviazione attualmente allocato in memoria per contenere la stringa.

### <a name="remarks"></a>Note

La funzione membro restituisce lo spazio di archiviazione attualmente allocato per contenere la sequenza controllata, un valore almeno pari a [size](#size).

### <a name="example"></a>Esempio

```cpp
// basic_string_capacity.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string  str1 ("Hello world");
   cout << "The original string str1 is: " << str1 << endl;

   // The size and length member functions differ in name only
   basic_string <char>::size_type sizeStr1, lenStr1;
   sizeStr1 = str1.size ( );
   lenStr1 = str1.length ( );

   basic_string <char>::size_type capStr1, max_sizeStr1;
   capStr1 = str1.capacity ( );
   max_sizeStr1 = str1.max_size ( );

   // Compare size, length, capacity & max_size of a string
   cout << "The current size of original string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of original string str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of original string str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of original string str1 is: "
        << max_sizeStr1 << "." << endl << endl;

   str1.erase ( 6, 5 );
   cout << "The modified string str1 is: " << str1 << endl;

   sizeStr1 = str1.size (  );
   lenStr1 = str1.length (  );
   capStr1 = str1.capacity (  );
   max_sizeStr1 = str1.max_size (  );

   // Compare size, length, capacity & max_size of a string
   // after erasing part of the original string
   cout << "The current size of modified string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of modified string str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of modified string str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of modified string str1 is: "
        << max_sizeStr1 << "." << endl;
}
```

## <a name="cbegin"></a>  basic_string::cbegin

Restituisce un **const** iteratore che punta al primo elemento nell'intervallo.

```cpp
const_iterator cbegin() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore ad accesso casuale che punta al primo elemento dell'intervallo o alla posizione appena oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).

### <a name="remarks"></a>Note

Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.

È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, prendere in considerazione `Container` sia un modificabili (non - **const**) contenitore di qualsiasi tipo che supporta `begin()` e `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a>  basic_string::cend

Restituisce un **const** iteratore che punta alla posizione oltre l'ultimo elemento in un intervallo.

```cpp
const_iterator cend() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore ad accesso casuale che punta appena oltre la fine dell'intervallo.

### <a name="remarks"></a>Note

`cend` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.

È possibile usare questa funzione membro anziché la funzione membro `end()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, prendere in considerazione `Container` sia un modificabili (non - **const**) contenitore di qualsiasi tipo che supporta `end()` e `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator
```

Non è consigliabile dereferenziare il valore restituito da `cend`.

## <a name="clear"></a>  basic_string::clear

Cancella tutti gli elementi di una stringa.

```cpp
void clear();
```

### <a name="remarks"></a>Note

La stringa in cui viene chiamata la funzione membro sarà vuota.

### <a name="example"></a>Esempio

```cpp
// basic_string_clear.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string  str1 ("Hello world"), str2;
   basic_string <char>::iterator str_Iter;
   cout << "The original string str1 is: ";
   for ( str_Iter = str1.begin( ); str_Iter != str1.end( ); str_Iter++ )
      cout << *str_Iter;
   cout << endl;

   str1.clear ( );
   cout << "The modified string str1 is: ";
   for ( str_Iter = str1.begin( ); str_Iter != str1.end( ); str_Iter++ )
      cout << *str_Iter;
   cout << endl;

   //For an empty string, begin is equivalent to end
   if ( str1.begin ( ) == str1.end ( ) )
      cout << "Nothing printed above because "
           << "the string str1 is empty." << endl;
   else
      cout << "The string str1 is not empty." << endl;
}
```

```Output
The original string str1 is: Hello world
The modified string str1 is:
Nothing printed above because the string str1 is empty.
```

## <a name="compare"></a>  basic_string::compare

Esegue un confronto con distinzione maiuscole/minuscole con una stringa specificata per determinare se le due stringhe sono uguali oppure se una è minore dell'altra a livello lessicografico.

```cpp
int compare(
    const basic_string<CharType, Traits, Allocator>& str) const;


int compare(
    size_type _Pos1,
    size_type _Num1,
    const basic_string<CharType, Traits, Allocator>& str) const;


int compare(
    size_type _Pos1,
    size_type _Num1,
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off,
    size_type count) const;


int compare(
    const value_type* ptr) const;


int compare(
    size_type _Pos1,
    size_type _Num1,
    const value_type* ptr) const;


int compare(
    size_type _Pos1,
    size_type _Num1,
    const value_type* ptr
    size_type _Num2) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
La stringa da confrontare con la stringa operando.

*_Pos1*<br/>
L'indice della stringa operando da cui inizia il confronto.

*_Num1*<br/>
Il numero massimo di caratteri della stringa operando da confrontare.

*_Num2*<br/>
Il numero massimo di caratteri della stringa parametro da confrontare.

*Off*<br/>
L'indice della stringa parametro da cui inizia il confronto.

*count*<br/>
Il numero massimo di caratteri della stringa parametro da confrontare.

*ptr*<br/>
La stringa C da confrontare con la stringa operando.

### <a name="return-value"></a>Valore restituito

Un valore negativo se la stringa operando è minore della stringa parametro, 0 se le due stringhe sono uguali o un valore positivo se la stringa operando è maggiore della stringa parametro.

### <a name="remarks"></a>Note

Il `compare` funzioni membro confrontano tutte o parte delle stringhe parametro e operando a seconda di quale in uso.

Nel confronto eseguito viene fatta distinzione tra maiuscole e minuscole.

### <a name="example"></a>Esempio

```cpp
// basic_string_compare.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function compares
   // an operand string to a parameter string
   int comp1;
   string s1o ( "CAB" );
   string s1p ( "CAB" );
   cout << "The operand string is: " << s1o << endl;
   cout << "The parameter string is: " << s1p << endl;
   comp1 = s1o.compare ( s1p );
   if ( comp1 < 0 )
      cout << "The operand string is less than "
           << "the parameter string." << endl;
   else if ( comp1 == 0 )
      cout << "The operand string is equal to "
           << "the parameter string." << endl;
   else
      cout << "The operand string is greater than "
           << "the parameter string." << endl;
   cout << endl;

   // The second member function compares part of
   // an operand string to a parameter string
   int comp2a, comp2b;
   string s2o ( "AACAB" );
   string s2p ( "CAB" );
   cout << "The operand string is: " << s2o << endl;
   cout << "The parameter string is: " << s2p << endl;
   comp2a = s2o.compare (  2 , 3 , s2p );
   if ( comp2a < 0 )
      cout << "The last three characters of "
           << "the operand string\n are less than "
           << "the parameter string." << endl;
   else if ( comp2a == 0 )
      cout << "The last three characters of "
           << "the operand string\n are equal to "
           << "the parameter string." << endl;
   else
      cout << "The last three characters of "
           << "the operand string\n is greater than "
           << "the parameter string." << endl;

   comp2b = s2o.compare (  0 , 3 , s2p );
   if ( comp2b < 0 )
      cout << "The first three characters of "
           << "the operand string\n are less than "
           << "the parameter string." << endl;
   else if ( comp2b == 0 )
      cout << "The first three characters of "
           << "the operand string\n are equal to "
           << "the parameter string." << endl;
   else
      cout << "The first three characters of "
           << "the operand string\n is greater than "
           << "the parameter string." << endl;
   cout << endl;

   // The third member function compares part of
   // an operand string to part of a parameter string
   int comp3a;
   string s3o ( "AACAB" );
   string s3p ( "DCABD" );
   cout << "The operand string is: " << s3o << endl;
   cout << "The parameter string is: " << s3p << endl;
   comp3a = s3o.compare (  2 , 3 , s3p , 1 , 3 );
   if ( comp3a < 0 )
      cout << "The three characters from position 2 of "
           << "the operand string are less than\n "
           << "the 3 characters parameter string "
           << "from position 1." << endl;
   else if ( comp3a == 0 )
      cout << "The three characters from position 2 of "
           << "the operand string are equal to\n "
           << "the 3 characters parameter string "
           << "from position 1." << endl;
   else
      cout << "The three characters from position 2 of "
           << "the operand string is greater than\n "
           << "the 3 characters parameter string "
           << "from position 1." << endl;
   cout << endl;

   // The fourth member function compares
   // an operand string to a parameter C-string
   int comp4a;
   string s4o ( "ABC" );
   const char* cs4p = "DEF";
   cout << "The operand string is: " << s4o << endl;
   cout << "The parameter C-string is: " << cs4p << endl;
   comp4a = s4o.compare ( cs4p );
   if ( comp4a < 0 )
      cout << "The operand string is less than "
           << "the parameter C-string." << endl;
   else if ( comp4a == 0 )
      cout << "The operand string is equal to "
           << "the parameter C-string." << endl;
   else
      cout << "The operand string is greater than "
           << "the parameter C-string." << endl;
   cout << endl;

   // The fifth member function compares part of
   // an operand string to a parameter C-string
   int comp5a;
   string s5o ( "AACAB" );
   const char* cs5p = "CAB";
   cout << "The operand string is: " << s5o << endl;
   cout << "The parameter string is: " << cs5p << endl;
   comp5a = s5o.compare (  2 , 3 , s2p );
   if ( comp5a < 0 )
      cout << "The last three characters of "
           << "the operand string\n are less than "
           << "the parameter C-string." << endl;
   else if ( comp5a == 0 )
      cout << "The last three characters of "
           << "the operand string\n are equal to "
           << "the parameter C-string." << endl;
   else
      cout << "The last three characters of "
           << "the operand string\n is greater than "
           << "the parameter C-string." << endl;
   cout << endl;

   // The sixth member function compares part of
   // an operand string to part of an equal length of
   // a parameter C-string
   int comp6a;
   string s6o ( "AACAB" );
   const char* cs6p = "ACAB";
   cout << "The operand string is: " << s6o << endl;
   cout << "The parameter C-string is: " << cs6p << endl;
   comp6a = s6o.compare (  1 , 3 , cs6p , 3 );
   if ( comp6a < 0 )
      cout << "The 3 characters from position 1 of "
           << "the operand string are less than\n "
           << "the first 3 characters of the parameter C-string."
           << endl;
   else if ( comp6a == 0 )
      cout << "The 3 characters from position 2 of "
           << "the operand string are equal to\n "
           << "the first 3 characters of the parameter C-string."
           <<  endl;
   else
      cout << "The 3 characters from position 2 of "
           << "the operand string is greater than\n "
           << "the first 3 characters of the parameter C-string."
           << endl;
   cout << endl;
}
```

```Output
The operand string is: CAB
The parameter string is: CAB
The operand string is equal to the parameter string.

The operand string is: AACAB
The parameter string is: CAB
The last three characters of the operand string
are equal to the parameter string.
The first three characters of the operand string
are less than the parameter string.

The operand string is: AACAB
The parameter string is: DCABD
The three characters from position 2 of the operand string are equal to
the 3 characters parameter string from position 1.

The operand string is: ABC
The parameter C-string is: DEF
The operand string is less than the parameter C-string.

The operand string is: AACAB
The parameter string is: CAB
The last three characters of the operand string
are equal to the parameter C-string.

The operand string is: AACAB
The parameter C-string is: ACAB
The 3 characters from position 2 of the operand string are equal to
the first 3 characters of the parameter C-string.
```

## <a name="const_iterator"></a>  basic_string::const_iterator

Tipo che fornisce un iteratore ad accesso casuale in grado di accedere e leggere un elemento **const** nella stringa.

```cpp
typedef implementation-defined const_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_iterator` non può essere usato per modificare il valore di un carattere e viene usato per scorrere una stringa in avanti.

### <a name="example"></a>Esempio

Vedere l'esempio per [begin](#begin) per un esempio di dichiarazione e utilizzo di `const_iterator`.

## <a name="const_pointer"></a>  basic_string::const_pointer

Tipo che fornisce un puntatore a un elemento **const** in una stringa.

```cpp
typedef typename allocator_type::const_pointer const_pointer;
```

### <a name="remarks"></a>Note

Il tipo è sinonimo di `allocator_type::const_pointer`.

Per il tipo `string`, è equivalente a `char*`.

I puntatori dichiarati come const devono essere inizializzati quando vengono dichiarati. I puntatori const puntano sempre alla stessa posizione di memoria e possono puntare a dati costanti o non costanti.

### <a name="example"></a>Esempio

```cpp
// basic_string_const_ptr.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   basic_string<char>::const_pointer pstr1a = "In Here";
   const char *cstr1c = "Out There";

   cout << "The string pstr1a is: " << pstr1a <<  "." << endl;
   cout << "The C-string cstr1c is: " << cstr1c << "." << endl;
}
```

```Output
The string pstr1a is: In Here.
The C-string cstr1c is: Out There.
```

## <a name="const_reference"></a>  basic_string::const_reference

Tipo che fornisce un riferimento a un elemento **const** archiviato in una stringa per la lettura e l'esecuzione di operazioni **const**.

```cpp
typedef typename allocator_type::const_reference const_reference;
```

### <a name="remarks"></a>Note

Un tipo `const_reference` non può essere usato per modificare il valore di un elemento.

Il tipo è sinonimo di `allocator_type::const_reference`. Per la stringa `type`, è equivalente a const `char&`.

### <a name="example"></a>Esempio

Vedere l'esempio per [at](#at) per un esempio di dichiarazione e utilizzo di `const_reference`.

## <a name="const_reverse_iterator"></a>  basic_string::const_reverse_iterator

Tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi elemento **const** nella stringa.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `const_reverse_iterator` non può modificare il valore di un carattere e viene usato per scorrere la stringa in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio per [rbegin](#rbegin) per un esempio di dichiarazione e utilizzo di `const_reverse_iterator`.

## <a name="copy"></a>  basic_string::copy

Copia al massimo un numero specificato di caratteri da una posizione indicizzata all'interno di una stringa di origine in una matrice di caratteri di destinazione.

Questo metodo è potenzialmente pericoloso poiché si basa sul controllo dei valori passati effettuato dal chiamante. In alternativa è possibile usare [basic_string::_Copy_s](#copy_s).

```cpp
size_type copy(
    value_type* ptr,
    size_type count,
    size_type _Off = 0) const;
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Matrice di caratteri di destinazione in cui copiare gli elementi.

_ *Conteggio* il numero di caratteri da copiare, al massimo, dalla stringa di origine.

*Off*<br/>
Posizione iniziale nella stringa di origine da cui effettuare le copie.

### <a name="return-value"></a>Valore restituito

Numero di caratteri attualmente copiati.

### <a name="remarks"></a>Note

Non viene aggiunto un carattere null alla fine della copia.

### <a name="example"></a>Esempio

```cpp
// basic_string_copy.cpp
// compile with: /EHsc /W3
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ( "Hello World" );
   basic_string <char>::iterator str_Iter;
   char array1 [ 20 ] = { 0 };
   char array2 [ 10 ] = { 0 };
   basic_string <char>:: pointer array1Ptr = array1;
   basic_string <char>:: value_type *array2Ptr = array2;

   cout << "The original string str1 is: ";
   for ( str_Iter = str1.begin( ); str_Iter != str1.end( ); str_Iter++ )
      cout << *str_Iter;
   cout << endl;

   basic_string <char>:: size_type nArray1;
   // Note: string::copy is potentially unsafe, consider
   // using string::_Copy_s instead.
   nArray1 = str1.copy ( array1Ptr , 12 );  // C4996
   cout << "The number of copied characters in array1 is: "
        << nArray1 << endl;
   cout << "The copied characters array1 is: " << array1 << endl;

   basic_string <char>:: size_type nArray2;
   // Note: string::copy is potentially unsafe, consider
   // using string::_Copy_s instead.
   nArray2 = str1.copy ( array2Ptr , 5 , 6  );  // C4996
   cout << "The number of copied characters in array2 is: "
           << nArray2 << endl;
   cout << "The copied characters array2 is: " << array2Ptr << endl;
}
```

```Output
The original string str1 is: Hello World
The number of copied characters in array1 is: 11
The copied characters array1 is: Hello World
The number of copied characters in array2 is: 5
The copied characters array2 is: World
```

## <a name="crbegin"></a>  basic_string::crbegin

Restituisce un iteratore const che punta al primo elemento in una stringa invertita.

```cpp
const_reverse_iterator crbegin() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore inverso che punta oltre la fine della stringa. La posizione indica l'inizio della stringa inversa.

## <a name="crend"></a>  basic_string::crend

Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in una stringa invertita.

```cpp
const_reverse_iterator crend() const;
```

### <a name="return-value"></a>Valore restituito

Iteratore const inverso che punta alla posizione successiva all'ultimo elemento in una stringa invertita, ovvero la posizione che precedeva il primo elemento nella stringa non invertita.

### <a name="remarks"></a>Note

## <a name="copy_s"></a>  basic_string::_Copy_s

Copia al massimo un numero specificato di caratteri da una posizione indicizzata all'interno di una stringa di origine in una matrice di caratteri di destinazione.

```cpp
size_type _Copy_s(
    value_type* dest,
    size_type dest_size,
    size_type count,
    size_type _Off = 0) const;
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Matrice di caratteri di destinazione in cui copiare gli elementi.

*dest_size*<br/>
Il valore pari *dest*.

_ *Conteggio* il numero di caratteri da copiare, al massimo, dalla stringa di origine.

*Off*<br/>
Posizione iniziale nella stringa di origine da cui effettuare le copie.

### <a name="return-value"></a>Valore restituito

Numero di caratteri attualmente copiati.

### <a name="remarks"></a>Note

Non viene aggiunto un carattere null alla fine della copia.

### <a name="example"></a>Esempio

```cpp
// basic_string__Copy_s.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
    using namespace std;
    string str1("Hello World");
    basic_string<char>::iterator str_Iter;
    const int array1_size = 20;
    char array1[array1_size] = { 0 };
    const int array2_size = 10;
    char array2[array2_size] = { 0 };
    basic_string<char>:: pointer array1Ptr = array1;
    basic_string<char>:: value_type *array2Ptr = array2;

    cout << "The original string str1 is: ";
    for (str_Iter = str1.begin(); str_Iter != str1.end(); str_Iter++)
        cout << *str_Iter;
    cout << endl;

    basic_string<char>::size_type nArray1;
    nArray1 = str1._Copy_s(array1Ptr, array1_size, 12);
    cout << "The number of copied characters in array1 is: "
         << nArray1 << endl;
    cout << "The copied characters array1 is: " << array1 << endl;

    basic_string<char>:: size_type nArray2;
    nArray2 = str1._Copy_s(array2Ptr, array2_size, 5, 6);
    cout << "The number of copied characters in array2 is: "
         << nArray2 << endl;
    cout << "The copied characters array2 is: " << array2Ptr << endl;
}
```

```Output
The original string str1 is: Hello World
The number of copied characters in array1 is: 11
The copied characters array1 is: Hello World
The number of copied characters in array2 is: 5
The copied characters array2 is: World
```

## <a name="data"></a>  basic_string::data

Converte il contenuto di una stringa in una matrice di caratteri.

```cpp
const value_type *data() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore al primo elemento della matrice che include il contenuto della stringa o, per una matrice vuota, un puntatore non Null che non può essere dereferenziato.

### <a name="remarks"></a>Note

Gli oggetti di tipo string appartenenti alla classe modello C++ basic_string \<char> non terminano necessariamente con null. Il tipo restituito per `data` non è una stringa C valida, poiché ottiene accodato nessun carattere null. Il carattere null ' \0 ' viene usato come carattere speciale in una stringa C per contrassegnare la fine della stringa ma non ha alcun significato particolare in un oggetto di tipo string e può essere parte dell'oggetto stringa come qualsiasi altro carattere.

È una conversione automatica dal **const char** <strong>\*</strong> in stringhe, ma la stringa di classe non fornisce conversioni automatiche di stringhe in formato C in oggetti di tipo **basic_string \<char >**.

La stringa restituita non deve essere modificata o eliminata poiché la modifica potrebbe invalidare il puntatore alla stringa in quanto la stringa ha una durata limitata ed è di proprietà della classe string.

### <a name="example"></a>Esempio

```cpp
// basic_string_data.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   string str1 ( "Hello world" );
   cout << "The original string object str1 is: "
        << str1 << endl;
   cout << "The length of the string object str1 = "
        << str1.length ( ) << endl << endl;

   // Converting a string to an array of characters
   const char *ptr1 = 0;
   ptr1= str1.data ( );
   cout << "The modified string object ptr1 is: " << ptr1
        << endl;
   cout << "The length of character array str1 = "
        << strlen ( ptr1) << endl << endl;

   // Converting a string to a C-style string
   const char *c_str1 = str1.c_str ( );
   cout << "The C-style string c_str1 is: " << c_str1
        << endl;
   cout << "The length of C-style string str1 = "
        << strlen ( c_str1) << endl << endl;
}
```

```Output
The original string object str1 is: Hello world
The length of the string object str1 = 11

The modified string object ptr1 is: Hello world
The length of character array str1 = 11

The C-style string c_str1 is: Hello world
The length of C-style string str1 = 11
```

## <a name="difference_type"></a>  basic_string::difference_type

Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno della stessa stringa.

```cpp
typedef typename allocator_type::difference_type difference_type;
```

### <a name="remarks"></a>Note

Il tipo di valore integer con segno descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due elementi qualsiasi della sequenza controllata.

Per il tipo `string`, è equivalente a `ptrdiff_t`.

### <a name="example"></a>Esempio

```cpp
// basic_string_diff_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ( "quintillion" );
   cout << "The original string str1 is: " << str1 << endl;
   basic_string <char>::size_type indexChFi, indexChLi;

   indexChFi = str1.find_first_of ( "i" );
   indexChLi = str1.find_last_of ( "i" );
   basic_string<char>::difference_type diffi = indexChLi - indexChFi;

   cout << "The first character i is at position: "
        << indexChFi << "." << endl;
   cout << "The last character i is at position: "
        << indexChLi << "." << endl;
   cout << "The difference is: " << diffi << "." << endl;
}
```

```Output
The original string str1 is: quintillion
The first character i is at position: 2.
The last character i is at position: 8.
The difference is: 6.
```

## <a name="empty"></a>  basic_string::empty

Verifica se la stringa contiene caratteri.

```cpp
bool empty() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto stringa non contiene caratteri; **false** se contiene almeno un carattere.

### <a name="remarks"></a>Note

La funzione membro è equivalente a [size](#size) == 0.

### <a name="example"></a>Esempio

```cpp
// basic_string_empty.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main() {
   using namespace std;

   bool b1, b2;

   string str1 ("Hello world");
   cout << "The original string object str1 is: " << str1 << endl;
   b1 = str1.empty();
   if (b1)
      cout << "The string object str1 is empty." << endl;
   else
      cout << "The string object str1 is not empty." << endl;
   cout << endl;

   // An example of an empty string object
   string str2;
   b2 = str2.empty();
   if (b2)
      cout << "The string object str2 is empty." << endl;
   else
      cout << "The string object str2 is not empty." << endl;
}
```

## <a name="end"></a>  basic_string::end

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in una stringa.

```cpp
const_iterator end() const;


iterator end();
```

### <a name="return-value"></a>Valore restituito

Restituisce un iteratore ad accesso casuale che punta alla posizione successiva all'ultimo elemento in una stringa.

### <a name="remarks"></a>Note

`end` viene spesso usato per verificare se un iteratore ha raggiunto la fine della stringa. Non è consigliabile dereferenziare il valore restituito da `end`.

Se il valore restituito di `end` viene assegnato a `const_iterator`, l'oggetto stringa non può essere modificato. Se il valore restituito di `end` viene assegnato a un `iterator`, l'oggetto stringa può essere modificato.

### <a name="example"></a>Esempio

```cpp
// basic_string_end.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ( "No way out." ), str2;
   basic_string <char>::iterator str_Iter, str1_Iter, str2_Iter;
   basic_string <char>::const_iterator str1_cIter;

   str1_Iter = str1.end ( );
   str1_Iter--;
   str1_Iter--;
   cout << "The last character-letter of the string str1 is: " << *str1_Iter << endl;
   cout << "The full orginal string str1 is: " << str1 << endl;

   // end used to test when an iterator has reached the end of its string
   cout << "The string is now: ";
   for ( str_Iter = str1.begin( ); str_Iter != str1.end( ); str_Iter++ )
      cout << *str_Iter;
   cout << endl;

   // The dereferenced iterator can be used to modify a character
*str1_Iter = 'T';
   cout << "The last character-letter of the modified str1 is now: "
        << *str1_Iter << endl;
   cout << "The modified string str1 is now: " << str1 << endl;

   // The following line would be an error because iterator is const
   // *str1_cIter = 'T';

   // For an empty string, end is equivalent to begin
   if ( str2.begin( ) == str2.end ( ) )
      cout << "The string str2 is empty." << endl;
   else
      cout << "The stringstr2  is not empty." << endl;
}
```

```Output
The last character-letter of the string str1 is: t
The full orginal string str1 is: No way out.
The string is now: No way out.
The last character-letter of the modified str1 is now: T
The modified string str1 is now: No way ouT.
The string str2 is empty.
```

## <a name="erase"></a>  basic_string::erase

Rimuove un elemento o un intervallo di elementi in una stringa da una posizione specificata.

```cpp
iterator erase(
    iterator first,
    iterator last);

iterator erase(
    iterator _It);

basic_string<CharType, Traits, Allocator>& erase(
    size_type _Pos = 0,
    size_type count = npos);
```

### <a name="parameters"></a>Parametri

*first*<br/>
Iteratore che punta alla posizione del primo elemento nell'intervallo da cancellare.

*last*<br/>
Iteratore che punta alla posizione immediatamente successiva all'ultimo elemento nell'intervallo da cancellare.

*_It*<br/>
Iteratore che punta alla posizione dell'elemento nella stringa da cancellare.

*POS*<br/>
Indice del primo carattere della stringa da rimuovere.

*count*<br/>
Numero di elementi che verranno rimossi se ne sono presenti altrettanti nell'intervallo della stringa che inizia con *_Pos*.

### <a name="return-value"></a>Valore restituito

Per le prime due funzioni membro, un iteratore che punta al primo carattere dopo l'ultimo carattere rimosso dalla funzione membro. Per la terza funzione membro, un riferimento all'oggetto stringa da cui gli elementi devono essere cancellati.

### <a name="remarks"></a>Note

La terza funzione membro restituisce **\*this**.

### <a name="example"></a>Esempio

```cpp
// basic_string_erase.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The 1st member function using a range demarcated
   // by iterators
   string str1 ( "Hello world" );
   basic_string <char>::iterator str1_Iter;
   cout << "The original string object str1 is: "
        << str1 << "." << endl;
   str1_Iter = str1.erase ( str1.begin ( ) + 3 , str1.end ( ) - 1 );
   cout << "The first element after those removed is: "
        << *str1_Iter << "." << endl;
   cout << "The modified string object str1 is: " << str1
           << "." << endl << endl;

   // The 2nd member function erasing a char pointed to
   // by an iterator
   string str2 ( "Hello World" );
   basic_string <char>::iterator str2_Iter;
   cout << "The original string object str2 is: " << str2
        << "." << endl;
   str2_Iter = str2.erase ( str2.begin ( ) + 5 );
   cout << "The first element after those removed is: "
        << *str2_Iter << "." << endl;
   cout << "The modified string object str2 is: " << str2
        << "." << endl << endl;

   // The 3rd member function erasing a number of chars
   // after a char
   string str3 ( "Hello computer" ), str3m;
   basic_string <char>::iterator str3_Iter;
   cout << "The original string object str3 is: "
        << str3 << "." << endl;
   str3m = str3.erase ( 6 , 8 );
   cout << "The modified string object str3m is: "
        << str3m << "." << endl;
}
```

```Output
The original string object str1 is: Hello world.
The first element after those removed is: d.
The modified string object str1 is: Held.

The original string object str2 is: Hello World.
The first element after those removed is: W.
The modified string object str2 is: HelloWorld.

The original string object str3 is: Hello computer.
The modified string object str3m is: Hello .
```

## <a name="find"></a>  basic_string::find

Cerca in avanti in una stringa la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.

```cpp
size_type find(
    value_type _Ch,
    size_type _Off = 0) const;


size_type find(
    const value_type* ptr,
    size_type _Off = 0) const;


size_type find(
    const value_type* ptr,
    size_type _Off,
    size_type count) const;


size_type find(
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off = 0) const;
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Valore di carattere che la funzione membro deve cercare.

*Off*<br/>
Indice della posizione da cui partirà la ricerca.

*ptr*<br/>
Stringa C che la funzione membro deve cercare.

*count*<br/>
Numero di caratteri nella stringa C, a partire dal primo, che deve essere ricercato dalla funzione membro.

*str*<br/>
Stringa che la funzione membro deve cercare.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

### <a name="example"></a>Esempio

```cpp
// basic_string_find.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string
   string str1 ( "Hello Everyone" );
   cout << "The original string str1 is: " << str1 << endl;
   basic_string <char>::size_type indexCh1a, indexCh1b;

   indexCh1a = str1.find ( "e" , 3 );
   if (indexCh1a != string::npos )
      cout << "The index of the 1st 'e' found after the 3rd"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'e' was not found in str1 ." << endl;

   indexCh1b = str1.find ( "x" );
   if (indexCh1b != string::npos )
      cout << "The index of the 'x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The Character 'x' was not found in str1."
           << endl << endl;

   // The second member function searches a string
   // for a substring as specified by a C-string
   string str2 ( "Let me make this perfectly clear." );
   cout << "The original string str2 is: " << str2 << endl;
   basic_string <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "perfect";
   indexCh2a = str2.find ( cstr2 , 5 );
   if ( indexCh2a != string::npos )
      cout << "The index of the 1st element of 'perfect' "
           << "after\n the 5th position in str2 is: "
           << indexCh2a << endl;
   else
      cout << "The substring 'perfect' was not found in str2 ."
           << endl;

   const char *cstr2b = "imperfectly";
   indexCh2b = str2.find ( cstr2b , 0 );
   if (indexCh2b != string::npos )
      cout << "The index of the 1st element of 'imperfect' "
           << "after\n the 5th position in str3 is: "
           << indexCh2b << endl;
   else
      cout << "The substring 'imperfect' was not found in str2 ."
           << endl << endl;

   // The third member function searches a string
   // for a substring as specified by a C-string
   string str3 ( "This is a sample string for this program" );
   cout << "The original string str3 is: " << str3 << endl;
   basic_string <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "sample";
   indexCh3a = str3.find ( cstr3a );
   if ( indexCh3a != string::npos )
      cout << "The index of the 1st element of sample "
           << "in str3 is: " << indexCh3a << endl;
   else
      cout << "The substring 'perfect' was not found in str3 ."
           << endl;

   const char *cstr3b = "for";
   indexCh3b = str3.find ( cstr3b , indexCh3a + 1 , 2 );
   if (indexCh3b != string::npos )
      cout << "The index of the next occurrence of 'for' is in "
           << "str3 begins at: " << indexCh3b << endl << endl;
   else
      cout << "There is no next occurrence of 'for' in str3 ."
           << endl << endl;

   // The fourth member function searches a string
   // for a substring as specified by a string
   string str4 ( "clearly this perfectly unclear." );
   cout << "The original string str4 is: " << str4 << endl;
   basic_string <char>::size_type indexCh4a, indexCh4b;

   string str4a ( "clear" );
   indexCh4a = str4.find ( str4a , 5 );
   if ( indexCh4a != string::npos )
      cout << "The index of the 1st element of 'clear' "
           << "after\n the 5th position in str4 is: "
           << indexCh4a << endl;
   else
      cout << "The substring 'clear' was not found in str4 ."
           << endl;

   string str4b ( "clear" );
   indexCh4b = str4.find ( str4b );
   if (indexCh4b != string::npos )
      cout << "The index of the 1st element of 'clear' "
           << "in str4 is: "
           << indexCh4b << endl;
   else
      cout << "The substring 'clear' was not found in str4 ."
           << endl << endl;
}
```

```Output
The original string str1 is: Hello Everyone
The index of the 1st 'e' found after the 3rd position in str1 is: 8
The Character 'x' was not found in str1.

The original string str2 is: Let me make this perfectly clear.
The index of the 1st element of 'perfect' after
the 5th position in str2 is: 17
The substring 'imperfect' was not found in str2 .

The original string str3 is: This is a sample string for this program
The index of the 1st element of sample in str3 is: 10
The index of the next occurrence of 'for' is in str3 begins at: 24

The original string str4 is: clearly this perfectly unclear.
The index of the 1st element of 'clear' after
the 5th position in str4 is: 25
The index of the 1st element of 'clear' in str4 is: 0
```

## <a name="find_first_not_of"></a>  basic_string::find_first_not_of

Cerca in una stringa il primo carattere che non è un elemento di una stringa specificata.

```cpp
size_type find_first_not_of(
    value_type _Ch,
    size_type _Off = 0) const;


size_type find_first_not_of(
    const value_type* ptr,
    size_type _Off = 0) const;


size_type find_first_not_of(
    const value_type* ptr,
    size_type _Off,
    size_type count) const;


size_type find_first_not_of(
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off = 0) const;
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Valore di carattere che la funzione membro deve cercare.

*Off*<br/>
Indice della posizione da cui partirà la ricerca.

*ptr*<br/>
Stringa C che la funzione membro deve cercare.

*count*<br/>
Numero di caratteri nella stringa C, a partire dal primo, che deve essere ricercato dalla funzione membro.

*str*<br/>
Stringa che la funzione membro deve cercare.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

### <a name="example"></a>Esempio

```cpp
// basic_string_find_first_not_of.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string
   string str1 ( "xddd-1234-abcd" );
   cout << "The original string str1 is: " << str1 << endl;
   basic_string <char>::size_type indexCh1a, indexCh1b;
   static const basic_string <char>::size_type npos = -1;

   indexCh1a = str1.find_first_not_of ( "d" , 2 );
   if ( indexCh1a != npos )
      cout << "The index of the 1st 'd' found after the 3rd"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'd' was not found in str1 ." << endl;

   indexCh1b = str1.find_first_not_of  ( "x" );
   if (indexCh1b != npos )
      cout << "The index of the 'non x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The character 'non x' was not found in str1."
           << endl << endl;

   // The second member function searches a string
   // for a substring as specified by a C-string
   string str2 ( "BBB-1111" );
   cout << "The original string str2 is: " << str2 << endl;
   basic_string <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "B1";
   indexCh2a = str2.find_first_not_of ( cstr2 , 6 );
   if ( indexCh2a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of 'B1' in str2 after\n the 6th "
           << "position is: " << indexCh2a << endl;
   else
      cout << "Elements of the substring 'B1' were not"
           << "\n found in str2 after the 6th position."
           << endl;

   const char *cstr2b = "B2";
   indexCh2b = str2.find_first_not_of ( cstr2b );
   if ( indexCh2b != npos )
      cout << "The index of the 1st element of 'B2' "
           << "after\n the 0th position in str2 is: "
           << indexCh2b << endl << endl;
   else
      cout << "The substring 'B2' was not found in str2 ."
           << endl << endl << endl;

   // The third member function searches a string
   // for a substring as specified by a C-string
   string str3 ( "444-555-GGG" );
   cout << "The original string str3 is: " << str3 << endl;
   basic_string <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "45G";
   indexCh3a = str3.find_first_not_of ( cstr3a );
   if ( indexCh3a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element in str3\n other than one of the "
           << "characters in '45G' is: " << indexCh3a
           << endl;
   else
      cout << "Elements in str3 contain only characters "
           << " in the string '45G'. "
           << endl;

   const char *cstr3b = "45G";
   indexCh3b = str3.find_first_not_of ( cstr3b , indexCh3a + 1 , 2 );
   if ( indexCh3b != npos )
      cout << "The index of the second occurrence of an "
           << "element of '45G' in str3\n after the 0th "
           << "position is: " << indexCh3b << endl << endl;
   else
      cout << "Elements in str3 contain only characters "
           << " in the string  '45G'. "
           << endl  << endl;

   // The fourth member function searches a string
   // for a substring as specified by a string
   string str4 ( "12-ab-12-ab" );
   cout << "The original string str4 is: " << str4 << endl;
   basic_string <char>::size_type indexCh4a, indexCh4b;

   string str4a ( "ba3" );
   indexCh4a = str4.find_first_not_of ( str4a , 5 );
   if (indexCh4a != npos )
      cout << "The index of the 1st non occurrence of an "
           << "element of 'ba3' in str4 after\n the 5th "
           << "position is: " << indexCh4a << endl;
   else
      cout << "Elements other than those in the substring"
           << " 'ba3' were not found in the string str4."
           << endl;

   string str4b ( "12" );
   indexCh4b = str4.find_first_not_of ( str4b  );
   if (indexCh4b != npos )
      cout << "The index of the 1st non occurrence of an "
           << "element of '12' in str4 after\n the 0th "
           << "position is: " << indexCh4b << endl;
   else
      cout << "Elements other than those in the substring"
           << " '12' were not found in the string str4."
           << endl;
}
```

```Output
The original string str1 is: xddd-1234-abcd
The index of the 1st 'd' found after the 3rd position in str1 is: 4
The index of the 'non x' found in str1 is: 1

The original string str2 is: BBB-1111
Elements of the substring 'B1' were not
found in str2 after the 6th position.
The index of the 1st element of 'B2' after
the 0th position in str2 is: 3

The original string str3 is: 444-555-GGG
The index of the 1st occurrence of an element in str3
other than one of the characters in '45G' is: 3
The index of the second occurrence of an element of '45G' in str3
after the 0th position is: 7

The original string str4 is: 12-ab-12-ab
The index of the 1st non occurrence of an element of 'ba3' in str4 after
the 5th position is: 5
The index of the 1st non occurrence of an element of '12' in str4 after
the 0th position is: 2
```

## <a name="find_first_of"></a>  basic_string::find_first_of

Cerca in una stringa il primo carattere che corrisponde a un elemento di una stringa specificata.

```cpp
size_type find_first_of(
    value_type _Ch,
    size_type _Off = 0) const;


size_type find_first_of(
    const value_type* ptr,
    size_type _Off = 0) const;


size_type find_first_of(
    const value_type* ptr,
    size_type _Off,
    size_type count) const;


size_type find_first_of(
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off = 0) const;
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Valore di carattere che la funzione membro deve cercare.

*Off*<br/>
Indice della posizione da cui partirà la ricerca.

*ptr*<br/>
Stringa C che la funzione membro deve cercare.

*count*<br/>
Numero di caratteri nella stringa C, a partire dal primo, che deve essere ricercato dalla funzione membro.

*str*<br/>
Stringa che la funzione membro deve cercare.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

### <a name="example"></a>Esempio

```cpp
// basic_string_find_first_of.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string
   string str1 ( "abcd-1234-abcd-1234" );
   cout << "The original string str1 is: " << str1 << endl;
   basic_string <char>::size_type indexCh1a, indexCh1b;
   static const basic_string <char>::size_type npos = -1;

   indexCh1a = str1.find_first_of ( "d" , 5 );
   if ( indexCh1a != npos )
      cout << "The index of the 1st 'd' found after the 5th"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'd' was not found in str1 ." << endl;

   indexCh1b = str1.find_first_of ( "x" );
   if ( indexCh1b != npos )
      cout << "The index of the 'x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The character 'x' was not found in str1."
           << endl << endl;

   // The second member function searches a string
   // for any element of a substring as specified by a C-string
   string str2 ( "ABCD-1234-ABCD-1234" );
   cout << "The original string str2 is: " << str2 << endl;
   basic_string <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "B1";
   indexCh2a = str2.find_first_of ( cstr2 , 6 );
   if ( indexCh2a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of 'B1' in str2 after\n the 6th "
           << "position is: " << indexCh2a << endl;
   else
      cout << "Elements of the substring 'B1' were not "
           << "found in str2 after the 10th position."
           << endl;

   const char *cstr2b = "D2";
   indexCh2b = str2.find_first_of ( cstr2b );
   if ( indexCh2b != npos )
      cout << "The index of the 1st element of 'D2' "
           << "after\n the 0th position in str2 is: "
           << indexCh2b << endl << endl;
   else
      cout << "The substring 'D2' was not found in str2 ."
           << endl << endl << endl;

   // The third member function searches a string
   // for any element of a substring as specified by a C-string
   string str3 ( "123-abc-123-abc-456-EFG-456-EFG" );
   cout << "The original string str3 is: " << str3 << endl;
   basic_string <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "5G";
   indexCh3a = str3.find_first_of ( cstr3a );
   if ( indexCh3a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of '5G' in str3 after\n the 0th "
           << "position is: " << indexCh3a << endl;
   else
      cout << "Elements of the substring '5G' were not "
           << "found in str3\n after the 0th position."
           << endl;

   const char *cstr3b = "5GF";
   indexCh3b = str3.find_first_of  ( cstr3b , indexCh3a + 1 , 2 );
   if (indexCh3b != npos )
      cout << "The index of the second occurrence of an "
           << "element of '5G' in str3\n after the 0th "
           << "position is: " << indexCh3b << endl << endl;
   else
      cout << "Elements of the substring '5G' were not "
           << "found in str3\n after the first occurrrence."
           << endl << endl;

   // The fourth member function searches a string
   // for any element of a substring as specified by a string
   string str4 ( "12-ab-12-ab" );
   cout << "The original string str4 is: " << str4 << endl;
   basic_string <char>::size_type indexCh4a, indexCh4b;

   string str4a ( "ba3" );
   indexCh4a = str4.find_first_of ( str4a , 5 );
   if ( indexCh4a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of 'ba3' in str4 after\n the 5th "
           << "position is: " << indexCh4a << endl;
   else
      cout << "Elements of the substring 'ba3' were not "
           << "found in str4\n after the 0th position."
           << endl;

   string str4b ( "a2" );
   indexCh4b = str4.find_first_of ( str4b );
   if ( indexCh4b != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of 'a2' in str4 after\n the 0th "
           << "position is: " << indexCh4b << endl;
   else
      cout << "Elements of the substring 'a2' were not "
           << "found in str4\n after the 0th position."
           << endl;
}
```

```Output
The original string str1 is: abcd-1234-abcd-1234
The index of the 1st 'd' found after the 5th position in str1 is: 13
The character 'x' was not found in str1.

The original string str2 is: ABCD-1234-ABCD-1234
The index of the 1st occurrence of an element of 'B1' in str2 after
the 6th position is: 11
The index of the 1st element of 'D2' after
the 0th position in str2 is: 3

The original string str3 is: 123-abc-123-abc-456-EFG-456-EFG
The index of the 1st occurrence of an element of '5G' in str3 after
the 0th position is: 17
The index of the second occurrence of an element of '5G' in str3
after the 0th position is: 22

The original string str4 is: 12-ab-12-ab
The index of the 1st occurrence of an element of 'ba3' in str4 after
the 5th position is: 9
The index of the 1st occurrence of an element of 'a2' in str4 after
the 0th position is: 1
```

## <a name="find_last_not_of"></a>  basic_string::find_last_not_of

Cerca in una stringa l'ultimo carattere che non è un elemento di una stringa specificata.

```cpp
size_type find_last_not_of(
    value_type _Ch,
    size_type _Off = npos) const;


size_type find_last_not_of(
    const value_type* ptr,
    size_type _Off = npos) const;


size_type find_last_not_of(
    const value_type* ptr,
    size_type _Off,
    size_type count) const;


size_type find_last_not_of(
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off = npos) const;
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Valore di carattere che la funzione membro deve cercare.

*Off*<br/>
Indice della posizione in cui finirà la ricerca.

*ptr*<br/>
Stringa C che la funzione membro deve cercare.

*count*<br/>
Numero di caratteri nella stringa C, a partire dal primo, che deve essere ricercato dalla funzione membro.

*str*<br/>
Stringa che la funzione membro deve cercare.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

### <a name="example"></a>Esempio

```cpp
// basic_string_find_last_not_of.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string
   string str1 ( "dddd-1dd4-abdd" );
   cout << "The original string str1 is: " << str1 << endl;
   basic_string <char>::size_type indexCh1a, indexCh1b;
   static const basic_string <char>::size_type npos = -1;

   indexCh1a = str1.find_last_not_of ( "d" , 7 );
   if ( indexCh1a != npos )
      cout << "The index of the last non 'd'\n found before the "
           << "7th position in str1 is: " << indexCh1a << endl;
   else
      cout << "The non 'd' character was not found ." << endl;

   indexCh1b = str1.find_last_not_of  ( "d" );
   if ( indexCh1b != npos )
      cout << "The index of the non 'd' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The Character 'non x' was not found in str1."
           << endl << endl;

   // The second member function searches a string
   // for a substring as specified by a C-string
   string str2 ( "BBB-1111" );
   cout << "The original string str2 is: " << str2 << endl;
   basic_string <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "B1";
   indexCh2a = str2.find_last_not_of  ( cstr2 , 6 );
   if ( indexCh2a != npos )
      cout << "The index of the last occurrence of a "
           << "element\n not of 'B1' in str2 before the 6th "
           << "position is: " << indexCh2a << endl;
   else
      cout << "Elements not of the substring 'B1' were not "
           << "\n found in str2 before the 6th position."
           << endl;

   const char *cstr2b = "B-1";
   indexCh2b = str2.find_last_not_of  ( cstr2b );
   if ( indexCh2b != npos )
      cout << "The index of the last element not "
           << "in 'B-1'\n is: "
           << indexCh2b << endl << endl;
   else
      cout << "The elements of the substring 'B-1' were "
           << "not found in str2 ."
           << endl << endl;

   // The third member function searches a string
   // for a substring as specified by a C-string
   string str3 ( "444-555-GGG" );
   cout << "The original string str3 is: " << str3 << endl;
   basic_string <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "45G";
   indexCh3a = str3.find_last_not_of ( cstr3a );
   if ( indexCh3a != npos )
      cout << "The index of the last occurrence of an "
           << "element in str3\n other than one of the "
           << "characters in '45G' is: " << indexCh3a
           << endl;
   else
      cout << "Elements in str3 contain only characters "
           << " in the string  '45G'. "
           << endl;

   const char *cstr3b = "45G";
   indexCh3b = str3.find_last_not_of ( cstr3b , 6 , indexCh3a - 1 );
   if (indexCh3b != npos )
      cout << "The index of the penultimate occurrence of an "
           << "element\n not in '45G' in str3 is: "
           << indexCh3b << endl << endl;
   else
      cout << "Elements in str3 contain only characters "
           << " in the string '45G'. "
           << endl  << endl;

   // The fourth member function searches a string
   // for a substring as specified by a string
   string str4 ( "12-ab-12-ab" );
   cout << "The original string str4 is: " << str4 << endl;
   basic_string <char>::size_type indexCh4a, indexCh4b;

   string str4a ( "b-a" );
   indexCh4a = str4.find_last_not_of  ( str4a , 5 );
   if ( indexCh4a != npos )
      cout << "The index of the last occurrence of an "
           << "element not\n in 'b-a' in str4 before the 5th "
           << "position is: " << indexCh4a << endl;
   else
      cout << "Elements other than those in the substring"
           << " 'b-a' were not found in the string str4."
           << endl;

   string str4b ( "12" );
   indexCh4b = str4.find_last_not_of ( str4b  );
   if ( indexCh4b != npos )
      cout << "The index of the last occurrence of an "
           << "element not in '12'\n in str4 before the end "
           << "position is: " << indexCh4b << endl;
   else
      cout << "Elements other than those in the substring"
           << " '12'\n were not found in the string str4."
           << endl;
}
```

```Output
The original string str1 is: dddd-1dd4-abdd
The index of the last non 'd'
found before the 7th position in str1 is: 5
The index of the non 'd' found in str1 is: 11

The original string str2 is: BBB-1111
The index of the last occurrence of a element
not of 'B1' in str2 before the 6th position is: 3
The elements of the substring 'B-1' were not found in str2 .

The original string str3 is: 444-555-GGG
The index of the last occurrence of an element in str3
other than one of the characters in '45G' is: 7
The index of the penultimate occurrence of an element
not in '45G' in str3 is: 3

The original string str4 is: 12-ab-12-ab
The index of the last occurrence of an element not
in 'b-a' in str4 before the 5th position is: 1
The index of the last occurrence of an element not in '12'
in str4 before the end position is: 10
```

## <a name="find_last_of"></a>  basic_string::find_last_of

Cerca in una stringa l'ultimo carattere che corrisponde a un elemento di una stringa specificata.

```cpp
size_type find_last_of(
    value_type _Ch,
    size_type _Off = npos) const;


size_type find_last_of(
    const value_type* ptr,
    size_type _Off = npos) const;


size_type find_last_of(
    const value_type* ptr,
    size_type _Off,
    size_type count) const;


size_type find_last_of(
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off = npos) const;
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Valore di carattere che la funzione membro deve cercare.

*Off*<br/>
Indice della posizione in cui finirà la ricerca.

*ptr*<br/>
Stringa C che la funzione membro deve cercare.

*count*<br/>
Numero di caratteri nella stringa C, a partire dal primo, che deve essere ricercato dalla funzione membro.

*str*<br/>
Stringa che la funzione membro deve cercare.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo carattere della sottostringa trovato; se la ricerca ha esito negativo, `npos`.

### <a name="example"></a>Esempio

```cpp
// basic_string_find_last_of.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string
   string str1 ( "abcd-1234-abcd-1234" );
   cout << "The original string str1 is: " << str1 << endl;
   basic_string <char>::size_type indexCh1a, indexCh1b;
   static const basic_string <char>::size_type npos = -1;

   indexCh1a = str1.find_last_of ( "d" , 14 );
   if ( indexCh1a != npos )
      cout << "The index of the last 'd' found before the 14th"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'd' was not found in str1 ." << endl;

   indexCh1b = str1.find_first_of ( "x" );
   if ( indexCh1b != npos )
      cout << "The index of the 'x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The character 'x' was not found in str1."
           << endl << endl;

   // The second member function searches a string
   // for a substring as specified by a C-string
   string str2 ( "ABCD-1234-ABCD-1234" );
   cout << "The original string str2 is: " << str2 << endl;
   basic_string <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "B1";
   indexCh2a = str2.find_last_of  ( cstr2 , 12 );
   if (indexCh2a != npos )
      cout << "The index of the last occurrence of an "
           << "element of 'B1' in str2 before\n the 12th "
           << "position is: " << indexCh2a << endl;
   else
      cout << "Elements of the substring 'B1' were not "
           << "found in str2 before the 12th position."
           << endl;

   const char *cstr2b = "D2";
   indexCh2b = str2.find_last_of  ( cstr2b );
   if ( indexCh2b != npos )
      cout << "The index of the last element of 'D2' "
           << "after\n the 0th position in str2 is: "
           << indexCh2b << endl << endl;
   else
      cout << "The substring 'D2' was not found in str2 ."
           << endl << endl << endl;

   // The third member function searches a string
   // for a substring as specified by a C-string
   string str3 ( "456-EFG-456-EFG" );
   cout << "The original string str3 is: " << str3 << endl;
   basic_string <char>::size_type indexCh3a;

   const char *cstr3a = "5E";
   indexCh3a = str3.find_last_of ( cstr3a , 8 , 8 );
   if ( indexCh3a != npos )
      cout << "The index of the last occurrence of an "
           << "element of '5E' in str3 before\n the 8th "
           << "position is: " << indexCh3a << endl << endl;
   else
      cout << "Elements of the substring '5G' were not "
           << "found in str3\n before the 8th position."
           << endl << endl;

   // The fourth member function searches a string
   // for a substring as specified by a string
   string str4 ( "12-ab-12-ab" );
   cout << "The original string str4 is: " << str4 << endl;
   basic_string <char>::size_type indexCh4a, indexCh4b;

   string str4a ( "ba3" );
   indexCh4a = str4.find_last_of  ( str4a , 8 );
   if ( indexCh4a != npos )
      cout << "The index of the last occurrence of an "
           << "element of 'ba3' in str4 before\n the 8th "
           << "position is: " << indexCh4a << endl;
   else
      cout << "Elements of the substring 'ba3' were not "
           << "found in str4\n after the 0th position."
           << endl;

   string str4b ( "a2" );
   indexCh4b = str4.find_last_of ( str4b  );
   if ( indexCh4b != npos )
      cout << "The index of the last occurrence of an "
           << "element of 'a2' in str4 before\n the 0th "
           << "position is: " << indexCh4b << endl;
   else
      cout << "Elements of the substring 'a2' were not "
           << "found in str4\n after the 0th position."
           << endl;
}
```

```Output
The original string str1 is: abcd-1234-abcd-1234
The index of the last 'd' found before the 14th position in str1 is: 13
The character 'x' was not found in str1.

The original string str2 is: ABCD-1234-ABCD-1234
The index of the last occurrence of an element of 'B1' in str2 before
the 12th position is: 11
The index of the last element of 'D2' after
the 0th position in str2 is: 16

The original string str3 is: 456-EFG-456-EFG
The index of the last occurrence of an element of '5E' in str3 before
the 8th position is: 4

The original string str4 is: 12-ab-12-ab
The index of the last occurrence of an element of 'ba3' in str4 before
the 8th position is: 4
The index of the last occurrence of an element of 'a2' in str4 before
the 0th position is: 9
```

## <a name="front"></a>  basic_string::front

Restituisce un riferimento al primo elemento in una stringa.

```cpp
const_reference front() const;


reference front();
```

### <a name="return-value"></a>Valore restituito

Riferimento al primo elemento della stringa, che deve essere non vuoto.

### <a name="remarks"></a>Note

## <a name="get_allocator"></a>  basic_string::get_allocator

Restituisce una copia dell'oggetto allocatore usato per costruire la stringa.

```cpp
allocator_type get_allocator() const;
```

### <a name="return-value"></a>Valore restituito

Allocatore usato dalla stringa.

### <a name="remarks"></a>Note

La funzione membro restituisce l'oggetto allocatore archiviato.

Gli allocatori per la classe string specificano il modo in cui la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi dei contenitori sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.

### <a name="example"></a>Esempio

```cpp
// basic_string_get_allocator.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   // The following lines declare objects
   // that use the default allocator.
   string s1;
   basic_string <char> s2;
   basic_string <char, char_traits< char >, allocator< char > > s3;

   // s4 will use the same allocator class as s1
   basic_string <char> s4( s1.get_allocator ( ) );

   basic_string <char>::allocator_type xchar = s1.get_allocator( );
   // You can now call functions on the allocator class xchar used by s1
}
```

## <a name="insert"></a>  basic_string::insert

Inserisce un elemento, un numero di elementi o un intervallo di elementi nella stringa in una posizione specificata.

```cpp
basic_string<CharType, Traits, Allocator>& insert(
    size_type _P0,
    const value_type* ptr);

basic_string<CharType, Traits, Allocator>& insert(
    size_type _P0,
    const value_type* ptr,
    size_type count);

basic_string<CharType, Traits, Allocator>& insert(
    size_type _P0,
    const basic_string<CharType, Traits, Allocator>& str);

basic_string<CharType, Traits, Allocator>& insert(
    size_type _P0,
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off,
    size_type count);

basic_string<CharType, Traits, Allocator>& insert(
    size_type _P0,
    size_type count,
    value_type _Ch);

iterator insert(
    iterator _It);

iterator insert(
    iterator _It,
    value_type _Ch)l
template <class InputIterator>
void insert(
    iterator _It,
    InputIterator first,
    InputIterator last);

void insert(
    iterator _It,
    size_type count,
    value_type _Ch);

void insert(
    iterator _It,
    const_pointer first,
    const_pointer last);

void insert(
    iterator _It,
    const_iterator first,
    const_iterator last);
```

### <a name="parameters"></a>Parametri

*_P0*<br/>
Indice della posizione dietro il punto di inserimento di nuovi caratteri.

*ptr*<br/>
Stringa C da inserire interamente o parzialmente nella stringa.

*count*<br/>
Numero dei caratteri da inserire.

*str*<br/>
Stringa C da inserire interamente o parzialmente nella stringa di destinazione.

*Off*<br/>
Indice della parte della stringa di origine che fornisce i caratteri da aggiungere.

*CH*<br/>
Valore di carattere degli elementi da inserire.

*_It*<br/>
Iteratore che punta alla posizione sotto la quale deve essere inserito un carattere.

*first*<br/>
Iteratore di input, const_pointer o const_iterator che punta al primo elemento nell'intervallo di origine da inserire.

*last*<br/>
Iteratore di input, const_pointer o const_iterator che punta alla posizione di quello oltre l'ultimo elemento nell'intervallo di origine da inserire.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto stringa a cui la funzione membro assegna nuovi caratteri o, nel caso di inserimenti di singoli caratteri, iteratore che punta alla posizione del carattere inserito oppure nessun elemento, a seconda della funzione membro specifica.

### <a name="example"></a>Esempio

```cpp
// basic_string_insert.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function inserting a C-string
   // at a given position
   basic_string <char> str1a ( "way" );
   const char *cstr1a = "a";
   str1a.insert ( 0, cstr1a );
   cout << "The string with a C-string inserted at position 0 is: "
        << str1a << "." << endl;

   // The second member function inserting a C-string
   // at a given position for a specified number of elements
   basic_string <char> str2a ( "Good" );
   const char *cstr2a = "Bye Bye Baby";
   str2a.insert ( 4, cstr2a ,3 );
   cout << "The string with a C-string inserted at the end is: "
        << str2a << "." << endl;

   // The third member function inserting a string
   // at a given position
   basic_string <char> str3a ( "Bye" );
   string str3b ( "Good" );
   str3a.insert ( 0, str3b );
   cout << "The string with a string inserted at position 0 is: "
        << str3a << "." << endl;

   // The fourth member function inserting part of
   // a string at a given position
   basic_string <char> str4a ( "Good " );
   string str4b ( "Bye Bye Baby" );
   str4a.insert ( 5, str4b , 8 , 4 );
   cout << "The string with part of a string inserted at position 4 is: "
        << str4a << "." << endl;

   // The fifth member function inserts a number of characters
   // at a specified position in the string
   string str5 ( "The number is: ." );
   str5.insert ( 15 , 3 , '3' );
   cout << "The string with characters inserted is: "
        << str5 << endl;

   // The sixth member function inserts a character
   // at a specified position in the string
   string str6 ( "ABCDFG" );
   basic_string <char>::iterator str6_Iter = ( str6.begin ( ) + 4 );
   str6.insert ( str6_Iter , 'e' );
   cout << "The string with a character inserted is: "
        << str6 << endl;

   // The seventh member function inserts a range
   // at a specified position in the string
   string str7a ( "ABCDHIJ" );
   string str7b ( "abcdefgh" );
   basic_string <char>::iterator str7a_Iter = (str7a.begin ( ) + 4 );
   str7a.insert ( str7a_Iter , str7b.begin ( ) + 4 , str7b.end ( ) -1 );
   cout << "The string with a character inserted from a range is: "
        << str7a << endl;

   // The eigth member function inserts a number of
   // characters at a specified position in the string
   string str8 ( "ABCDHIJ" );
   basic_string <char>::iterator str8_Iter = ( str8.begin ( ) + 4 );
   str8.insert ( str8_Iter , 3 , 'e' );
   cout << "The string with a character inserted from a range is: "
        << str8 << endl;
}
```

```Output
The string with a C-string inserted at position 0 is: away.
The string with a C-string inserted at the end is: GoodBye.
The string with a string inserted at position 0 is: GoodBye.
The string with part of a string inserted at position 4 is: Good Baby.
The string with characters inserted is: The number is: 333.
The string with a character inserted is: ABCDeFG
The string with a character inserted from a range is: ABCDefgHIJ
The string with a character inserted from a range is: ABCDeeeHIJ
```

## <a name="iterator"></a>  basic_string::iterator

Tipo che fornisce un iteratore ad accesso casuale in grado di accedere e leggere un elemento **const** nella stringa.

```cpp
typedef implementation-defined iterator;
```

### <a name="remarks"></a>Note

Un tipo `iterator` può essere utilizzato per modificare il valore di un carattere e viene usato per scorrere una stringa in avanti.

### <a name="example"></a>Esempio

Vedere l'esempio per [begin](#begin) per un esempio di dichiarazione e utilizzo di `iterator`.

## <a name="length"></a>  basic_string::length

Restituisce il numero corrente di elementi in una stringa.

```cpp
size_type length() const;
```

### <a name="remarks"></a>Note

La funzione membro è uguale a [size](#size).

### <a name="example"></a>Esempio

```cpp
// basic_string_length.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ("Hello world");
   cout << "The original string str1 is: " << str1 << endl;

   // The size and length member functions differ in name only
   basic_string <char>::size_type sizeStr1, lenStr1;
   sizeStr1 = str1.size ( );
   lenStr1 = str1.length ( );

   basic_string <char>::size_type capStr1, max_sizeStr1;
   capStr1 = str1.capacity ( );
   max_sizeStr1 = str1.max_size ( );

   // Compare size, length, capacity & max_size of a string
   cout << "The current size of original string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of original string str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of original string str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of original string str1 is: "
        << max_sizeStr1 << "." << endl << endl;

   str1.erase ( 6, 5 );
   cout << "The modified string str1 is: " << str1 << endl;

   sizeStr1 = str1.size ( );
   lenStr1 = str1.length ( );
   capStr1 = str1.capacity ( );
   max_sizeStr1 = str1.max_size ( );

   // Compare size, length, capacity & max_size of a string
   // after erasing part of the original string
   cout << "The current size of modified string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of modified string str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of modified string str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of modified string str1 is: "
        << max_sizeStr1 << "." << endl;
}
```

## <a name="max_size"></a>  basic_string::max_size

Restituisce il numero massimo di caratteri che una stringa può contenere.

```cpp
size_type max_size() const;
```

### <a name="return-value"></a>Valore restituito

Il numero massimo di caratteri che una stringa può contenere.

### <a name="remarks"></a>Note

Un'eccezione di tipo [length_error Class](../standard-library/length-error-class.md) viene generata quando un'operazione produce una stringa con una lunghezza maggiore della lunghezza massima.

### <a name="example"></a>Esempio

```cpp
// basic_string_max_size.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ("Hello world");
   cout << "The original string str1 is: " << str1 << endl;

   // The size and length member functions differ in name only
   basic_string <char>::size_type sizeStr1, lenStr1;
   sizeStr1 = str1.size ( );
   lenStr1 = str1.length ( );

   basic_string <char>::size_type capStr1, max_sizeStr1;
   capStr1 = str1.capacity ( );
   max_sizeStr1 = str1.max_size ( );

   // Compare size, length, capacity & max_size of a string
   cout << "The current size of original string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of original string str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of original string str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of original string str1 is: "
        << max_sizeStr1 << "." << endl << endl;

   str1.erase ( 6, 5 );
   cout << "The modified string str1 is: " << str1 << endl;

   sizeStr1 = str1.size ( );
   lenStr1 = str1.length ( );
   capStr1 = str1.capacity ( );
   max_sizeStr1 = str1.max_size ( );

   // Compare size, length, capacity & max_size of a string
   // after erasing part of the original string
   cout << "The current size of modified string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of modified string str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of modified string str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of modified string str1 is: "
        << max_sizeStr1 << "." << endl;
}
```

## <a name="npos"></a>  basic_string::npos

Un valore integrale senza segno inizializzato su -1 che indica "non trovato" o "tutti i caratteri rimanenti" quando una funzione di ricerca ha esito negativo.

```cpp
static const size_type npos = -1;
```

### <a name="remarks"></a>Note

Quando il valore restituito è da verificare per determinare il `npos` valore, potrebbe non funzionare, a meno che il valore restituito è di tipo [size_type](#size_type) ed è **int** oppure **unsigned**.

### <a name="example"></a>Esempio

Vedere l'esempio per [find](#find) per un esempio di dichiarazione e utilizzo di `npos`.

## <a name="op_add_eq"></a>  basic_string::operator+=

Aggiunge caratteri a una stringa.

```cpp
basic_string<CharType, Traits, Allocator>& operator+=(
    value_type _Ch);

basic_string<CharType, Traits, Allocator>& operator+=(
    const value_type* ptr);

basic_string<CharType, Traits, Allocator>& operator+=(
    const basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Il carattere da aggiungere.

*ptr*<br/>
I caratteri della stringa C da aggiungere.

*right*<br/>
I caratteri della stringa da aggiungere.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto stringa che viene aggiunto con i caratteri passati dalla funzione membro.

### <a name="remarks"></a>Note

I caratteri possono essere aggiunti a una stringa usando `operator+=` o la funzione membro [append](#append) o [push_back](#push_back). `operator+=` aggiunge valori con un solo argomento mentre la funzione membro append con più argomenti consente di specificare una determinata parte della stringa da aggiungere.

### <a name="example"></a>Esempio

```cpp
// basic_string_op_app.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // appending a single character to a string
   string str1a ( "Hello" );
   cout << "The original string str1 is: " << str1a << endl;
   str1a +=  '!' ;
   cout << "The string str1 appended with an exclamation is: "
        << str1a << endl << endl;

   // The second member function
   // appending a C-string to a string
   string  str1b ( "Hello " );
   const char *cstr1b = "Out There";
   cout << "The C-string cstr1b is: " << cstr1b << endl;
   str1b +=  cstr1b;
   cout << "Appending the C-string cstr1b to string str1 gives: "
        << str1b << "." << endl << endl;

   // The third member function
   // appending one string to another in two ways,
   // comparing append and operator [ ]
   string str1d ( "Hello " ), str2d ( "Wide " ), str3d ( "World" );
   cout << "The string str2d is: " << str2d << endl;
   str1d.append ( str2d );
   cout << "The appended string str1d is: "
        << str1d << "." << endl;
   str1d += str3d;
   cout << "The doubly appended strig str1 is: "
        << str1d << "." << endl << endl;
}
```

```Output
The original string str1 is: Hello
The string str1 appended with an exclamation is: Hello!

The C-string cstr1b is: Out There
Appending the C-string cstr1b to string str1 gives: Hello Out There.

The string str2d is: Wide
The appended string str1d is: Hello Wide .
The doubly appended strig str1 is: Hello Wide World.
```

## <a name="op_eq"></a>  basic_string::operator=

Assegna nuovi valori di caratteri al contenuto di una stringa.

```cpp
basic_string<CharType, Traits, Allocator>& operator=(
    value_type _Ch);

basic_string<CharType, Traits, Allocator>& operator=(
    const value_type* ptr);

basic_string<CharType, Traits, Allocator>& operator=(
    const basic_string<CharType, Traits, Allocator>& right);

basic_string<CharType, Traits, Allocator>& operator=(
    const basic_string<CharType, Traits, Allocator>&& right);
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Il valore di caratteri da assegnare.

*ptr*<br/>
Un puntatore ai caratteri della stringa C da assegnare alla stringa di destinazione.

*right*<br/>
La stringa di origine i cui caratteri devono essere assegnati alla stringa di destinazione.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto stringa cui vengono assegnati nuovi caratteri dalla funzione membro.

### <a name="remarks"></a>Note

È possibile assegnare alle stringhe nuovi valori di caratteri. Il nuovo valore può essere una stringa e una stringa C o un singolo carattere. È possibile usare `operator=` se il nuovo valore può essere descritto da un singolo parametro; in caso contrario, è possibile usare la funzione membro [assign](#assign) con più parametri per specificare la parte di stringa da assegnare alla stringa di destinazione.

### <a name="example"></a>Esempio

```cpp
// basic_string_op_assign.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function assigning a
   // character of a certain value to a string
   string str1a ( "Hello " );
   str1a = '0';
   cout << "The string str1 assigned with the zero character is: "
        << str1a << endl << endl;

   // The second member function assigning the
   // characters of a C-string to a string
   string  str1b;
   const char *cstr1b = "Out There";
   cout << "The C-string cstr1b is: " << cstr1b <<  "." << endl;
   str1b = cstr1b;
   cout << "Assigning the C-string cstr1a to string str1 gives: "
        << str1b << "." << endl << endl;

   // The third member function assigning the characters
   // from one string to another string in two equivalent
   // ways, comparing the assign and operator =
   string str1c ( "Hello" ), str2c ( "Wide" ), str3c ( "World" );
   cout << "The original string str1 is: " << str1c << "." << endl;
   cout << "The string str2c is: " << str2c << "." << endl;
   str1c.assign ( str2c );
   cout << "The string str1 newly assigned with string str2c is: "
        << str1c << "." << endl;
   cout << "The string str3c is: " << str3c << "." << endl;
   str1c = str3c;
   cout << "The string str1 reassigned with string str3c is: "
        << str1c << "." << endl << endl;
}
```

```Output
The string str1 assigned with the zero character is: 0

The C-string cstr1b is: Out There.
Assigning the C-string cstr1a to string str1 gives: Out There.

The original string str1 is: Hello.
The string str2c is: Wide.
The string str1 newly assigned with string str2c is: Wide.
The string str3c is: World.
The string str1 reassigned with string str3c is: World.
```

## <a name="op_at"></a>  basic_string::operator[]

Fornisce un riferimento al carattere con un indice specificato in una stringa.

```cpp
const_reference operator[](size_type _Off) const;
reference operator[](size_type _Off);
```

### <a name="parameters"></a>Parametri

*Off*<br/>
L'indice della posizione dell'elemento a cui fare riferimento.

### <a name="return-value"></a>Valore restituito

Un riferimento al carattere della stringa in corrispondenza della posizione specificata dall'indice di parametro.

### <a name="remarks"></a>Note

Il primo elemento della stringa ha un indice zero e agli elementi seguenti vengono assegnati indici basati su interi positivi consecutivi in modo che una stringa di lunghezza *n* includa un elemento *n* indicizzato con il numero *n* - 1.

`operator[]` è più veloce della funzione membro [at](#at) nel concedere l'accesso in lettura e scrittura agli elementi di una stringa.

`operator[]` non verifica se l'indice passato come parametro è valido, ma la funzione membro `at` e pertanto deve essere utilizzata in cui la validità non è certa. Un indice non valido (un indice minore di zero oppure maggiore o uguale alla dimensione della stringa) passato alla funzione membro `at` genera una [classe out_of_range](../standard-library/out-of-range-class.md) eccezione. Un indice non valido passato a `operator[]` causa un comportamento non definito, mentre l'indice uguale alla lunghezza della stringa è un indice valido per le stringhe const e l'operatore restituisce il carattere null quando l'indice viene passato.

Il riferimento restituito può essere invalidato da riallocazioni o modifiche delle stringhe per le stringhe non **const**.

Durante la compilazione con [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md) impostato su 1 o 2, se si tenta di accedere a un elemento all'esterno dei limiti della stringa si verifica un errore di runtime. Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

```cpp
// basic_string_op_ref.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ( "Hello world" ), str2 ( "Goodbye world" );
   const string cstr1 ( "Hello there" ), cstr2 ( "Goodbye now" );
   cout << "The original string str1 is: " << str1 << endl;
   cout << "The original string str2 is: " << str2 << endl;

   // Element access to the non-const strings
   basic_string <char>::reference refStr1 = str1 [6];
   basic_string <char>::reference refStr2 = str2.at ( 3 );

   cout << "The character with an index of 6 in string str1 is: "
        << refStr1 << "." << endl;
   cout << "The character with an index of 3 in string str2 is: "
        << refStr2 << "." << endl;

   // Element access to the const strings
   basic_string <char>::const_reference crefStr1 = cstr1 [ cstr1.length ( ) ];
   basic_string <char>::const_reference crefStr2 = cstr2.at ( 8 );

   if ( crefStr1 == '\0' )
      cout << "The null character is returned as a valid reference."
           << endl;
   else
      cout << "The null character is not returned." << endl;
   cout << "The character with index of 8 in the const string cstr2 is: "
        << crefStr2 << "." << endl;
}
```

## <a name="pointer"></a>  basic_string::pointer

Tipo che fornisce un puntatore a un elemento carattere in una matrice di stringhe o caratteri.

```cpp
typedef typename allocator_type::pointer pointer;
```

### <a name="remarks"></a>Note

Il tipo è sinonimo di `allocator_type::pointer`.

Per il tipo `string`, è equivalente a **char**<strong>\*</strong>.

### <a name="example"></a>Esempio

```cpp
// basic_string_pointer.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   basic_string<char>::pointer pstr1a = "In Here";
   char *cstr1b = "Out There";
   cout << "The string pstr1a is: " << pstr1a <<  "." << endl;
   cout << "The C-string cstr1b is: " << cstr1b << "." << endl;
}
```

```Output
The string pstr1a is: In Here.
The C-string cstr1b is: Out There.
```

## <a name="pop_back"></a>  basic_string::pop_back

Cancella l'ultimo elemento della stringa.

```cpp
void pop_back();
```

### <a name="remarks"></a>Note

Questa funzione membro chiama `erase(size() - 1)` per cancellare l'ultimo elemento della sequenza, che non deve essere vuoto.

## <a name="push_back"></a>  basic_string::push_back

Aggiunge un elemento alla fine della stringa.

```cpp
void push_back(value_type _Ch);
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Carattere da aggiungere alla fine della stringa.

### <a name="remarks"></a>Note

La funzione membro chiama [insert](#insert)( [end](#end), _ *Ch* ).

### <a name="example"></a>Esempio

```cpp
// basic_string_push_back.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ( "abc" );
   basic_string <char>::iterator str_Iter, str1_Iter;

   cout << "The original string str1 is: ";
   for ( str_Iter = str1.begin( ); str_Iter != str1.end( ); str_Iter++ )
      cout << *str_Iter;
   cout << endl;

   // str1.push_back ( 'd' );
   str1_Iter = str1.end ( );
   str1_Iter--;
   cout << "The last character-letter of the modified str1 is now: "
        << *str1_Iter << endl;

   cout << "The modified string str1 is: ";
   for ( str_Iter = str1.begin( ); str_Iter != str1.end( ); str_Iter++ )
      cout << *str_Iter;
   cout << endl;
}
```

```Output
The original string str1 is: abc
The last character-letter of the modified str1 is now: c
The modified string str1 is: abc
```

## <a name="rbegin"></a>  basic_string::rbegin

Restituisce un iteratore al primo elemento in una stringa invertita.

```cpp
const_reverse_iterator rbegin() const;


reverse_iterator rbegin();
```

### <a name="return-value"></a>Valore restituito

Restituisce un iteratore ad accesso casuale al primo elemento in una stringa invertita, puntando all'ultimo elemento nella stringa corrispondente non invertita.

### <a name="remarks"></a>Note

`rbegin` viene usato con una stringa invertita come [begin](#begin) viene usato con una stringa.

Se il valore restituito di `rbegin` viene assegnato a `const_reverse_iterator`, l'oggetto stringa non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a `reverse_iterator`, l'oggetto stringa può essere modificato.

`rbegin` può essere usato per inizializzare un'iterazione attraverso una stringa all'indietro.

### <a name="example"></a>Esempio

```cpp
// basic_string_rbegin.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ( "Able was I ere I saw Elba" ), str2;
   basic_string <char>::reverse_iterator str_rIter, str1_rIter, str2_rIter;
   basic_string <char>::const_reverse_iterator str1_rcIter;

   str1_rIter = str1.rbegin ( );
   // str1_rIter--;
   cout << "The first character-letter of the reversed string str1 is: "
        << *str1_rIter << endl;
   cout << "The full reversed string str1 is:\n ";
   for ( str_rIter = str1.rbegin( ); str_rIter != str1.rend( ); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // The dereferenced iterator can be used to modify a character
*str1_rIter = 'A';
   cout << "The first character-letter of the modified str1 is now: "
        << *str1_rIter << endl;
   cout << "The full modified reversed string str1 is now:\n ";
   for ( str_rIter = str1.rbegin( ); str_rIter != str1.rend( ); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // The following line would be an error because iterator is const
   // *str1_rcIter = 'A';

   // For an empty string, begin is equivalent to end
   if ( str2.rbegin( ) == str2.rend ( ) )
      cout << "The string str2 is empty." << endl;
   else
      cout << "The stringstr2  is not empty." << endl;
}
```

```Output
The first character-letter of the reversed string str1 is: a
The full reversed string str1 is:
ablE was I ere I saw elbA
The first character-letter of the modified str1 is now: A
The full modified reversed string str1 is now:
AblE was I ere I saw elbA
The string str2 is empty.
```

## <a name="reference"></a>  basic_string::reference

Tipo che fornisce un riferimento a un elemento archiviato in una stringa.

```cpp
typedef typename allocator_type::reference reference;
```

### <a name="remarks"></a>Note

Un tipo `reference` può essere utilizzato per modificare il valore di un elemento.

Il tipo è sinonimo di `allocator_type::reference`.

Per il tipo `string`, è equivalente a `chr&`.

### <a name="example"></a>Esempio

Vedere l'esempio per [at](#at) per un esempio di dichiarazione e utilizzo di `reference`.

## <a name="rend"></a>  basic_string::rend

Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento di una stringa invertita.

```cpp
const_reverse_iterator rend() const;


reverse_iterator rend();
```

### <a name="return-value"></a>Valore restituito

Un iteratore ad accesso casuale inverso che punta alla posizione successiva all'ultimo elemento di una stringa invertita.

### <a name="remarks"></a>Note

`rend` viene usato con una stringa invertita come [end](#end) viene usato con una stringa.

Se il valore restituito di `rend` viene assegnato a `const_reverse_iterator`, l'oggetto stringa non può essere modificato. Se il valore restituito di `rend` viene assegnato a `reverse_iterator`, l'oggetto stringa può essere modificato.

`rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine della relativa stringa.

Non è consigliabile dereferenziare il valore restituito da `rend`.

### <a name="example"></a>Esempio

```cpp
// basic_string_rend.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ("Able was I ere I saw Elba"), str2;
   basic_string <char>::reverse_iterator str_rIter, str1_rIter, str2_rIter;
   basic_string <char>::const_reverse_iterator str1_rcIter;

   str1_rIter = str1.rend ( );
   str1_rIter--;
   cout << "The last character-letter of the reversed string str1 is: "
        << *str1_rIter << endl;
   cout << "The full reversed string str1 is:\n ";
   for ( str_rIter = str1.rbegin( ); str_rIter != str1.rend( ); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // The dereferenced iterator can be used to modify a character
*str1_rIter = 'o';
   cout << "The last character-letter of the modified str1 is now: "
        << *str1_rIter << endl;
   cout << "The full modified reversed string str1 is now:\n ";
   for ( str_rIter = str1.rbegin( ); str_rIter != str1.rend( ); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // The following line would be an error because iterator is const
   // *str1_rcIter = 'T';

   // For an empty string, end is equivalent to begin
   if ( str2.rbegin( ) == str2.rend ( ) )
      cout << "The string str2 is empty." << endl;
   else
      cout << "The stringstr2  is not empty." << endl;
}
```

```Output
The last character-letter of the reversed string str1 is: A
The full reversed string str1 is:
ablE was I ere I saw elbA
The last character-letter of the modified str1 is now: o
The full modified reversed string str1 is now:
ablE was I ere I saw elbo
The string str2 is empty.
```

## <a name="replace"></a>  basic_string::replace

Sostituisce gli elementi in una stringa in una posizione specificata con i caratteri specificati o i caratteri copiati da altri intervalli, stringhe o stringhe C.

```cpp
basic_string<CharType, Traits, Allocator>& replace(
    size_type _Pos1,
    size_type _Num1,
    const value_type* ptr);

basic_string<CharType, Traits, Allocator>& replace(
    size_type _Pos1,
    size_type _Num1,
    const basic_string<CharType, Traits, Allocator>& str);

basic_string<CharType, Traits, Allocator>& replace(
    size_type _Pos1,
    size_type _Num1,
    const value_type* ptr,
    size_type _Num2);

basic_string<CharType, Traits, Allocator>& replace(
    size_type _Pos1,
    size_type _Num1,
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Pos2,
    size_type _Num2);

basic_string<CharType, Traits, Allocator>& replace(
    size_type _Pos1,
    size_type _Num1,
    size_type count,
    value_type _Ch);

basic_string<CharType, Traits, Allocator>& replace(
    iterator first0,
    iterator last0,
    const value_type* ptr);

basic_string<CharType, Traits, Allocator>& replace(
    iterator first0,
    iterator last0,
    const basic_string<CharType, Traits, Allocator>& str);

basic_string<CharType, Traits, Allocator>& replace(
    iterator first0,
    iterator last0,
    const value_type* ptr,
    size_type _Num2);

basic_string<CharType, Traits, Allocator>& replace(
    iterator first0,
    iterator last0,
    size_type _Num2,
    value_type _Ch);

template <class InputIterator>
basic_string<CharType, Traits, Allocator>& replace(
    iterator first0,
    iterator last0,
    InputIterator first,
    InputIterator last);

basic_string<CharType, Traits, Allocator>& replace(
    iterator first0,
    iterator last0,
    const_pointer first,
    const_pointer last);

basic_string<CharType, Traits, Allocator>& replace(
    iterator first0,
    iterator last0,
    const_iterator first,
    const_iterator last);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa che deve essere un'origine dei caratteri per la stringa operando.

*_Pos1*<br/>
L'indice della stringa operando da cui inizia la sostituzione.

*_Num1*<br/>
Numero massimo di caratteri da sostituire nella stringa operando.

*_Pos2*<br/>
L'indice della stringa parametro da cui inizia la copia.

*_Num2*<br/>
Numero massimo di caratteri della stringa parametro C da usare.

*ptr*<br/>
Stringa C che deve essere un'origine dei caratteri per la stringa operando.

*CH*<br/>
Carattere da copiare nella stringa operando.

*first0*<br/>
Un iteratore che punta al primo carattere da rimuovere nella stringa operando.

*last0*<br/>
Un iteratore che punta all'ultimo carattere da rimuovere nella stringa operando.

*first*<br/>
Iteratore, const_pointer o const_iterator che punta al primo carattere da copiare nella stringa parametro.

*last*<br/>
Iteratore, const_pointer o const_iterator che punta all'ultimo carattere da copiare nella stringa parametro.

*count*<br/>
Il numero di volte *CH* viene copiato nella stringa operando.

### <a name="return-value"></a>Valore restituito

La stringa operando con la sostituzione effettuata.

### <a name="example"></a>Esempio

```cpp
// basic_string_replace.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first two member functions replace
   // part of the operand string with
   // characters from a parameter string or C-string
   string result1a, result1b;
   string s1o ( "AAAAAAAA" );
   string s1p ( "BBB" );
   const char* cs1p = "CCC";
   cout << "The operand string s1o is: " << s1o << endl;
   cout << "The parameter string s1p is: " << s1p << endl;
   cout << "The parameter C-string cs1p is: " << cs1p << endl;
   result1a = s1o.replace ( 1 , 3 , s1p );
   cout << "The result of s1o.replace ( 1 , 3 , s1p )\n is "
        << "the string: " << result1a << "." << endl;
   result1b = s1o.replace ( 5 , 3 , cs1p );
   cout << "The result of s1o.replace ( 5 , 3 , cs1p )\n is "
        << "the string: " << result1b << "." << endl;
   cout << endl;

   // The third & fourth member function replace
   // part of the operand string with characters
   // form part of a parameter string or C-string
   string result2a, result2b;
   string s2o ( "AAAAAAAA" );
   string s2p ( "BBB" );
   const char* cs2p = "CCC";
   cout << "The operand string s2o is: " << s2o << endl;
   cout << "The parameter string s1p is: " << s2p << endl;
   cout << "The parameter C-string cs2p is: " << cs2p << endl;
   result2a = s2o.replace ( 1 , 3 , s2p , 1 , 2 );
   cout << "The result of s2o.replace (1, 3, s2p, 1, 2)\n is "
        << "the string: " << result2a << "." << endl;
   result2b = s2o.replace ( 4 , 3 , cs2p , 1 );
   cout << "The result of s2o.replace (4 ,3 ,cs2p)\n is "
        << "the string: " << result2b << "." << endl;
   cout << endl;

   // The fifth member function replaces
   // part of the operand string with characters
   string result3a;
   string s3o ( "AAAAAAAA" );
   char ch3p = 'C';
   cout << "The operand string s3o is: " << s3o << endl;
   cout << "The parameter character c1p is: " << ch3p << endl;
   result3a = s3o.replace ( 1 , 3 , 4 , ch3p );
   cout << "The result of s3o.replace(1, 3, 4, ch3p)\n is "
        << "the string: " << result3a << "." << endl;
   cout << endl;

   // The sixth & seventh member functions replace
   // part of the operand string, delineated with iterators,
   // with a parameter string or C-string
   string s4o ( "AAAAAAAA" );
   string s4p ( "BBB" );
   const char* cs4p = "CCC";
   cout << "The operand string s4o is: " << s4o << endl;
   cout << "The parameter string s4p is: " << s4p << endl;
   cout << "The parameter C-string cs4p is: " << cs4p << endl;
   basic_string<char>::iterator IterF0, IterL0;
   IterF0 = s4o.begin ( );
   IterL0 = s4o.begin ( ) + 3;
   string result4a, result4b;
   result4a = s4o.replace ( IterF0 , IterL0 , s4p );
   cout << "The result of s1o.replace (IterF0, IterL0, s4p)\n is "
        << "the string: " << result4a << "." << endl;
   result4b = s4o.replace ( IterF0 , IterL0 , cs4p );
   cout << "The result of s4o.replace (IterF0, IterL0, cs4p)\n is "
        << "the string: " << result4b << "." << endl;
   cout << endl;

   // The 8th member function replaces
   // part of the operand string delineated with iterators
   // with a number of characters from a parameter C-string
   string s5o ( "AAAAAAAF" );
   const char* cs5p = "CCCBB";
   cout << "The operand string s5o is: " << s5o << endl;
   cout << "The parameter C-string cs5p is: " << cs5p << endl;
   basic_string<char>::iterator IterF1, IterL1;
   IterF1 = s5o.begin ( );
   IterL1 = s5o.begin ( ) + 4;
   string result5a;
   result5a = s5o.replace ( IterF1 , IterL1 , cs5p , 4 );
   cout << "The result of s5o.replace (IterF1, IterL1, cs4p ,4)\n is "
        << "the string: " << result5a << "." << endl;
   cout << endl;

   // The 9th member function replaces
   // part of the operand string delineated with iterators
   // with specified characters
   string s6o ( "AAAAAAAG" );
   char ch6p = 'q';
   cout << "The operand string s6o is: " << s6o << endl;
   cout << "The parameter character ch6p is: " << ch6p << endl;
   basic_string<char>::iterator IterF2, IterL2;
   IterF2 = s6o.begin ( );
   IterL2 = s6o.begin ( ) + 3;
   string result6a;
   result6a = s6o.replace ( IterF2 , IterL2 , 4 , ch6p );
   cout << "The result of s6o.replace (IterF1, IterL1, 4, ch6p)\n is "
        << "the string: " << result6a << "." << endl;
   cout << endl;

   // The 10th member function replaces
   // part of the operand string delineated with iterators
   // with part of a parameter string delineated with iterators
   string s7o ( "OOOOOOO" );
   string s7p ( "PPPP" );
   cout << "The operand string s7o is: " << s7o << endl;
   cout << "The parameter string s7p is: " << s7p << endl;
   basic_string<char>::iterator IterF3, IterL3, IterF4, IterL4;
   IterF3 = s7o.begin ( ) + 1;
   IterL3 = s7o.begin ( ) + 3;
   IterF4 = s7p.begin ( );
   IterL4 = s7p.begin ( ) + 2;
   string result7a;
   result7a = s7o.replace ( IterF3 , IterL3 , IterF4 , IterL4 );
   cout << "The result of s7o.replace (IterF3 ,IterL3 ,IterF4 ,IterL4)\n is "
        << "the string: " << result7a << "." << endl;
   cout << endl;
}
```

```Output
The operand string s1o is: AAAAAAAA
The parameter string s1p is: BBB
The parameter C-string cs1p is: CCC
The result of s1o.replace ( 1 , 3 , s1p )
is the string: ABBBAAAA.
The result of s1o.replace ( 5 , 3 , cs1p )
is the string: ABBBACCC.

The operand string s2o is: AAAAAAAA
The parameter string s1p is: BBB
The parameter C-string cs2p is: CCC
The result of s2o.replace (1, 3, s2p, 1, 2)
is the string: ABBAAAA.
The result of s2o.replace (4 ,3 ,cs2p)
is the string: ABBAC.

The operand string s3o is: AAAAAAAA
The parameter character c1p is: C
The result of s3o.replace(1, 3, 4, ch3p)
is the string: ACCCCAAAA.

The operand string s4o is: AAAAAAAA
The parameter string s4p is: BBB
The parameter C-string cs4p is: CCC
The result of s1o.replace (IterF0, IterL0, s4p)
is the string: BBBAAAAA.
The result of s4o.replace (IterF0, IterL0, cs4p)
is the string: CCCAAAAA.

The operand string s5o is: AAAAAAAF
The parameter C-string cs5p is: CCCBB
The result of s5o.replace (IterF1, IterL1, cs4p ,4)
is the string: CCCBAAAF.

The operand string s6o is: AAAAAAAG
The parameter character ch6p is: q
The result of s6o.replace (IterF1, IterL1, 4, ch6p)
is the string: qqqqAAAAG.

The operand string s7o is: OOOOOOO
The parameter string s7p is: PPPP
The result of s7o.replace (IterF3 ,IterL3 ,IterF4 ,IterL4)
is the string: OPPOOOO.
```

## <a name="reserve"></a>  basic_string::reserve

Imposta la capacità della stringa su un numero grande almeno quanto un numero specificato.

```cpp
void reserve(size_type count = 0);
```

### <a name="parameters"></a>Parametri

*count*<br/>
Il numero di caratteri per il quale viene riservata la memoria.

### <a name="remarks"></a>Note

La disponibilità di una capacità sufficiente è importante poiché le riallocazioni richiedono tempo e invalidano tutti i riferimenti, i puntatori e gli iteratori che fanno riferimento ai caratteri in una stringa.

Il concetto di capacità per gli oggetti di tipo stringa è identico a quello per gli oggetti di tipo vettore. A differenza del vettore, la funzione membro `reserve` può essere chiamata per ridurre la capacità di un oggetto. La richiesta non è vincolante e può verificarsi o meno. Come impostazione predefinita per il parametro del valore è zero, una chiamata di `reserve` è una richiesta non vincolante per ridurre la capacità della stringa per adattarla al numero di caratteri attualmente nella stringa. La capacità non viene mai ridotta al di sotto del numero di caratteri corrente.

La chiamata a `reserve` è il solo modo possibile per ridurre la capacità di una stringa. Tuttavia, come affermato in precedenza, questa richiesta non è vincolante e potrebbe non verificarsi.

### <a name="example"></a>Esempio

```cpp
// basic_string_reserve.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ("Hello world");
   cout << "The original string str1 is: " << str1 << endl;

   basic_string <char>::size_type sizeStr1, sizerStr1;
   sizeStr1 = str1.size ( );
   basic_string <char>::size_type capStr1, caprStr1;
   capStr1 = str1.capacity ( );

   // Compare size & capacity of the original string
   cout << "The current size of original string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The capacity of original string str1 is: "
        << capStr1 << "." << endl << endl;

   // Compare size & capacity of the string
   // with added capacity
   str1.reserve ( 40 );
   sizerStr1 = str1.size ( );
   caprStr1 = str1.capacity ( );

   cout << "The string str1with augmented capacity is: "
        << str1 << endl;
   cout << "The current size of string str1 is: "
        << sizerStr1 << "." << endl;
   cout << "The new capacity of string str1 is: "
        << caprStr1 << "." << endl << endl;

   // Compare size & capacity of the string
   // with downsized capacity
   str1.reserve ( );
   basic_string <char>::size_type sizedStr1;
   basic_string <char>::size_type capdStr1;
   sizedStr1 = str1.size ( );
   capdStr1 = str1.capacity ( );

   cout << "The string str1 with downsized capacity is: "
        << str1 << endl;
   cout << "The current size of string str1 is: "
        << sizedStr1 << "." << endl;
   cout << "The reduced capacity of string str1 is: "
        << capdStr1 << "." << endl << endl;
}
```

```Output
The original string str1 is: Hello world
The current size of original string str1 is: 11.
The capacity of original string str1 is: 15.

The string str1with augmented capacity is: Hello world
The current size of string str1 is: 11.
The new capacity of string str1 is: 47.

The string str1 with downsized capacity is: Hello world
The current size of string str1 is: 11.
The reduced capacity of string str1 is: 47.
```

## <a name="resize"></a>  basic_string::resize

Specifica una nuova dimensione per una stringa, aggiungendo o cancellando gli elementi in base alle esigenze.

```cpp
void resize(
    size_type count,);

void resize(
    size_type count,
    _Elem _Ch);
```

### <a name="parameters"></a>Parametri

*count*<br/>
La nuova dimensione della stringa.

*CH*<br/>
Valore con cui vengono inizializzati i caratteri aggiunti se sono necessari elementi aggiuntivi.

### <a name="remarks"></a>Note

Se la dimensione risultante supera il numero massimo di caratteri, il form genera `length_error`.

### <a name="example"></a>Esempio

```cpp
// basic_string_resize.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string  str1 ( "Hello world" );
   cout << "The original string str1 is: " << str1 << endl;

   basic_string <char>::size_type sizeStr1;
   sizeStr1 = str1.size ( );
   basic_string <char>::size_type capStr1;
   capStr1 = str1.capacity ( );

   // Compare size & capacity of the original string
   cout << "The current size of original string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The capacity of original string str1 is: "
        << capStr1 << "." << endl << endl;

   // Use resize to increase size by 2 elements: exclamations
   str1.resize ( str1.size ( ) + 2 , '!' );
   cout << "The resized string str1 is: " << str1 << endl;

   sizeStr1 = str1.size ( );
   capStr1 = str1.capacity ( );

   // Compare size & capacity of a string after resizing
   cout << "The current size of resized string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The capacity of resized string str1 is: "
        << capStr1 << "." << endl << endl;

   // Use resize to increase size by 20 elements:
   str1.resize ( str1.size ( ) + 20 );
   cout << "The resized string str1 is: " << str1 << endl;

   sizeStr1 = str1.size ( );
   capStr1 = str1.capacity ( );

   // Compare size & capacity of a string after resizing
   // note capacity increases automatically as required
   cout << "The current size of modified string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The capacity of modified string str1 is: "
        << capStr1 << "." << endl << endl;

   // Use resize to downsize by 28 elements:
   str1.resize ( str1.size ( ) - 28 );
   cout << "The downsized string str1 is: " << str1 << endl;

   sizeStr1 = str1.size (  );
   capStr1 = str1.capacity (  );

   // Compare size & capacity of a string after downsizing
   cout << "The current size of downsized string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The capacity of downsized string str1 is: "
        << capStr1 << "." << endl;
}
```

```Output
The original string str1 is: Hello world
The current size of original string str1 is: 11.
The capacity of original string str1 is: 15.

The resized string str1 is: Hello world!!
The current size of resized string str1 is: 13.
The capacity of resized string str1 is: 15.

The resized string str1 is: Hello world!!
The current size of modified string str1 is: 33.
The capacity of modified string str1 is: 47.

The downsized string str1 is: Hello
The current size of downsized string str1 is: 5.
The capacity of downsized string str1 is: 47.
```

## <a name="reverse_iterator"></a>  basic_string::reverse_iterator

Tipo che fornisce un riferimento a un elemento archiviato in una stringa.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;
```

### <a name="remarks"></a>Note

Un tipo `reverse_iterator` può essere usato per modificare il valore di un carattere e viene usato per scorrere la stringa in ordine inverso.

### <a name="example"></a>Esempio

Vedere l'esempio per [rbegin](#rbegin) per un esempio di dichiarazione e utilizzo di `reverse_iterator`.

## <a name="rfind"></a>  basic_string::rfind

Cerca all'indietro in una stringa la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.

```cpp
size_type rfind(
    value_type _Ch,
    size_type _Off = npos) const;


size_type rfind(
    const value_type* ptr,
    size_type _Off = npos) const;


size_type rfind(
    const value_type* ptr,
    size_type _Off,
    size_type count) const;


size_type rfind(
    const basic_string<CharType, Traits, Allocator>& str,
    size_type _Off = npos) const;
```

### <a name="parameters"></a>Parametri

*CH*<br/>
Valore di carattere che la funzione membro deve cercare.

*Off*<br/>
Indice della posizione da cui partirà la ricerca.

*ptr*<br/>
Stringa C che la funzione membro deve cercare.

*count*<br/>
Numero di caratteri nella stringa C, a partire dal primo, che deve essere ricercato dalla funzione membro.

*str*<br/>
Stringa che la funzione membro deve cercare.

### <a name="return-value"></a>Valore restituito

Indice dell'ultima occorrenza, ricercata all'indietro, del primo carattere della sottostringa trovata; se la ricerca ha esito negativo, `npos`.

### <a name="example"></a>Esempio

```cpp
// basic_string_rfind.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string
   string str1 ( "Hello Everyone" );
   cout << "The original string str1 is: " << str1 << endl;
   basic_string <char>::size_type indexCh1a, indexCh1b;
   static const basic_string <char>::size_type npos = -1;

   indexCh1a = str1.rfind ( "e" , 9 );
   if ( indexCh1a != npos )
      cout << "The index of the 1st 'e' found before the 9th"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'e' was not found in str1 ." << endl;

   indexCh1b = str1.rfind ( "x" );
   if ( indexCh1b != npos )
      cout << "The index of the 'x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The character 'x' was not found in str1."
           << endl << endl;

   // The second member function searches a string
   // for a substring as specified by a C-string
   string str2 ( "Let me make this perfectly clear." );
   cout << "The original string str2 is: " << str2 << endl;
   basic_string <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "perfect";
   indexCh2a = str2.rfind ( cstr2 , 30 );
   if ( indexCh2a != npos )
      cout << "The index of the 1st element of 'perfect' "
           << "before\n the 30th position in str2 is: "
           << indexCh2a << endl;
   else
      cout << "The substring 'perfect' was not found in str2 ."
           << endl;

   const char *cstr2b = "imperfectly";
   indexCh2b = str2.rfind ( cstr2b , 30 );
   if ( indexCh2b != npos )
      cout << "The index of the 1st element of 'imperfect' "
           << "before\n the 5th position in str3 is: "
           << indexCh2b << endl;
   else
      cout << "The substring 'imperfect' was not found in str2 ."
           << endl << endl;

   // The third member function searches a string
   // for a substring as specified by a C-string
   string str3 ( "It is a nice day. I am happy." );
   cout << "The original string str3 is: " << str3 << endl;
   basic_string <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "nice";
   indexCh3a = str3.rfind ( cstr3a );
   if ( indexCh3a != npos )
      cout << "The index of the 1st element of 'nice' "
           << "in str3 is: " << indexCh3a << endl;
   else
      cout << "The substring 'nice' was not found in str3 ."
           << endl;

   const char *cstr3b = "am";
   indexCh3b = str3.rfind ( cstr3b , indexCh3a + 25 , 2 );
   if ( indexCh3b != npos )
      cout << "The index of the next occurrance of 'am' in "
           << "str3 begins at: " << indexCh3b << endl << endl;
   else
      cout << "There is no next occurrence of 'am' in str3 ."
           << endl << endl;

   // The fourth member function searches a string
   // for a substring as specified by a string
   string str4 ( "This perfectly unclear." );
   cout << "The original string str4 is: " << str4 << endl;
   basic_string <char>::size_type indexCh4a, indexCh4b;

   string str4a ( "clear" );
   indexCh4a = str4.rfind ( str4a , 15 );
   if (indexCh4a != npos )
      cout << "The index of the 1st element of 'clear' "
           << "before\n the 15th position in str4 is: "
           << indexCh4a << endl;
   else
      cout << "The substring 'clear' was not found in str4 "
           << "before the 15th position." << endl;

   string str4b ( "clear" );
   indexCh4b = str4.rfind ( str4b );
   if ( indexCh4b != npos )
      cout << "The index of the 1st element of 'clear' "
           << "in str4 is: "
           << indexCh4b << endl;
   else
      cout << "The substring 'clear' was not found in str4 ."
           << endl << endl;
}
```

```Output
The original string str1 is: Hello Everyone
The index of the 1st 'e' found before the 9th position in str1 is: 8
The character 'x' was not found in str1.

The original string str2 is: Let me make this perfectly clear.
The index of the 1st element of 'perfect' before
the 30th position in str2 is: 17
The substring 'imperfect' was not found in str2 .

The original string str3 is: It is a nice day. I am happy.
The index of the 1st element of 'nice' in str3 is: 8
The index of the next occurrance of 'am' in str3 begins at: 20

The original string str4 is: This perfectly unclear.
The substring 'clear' was not found in str4 before the 15th position.
The index of the 1st element of 'clear' in str4 is: 17
```

## <a name="shrink_to_fit"></a>  basic_string::shrink_to_fit

Rimuove la capacità in eccesso della stringa.

```cpp
void shrink_to_fit();
```

### <a name="remarks"></a>Note

Questa funzione membro elimina qualsiasi archiviazione non necessaria nel contenitore.

## <a name="size"></a>  basic_string::size

Restituisce il numero corrente di elementi in una stringa.

```cpp
size_type size() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza della stringa.

### <a name="example"></a>Esempio

```cpp
// basic_string_size.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ("Hello world");
   cout << "The original string str1 is: " << str1 << endl;

   // The size and length member functions differ in name only
   basic_string <char>::size_type sizeStr1, lenStr1;
   sizeStr1 = str1.size (  );
   lenStr1 = str1.length (  );

   basic_string <char>::size_type capStr1, max_sizeStr1;
   capStr1 = str1.capacity (  );
   max_sizeStr1 = str1.max_size (  );

   // Compare size, length, capacity & max_size of a string
   cout << "The current size of original string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of original string str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of original string str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of original string str1 is: "
        << max_sizeStr1 << "." << endl << endl;

   str1.erase ( 6, 5 );
   cout << "The modified string str1 is: " << str1 << endl;

   sizeStr1 = str1.size ( );
   lenStr1 = str1.length ( );
   capStr1 = str1.capacity ( );
   max_sizeStr1 = str1.max_size ( );

   // Compare size, length, capacity & max_size of a string
   // after erasing part of the original string
   cout << "The current size of modified string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of modified string str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of modified string str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of modified string str1 is: "
        << max_sizeStr1 << "." << endl;
}
```

## <a name="size_type"></a>  basic_string::size_type

Tipo intero senza segno che può rappresentare il numero di elementi e indici in una stringa.

```cpp
typedef typename allocator_type::size_type size_type;
```

### <a name="remarks"></a>Note

Equivale a `allocator_type::size_type`.

Per il tipo `string`, è equivalente a `size_t`.

### <a name="example"></a>Esempio

```cpp
// basic_string_size_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   string str1 ( "Hello world" );

   basic_string <char>::size_type sizeStr1, capStr1;
   sizeStr1 = str1.size (  );
   capStr1 = str1.capacity (  );

   cout << "The current size of string str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The capacity of string str1 is: " << capStr1
         << "." << endl;
}
```

```Output
The current size of string str1 is: 11.
The capacity of string str1 is: 15.
```

## <a name="substr"></a>  basic_string::substr

Copia una sottostringa di al massimo un numero di caratteri da una stringa a partire da una posizione specificata.

```cpp
basic_string<CharType, Traits, Allocator> substr(
    size_type _Off = 0,
    size_type count = npos) const;
```

### <a name="parameters"></a>Parametri

*Off*<br/>
Indice che individua l'elemento nella posizione da cui viene eseguita la copia della stringa, con un valore predefinito di 0.

*count*<br/>
Il numero di caratteri che devono essere copiati se sono presenti.

### <a name="return-value"></a>Valore restituito

Un oggetto sottostringa che è una copia degli elementi della stringa operando che inizia nella posizione specificata dal primo argomento.

### <a name="example"></a>Esempio

```cpp
// basic_string_substr.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   string  str1 ("Heterological paradoxes are persistent.");
   cout << "The original string str1 is: \n " << str1
        << endl << endl;

   basic_string <char> str2 = str1.substr ( 6 , 7 );
   cout << "The substring str1 copied is: " << str2
        << endl << endl;

   basic_string <char> str3 = str1.substr (  );
   cout << "The default substring str3 is: \n " << str3
        <<  "\n which is the entire original string." << endl;
}
```

```Output
The original string str1 is:
Heterological paradoxes are persistent.

The substring str1 copied is: logical

The default substring str3 is:
Heterological paradoxes are persistent.
which is the entire original string.
```

## <a name="swap"></a>  basic_string::swap

Scambia il contenuto di due stringhe.

```cpp
void swap(
    basic_string<CharType, Traits, Allocator>& str);
```

### <a name="parameters"></a>Parametri

*str*<br/>
La stringa di origine i cui elementi sono da scambiare con quelli nella stringa di destinazione.

### <a name="remarks"></a>Note

Se le stringhe che vengono scambiate hanno lo stesso oggetto allocatore, la funzione membro `swap`:

- Si verifica in un tempo costante.

- Non genera alcuna eccezione.

- Non invalida riferimenti, puntatori o iteratori che definiscono gli elementi nelle due stringhe.

In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.

### <a name="example"></a>Esempio

```cpp
// basic_string_swap.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string<char>
   string s1 ( "Tweedledee" );
   string s2 ( "Tweedledum" );
   cout << "Before swapping string s1 and s2:" << endl;
   cout << " The basic_string s1 = " << s1 << "." << endl;
   cout << " The basic_string s2 = " << s2 << "." << endl;

   s1.swap ( s2 );
   cout << "After swapping string s1 and s2:" << endl;
   cout << " The basic_string s1 = " << s1 << "." << endl;
   cout << " The basic_string s2 = " << s2 << "." << endl;
}
```

```Output
Before swapping string s1 and s2:
The basic_string s1 = Tweedledee.
The basic_string s2 = Tweedledum.
After swapping string s1 and s2:
The basic_string s1 = Tweedledum.
The basic_string s2 = Tweedledee.
```

## <a name="traits_type"></a>  basic_string::traits_type

Tipo per i tratti dei caratteri degli elementi archiviati in una stringa.

```cpp
typedef Traits traits_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo per il secondo parametro di modello `Traits`.

Per il tipo `string`, è equivalente a **char_traits\<char >**.

### <a name="example"></a>Esempio

Vedere l'esempio per [copy](../standard-library/char-traits-struct.md#copy) per un esempio di dichiarazione e utilizzo di `traits_type`.

## <a name="value_type"></a>  basic_string::value_type

Tipo che rappresenta il tipo di caratteri archiviati in una stringa.

```cpp
typedef typename allocator_type::value_type value_type;
```

### <a name="remarks"></a>Note

È equivalente a `traits_type::char_type` ed è equivalente a **char** degli oggetti di tipo `string`.

### <a name="example"></a>Esempio

```cpp
// basic_string_value_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   basic_string<char>::value_type ch1 = 'G';

   char ch2 = 'H';

   cout << "The character ch1 is: " << ch1 << "." << endl;
   cout << "The character ch2 is: " << ch2 << "." << endl;
}
```

```Output
The character ch1 is: G.
The character ch2 is: H.
```

## <a name="see-also"></a>Vedere anche

[\<string>](../standard-library/string.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
