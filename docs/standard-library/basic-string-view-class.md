---
title: Classe basic_string_view
ms.date: 04/20/2019
f1_keywords:
- xstring/std::basic_string_view
- xstring/std::basic_string_view::allocator_type
- xstring/std::basic_string_view::const_iterator
- xstring/std::basic_string_view::const_pointer
- xstring/std::basic_string_view::const_reference
- xstring/std::basic_string_view::const_reverse_iterator
- xstring/std::basic_string_view::difference_type
- xstring/std::basic_string_view::iterator
- xstring/std::basic_string_view::npos
- xstring/std::basic_string_view::pointer
- xstring/std::basic_string_view::reference
- xstring/std::basic_string_view::reverse_iterator
- xstring/std::basic_string_view::size_type
- xstring/std::basic_string_view::traits_type
- xstring/std::basic_string_view::value_type
- xstring/std::basic_string_view::append
- xstring/std::basic_string_view::assign
- xstring/std::basic_string_view::at
- xstring/std::basic_string_view::back
- xstring/std::basic_string_view::begin
- xstring/std::basic_string_view::c_str
- xstring/std::basic_string_view::capacity
- xstring/std::basic_string_view::cbegin
- xstring/std::basic_string_view::cend
- xstring/std::basic_string_view::clear
- xstring/std::basic_string_view::compare
- xstring/std::basic_string_view::copy
- xstring/std::basic_string_view::_Copy_s
- xstring/std::basic_string_view::crbegin
- xstring/std::basic_string_view::crend
- xstring/std::basic_string_view::data
- xstring/std::basic_string_view::empty
- xstring/std::basic_string_view::end
- xstring/std::basic_string_view::erase
- xstring/std::basic_string_view::find
- xstring/std::basic_string_view::find_first_not_of
- xstring/std::basic_string_view::find_first_of
- xstring/std::basic_string_view::find_last_not_of
- xstring/std::basic_string_view::find_last_of
- xstring/std::basic_string_view::front
- xstring/std::basic_string_view::get_allocator
- xstring/std::basic_string_view::insert
- xstring/std::basic_string_view::length
- xstring/std::basic_string_view::max_size
- xstring/std::basic_string_view::pop_back
- xstring/std::basic_string_view::push_back
- xstring/std::basic_string_view::rbegin
- xstring/std::basic_string_view::rend
- xstring/std::basic_string_view::remove_prefix
- xstring/std::basic_string_view::remove_suffix
- xstring/std::basic_string_view::replace
- xstring/std::basic_string_view::reserve
- xstring/std::basic_string_view::resize
- xstring/std::basic_string_view::rfind
- xstring/std::basic_string_view::shrink_to_fit
- xstring/std::basic_string_view::size
- xstring/std::basic_string_view::substr
- xstring/std::basic_string_view::swap
helpviewer_keywords:
- std::basic_string_view
- std::basic_string_view, allocator_type
- std::basic_string_view, const_iterator
- std::basic_string_view, const_pointer
- std::basic_string_view, const_reference
- std::basic_string_view, const_reverse_iterator
- std::basic_string_view, difference_type
- std::basic_string_view, iterator
- std::basic_string_view, npos
- std::basic_string_view, pointer
- std::basic_string_view, reference
- std::basic_string_view, reverse_iterator
- std::basic_string_view, size_type
- std::basic_string_view, traits_type
- std::basic_string_view, value_type
- std::basic_string_view, append
- std::basic_string_view, assign
- std::basic_string_view, at
- std::basic_string_view, back
- std::basic_string_view, begin
- std::basic_string_view, c_str
- std::basic_string_view, capacity
- std::basic_string_view, cbegin
- std::basic_string_view, cend
- std::basic_string_view, clear
- std::basic_string_view, compare
- std::basic_string_view, copy
- std::basic_string_view, crbegin
- std::basic_string_view, crend
- std::basic_string_view, data
- std::basic_string_view, empty
- std::basic_string_view, end
- std::basic_string_view, erase
- std::basic_string_view, find
- std::basic_string_view, find_first_not_of
- std::basic_string_view, find_first_of
- std::basic_string_view, find_last_not_of
- std::basic_string_view, find_last_of
- std::basic_string_view, front
- std::basic_string_view, get_allocator
- std::basic_string_view, insert
- std::basic_string_view, length
- std::basic_string_view, max_size
- std::basic_string_view, pop_back
- std::basic_string_view, push_back
- std::basic_string_view, rbegin
- std::basic_string_view, rend
- std::basic_string_view, remove_prefix
- std::basic_string_view, remove_suffix
- std::basic_string_view, replace
- std::basic_string_view, reserve
- std::basic_string_view, resize
- std::basic_string_view, rfind
- std::basic_string_view, shrink_to_fit
- std::basic_string_view, size
- std::basic_string_view, substr
- std::basic_string_view, swap
ms.assetid: a9c3e0a2-39bf-4c8a-b093-9abe30839591
ms.openlocfilehash: 0ac5e3d528881f7b1caa0a1dcdae0161a6777e57
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346939"
---
# <a name="basicstringview-class"></a>Classe basic_string_view

