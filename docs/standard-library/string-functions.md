---
title: Funzioni &lt;string&gt;
ms.date: 11/04/2016
f1_keywords:
- string/std::getline
- string/std::stod
- string/std::stof
- string/std::stoi
- string/std::stol
- string/std::stold
- string/std::stoll
- string/std::stoul
- string/std::stoull
- string/std::swap
- string/std::to_string
- string/std::to_wstring
ms.assetid: 1a4ffd11-dce5-4cc6-a043-b95de034c7c4
helpviewer_keywords:
- std::getline [C++]
- std::stod [C++]
- std::stof [C++]
- std::stoi [C++]
- std::stol [C++]
- std::stold [C++]
- std::stoll [C++]
- std::stoul [C++]
- std::stoull [C++]
- std::swap [C++]
- std::to_string [C++]
- std::to_wstring [C++]
ms.openlocfilehash: 3f1dca71a6bb9d5461150378191b9373f907ecd1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376657"
---
# <a name="ltstringgt-functions"></a>Funzioni &lt;string&gt;

||||
|-|-|-|
|[Getline](#getline)|[stod](#stod)|[Stof](#stof)|
|[stoi](#stoi)|[stol](#stol)|[stold](#stold)|
|[stoll](#stoll)|[stoul](#stoul)|[stoull](#stoull)|
|[Swap](#swap)|[to_string](#to_string)|[to_wstring](#to_wstring)|

## <a name="getline"></a><a name="getline"></a>Getline

Estrarre stringhe dal flusso di input riga per riga.

```cpp
// (1) delimiter as parameter
template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>& in_stream,
    basic_string<CharType, Traits, Allocator>& str,
    CharType delimiter);

template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>&& in_stream,
    basic_string<CharType, Traits, Allocator>& str,
    const CharType delimiter);

// (2) default delimiter used
template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>& in_stream,
    basic_string<CharType, Traits, Allocator>& str);

template <class Allocator, class Traits, class Allocator>
basic_istream<Allocator, Traits>& getline(
    basic_istream<Allocator, Traits>&& in_stream,
    basic_string<Allocator, Traits, Allocator>& str);
```

### <a name="parameters"></a>Parametri

*in_stream*\
Flusso di input da cui estrarre una stringa.

*Str*\
Stringa in cui vengono letti i caratteri dal flusso di input.

*Delimitatore*\
Delimitatore di riga.

### <a name="return-value"></a>Valore restituito

Il flusso di input *in_stream*.

### <a name="remarks"></a>Osservazioni

La coppia di `(1)` firme di funzione contrassegnate per estrarre i caratteri da *in_stream* fino a quando non viene trovato il *delimitatore,* archiviandoli in *str*.

La coppia di `(2)` firme di funzione contrassegnate utilizza newline `getline(in_stream, str, in_stream. widen('\n'))`come delimitatore di riga predefinito e si comporta come .

La seconda funzione di ogni coppia è analoga alla prima per il supporto dei [riferimenti rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md).

L'estrazione termina quando si verifica una delle condizioni seguenti:

- Alla fine del file, nel qual *in_stream* caso il `ios_base::eofbit`flag di stato interno di in_stream è impostato su .

- Dopo che la funzione estrae un elemento che confronta uguale a *delimitatore*. L'elemento non viene reinserito o aggiunto alla sequenza controllata.

- Dopo che la `str.`funzione estrae [max_size](../standard-library/basic-string-class.md#max_size) elementi. Il flag di *in_stream* stato interno `ios_base::failbit`di in_stream è impostato su .

- Un altro errore diverso da quelli precedentemente elencati; il flag di *in_stream* stato interno `ios_base::badbit`di in_stream è impostato su .

Per informazioni sui flag di stato interno, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

Se la funzione non estrae *in_stream* alcun elemento, `ios_base::failbit`il flag di stato interno di in_stream viene impostato su . In ogni `getline` caso, restituisce *in_stream*.

Se viene generata un'eccezione, *in_stream* e *str* vengono lasciati in uno stato valido.

### <a name="example"></a>Esempio

Il codice seguente illustra `getline()` secondo due modalità: la prima con il delimitatore predefinito (carattere di nuova riga) e la seconda con uno spazio vuoto come delimitatore. Il carattere di fine file (CTRL-Z sulla tastiera) viene usato per controllare la terminazione dei cicli while. Questo valore imposta il `cin` flag `eofbit`di stato interno di su , che deve essere cancellato con [basic_ios::clear()](../standard-library/basic-ios-class.md#clear) prima che il secondo ciclo while funzioni correttamente.

```cpp
// compile with: /EHsc /W4
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    vector<string> v1;
    cout << "Enter a sentence, press ENTER between sentences. (Ctrl-Z to stop): " << endl;
    // Loop until end-of-file (Ctrl-Z) is input, store each sentence in a vector.
    // Default delimiter is the newline character.
    while (getline(cin, str)) {
        v1.push_back(str);
    }

    cout << "The following input was stored with newline delimiter:" << endl;
    for (const auto& p : v1) {
        cout << p << endl;
    }

    cin.clear();

    vector<string> v2;
    // Now try it with a whitespace delimiter
    while (getline(cin, str, ' ')) {
        v2.push_back(str);
    }

    cout << "The following input was stored with whitespace as delimiter:" << endl;
    for (const auto& p : v2) {
        cout << p << endl;
    }
}
```

## <a name="stod"></a><a name="stod"></a>stod

Converte una sequenza **`double`** di caratteri in un oggetto .

```cpp
double stod(
    const string& str,
    size_t* idx = 0);

double stod(
    const wstring& str,
    size_t* idx = 0
;
```

### <a name="parameters"></a>Parametri

*Str*\
Sequenza di caratteri da convertire.

*Idx*\
Valore di indice del primo carattere non convertito.

### <a name="return-value"></a>Valore restituito

Valore. **`double`**

### <a name="remarks"></a>Osservazioni

La funzione converte la *str* sequenza di elementi **`double`** in str `strtod( str.c_str(), _Eptr)`in `_Eptr` un valore di tipo come se si chiamasse , dove è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr`, genera un oggetto `invalid_argument`di tipo . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non `*_Eptr -  str.c_str()` è `*idx` un puntatore null, la funzione archivia e restituisce il valore.

## <a name="stof"></a><a name="stof"></a>Stof

Converte una sequenza di caratteri in un tipo float.

```cpp
float stof(
    const string& str,
    size_t* idx = 0);

float stof(
    const wstring& str,
    size_t* idx = 0);
```

### <a name="parameters"></a>Parametri

*Str*\
Sequenza di caratteri da convertire.

*Idx*\
Valore di indice del primo carattere non convertito.

### <a name="return-value"></a>Valore restituito

Valore. **`float`**

### <a name="remarks"></a>Osservazioni

La funzione converte la *str* sequenza di elementi **`float`** in str `strtof( str.c_str(), _Eptr)`in `_Eptr` un valore di tipo come se si chiamasse , dove è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr`, genera un oggetto `invalid_argument`di tipo . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non `*_Eptr -  str.c_str()` è `*idx` un puntatore null, la funzione archivia e restituisce il valore.

## <a name="stoi"></a><a name="stoi"></a>stoi

Converte una sequenza di caratteri in un Integer.

```cpp
int stoi(
    const string& str,
    size_t* idx = 0,
    int base = 10);

int stoi(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### <a name="return-value"></a>Valore restituito

Valore Integer.

### <a name="parameters"></a>Parametri

*Str*\
Sequenza di caratteri da convertire.

*Idx*\
Valore di indice del primo carattere non convertito.

*Base*\
Base numerica da usare.

### <a name="remarks"></a>Osservazioni

La `stoi` funzione converte la sequenza di caratteri **`int`** in *str* in un valore di tipo e restituisce il valore. Ad esempio, se viene passata la sequenza di caratteri "10", il valore restituito da `stoi` sarà 10.

`stoi`si comporta in modo `strtol` simile alla funzione per i caratteri a `strtol( str.c_str(), _Eptr, idx)`byte `_Eptr` singolo quando viene chiamata nel modo , dove è un oggetto interno alla funzione; o `wcstol` per caratteri larghi, quando viene `wcstol(Str.c_str(), _Eptr, idx)`chiamato in modo simile, . Per altre informazioni, vedere [strtol, wcstol, _strtol_l, _wcstol_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md).

Se `str.c_str() == *_Eptr` `stoi` , genera un `invalid_argument`oggetto di tipo . Se tale chiamata `errno`imposta , o se il valore restituito non può **`int`** essere rappresentato come `out_of_range`oggetto di tipo , genera un oggetto di tipo . In caso contrario, se *idx* non `*_Eptr - str.c_str()` è `*idx`un puntatore null, la funzione archivia in .

## <a name="stol"></a><a name="stol"></a>Stol

Converte una sequenza **`long`** di caratteri in un oggetto .

```cpp
long stol(
    const string& str,
    size_t* idx = 0,
    int base = 10);

long stol(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### <a name="parameters"></a>Parametri

*Str*\
Sequenza di caratteri da convertire.

*Idx*\
Valore di indice del primo carattere non convertito.

*Base*\
Base numerica da usare.

### <a name="return-value"></a>Valore restituito

Valore Long Integer.

### <a name="remarks"></a>Osservazioni

La funzione converte la *str* sequenza di elementi **`long`** in str `strtol( str.c_str(), _Eptr, idx)`in `_Eptr` un valore di tipo come se si chiamasse , dove è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr`, genera un oggetto `invalid_argument`di tipo . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non `*_Eptr -  str.c_str()` è `*idx` un puntatore null, la funzione archivia e restituisce il valore.

## <a name="stold"></a><a name="stold"></a>stold

Converte una sequenza **`long double`** di caratteri in un oggetto .

```cpp
double stold(
    const string& str,
    size_t* idx = 0);

double stold(
    const wstring& str,
    size_t* idx = 0);
```

### <a name="parameters"></a>Parametri

*Str*\
Sequenza di caratteri da convertire.

*Idx*\
Valore di indice del primo carattere non convertito.

### <a name="return-value"></a>Valore restituito

Valore. **`long double`**

### <a name="remarks"></a>Osservazioni

La funzione converte la *str* sequenza di elementi **`long double`** in str `strtold( str.c_str(), _Eptr)`in `_Eptr` un valore di tipo come se si chiamasse , dove è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr`, genera un oggetto `invalid_argument`di tipo . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non `*_Eptr -  str.c_str()` è `*idx` un puntatore null, la funzione archivia e restituisce il valore.

## <a name="stoll"></a><a name="stoll"></a>Stoll

Converte una sequenza **`long long`** di caratteri in un oggetto .

```cpp
long long stoll(
    const string& str,
    size_t* idx = 0,
    int base = 10);

long long stoll(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### <a name="parameters"></a>Parametri

*Str*\
Sequenza di caratteri da convertire.

*Idx*\
Valore di indice del primo carattere non convertito.

*Base*\
Base numerica da usare.

### <a name="return-value"></a>Valore restituito

Valore. **`long long`**

### <a name="remarks"></a>Osservazioni

La funzione converte la *str* sequenza di elementi **`long long`** in str `strtoll( str.c_str(), _Eptr, idx)`in `_Eptr` un valore di tipo come se si chiamasse , dove è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr`, genera un oggetto `invalid_argument`di tipo . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non `*_Eptr -  str.c_str()` è `*idx` un puntatore null, la funzione archivia e restituisce il valore.

## <a name="stoul"></a><a name="stoul"></a>stoul

Converte una sequenza di caratteri in un tipo unsigned long.

```cpp
unsigned long stoul(
    const string& str,
    size_t* idx = 0,
    int base = 10);

unsigned long stoul(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### <a name="parameters"></a>Parametri

*Str*\
Sequenza di caratteri da convertire.

*Idx*\
Valore di indice del primo carattere non convertito.

*Base*\
Base numerica da usare.

### <a name="return-value"></a>Valore restituito

Valore Unsigned Long Integer.

### <a name="remarks"></a>Osservazioni

La funzione converte la *str* sequenza di elementi **`unsigned long`** in str `strtoul( str.c_str(), _Eptr, idx)`in `_Eptr` un valore di tipo come se si chiamasse , dove è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr`, genera un oggetto `invalid_argument`di tipo . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non `*_Eptr -  str.c_str()` è `*idx` un puntatore null, la funzione archivia e restituisce il valore.

## <a name="stoull"></a><a name="stoull"></a>stoull

Converte una sequenza **`unsigned long long`** di caratteri in un oggetto .

```cpp
unsigned long long stoull(
    const string& str,
    size_t* idx = 0,
    int base = 10);

unsigned long long stoull(
    const wstring& str,
    size_t* idx = 0,
    int base = 10);
```

### <a name="parameters"></a>Parametri

*Str*\
Sequenza di caratteri da convertire.

*Idx*\
Valore di indice del primo carattere non convertito.

*Base*\
Base numerica da usare.

### <a name="return-value"></a>Valore restituito

Valore. **`unsigned long long`**

### <a name="remarks"></a>Osservazioni

La funzione converte la *str* sequenza di elementi **`unsigned long long`** in str `strtoull( str.c_str(), _Eptr, idx)`in `_Eptr` un valore di tipo come se si chiamasse , dove è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr`, genera un oggetto `invalid_argument`di tipo . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non `*_Eptr -  str.c_str()` è `*idx` un puntatore null, la funzione archivia e restituisce il valore.

## <a name="swap"></a><a name="swap"></a>Swap

Scambia le matrici di caratteri di due stringhe.

```cpp
template <class Traits, class Allocator>
void swap(basic_string<CharType, Traits, Allocator>& left, basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Sinistra*\
Una stringa i cui elementi devono essere scambiati con gli elementi di un'altra stringa.

*va bene*\
Altra stringa di cui scambiare gli elementi con quelli della prima stringa.

### <a name="remarks"></a>Osservazioni

La funzione di modello esegue la funzione membro specializzata *left*. [swap](../standard-library/basic-string-class.md#swap)(*a destra*) per le stringhe, che garantisce una complessità costante.

### <a name="example"></a>Esempio

```cpp
// string_swap.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   // Declaring an object of type basic_string<char>
   string s1 ( "Tweedledee" );
   string s2 ( "Tweedledum" );
   cout << "Before swapping string s1 and s2:" << endl;
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   swap ( s1 , s2 );
   cout << "\nAfter swapping string s1 and s2:" << endl;
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;
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

## <a name="to_string"></a><a name="to_string"></a>to_string

Converte un valore in un valore `string`.

```cpp
string to_string(int value);
string to_string(unsigned int value);
string to_string(long value);
string to_string(unsigned long value);
string to_string(long long value);
string to_string(unsigned long long value);
string to_string(float value);
string to_string(double value);
string to_string(long double value);
```

### <a name="parameters"></a>Parametri

*Valore*\
Valore da convertire.

### <a name="return-value"></a>Valore restituito

Valore `string` che rappresenta il valore X.

### <a name="remarks"></a>Osservazioni

La funzione converte *il valore* in una `Buf` sequenza di elementi archiviati in un oggetto matrice interno alla funzione come se chiamasse `sprintf(Buf, Fmt, value)`, where `Fmt` is

- `"%d"`se *value* è di tipo**`int`**

- `"%u"`se *value* è di tipo**`unsigned int`**

- `"%ld"`se *value* è di tipo**`long`**

- `"%lu"`se *value* è di tipo**`unsigned long`**

- `"%lld"`se *value* è di tipo**`long long`**

- `"%llu"`se *value* è di tipo**`unsigned long long`**

- `"%f"`se *value* è **`float`** di tipo o**`double`**

- `"%Lf"`se *value* è di tipo**`long double`**

La funzione restituisce `string(Buf)`.

## <a name="to_wstring"></a><a name="to_wstring"></a>to_wstring

Converte un valore in un valore string di tipo wide.

```cpp
wstring to_wstring(int value);
wstring to_wstring(unsigned int value);
wstring to_wstring(long value);
wstring to_wstring(unsigned long value);
wstring to_wstring(long long value);
wstring to_wstring(unsigned long long value);
wstring to_wstring(float value);
wstring to_wstring(double value);
wstring to_wstring(long double value);
```

### <a name="parameters"></a>Parametri

*Valore*\
Valore da convertire.

### <a name="return-value"></a>Valore restituito

Stringa a caratteri "wide" che rappresenta il valore.

### <a name="remarks"></a>Osservazioni

La funzione converte *il valore* in una `Buf` sequenza di elementi archiviati in un oggetto matrice interno alla funzione come se chiamasse `swprintf(Buf, Len, Fmt, value)`, where `Fmt` is

- `L"%d"`se *value* è di tipo**`int`**

- `L"%u"`se *value* è di tipo**`unsigned int`**

- `L"%ld"`se *value* è di tipo**`long`**

- `L"%lu"`se *value* è di tipo**`unsigned long`**

- `L"%lld"`se *value* è di tipo**`long long`**

- `L"%llu"`se *value* è di tipo**`unsigned long long`**

- `L"%f"`se *value* è **`float`** di tipo o**`double`**

- `L"%Lf"`se *value* è di tipo**`long double`**

La funzione restituisce `wstring(Buf)`.

## <a name="see-also"></a>Vedere anche

[\<>di stringhe](../standard-library/string.md)
