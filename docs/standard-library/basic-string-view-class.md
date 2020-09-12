---
title: Classe basic_string_view
description: Riferimento API per `basic_string_view` il quale fa riferimento a una sequenza contigua costante di oggetti di tipo char.
ms.date: 9/8/2020
f1_keywords:
- xstring/std::basic_string_view
- xstring/std::basic_string_view::allocator_type
- xstring/std::basic_string_view::const_iterator
- xstring/std::basic_string_view::const_pointer
- xstring/std::basic_string_view::const_reference
- xstring/std::basic_string_view::const_reverse_iterator
- xstring/std::basic_string_view::difference_type
- xstring/std::basic_string_view::ends_with
- xstring/std::basic_string_view::starts_with
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
- std::basic_string_view, ends_with
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
- std::basic_string_view, starts_with
- std::basic_string_view, substr
- std::basic_string_view, swap
ms.assetid: a9c3e0a2-39bf-4c8a-b093-9abe30839591
ms.openlocfilehash: 8eddf4bc6aae0338dc2e914aa57e6c1e7cc5c912
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040210"
---
# <a name="basic_string_view-class"></a>Classe basic_string_view

Il modello di classe `basic_string_view<charT>` è stato aggiunto in c++ 17 per fungere da modo sicuro ed efficiente per consentire a una funzione di accettare vari tipi di stringa non correlati senza che la funzione debba essere creato un modello su tali tipi. La classe include un puntatore non proprietario a una sequenza contigua di dati di tipo carattere e una lunghezza che specifica il numero di caratteri nella sequenza. Non viene presupposto se la sequenza è con terminazione null.

La libreria standard definisce diverse specializzazioni basate sul tipo di elementi:

- `string_view`
- `wstring_view`
- `u16string_view`
- `u32string_view`

In questo documento il termine "string_view" si riferisce in genere a uno di questi typedef.

In string_view viene descritta l'interfaccia comune minima necessaria per leggere i dati di stringa. Fornisce l'accesso const ai dati sottostanti. non esegue alcuna copia (ad eccezione della `copy` funzione). È possibile che i dati non contengano valori null (' \ 0') in qualsiasi posizione. Un string_view non ha alcun controllo sulla durata dell'oggetto. È responsabilità del chiamante assicurarsi che i dati di stringa sottostanti siano validi.

È possibile eseguire una funzione che accetta un parametro di tipo string_view per funzionare con qualsiasi tipo stringa, senza rendere la funzione in un modello o vincolare la funzione a un subset specifico di tipi di stringa. L'unico requisito è che esiste una conversione implicita dal tipo stringa a string_view. Tutti i tipi di stringa standard sono convertibili in modo implicito in un string_view che contiene lo stesso tipo di elemento. In altre parole, un `std::string` è convertibile in un oggetto `string_view` ma non in un oggetto `wstring_view` .

Nell'esempio seguente viene illustrata una funzione non modello `f` che accetta un parametro di tipo `wstring_view` . Può essere chiamato con argomenti di tipo `std::wstring` , `wchar_t*` e `winrt::hstring` .

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

*CharType*\
Tipo di caratteri archiviati nel string_view. La libreria standard C++ fornisce i typedef seguenti per le specializzazioni di questo modello.