Il modello di classe `basic_string_view<charT>` è stata aggiunta in c++17 da usare come un modo sicuro ed efficiente per una funzione può accettare vari tipi di stringa indipendenti senza dover essere creato un modello per tali tipi funzione. La classe contiene un puntatore non proprietario di una sequenza contigua di dati di tipo carattere e da una lunghezza che specifica il numero di caratteri nella sequenza. Viene specificato alcun presupposto rispetto al fatto che la sequenza è con terminazione null.

La libreria standard vengono definite diverse specializzazioni in base al tipo degli elementi:

-  `string_view`
-  `wstring_view`
-  `u16string_view`
-  `u32string_view`

In questo documento il termine "string_view" si riferisce a livello generale a uno di questi typedef.

Un string_view descrive l'interfaccia comune minimo necessario per la lettura di dati di tipo stringa. Fornisce accesso const ai dati sottostanti; non effettua alcuna copia (ad eccezione di `copy` (funzione)). I dati possono o non possono contenere valori null ('\0') in qualsiasi posizione. Un string_view non dispone di alcun controllo sulla durata dell'oggetto. È responsabilità del chiamante per garantire che i dati della stringa sottostante siano validi.

Una funzione che accetta un parametro di tipo string_view può essere reso a funzionare con qualsiasi tipo stringa, senza rendere la funzione in un modello o il vincolo di funzione per un determinato subset di tipi di stringa. L'unico requisito è che esiste una conversione implicita dal tipo stringa a string_view. Tutti i tipi di stringa standard sono implicitamente convertibili in un string_view che contiene lo stesso tipo di elemento. In altre parole, una `std::string` convertibile in un `string_view` ma non a un `wstring_view`.

Nell'esempio seguente viene illustrata una funzione non template `f` che accetta un parametro di tipo `wstring_view`. Può essere chiamato con argomenti di tipo `std::wstring`, `wchar_t*`, e `winrt::hstring`.

```cpp
// compile with: /std:c++17
// string_view that uses elements of wchar_t
void f(wstring_view);

// pass a std::wstring:
const std::wstring& s { L"Hello" };
f(s);

// pass a C-style null-terminated string (string_view is not null-terminated):
const wchar_t* ns = L"Hello";
f(ns);

// pass a C-style character array of len characters (excluding null terminator):
const wchar_t* cs { L"Hello" };
size_t len { 5 };
f({cs,len});

// pass a WinRT string
winrt::hstring hs { L"Hello" };
f(hs);
```

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class Traits = char_traits<CharType>>
class basic_string_view;
```

### <a name="parameters"></a>Parametri

*CharType*<br/>
Tipo di caratteri che vengono archiviati nel string_view. Il C++ libreria Standard fornisce le seguenti typedef per specializzazioni del modello.
- [string_view](../standard-library/string-view-typedefs.md#string_view) per gli elementi di tipo **char**
- [wstring_view](../standard-library/string-view-typedefs.md#wstring_view), per **wchar_t**
- [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) per **char16_t**
- [u32string_view](../standard-library/string-view-typedefs.md#u32string_view) per **char32_t**.

*Tratti*<br/>
Per impostazione predefinita [char_traits](char-traits-struct.md)<*CharType*>.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_string_view](#basic_string_view)|Costruisce un string_view che è vuota, altrimenti punta a tutto o parte di dati di altri oggetti stringa, oppure una matrice di caratteri di tipo C.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|**const_iterator**|Iteratore ad accesso casuale in grado di leggere **const** elementi.|
|**const_pointer**|`using const_pointer = const value_type*;`|
|**const_reference**|`using const_reference = const value_type&;`|
|**const_reverse_iterator**|`using const_reverse_iterator = std::reverse_iterator<const_iterator>;`|
|**difference_type**|`using difference_type = ptrdiff_t;`|
|**iterator**|`using iterator = const_iterator;`|
|**npos**|`static constexpr size_type npos = size_type(-1);`|
|**pointer**|`using pointer = value_type*;`|
|**reference**|`using reference = value_type&;`|
|**reverse_iterator**|`using reverse_iterator = const_reverse_iterator;`|
|**size_type**|`using size_type = size_t;`|
|**traits_type**|`using traits_type = Traits;`|
|**value_type**|`using value_type = CharType;`|

### <a name="member-operators"></a>Operatori membro

|Operatore|Descrizione|
|-|-|
|[operator=](#op_eq)|Assegna un oggetto stringa string_view o convertibile a string_view un'altra.|
|[operator\[\]](#op_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[at](#at)|Restituisce un const_reference all'elemento in una posizione specificata.|
|[back](#back)|Restituisce un const_reference fino all'ultimo elemento.|
|[begin](#begin)|Restituisce un iteratore const che punta al primo elemento. (string_views non sono modificabili).|
|[cbegin](#cbegin)|Uguale allo [iniziare](#begin).|
|[cend](#cend)|Restituisce un iteratore const che punta alla posizione immediatamente successiva all'ultimo elemento.|
|[copy](#copy)|Copia al massimo un numero specificato di caratteri da una posizione indicizzata nel string_view origine a una matrice di caratteri di destinazione. (Scelta non consigliata. Usare copy_s.)|
|[_Copy_s](#_copy_s)|Funzione di copia di CRT protetta.|
|[compare](#compare)|Confronta un string_view con un string_view specificato per determinare se sono uguali oppure se una è a livello lessicografico minore di altra.|
|[crbegin](#crbegin)|Uguale allo [rbegin](#rbegin).|
|[crend](#crend)|Uguale allo [rend](#rend).|
|[data](#data)|Restituisce un puntatore non elaborato non proprietario alla sequenza di caratteri.|
|[empty](#empty)|Verifica se il string_view contiene caratteri.|
|[end](#end)|Uguale allo [cend](#cend).|
|[find](#find)|Esegue la ricerca in avanti per la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.|
|[find_first_not_of](#find_first_not_of)|Cerca il primo carattere che non è un elemento di un oggetto di stringa convertibile o string_view specificato.|
|[find_first_of](#find_first_of)|Cerca il primo carattere che corrisponde a un elemento di un oggetto di stringa convertibile o string_view specificato.|
|[find_last_not_of](#find_last_not_of)|Cerca l'ultimo carattere che non è un elemento di un oggetto di stringa convertibile o string_view specificato.|
|[find_last_of](#find_last_of)|Cerca l'ultimo carattere che è un elemento di un oggetto di stringa convertibile o string_view specificato.|
|[front](#front)|Restituisce un const_reference al primo elemento.|
|[length](#length)|Restituisce il numero corrente di elementi.|
|[max_size](#max_size)|Restituisce il numero massimo di caratteri che un string_view potrebbe contenere.|
|[rbegin](#rbegin)|Restituisce un iteratore const che punta al primo elemento in un string_view invertito.|
|[remove_prefix](#remove_prefix)|Sposta il puntatore del mouse in avanti per il numero specificato di elementi.|
|[remove_suffix](#remove_suffix)|Riduce le dimensioni della visualizzazione del numero specificato di elementi a partire dalla parte posteriore.|
|[rend](#rend)|Restituisce un iteratore const che punta alla posizione immediatamente successiva all'ultimo elemento di un string_view invertito.|
|[rfind](#rfind)|Cerca un string_view in ordine inverso per la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.|
|[size](#size)|Restituisce il numero corrente di elementi.|
|[substr](#substr)|Restituisce una sottostringa di lunghezza specificata iniziando in corrispondenza dell'indice specificato.|
|[swap](#swap)|Scambia il contenuto di due string_views.|

## <a name="remarks"></a>Note

Se a una funzione viene richiesto di generare una sequenza più lunga di [max_size](#max_size) elementi, la funzione segnala un errore di lunghezza generando un oggetto di tipo [length_error](../standard-library/length-error-class.md).

## <a name="requirements"></a>Requisiti

[/std: c + + 17](../build/reference/std-specify-language-standard-version.md) o versione successiva

**Intestazione:** \<string_view >

**Spazio dei nomi:** std

## <a name="at"></a>  basic_string_view::at

Restituisce un const_reference al carattere in corrispondenza dell'indice specificato in base 0.

```cpp
constexpr const_reference at(size_type offset) const;
```

### <a name="parameters"></a>Parametri

*offset*<br/>
L'indice dell'elemento a cui fare riferimento.

### <a name="return-value"></a>Valore restituito

Const_reference al carattere in corrispondenza della posizione specificata dall'indice di parametro.

### <a name="remarks"></a>Note

Il primo elemento ha un indice zero e gli elementi seguenti sono indicizzati consecutivamente interi positivi, in modo che un string_view di lunghezza *n* dispone di un *n*elemento th indicizzati in base al numero *n -* 1. **alla** genera un'eccezione per gli indici non validi, a differenza [operator\[\]](#op_at). 

In generale, è consigliabile **alla** per le sequenze, ad esempio `std::vector` e string_view non deve mai essere usata. Un indice non valido passato a una sequenza è un errore per la logica che deve essere individuato e risolto durante lo sviluppo. Se un programma non è assolutamente certi che gli indici siano validi, dovrebbe eseguirne il test, non chiamare at() e si basano sulle eccezioni per difendersi dal incuranti programmazione.

Visualizzare [basic_string_view::operator\[ \] ](#op_at) per altre informazioni.

### <a name="example"></a>Esempio

```cpp
// basic_string_view_at.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
    using namespace std;

    const string_view  str1("Hello world");
    string_view::const_reference refStr2 = str1.at(8); // 'r'
}
```

## <a name="back"></a>  basic_string_view::back

Restituisce un const_reference fino all'ultimo elemento.

```cpp
constexpr const_reference back() const;
```

### <a name="return-value"></a>Valore restituito

Const_reference all'ultimo elemento nella finestra di string_view.

### <a name="remarks"></a>Note

Genera un'eccezione se il string_view è vuoto.

Tenere presente che dopo un string_view viene modificato, ad esempio chiamando `remove_suffix`, quindi l'elemento restituito da questa funzione non è più l'ultimo elemento nei dati sottostanti.

### <a name="example"></a>Esempio

Un string_view che viene costruito con un valore letterale stringa C non include il carattere di terminazione null e pertanto nell'esempio seguente `back` restituisce 'p' e non '\0'.

```cpp
char c[] = "Help"; // char[5]
string_view sv{ c };
cout << sv.size(); // size() == 4
cout << sv.back() << endl; // p 
```

I caratteri null incorporati vengono considerati come qualsiasi altro carattere:

```cpp
string_view e = "embedded\0nulls"sv;
cout << boolalpha << (e.back() == 's'); // true
```

## <a name="basic_string_view"></a>  basic_string_view::basic_string_view

Costruisce un string_view.

```cpp
constexpr basic_string_view() noexcept;
constexpr basic_string_view(const basic_string_view&) noexcept = default;
constexpr basic_string_view(const charT* str);
constexpr basic_string_view(const charT* str, size_type len);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Il puntatore ai valori di carattere.