- [string_view](../standard-library/string-view-typedefs.md#string_view) per gli elementi di tipo **`char`**
- [wstring_view](../standard-library/string-view-typedefs.md#wstring_view), per **`wchar_t`**
- [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) per **`char16_t`**
- [u32string_view](../standard-library/string-view-typedefs.md#u32string_view) per **`char32_t`** .

*Tratti*\
Il valore predefinito è [char_traits](char-traits-struct.md) <>*CharType* .

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_string_view](#basic_string_view)|Costruisce un string_view vuoto, altrimenti punta a tutti i dati di un oggetto stringa o a parte di essi o a una matrice di caratteri di tipo C.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|**const_iterator**|Iteratore ad accesso casuale che può leggere **`const`** gli elementi.|
|**const_pointer**|`using const_pointer = const value_type*;`|
|**const_reference**|`using const_reference = const value_type&;`|
|**const_reverse_iterator**|`using const_reverse_iterator = std::reverse_iterator<const_iterator>;`|
|**difference_type**|`using difference_type = ptrdiff_t;`|
|**iteratore**|`using iterator = const_iterator;`|
|**npos**|`static constexpr size_type npos = size_type(-1);`|
|**puntatore**|`using pointer = value_type*;`|
|**reference**|`using reference = value_type&;`|
|**reverse_iterator**|`using reverse_iterator = const_reverse_iterator;`|
|**size_type**|`using size_type = size_t;`|
|**traits_type**|`using traits_type = Traits;`|
|**value_type**|`using value_type = CharType;`|

### <a name="member-operators"></a>Operatori membro

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_eq)|Assegna un string_view o un oggetto stringa convertibile a un altro string_view.|
|[operatore\[\]](#op_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[at](#at)|Restituisce un const_reference all'elemento in una posizione specificata.|
|[Indietro](#back)|Restituisce un const_reference all'ultimo elemento.|
|[iniziare](#begin)|Restituisce un iteratore const che punta al primo elemento. (string_views non sono modificabili).|
|[cbegin](#cbegin)|Come [Begin](#begin).|
|[cend](#cend)|Restituisce un iteratore const che punta a un oggetto dopo l'ultimo elemento.|
|[copy](#copy)|Copia al massimo un numero specificato di caratteri da una posizione indicizzata in un string_view di origine in una matrice di caratteri di destinazione. (Scelta non consigliata. In alternativa, usare _Copy_s.)|
|[_Copy_s](#_copy_s)|Funzione di copia CRT sicura.|
|[confrontare](#compare)|Confronta un string_view con un string_view specificato per determinare se sono uguali o se uno è lessicografico minore dell'altro.|
|[crbegin](#crbegin)|Uguale a [rbegin](#rbegin).|
|[crend](#crend)|Uguale a [rend](#rend).|
|[data](#data)|Restituisce un puntatore non proprietario non elaborato alla sequenza di caratteri.|
|[empty](#empty)|Verifica se il string_view contiene caratteri.|
|[fine](#end)|Uguale a [cend](#cend).|
|[ends_with](#ends_with)<sup>c++ 20</sup>|Controllare se una visualizzazione stringa termina con un suffisso specificato.|
|[find](#find)|Cerca in avanti la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.|
|[find_first_not_of](#find_first_not_of)|Cerca il primo carattere che non è un elemento di un string_view o un oggetto stringa convertibile specificato.|
|[find_first_of](#find_first_of)|Cerca il primo carattere che corrisponde a qualsiasi elemento di un string_view specificato o di un oggetto stringa convertibile.|
|[find_last_not_of](#find_last_not_of)|Cerca l'ultimo carattere che non è un elemento di un string_view o un oggetto stringa convertibile specificato.|
|[find_last_of](#find_last_of)|Cerca l'ultimo carattere che è un elemento di un string_view o un oggetto stringa convertibile specificato.|
|[fronte](#front)|Restituisce un const_reference al primo elemento.|
|[length](#length)|Restituisce il numero corrente di elementi.|
|[max_size](#max_size)|Restituisce il numero massimo di caratteri che possono essere contenuti in un string_view.|
|[rbegin](#rbegin)|Restituisce un iteratore const che punta al primo elemento di un string_view invertito.|
|[remove_prefix](#remove_prefix)|Sposta il puntatore in poi in base al numero di elementi specificato.|
|[remove_suffix](#remove_suffix)|Riduce la dimensione della visualizzazione in base al numero specificato di elementi a partire dalla parte posteriore.|
|[rend](#rend)|Restituisce un iteratore const che punta a un elemento successivo all'ultimo elemento di un string_view invertito.|
|[rfind](#rfind)|Cerca un string_view in senso inverso per la prima occorrenza di una sottostringa che corrisponde a una sequenza di caratteri specificata.|
|[size](#size)|Restituisce il numero corrente di elementi.|
|[starts_with](#starts_with)<sup>c++ 20</sup>|Controllare se una visualizzazione stringa inizia con un prefisso specificato.|
|[substr](#substr)|Restituisce una sottostringa di una lunghezza specificata a partire da un indice specificato.|
|[scambio](#swap)|Scambia il contenuto di due string_views.|

## <a name="remarks"></a>Commenti

Se a una funzione viene richiesto di generare una sequenza più lunga di [max_size](#max_size) elementi, la funzione segnala un errore di lunghezza generando un oggetto di tipo [length_error](../standard-library/length-error-class.md).

## <a name="requirements"></a>Requisiti

[std: c++ 17](../build/reference/std-specify-language-standard-version.md) o versione successiva.

**Intestazione:**\<string_view>

**Spazio dei nomi:** std

## <a name="basic_string_viewat"></a><a name="at"></a> basic_string_view:: at

Restituisce un const_reference al carattere in corrispondenza dell'indice in base zero specificato.

```cpp
constexpr const_reference at(size_type offset) const;
```

### <a name="parameters"></a>Parametri

*offset*\
Indice dell'elemento a cui fare riferimento.

### <a name="return-value"></a>Valore restituito

Const_reference al carattere in corrispondenza della posizione specificata dall'indice del parametro.

### <a name="remarks"></a>Commenti

Il primo elemento ha un indice di zero e gli elementi seguenti vengono indicizzati consecutivamente da numeri interi positivi, in modo che un string_view di lunghezza *n* includa un elemento *n*indicizzato dal numero *n-* 1. **at** genera un'eccezione per gli indici non validi, a differenza dell' [operatore \[ \] ](#op_at).

In generale, è consigliabile che **in** per le sequenze quali `std::vector` e string_view non debbano mai essere utilizzate. Un indice non valido passato a una sequenza è un errore logico che deve essere individuato e corretto durante lo sviluppo. Se un programma non è certo che gli indici siano validi, deve testarli, non chiamare at () e fare affidamento sulle eccezioni per difendersi dalla programmazione incurabile.

Per ulteriori informazioni, vedere [basic_string_view:: operator \[ \] ](#op_at) .

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

## <a name="basic_string_viewback"></a><a name="back"></a> basic_string_view:: back

Restituisce un const_reference all'ultimo elemento.

```cpp
constexpr const_reference back() const;
```

### <a name="return-value"></a>Valore restituito

Const_reference all'ultimo elemento nel string_view.

### <a name="remarks"></a>Commenti

Genera un'eccezione se la string_view è vuota.

Tenere presente che dopo la modifica di un string_view, ad esempio chiamando `remove_suffix` , l'elemento restituito da questa funzione non è più l'ultimo elemento nei dati sottostanti.

### <a name="example"></a>Esempio

Un oggetto `string_view` costruito con un valore letterale stringa C non include il valore null di terminazione. Nell'esempio seguente, quindi, `back` restituisce `'p'` e Not `'\0'` .

```cpp
char c[] = "Help"; // char[5]
string_view sv{ c };
cout << sv.size(); // size() == 4
cout << sv.back() << endl; // p
```

I valori null incorporati vengono considerati come qualsiasi altro carattere:

```cpp
string_view e = "embedded\0nulls"sv;
cout << boolalpha << (e.back() == 's'); // true
```

## <a name="basic_string_viewbasic_string_view"></a><a name="basic_string_view"></a> basic_string_view:: basic_string_view

Costruisce un string_view.

```cpp
constexpr basic_string_view() noexcept;
constexpr basic_string_view(const basic_string_view&) noexcept = default;
constexpr basic_string_view(const charT* str);
constexpr basic_string_view(const charT* str, size_type len);
```

### <a name="parameters"></a>Parametri

*Str*\
Puntatore ai valori di carattere.

*Len*\
Numero di caratteri da includere nella visualizzazione.

### <a name="remarks"></a>Commenti

I costruttori con un parametro charT * presuppongono che l'input sia con terminazione null, ma il valore null di terminazione non è incluso nell'string_view.

È anche possibile costruire un string_view con un valore letterale. Vedere [operator "" SV](string-view-operators.md#op_sv).

## <a name="basic_string_viewbegin"></a><a name="begin"></a> basic_string_view:: Begin

Uguale a [cbegin](#cbegin).

```cpp
constexpr const_iterator begin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Restituisce un const_iterator che punta al primo elemento.

## <a name="basic_string_viewcbegin"></a><a name="cbegin"></a> basic_string_view:: cbegin

Restituisce un const_iterator che punta al primo elemento nell'intervallo.

```cpp
constexpr const_iterator cbegin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

**`const`** Iteratore ad accesso casuale che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()` ).

## <a name="basic_string_viewcend"></a><a name="cend"></a> basic_string_view:: cend

Restituisce un const_iterator che punta alla posizione immediatamente successiva all'ultimo elemento di un intervallo.

```cpp
constexpr const_iterator cend() const noexcept;
```

### <a name="return-value"></a>Valore restituito

**`const`** Iteratore ad accesso casuale che punta appena oltre la fine dell'intervallo.

### <a name="remarks"></a>Commenti

`cend`Non è possibile dereferenziare il valore restituito da.

## <a name="basic_string_viewcompare"></a><a name="compare"></a> basic_string_view:: compare

Esegue un confronto con distinzione tra maiuscole e minuscole con un string_view specificato (o un tipo di stringa convertibile) per determinare se i due oggetti sono uguali o se uno è lessicografico minore dell'altro. Gli [ \<string_view> operatori](string-view-operators.md) utilizzano questa funzione membro per eseguire confronti.

```cpp
constexpr int compare(basic_string_view strv) const noexcept;
constexpr int compare(size_type pos, size_type num, basic_string_view strv) const;
constexpr int compare(size_type pos, size_type num, basic_string_view strv, size_type offset, size_type num2) const;
constexpr int compare(const charT* ptr) const;
constexpr int compare(size_type pos, size_type num, const charT* ptr) const;
constexpr int compare(size_type pos, size_type num, const charT* ptr, size_type num2) const;
```

### <a name="parameters"></a>Parametri

*strv*\
String_view da confrontare con questo string_view.

*POS*\
Indice di questa string_view in corrispondenza del quale inizia il confronto.

*Num*\
Numero massimo di caratteri di questo string_view da confrontare.

*num2*\
Numero massimo di caratteri di *Strv* da confrontare.

*offset*\
Indice di *Strv* in corrispondenza del quale inizia il confronto.

*PTR*\
Stringa C da confrontare con questo string_view.

### <a name="return-value"></a>Valore restituito

- Valore negativo se `string_view` è minore di *Strv* o *ptr*
- Zero se le due sequenze di caratteri sono uguali
- Valore positivo se `string_view` è maggiore di *Strv* o *ptr*

### <a name="remarks"></a>Commenti

Le `compare` funzioni membro eseguono un confronto con distinzione tra maiuscole e minuscole per tutte le sequenze di caratteri o per parte di esso.

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

## <a name="basic_string_viewcopy"></a><a name="copy"></a> basic_string_view:: Copy

Copia al massimo un numero specificato di caratteri da una posizione indicizzata in un string_view di origine in una matrice di caratteri di destinazione. È consigliabile usare invece la funzione Secure [basic_string_view:: _Copy_s](#_copy_s) .

```cpp
size_type copy(charT* ptr, size_type count, size_type offset = 0) const;
```

### <a name="parameters"></a>Parametri

*PTR*\
Matrice di caratteri di destinazione in cui copiare gli elementi.

*conteggio*\
Il numero di caratteri da copiare al massimo dal string_view di origine.

*offset*\
Posizione iniziale nel string_view di origine da cui devono essere eseguite le copie.

### <a name="return-value"></a>Valore restituito

Numero di caratteri copiati.

### <a name="remarks"></a>Commenti

Non viene aggiunto un carattere null alla fine della copia.

## <a name="basic_string_view_copy_s"></a><a name="_copy_s"></a> basic_string_view:: _Copy_s

Funzione di copia CRT sicura da usare al posto di [Copy](#copy).

```cpp
size_type _Copy_s(
    value_type* dest,
    size_type dest_size,
    size_type count,
    size_type _Off = 0) const;
```

### <a name="parameters"></a>Parametri

*dest*\
Matrice di caratteri di destinazione in cui copiare gli elementi.

*dest_size*\
Dimensione della *dest*.

_ *Contare* il numero di caratteri da copiare al massimo dalla stringa di origine.

*_Off*\
Posizione iniziale nella stringa di origine da cui effettuare le copie.

### <a name="return-value"></a>Valore restituito

Numero di caratteri copiati.

### <a name="remarks"></a>Commenti

Non viene aggiunto un carattere null alla fine della copia.

Per ulteriori informazioni, vedere [c-Runtime-Library/Security-features-in-the-CRT](../c-runtime-library/security-features-in-the-crt.md).

## <a name="basic_string_viewcrbegin"></a><a name="crbegin"></a> basic_string_view:: crbegin

Restituisce un const_reverse_iterator che punta al primo elemento di un string_view invertito.

```cpp
constexpr const_reverse_iterator crbegin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Const_reverse_iterator che punta al primo elemento di un string_view invertito.

## <a name="basic_string_viewcrend"></a><a name="crend"></a> basic_string_view:: crend

Uguale a [rend](#rend).

```cpp
constexpr const_reverse_iterator crend() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Restituisce un const_reverse_iterator che punta alla fine di un string_view invertito.

## <a name="basic_string_viewdata"></a><a name="data"></a> basic_string_view::d ATA

Restituisce un puntatore non proprietario non elaborato alla sequenza di caratteri const dell'oggetto utilizzato per costruire la string_view.

```cpp
constexpr value_type *data() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Puntatore a const al primo elemento della sequenza di caratteri.

### <a name="remarks"></a>Commenti

Il puntatore non può modificare i caratteri.

Una sequenza di caratteri string_view non è necessariamente con terminazione null. Il tipo restituito per `data` non è una stringa C valida perché non viene aggiunto alcun carattere null. Il carattere null ' \ 0' non ha un significato speciale in un oggetto di tipo string_view e può essere parte dell'oggetto string_view esattamente come qualsiasi altro carattere.

## <a name="basic_string_viewempty"></a><a name="empty"></a> basic_string_view:: Empty

Verifica se il string_view contiene caratteri o meno.

```cpp
constexpr bool empty() const noexcept;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto string_view non contiene caratteri; **`false`** se contiene almeno un carattere.

### <a name="remarks"></a>Commenti

La funzione membro è equivalente a [size](#size)() = = 0.

## <a name="basic_string_viewend"></a><a name="end"></a> basic_string_view:: end

Restituisce un const_iterator ad accesso casuale che punta a un oggetto dopo l'ultimo elemento.

```cpp
constexpr const_iterator end() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Restituisce un const_iterator ad accesso casuale che punta a un oggetto dopo l'ultimo elemento.

### <a name="remarks"></a>Commenti

`end` viene usato per verificare se un const_iterator ha raggiunto la fine del relativo string_view. `end`Non è possibile dereferenziare il valore restituito da.

## <a name="basic_string_viewends_with"></a><a name="ends_with"></a> basic_string_view:: ends_with

Controllare se la visualizzazione stringa termina con il suffisso specificato.

```cpp
bool ends_with(const CharType c) const noexcept;
bool ends_with(const CharType* const x) const noexcept;
bool ends_with(const basic_string_view sv) const noexcept;
```

### <a name="parameters"></a>Parametri

*c*\
Suffisso di carattere singolo da ricercare.

*SV*\
Visualizzazione di stringa contenente il suffisso da cercare. \
È possibile passare un oggetto `std::basic_string` , che viene convertito in una visualizzazione di stringa.

*x*\
Stringa di caratteri con terminazione null contenente il suffisso da ricercare.

### <a name="return-value"></a>Valore restituito

`true` Se la visualizzazione di stringa termina con il suffisso specificato; `false` in caso contrario,.

### <a name="remarks"></a>Commenti

`ends_with()` è una novità di C++ 20. Per usarlo, specificare l'opzione del compilatore [/std: c + + Latest più recente](../build/reference/std-specify-language-standard-version.md) .

Vedere [starts_with](#starts_with) per verificare se una visualizzazione stringa inizia con il prefisso specificato.

### <a name="example"></a>Esempio

```cpp
// Requires /std:c++latest
#include <string>
#include <iostream>

int main()
{
    std::cout << std::boolalpha; // so booleans show as 'true'/'false'  
    std::cout << std::string_view("abcdefg").ends_with('g') << '\n';
    std::cout << std::string_view("abcdefg").ends_with("eFg") << '\n';

    std::basic_string<char> str2 = "efg";
    std::cout << std::string_view("abcdefg").ends_with(str2);

    return 0;
}
```

```Output
true
false
true
```

## <a name="basic_string_viewfind"></a><a name="find"></a> basic_string_view:: Find

Cerca `string_view` in avanti la prima occorrenza di un carattere o di una sottostringa corrispondente a una sequenza di caratteri specificata.

```cpp
constexpr size_type find(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find(const charT* ptr, size_type offset = 0) const;
```

### <a name="parameters"></a>Parametri

*Str*\
Oggetto `string_view` per il quale la funzione membro deve eseguire la ricerca.

*chVal*\
Valore di carattere che la funzione membro deve cercare.

*offset*\
Indice in corrispondenza del quale iniziare la ricerca.

*PTR*\
Stringa C per la quale la funzione membro deve eseguire la ricerca.

*conteggio*\
Numero di caratteri in *ptr*, che viene conteggiato in base al primo carattere.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

## <a name="basic_string_viewfind_first_not_of"></a><a name="find_first_not_of"></a> basic_string_view:: find_first_not_of

Cerca il primo carattere che non è un elemento di un string_view o un oggetto stringa convertibile specificato.

```cpp
constexpr size_type find_first_not_of(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find_first_not_of(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find_first_not_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_first_not_of(const charT* ptr, size_type offset = 0) const;
```

### <a name="parameters"></a>Parametri

*Str*\
String_view per cui la funzione membro deve eseguire la ricerca.

*chVal*\
Valore di carattere che la funzione membro deve cercare.

*offset*\
Indice in corrispondenza del quale iniziare la ricerca.

*PTR*\
Stringa C per la quale la funzione membro deve eseguire la ricerca.

*conteggio*\
Il numero di caratteri, a partire dal primo carattere, nella stringa C per cui la funzione membro deve eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

## <a name="basic_string_viewfind_first_of"></a><a name="find_first_of"></a> basic_string_view:: find_first_of

Cerca il primo carattere che corrisponde a qualsiasi elemento di un string_view specificato.

```cpp
constexpr size_type find_first_of(basic_string_view str, size_type offset = 0) const noexcept;
constexpr size_type find_first_of(charT chVal, size_type offset = 0) const noexcept;
constexpr size_type find_first_of(const charT* str, size_type offset, size_type count) const;
constexpr size_type find_first_of(const charT* str, size_type offset = 0) const;
```

### <a name="parameters"></a>Parametri

*chVal*\
Valore di carattere che la funzione membro deve cercare.

*offset*\
Indice in corrispondenza del quale iniziare la ricerca.

*PTR*\
Stringa C per la quale la funzione membro deve eseguire la ricerca.

*conteggio*\
Il numero di caratteri, a partire dal primo carattere, nella stringa C per cui la funzione membro deve eseguire la ricerca.

*Str*\
String_view per cui la funzione membro deve eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `npos`.

## <a name="basic_string_viewfind_last_not_of"></a><a name="find_last_not_of"></a> basic_string_view:: find_last_not_of

Cerca l'ultimo carattere che non è un elemento di un string_view specificato.

```cpp
constexpr size_type find_last_not_of(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type find_last_not_of(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type find_last_not_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_last_not_of(const charT* ptr, size_type offset = npos) const;
```

### <a name="parameters"></a>Parametri

*Str*\
String_view per cui la funzione membro deve eseguire la ricerca.

*chVal*\
Valore di carattere che la funzione membro deve cercare.

*offset*\
Indice in corrispondenza del quale viene completata la ricerca.

*PTR*\
Stringa C per la quale la funzione membro deve eseguire la ricerca.

*conteggio*\
Numero di caratteri, che viene conteggiato in base al primo carattere, in *ptr*.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa ricercata; in caso contrario `string_view::npos`.

## <a name="basic_string_viewfind_last_of"></a><a name="find_last_of"></a> basic_string_view:: find_last_of

Cerca l'ultimo carattere che corrisponde a qualsiasi elemento di un string_view specificato.

```cpp
constexpr size_type find_last_of(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type find_last_of(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type find_last_of(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type find_last_of(const charT* ptr, size_type offset = npos) const;
```

### <a name="parameters"></a>Parametri

*Str*\
String_view per cui la funzione membro deve eseguire la ricerca.

*chVal*\
Valore di carattere che la funzione membro deve cercare.

*offset*\
Indice in corrispondenza del quale viene completata la ricerca.

*PTR*\
Stringa C per la quale la funzione membro deve eseguire la ricerca.

*conteggio*\
Il numero di caratteri, a partire dal primo carattere, nella stringa C per cui la funzione membro deve eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Indice dell'ultimo carattere della sottostringa trovato; se la ricerca ha esito negativo, `npos`.

## <a name="basic_string_viewfront"></a><a name="front"></a> basic_string_view:: front

Restituisce un const_reference al primo elemento.

```cpp
constexpr const_reference front() const;
```

### <a name="return-value"></a>Valore restituito

Const_reference al primo elemento.

### <a name="remarks"></a>Commenti

Genera un'eccezione se la string_view è vuota.

## <a name="basic_string_viewlength"></a><a name="length"></a> basic_string_view:: length

Restituisce il numero corrente di elementi.

```cpp
constexpr size_type length() const noexcept;
```

### <a name="remarks"></a>Commenti

La funzione membro è uguale a [size](#size).

## <a name="basic_string_viewmax_size"></a><a name="max_size"></a> basic_string_view:: max_size

Restituisce il numero massimo di caratteri che possono essere contenuti in un string_view.

```cpp
constexpr size_type max_size() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Numero massimo di caratteri che possono essere contenuti in un string_view.

### <a name="remarks"></a>Commenti

Un'eccezione di tipo [length_error](../standard-library/length-error-class.md) viene generata quando un'operazione genera una string_view con una lunghezza maggiore di `max_size()` .

## <a name="basic_string_viewoperator"></a><a name="op_eq"></a> basic_string_view:: operator =

Assegna un string_view o un oggetto stringa convertibile a un altro string_view.

```cpp
constexpr basic_string_view& operator=(const basic_string_view&) noexcept = default;
```

### <a name="example"></a>Esempio

```cpp
   string_view s = "Hello";
   string_view s2 = s;
```

## <a name="basic_string_viewoperator"></a><a name="op_at"></a> basic_string_view:: operator []

Fornisce un const_reference al carattere con un indice specificato.

```cpp
constexpr const_reference operator[](size_type offset) const;
```

### <a name="parameters"></a>Parametri

*offset*\
Indice dell'elemento a cui fare riferimento.

### <a name="return-value"></a>Valore restituito

Const_reference al carattere in corrispondenza della posizione specificata dall'indice del parametro.

### <a name="remarks"></a>Commenti

Il primo elemento ha un indice zero e gli elementi seguenti vengono indicizzati consecutivamente da numeri interi positivi, in modo che un string_view di lunghezza *n* includa un elemento *n*indicizzato dal numero *n* -1.

`operator[]` è più veloce della funzione membro [in](#at) per fornire l'accesso in lettura agli elementi di un string_view.

`operator[]` non controlla se l'indice passato come argomento è valido. Un indice non valido passato a `operator[]` genera un comportamento non definito.

Il riferimento restituito può essere invalidato se i dati di stringa sottostanti vengono modificati o eliminati dall'oggetto proprietario.

Quando si esegue la compilazione con il [ \_ \_ \_ livello di debug iteratore](../standard-library/iterator-debug-level.md) impostato su 1 o 2, si verificherà un errore di runtime se si tenta di accedere a un elemento all'esterno dei limiti del string_view. Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md).

## <a name="basic_string_viewrbegin"></a><a name="rbegin"></a> basic_string_view:: rbegin

Restituisce un iteratore const al primo elemento di un string_view invertito.

```cpp
constexpr const_reverse_iterator rbegin() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Restituisce un iteratore ad accesso casuale al primo elemento di un string_view invertito, indirizzando il quale sarebbe l'ultimo elemento nel string_view non invertito corrispondente.

### <a name="remarks"></a>Commenti

`rbegin` viene usato con un string_view invertito proprio come [Begin](#begin) viene usato con una string_view. `rbegin` può essere utilizzato per inizializzare un'iterazione all'indietro.

## <a name="basic_string_viewremove_prefix"></a><a name="remove_prefix"></a> basic_string_view:: remove_prefix

Sposta il puntatore in poi in base al numero di elementi specificato.

```cpp
constexpr void remove_prefix(size_type n);
```

### <a name="remarks"></a>Commenti

Lascia invariati i dati sottostanti. Sposta il puntatore string_view in base a n elementi e imposta il `size` membro dati privato su size-n.

## <a name="basic_string_viewremove_suffix"></a><a name="remove_suffix"></a> basic_string_view:: remove_suffix

Riduce la dimensione della visualizzazione in base al numero specificato di elementi a partire dalla parte posteriore.

```cpp
constexpr void remove_suffix(size_type n);
```

### <a name="remarks"></a>Commenti

Lascia invariato il puntatore e i dati sottostanti. Imposta il `size` membro dati privato su size-n.

## <a name="basic_string_viewrend"></a><a name="rend"></a> basic_string_view:: rend

Restituisce un iteratore const che punta a un elemento successivo all'ultimo elemento di un string_view invertito.

```cpp
constexpr reverse_iterator rend() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Iteratore const inverso ad accesso casuale che punta a un elemento successivo all'ultimo elemento di un string_view invertito.

### <a name="remarks"></a>Commenti

`rend` viene usato con un string_view invertito proprio come [end](#end) viene usato con una string_view. `rend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine del string_view. `rend`Non è possibile dereferenziare il valore restituito da.

## <a name="basic_string_viewrfind"></a><a name="rfind"></a> basic_string_view:: rfind

Esegue la ricerca di un string_view in senso inverso per una sottostringa che corrisponde a una sequenza di caratteri specificata.

```cpp
constexpr size_type rfind(basic_string_view str, size_type offset = npos) const noexcept;
constexpr size_type rfind(charT chVal, size_type offset = npos) const noexcept;
constexpr size_type rfind(const charT* ptr, size_type offset, size_type count) const;
constexpr size_type rfind(const charT* ptr, size_type offset = npos) const;
```

### <a name="parameters"></a>Parametri

*chVal*\
Valore di carattere che la funzione membro deve cercare.

*offset*\
Indice in corrispondenza del quale iniziare la ricerca.

*PTR*\
Stringa C per la quale la funzione membro deve eseguire la ricerca.

*conteggio*\
Il numero di caratteri, a partire dal primo carattere, nella stringa C per cui la funzione membro deve eseguire la ricerca.

*Str*\
String_view per cui la funzione membro deve eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Indice del primo carattere della sottostringa in caso di esito positivo; in caso contrario `npos` ,.

## <a name="basic_string_viewsize"></a><a name="size"></a> basic_string_view:: size

Restituisce il numero di elementi nella string_view.

```cpp
constexpr size_type size() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Lunghezza del string_view.

### <a name="remarks"></a>Commenti

Un string_view può modificarne la lunghezza, ad esempio da `remove_prefix` e `remove_suffix` . Poiché non modifica i dati di stringa sottostanti, la dimensione di un string_view non è necessariamente la dimensione dei dati sottostanti.

## <a name="basic_string_viewstarts_with"></a><a name="starts_with"></a> basic_string_view:: starts_with

Controllare se la visualizzazione stringa inizia con il prefisso specificato.

```cpp
bool starts_with(const CharType c) const noexcept;
bool starts_with(const CharType* const x) const noexcept;
bool starts_with(const basic_string_view sv) const noexcept;
```

### <a name="parameters"></a>Parametri

*c*\
Prefisso del singolo carattere da cercare.

*SV*\
Visualizzazione stringa che contiene il prefisso da cercare. \
È possibile passare un oggetto `std::basic_string` , che viene convertito in una visualizzazione di stringa.

*x*\
Stringa di caratteri con terminazione null contenente il prefisso da ricercare.

### <a name="return-value"></a>Valore restituito

`true` Se la stringa inizia con il prefisso specificato. `false` in caso contrario,.

### <a name="remarks"></a>Commenti

`starts_with()` è una novità di C++ 20. Per usarlo, specificare l'opzione del compilatore [/std: c + + Latest più recente](../build/reference/std-specify-language-standard-version.md) .

Vedere [ends_with](#ends_with) per verificare se una stringa termina con un suffisso.

### <a name="example"></a>Esempio

```cpp
// Requires /std:c++latest
#include <string>
#include <iostream>

int main()
{
    std::cout << std::boolalpha; // so booleans show as 'true'/'false'  
    std::cout << std::string_view("abcdefg").starts_with('b') << '\n';
    std::cout << std::string_view("abcdefg").starts_with("aBc") << '\n';

    std::basic_string<char> str2 = "abc";
    std::cout << std::string_view("abcdefg").starts_with(str2);

    return 0;
}
```

```Output
false
false
true
```

## <a name="basic_string_viewsubstr"></a><a name="substr"></a> basic_string_view:: substr

Restituisce un string_view che rappresenta (al massimo) il numero specificato di caratteri da una posizione specificata.

```cpp
constexpr basic_string_view substr(size_type offset = 0, size_type count = npos) const;
```

### <a name="parameters"></a>Parametri

*offset*\
Indice che individua l'elemento in corrispondenza della posizione da cui viene eseguita la copia e il valore predefinito è 0.

*conteggio*\
Numero di caratteri da includere nella sottostringa, se presenti.

### <a name="return-value"></a>Valore restituito

Oggetto string_view che rappresenta la sottosequenza specificata di elementi.

## <a name="basic_string_viewswap"></a><a name="swap"></a> basic_string_view:: swap

Scambia due string_views, ovvero i puntatori ai dati di stringa sottostanti e i valori delle dimensioni.

```cpp
constexpr void swap(basic_string_view& sv) noexcept;
```

### <a name="parameters"></a>Parametri

*SV*\
String_view di origine i cui valori di puntatore e dimensione devono essere scambiati con quello della string_view di destinazione.

## <a name="see-also"></a>Vedi anche

[\<string_view>](../standard-library/string-view.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