*len*<br/>
Il numero di caratteri da includere nella vista.

## <a name="remarks"></a>Note

I costruttori con un parametro grafico * presuppongono che l'input è con terminazione null, ma il carattere di terminazione null non è incluso nella finestra di string_view.

È inoltre possibile costruire un string_view con un valore letterale. Visualizzare [operatore "" sv](string-view-operators.md#op_sv).

## <a name="begin"></a>  basic_string_view::begin

Uguale allo [cbegin](#cbegin).

```cpp
constexpr const_iterator begin() const noexcept;
```

### <a name="return-value"></a>Valore restituito
Restituisce un elemento const_iterator che punta al primo elemento.

## <a name="cbegin"></a>  basic_string_view::cbegin

Restituisce un elemento const_iterator che punta al primo elemento nell'intervallo.

```cpp
constexpr const_iterator cbegin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore ad accesso casuale che punta al primo elemento dell'intervallo o alla posizione appena oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).

## <a name="cend"></a>  basic_string_view::cend

Restituisce un elemento const_iterator che punta alla posizione oltre l'ultimo elemento in un intervallo.

```cpp
constexpr const_iterator cend() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Oggetto **const** iteratore ad accesso casuale che punta appena oltre la fine dell'intervallo.

### <a name="remarks"></a>Note

Non è consigliabile dereferenziare il valore restituito da `cend`.

## <a name="compare"></a> basic_string_view::compare

Esegue un confronto tra maiuscole e minuscole con una string_view specificato (o un tipo string convertibile) per determinare se i due oggetti sono uguali oppure se una è a livello lessicografico minore di altra. Il [ \<string_view > operatori](string-view-operators.md) usare questa funzione membro per eseguire confronti.

```cpp
constexpr int compare(basic_string_view strv) const noexcept;
constexpr int compare(size_type pos, size_type num, basic_string_view strv) const;
constexpr int compare(size_type pos, size_type num, basic_string_view strv, size_type offset, size_type num2) const;
constexpr int compare(const charT* ptr) const;
constexpr int compare(size_type pos, size_type num, const charT* ptr) const;
constexpr int compare(size_type pos, size_type num, const charT* ptr, size_type num2) const;
```

### <a name="parameters"></a>Parametri

*strv*<br/>
String_view che deve essere confrontato con questo string_view.

*pos*<br/>
L'indice di questo string_view in corrispondenza del quale inizia il confronto.

*num*<br/>
Il numero massimo di caratteri da questo string_view da confrontare.

*num2*<br/>
Il numero massimo di caratteri dal *strv* da confrontare.

*offset*<br/>
L'indice della *strv* in corrispondenza del quale inizia il confronto.

*ptr*<br/>
Stringa C da confrontare con questa string_view.

### <a name="return-value"></a>Valore restituito

Un valore negativo se questa string_view è minore di *strv* oppure *ptr*; zero se le sequenze di due caratteri sono uguali; o un valore positivo se è superiore a questo string_view *strv*oppure *ptr*.

### <a name="remarks"></a>Note

Il `compare` funzioni membro eseguono un confronto tra maiuscole e minuscole di tutte o parte di ogni sequenza di caratteri. 

### <a name="example"></a>Esempio

```cpp
// basic_string_view_compare.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>
#include <string>

using namespace std;

string to_alpha(int result)
{
   if (result < 0) return " less than ";
   else if (result == 0) return " equal to ";
   else return " greater than ";
}

int main()
{
   // The first member function compares
   // two string_views
   string_view sv_A("CAB");
   string_view sv_B("CAB");
   cout << "sv_A is " << sv_A << endl;
   cout << "sv_B is " << sv_B << endl;
   int comp1 = sv_A.compare(sv_B);
   cout << "sv_A is" << to_alpha(comp1) << "sv_B.\n";

   // The second member function compares part of
   // an operand string_view to another string_view
   string_view sv_C("AACAB");
   string_view sv_D("CAB");
   cout << "sv_C is: " << sv_C << endl;
   cout << "sv_D is: " << sv_D << endl;
   int comp2a = sv_C.compare(2, 3, sv_D);
   cout << "The last three characters of sv_C are" 
       << to_alpha(comp2a) << "sv_D.\n";

   int comp2b = sv_C.compare(0, 3, sv_D);
   cout << "The first three characters of sv_C are" 
       << to_alpha(comp2b) << "sv_D.\n";

   // The third member function compares part of
   // an operand string_view to part of another string_view
   string_view sv_E("AACAB");
   string_view sv_F("DCABD");
   cout << "sv_E: " << sv_E << endl;
   cout << "sv_F is: " << sv_F << endl;
   int comp3a = sv_E.compare(2, 3, sv_F, 1, 3);
   cout << "The three characters from position 2 of sv_E are"
       << to_alpha(comp3a) 
       << "the 3 characters of sv_F from position 1.\n";

   // The fourth member function compares
   // an operand string_view to a C string
   string_view sv_G("ABC");
   const char* cs_A = "DEF";
   cout << "sv_G is: " << sv_G << endl;
   cout << "cs_A is: " << cs_A << endl;
   int comp4a = sv_G.compare(cs_A);
   cout << "sv_G is" << to_alpha(comp4a) << "cs_A.\n";

   // The fifth member function compares part of
   // an operand string_view to a C string
   string_view sv_H("AACAB");
   const char* cs_B = "CAB";
   cout << "sv_H is: " << sv_H << endl;
   cout << "cs_B is: " << cs_B << endl;
   int comp5a = sv_H.compare(2, 3, cs_B);
   cout << "The last three characters of sv_H are"
      << to_alpha(comp5a) << "cs_B.\n";

   // The sixth member function compares part of
   // an operand string_view to part of an equal length of
   // a C string
   string_view sv_I("AACAB");
   const char* cs_C = "ACAB";
   cout << "sv_I is: " << sv_I << endl;
   cout << "cs_C: " << cs_C << endl;
   int comp6a = sv_I.compare(1, 3, cs_C, 3);
   cout << "The 3 characters from position 1 of sv_I are"
      << to_alpha(comp6a) << "the first 3 characters of cs_C.\n";
}
```

```Output
sv_A is CAB
sv_B is CAB
sv_A is equal to sv_B.
sv_C is: AACAB
sv_D is: CAB
The last three characters of sv_C are equal to sv_D.
The first three characters of sv_C are less than sv_D.
sv_E: AACAB
sv_F is: DCABD
The three characters from position 2 of sv_E are equal to the 3 characters of sv_F from position 1.
sv_G is: ABC
cs_A is: DEF
sv_G is less than cs_A.
sv_H is: AACAB
cs_B is: CAB
The last three characters of sv_H are equal to cs_B.
sv_I is: AACAB
cs_C: ACAB
The 3 characters from position 1 of sv_I are equal to the first 3 characters of cs_C.
```

## <a name="copy"></a>  basic_string_view::copy

Copia al massimo un numero specificato di caratteri da una posizione indicizzata nel string_view origine a una matrice di caratteri di destinazione. È consigliabile usare la funzione sicura [basic_string_view::_Copy_s](#_copy_s) invece.

```cpp
size_type copy(charT* ptr, size_type count, size_type offset = 0) const;
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Matrice di caratteri di destinazione in cui copiare gli elementi.

*count*<br/>
Il numero di caratteri da copiare, al massimo da string_view l'origine.

*offset*<br/>
La posizione iniziale in string_view l'origine da cui devono essere effettuate copie.

### <a name="return-value"></a>Valore restituito

Numero di caratteri attualmente copiati.

### <a name="remarks"></a>Note

Non viene aggiunto un carattere null alla fine della copia.

## <a name="_copy_s"></a>  basic_string_view::_Copy_s

Funzione di copia di CRT per essere usato al posto di proteggere [copia](#copy).

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

*_Off*<br/>
Posizione iniziale nella stringa di origine da cui effettuare le copie.

### <a name="return-value"></a>Valore restituito

Numero di caratteri attualmente copiati.

### <a name="remarks"></a>Note

Non viene aggiunto un carattere null alla fine della copia.

 Per altre informazioni, vedere [c-runtime-library/security-features-in-the-crt](../c-runtime-library/security-features-in-the-crt.md).

## <a name="crbegin"></a>  basic_string_view::crbegin

Restituisce un const_reverse_iterator che punta al primo elemento in un string_view invertito.

```cpp
constexpr const_reverse_iterator crbegin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Const_reverse_iterator che punta al primo elemento in un string_view invertito. 

## <a name="crend"></a>  basic_string_view::crend

Uguale allo [rend](#rend). 

```cpp
constexpr const_reverse_iterator crend() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Restituisce un const_reverse_iterator che punta oltre la fine di un string_view invertito.

## <a name="data"></a>  basic_string_view::data

Restituisce un puntatore non elaborato non proprietario alla sequenza di caratteri const dell'oggetto che è stato usato per costruire il string_view.

```cpp
constexpr value_type *data() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Puntatore-a-const al primo elemento della sequenza di caratteri.

### <a name="remarks"></a>Note

Il puntatore non è possibile modificare i caratteri.

Una sequenza di caratteri string_view non è necessariamente con terminazione null. Il tipo restituito per `data` non è una stringa C valida, poiché ottiene accodato nessun carattere null. Il carattere null '\0' ha alcun significato particolare in un oggetto di tipo string_view e può essere parte dell'oggetto string_view come qualsiasi altro carattere.

## <a name="empty"></a>  basic_string_view::empty

Verifica se il string_view contiene caratteri o meno.

```cpp
constexpr bool empty() const noexcept;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto string_view non contenga caratteri; **false** se dispone di almeno un carattere.

### <a name="remarks"></a>Note

La funzione membro è equivalente a [dimensioni](#size)() = = 0.

## <a name="end"></a>  basic_string_view::end

Restituisce un elemento const_iterator ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento.

```cpp
constexpr const_iterator end() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Restituisce un elemento const_iterator ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento.

### <a name="remarks"></a>Note

`end` viene usato per verificare se un elemento const_iterator ha raggiunto la fine del relativo string_view. Non è consigliabile dereferenziare il valore restituito da `end`.

## <a name="find"></a>  basic_string_view::find

Cerca un string_view in avanti per la prima occorrenza di un carattere o una sottostringa che corrisponde a una sequenza di caratteri specificata.

```cpp
constexpr size_type find(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find(const charT* ptr, size_type offset = 0) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
String_view per cui la funzione membro è la ricerca.

*chVal*<br/>
Valore di carattere che la funzione membro deve cercare.

*offset*<br/>
Indice in corrispondenza del quale ha inizio la ricerca.

*ptr*<br/>
Stringa C per il quale la funzione membro è la ricerca.

*count*<br/>
Il numero di caratteri in *ptr*, contando dal primo carattere.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

## <a name="find_first_not_of"></a>  basic_string_view::find_first_not_of

Cerca il primo carattere che non è un elemento di un oggetto di stringa convertibile o string_view specificato.

```cpp
constexpr size_type find_first_not_of(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find_first_not_of(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find_first_not_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_first_not_of(const charT* ptr, size_type offset = 0) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
String_view per cui la funzione membro è la ricerca.

*chVal*<br/>
Valore di carattere che la funzione membro deve cercare.

*offset*<br/>
Indice in corrispondenza del quale ha inizio la ricerca.

*ptr*<br/>
Stringa C per il quale la funzione membro è la ricerca.

*count*<br/>
Il numero di caratteri, contando dal primo carattere nella stringa C per il quale la funzione membro è la ricerca.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

## <a name="find_first_of"></a>  basic_string_view::find_first_of

Cerca il primo carattere che corrisponde a qualsiasi elemento di un string_view specificato.

```cpp
constexpr size_type find_first_of(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find_first_of(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find_first_of(const charT* str, size_type offset, size_type count) const;
constexpr size_type find_first_of(const charT* str, size_type offset = 0) const;
```

### <a name="parameters"></a>Parametri

*chVal*<br/>
Valore di carattere che la funzione membro deve cercare.

*offset*<br/>
Indice in corrispondenza del quale ha inizio la ricerca.

*ptr*<br/>
Stringa C per il quale la funzione membro è la ricerca.

*count*<br/>
Il numero di caratteri, contando dal primo carattere nella stringa C per il quale la funzione membro è la ricerca.

*str*<br/>
String_view per cui la funzione membro è la ricerca.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

## <a name="find_last_not_of"></a>  basic_string_view::find_last_not_of

Cerca l'ultimo carattere che non è un elemento di un string_view specificato.

```cpp
constexpr size_type find_last_not_of(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type find_last_not_of(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type find_last_not_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_last_not_of(const charT* ptr, size_type offset = npos) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
String_view per cui la funzione membro è la ricerca.

*chVal*<br/>
Valore di carattere che la funzione membro deve cercare.

*offset*<br/>
Indice in corrispondenza del quale terminare la ricerca.

*ptr*<br/>
Stringa C per il quale la funzione membro è la ricerca.

*count*<br/>
Il numero di caratteri, contando dal primo carattere in *ptr*.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `string_view::npos`.

## <a name="find_last_of"></a>  basic_string_view::find_last_of

Cerca l'ultimo carattere che corrisponde a qualsiasi elemento di un string_view specificato.

```cpp
constexpr size_type find_last_of(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type find_last_of(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type find_last_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_last_of(const charT* ptr, size_type offset = npos) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
String_view per cui la funzione membro è la ricerca.

*chVal*<br/>
Valore di carattere che la funzione membro deve cercare.

*offset*<br/>
Indice in corrispondenza del quale terminare la ricerca.

*ptr*<br/>
Stringa C per il quale la funzione membro è la ricerca.

*count*<br/>
Il numero di caratteri, contando dal primo carattere nella stringa C per il quale la funzione membro è la ricerca.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo carattere della sottostringa trovato; se la ricerca ha esito negativo, `npos`.

## <a name="front"></a>  basic_string_view::front

Restituisce un const_reference al primo elemento.

```cpp
constexpr const_reference front() const;
```

### <a name="return-value"></a>Valore restituito

Const_reference al primo elemento.

### <a name="remarks"></a>Note

Genera un'eccezione se il string_view è vuoto.

## <a name="length"></a> basic_string_view::length

Restituisce il numero corrente di elementi.

```cpp
constexpr size_type length() const noexcept;
```

### <a name="remarks"></a>Note

La funzione membro è uguale a [size](#size).

## <a name="max_size"></a>  basic_string_view::max_size

Restituisce il numero massimo di caratteri che può contenere un string_view.

```cpp
constexpr size_type max_size() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Il numero massimo di caratteri che può contenere un string_view.

### <a name="remarks"></a>Note

Un'eccezione di tipo [length_error](../standard-library/length-error-class.md) generata quando un'operazione produce un string_view con una lunghezza maggiore `max_size()`.

## <a name="op_eq"></a>  basic_string_view::operator=

Assegna un oggetto stringa string_view o convertibile a string_view un'altra.

```cpp
constexpr basic_string_view& operator=(const basic_string_view&) noexcept = default;
```
### <a name="example"></a>Esempio

```cpp
   string_view s = "Hello";
   string_view s2 = s;
```
## <a name="op_at"></a>  basic_string_view::operator[]

Fornisce un const_reference al carattere con un indice specificato.

```cpp
constexpr const_reference operator[](size_type offset) const;
```

### <a name="parameters"></a>Parametri

*offset*<br/>
L'indice dell'elemento a cui fare riferimento.

### <a name="return-value"></a>Valore restituito

Const_reference al carattere in corrispondenza della posizione specificata dall'indice di parametro.

### <a name="remarks"></a>Note

Il primo elemento ha un indice zero e gli elementi seguenti sono indicizzati consecutivamente interi positivi, in modo che un string_view di lunghezza *n* dispone di un *n*elemento th indicizzati in base al numero *n* - 1.

`operator[]` è più veloce rispetto alla funzione membro [a](#at) per fornire accesso in lettura agli elementi di un string_view.

`operator[]` non verifica se l'indice passato come argomento è valido. Un indice non valido passato a `operator[]` produce un comportamento non definito.

Il riferimento restituito può essere invalidato se i dati della stringa sottostante vengono modificati o eliminati da tale oggetto.

Durante la compilazione con [ \_ITERATORE\_DEBUG\_livello](../standard-library/iterator-debug-level.md) impostato su 1 o 2, un errore di runtime si verificherà se si tenta di accedere a un elemento esterno ai limiti della finestra di string_view. Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md).

## <a name="rbegin"></a>  basic_string_view::rbegin

Restituisce un iteratore const al primo elemento in un string_view invertito.

```cpp
constexpr const_reverse_iterator rbegin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Restituisce un iteratore ad accesso casuale al primo elemento in un string_view invertito, indirizzamento che sarebbe l'ultimo elemento di string_view corrispondente non invertita.

### <a name="remarks"></a>Note

`rbegin` viene usato con un string_view invertito proprio come [iniziare](#begin) viene usato con un string_view. `rbegin` può essere utilizzato per inizializzare un'iterazione all'indietro.

## <a name="remove_prefix"></a> basic_string_view::remove_prefix

Sposta il puntatore del mouse in avanti per il numero specificato di elementi.

```cpp
constexpr void remove_prefix(size_type n);
```

### <a name="remarks"></a>Note

Lascia invariati i dati sottostanti. Sposta in avanti il puntatore di string_view da elementi n e imposta privato `size` membro dati di dimensioni - n.

## <a name="remove_suffix"></a> basic_string_view::remove_suffix

Riduce le dimensioni della visualizzazione del numero specificato di elementi a partire dalla parte posteriore.

```cpp
constexpr void remove_suffix(size_type n);
```

### <a name="remarks"></a>Note

Lascia i dati sottostanti e il puntatore a esso non modificato. Imposta privato `size` membro dati di dimensioni - n.

## <a name="rend"></a>  basic_string_view::rend

Restituisce un iteratore const che punta alla posizione immediatamente successiva all'ultimo elemento di un string_view invertito.

```cpp
constexpr reverse_iterator rend() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Iteratore ad accesso casuale che punta alla posizione immediatamente successiva all'ultimo elemento di un string_view invertito inverso costante.

### <a name="remarks"></a>Note

`rend` viene usato con un string_view invertito proprio come [end](#end) viene usato con un string_view. `rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del relativo string_view. Non è consigliabile dereferenziare il valore restituito da `rend`.

## <a name="rfind"></a>  basic_string_view::rfind

Cerca un string_view in ordine inverso per una sottostringa che corrisponde a una sequenza di caratteri specificata.

```cpp
constexpr size_type rfind(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type rfind(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type rfind(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type rfind(const charT* ptr, size_type offset = npos) const;
```

### <a name="parameters"></a>Parametri

*chVal*<br/>
Valore di carattere che la funzione membro deve cercare.

*offset*<br/>
Indice in corrispondenza del quale ha inizio la ricerca.

*ptr*<br/>
Stringa C per il quale la funzione membro è la ricerca.

*count*<br/>
Il numero di caratteri, contando dal primo carattere nella stringa C per il quale la funzione membro è la ricerca.

*str*<br/>
String_view per cui la funzione membro è la ricerca.

### <a name="return-value"></a>Valore restituito

L'indice del primo carattere della sottostringa quando ha esito positivo. in caso contrario `npos`.

## <a name="size"></a>  basic_string_view::size

Restituisce il numero di elementi nella finestra di string_view.

```cpp
constexpr size_type size() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Lunghezza della finestra di string_view.

### <a name="remarks"></a>Note

Un string_view possono modificare la relativa lunghezza, ad esempio `remove_prefix` e `remove_suffix`. Poiché questo non modifica i dati della stringa sottostante, le dimensioni di un string_view non sono necessariamente le dimensioni dei dati sottostanti.

## <a name="substr"></a>  basic_string_view::substr

Restituisce un string_view che rappresenta il numero specificato di caratteri (al massimo) da una posizione specificata.

```cpp
constexpr basic_string_view substr(size_type offset = 0, size_type count = npos) const;
```

### <a name="parameters"></a>Parametri

*offset*<br/>
Indice che individua l'elemento in corrispondenza della posizione da cui viene eseguita la copia, con un valore predefinito pari a 0.

*count*<br/>
Il numero di caratteri da includere nella sottostringa, se sono presenti.

### <a name="return-value"></a>Valore restituito

Un oggetto string_view che rappresenta la sequenza di elementi secondari specificata.

## <a name="swap"></a>  basic_string_view::swap

Scambia due string_views, in altre parole i puntatori ai dati di stringa sottostante e i valori della dimensione.

```cpp
constexpr void swap(basic_string_view& sv) noexcept;
```

### <a name="parameters"></a>Parametri

*sv*<br/>
String_view di origine i cui valori di puntatore e le dimensioni devono essere scambiati con quello di string_view la destinazione.

## <a name="see-also"></a>Vedere anche

[\<string_view>](../standard-library/string-view.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
