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
ms.openlocfilehash: 350a66481c7061322f08a768ec1628598f4af68e
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88843183"
---
# <a name="ltstringgt-functions"></a>Funzioni &lt;string&gt;

[getline](#getline)\
[stod](#stod)\
[stof](#stof)\
[Stoi](#stoi)\
[STOL](#stol)\
[stold](#stold)\
[Stoll](#stoll)\
[stoul](#stoul)\
[stoull](#stoull)\
[scambio](#swap)\
[to_string](#to_string)\
[to_wstring](#to_wstring)

## <a name="getline"></a><a name="getline"></a> getline

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

*delimitatore*\
Delimitatore di riga.

### <a name="return-value"></a>Valore restituito

Flusso di input *in_stream*.

### <a name="remarks"></a>Osservazioni

La coppia di firme di funzione contrassegnata come `(1)` Estrai caratteri da *in_stream* fino a quando non viene trovato un *delimitatore* , archiviando i caratteri in *STR*.

La coppia di firme di funzione contrassegnata `(2)` con USA nuova riga come delimitatore di riga predefinito e si comporta come `getline(in_stream, str, in_stream. widen('\n'))` .

La seconda funzione di ogni coppia è analoga alla prima per il supporto dei [riferimenti rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md).

L'estrazione termina quando si verifica una delle condizioni seguenti:

- Alla fine del file, nel qual caso il flag di stato interno di *in_stream* è impostato su `ios_base::eofbit` .

- Dopo che la funzione estrae un elemento che risulta uguale a *delimitatore*. L'elemento non viene reinserito né aggiunto alla sequenza controllata.

- Dopo l'estrazione della funzione `str.` [max_size](../standard-library/basic-string-class.md#max_size) elementi. Il flag di stato interno del *in_stream* è impostato su `ios_base::failbit` .

- Altri errori diversi da quelli elencati in precedenza; il flag di stato interno del *in_stream* è impostato su `ios_base::badbit` .

Per informazioni sui flag di stato interno, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

Se la funzione non estrae alcun elemento, il flag di stato interno di *in_stream* viene impostato su `ios_base::failbit` . In ogni caso, `getline` restituisce *in_stream*.

Se viene generata un'eccezione, *in_stream* e *Str* rimangono in uno stato valido.

### <a name="example"></a>Esempio

Il codice seguente illustra `getline()` secondo due modalità: la prima con il delimitatore predefinito (carattere di nuova riga) e la seconda con uno spazio vuoto come delimitatore. Il carattere di fine file (CTRL-Z sulla tastiera) viene usato per controllare la terminazione dei cicli while. Questo valore imposta il flag di stato interno di `cin` su `eofbit` , che deve essere cancellato con [basic_ios:: Clear ()](../standard-library/basic-ios-class.md#clear) prima che il secondo ciclo while funzioni correttamente.

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

## <a name="stod"></a><a name="stod"></a> stod

Converte una sequenza di caratteri in un oggetto **`double`** .

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

*idx*\
Valore di indice del primo carattere non convertito.

### <a name="return-value"></a>Valore restituito

**`double`** Valore.

### <a name="remarks"></a>Osservazioni

La funzione converte la sequenza di elementi in *Str* in un valore di tipo **`double`** come se venisse chiamato `strtod( str.c_str(), _Eptr)` , dove `_Eptr` è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr` , viene generato un oggetto di tipo `invalid_argument` . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` in `*idx` e restituisce il valore.

## <a name="stof"></a><a name="stof"></a> stof

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

*idx*\
Valore di indice del primo carattere non convertito.

### <a name="return-value"></a>Valore restituito

**`float`** Valore.

### <a name="remarks"></a>Osservazioni

La funzione converte la sequenza di elementi in *Str* in un valore di tipo **`float`** come se venisse chiamato `strtof( str.c_str(), _Eptr)` , dove `_Eptr` è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr` , viene generato un oggetto di tipo `invalid_argument` . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` in `*idx` e restituisce il valore.

## <a name="stoi"></a><a name="stoi"></a> Stoi

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

*idx*\
Valore di indice del primo carattere non convertito.

*base*\
Base numerica da usare.

### <a name="remarks"></a>Osservazioni

La funzione `stoi` converte la sequenza di caratteri in *Str* in un valore di tipo **`int`** e restituisce il valore. Ad esempio, se viene passata la sequenza di caratteri "10", il valore restituito da `stoi` sarà 10.

`stoi` si comporta in modo analogo alla funzione `strtol` per i caratteri a byte singolo quando viene chiamata nel modo `strtol( str.c_str(), _Eptr, idx)` , dove `_Eptr` è un oggetto interno alla funzione oppure per i `wcstol` caratteri wide, quando viene chiamato in modo simile, `wcstol(Str.c_str(), _Eptr, idx)` . Per altre informazioni, vedere [strtol, wcstol, _strtol_l, _wcstol_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md).

Se `str.c_str() == *_Eptr` , `stoi` genera un oggetto di tipo `invalid_argument` . Se tale chiamata imposta `errno` o se il valore restituito non può essere rappresentato come un oggetto di tipo **`int`** , viene generato un oggetto di tipo `out_of_range` . In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr - str.c_str()` in `*idx` .

## <a name="stol"></a><a name="stol"></a> STOL

Converte una sequenza di caratteri in un oggetto **`long`** .

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

*idx*\
Valore di indice del primo carattere non convertito.

*base*\
Base numerica da usare.

### <a name="return-value"></a>Valore restituito

Valore Long Integer.

### <a name="remarks"></a>Osservazioni

La funzione converte la sequenza di elementi in *Str* in un valore di tipo **`long`** come se venisse chiamato `strtol( str.c_str(), _Eptr, idx)` , dove `_Eptr` è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr` , viene generato un oggetto di tipo `invalid_argument` . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` in `*idx` e restituisce il valore.

## <a name="stold"></a><a name="stold"></a> stold

Converte una sequenza di caratteri in un oggetto **`long double`** .

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

*idx*\
Valore di indice del primo carattere non convertito.

### <a name="return-value"></a>Valore restituito

**`long double`** Valore.

### <a name="remarks"></a>Osservazioni

La funzione converte la sequenza di elementi in *Str* in un valore di tipo **`long double`** come se venisse chiamato `strtold( str.c_str(), _Eptr)` , dove `_Eptr` è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr` , viene generato un oggetto di tipo `invalid_argument` . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` in `*idx` e restituisce il valore.

## <a name="stoll"></a><a name="stoll"></a> Stoll

Converte una sequenza di caratteri in un oggetto **`long long`** .

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

*idx*\
Valore di indice del primo carattere non convertito.

*base*\
Base numerica da usare.

### <a name="return-value"></a>Valore restituito

**`long long`** Valore.

### <a name="remarks"></a>Osservazioni

La funzione converte la sequenza di elementi in *Str* in un valore di tipo **`long long`** come se venisse chiamato `strtoll( str.c_str(), _Eptr, idx)` , dove `_Eptr` è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr` , viene generato un oggetto di tipo `invalid_argument` . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` in `*idx` e restituisce il valore.

## <a name="stoul"></a><a name="stoul"></a> stoul

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

*idx*\
Valore di indice del primo carattere non convertito.

*base*\
Base numerica da usare.

### <a name="return-value"></a>Valore restituito

Valore Unsigned Long Integer.

### <a name="remarks"></a>Osservazioni

La funzione converte la sequenza di elementi in *Str* in un valore di tipo **`unsigned long`** come se venisse chiamato `strtoul( str.c_str(), _Eptr, idx)` , dove `_Eptr` è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr` , viene generato un oggetto di tipo `invalid_argument` . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` in `*idx` e restituisce il valore.

## <a name="stoull"></a><a name="stoull"></a> stoull

Converte una sequenza di caratteri in un oggetto **`unsigned long long`** .

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

*idx*\
Valore di indice del primo carattere non convertito.

*base*\
Base numerica da usare.

### <a name="return-value"></a>Valore restituito

**`unsigned long long`** Valore.

### <a name="remarks"></a>Osservazioni

La funzione converte la sequenza di elementi in *Str* in un valore di tipo **`unsigned long long`** come se venisse chiamato `strtoull( str.c_str(), _Eptr, idx)` , dove `_Eptr` è un oggetto interno alla funzione. Se `str.c_str() == *_Eptr` , viene generato un oggetto di tipo `invalid_argument` . Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` in `*idx` e restituisce il valore.

## <a name="swap"></a><a name="swap"></a> scambio

Scambia le matrici di caratteri di due stringhe.

```cpp
template <class Traits, class Allocator>
void swap(basic_string<CharType, Traits, Allocator>& left, basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Una stringa i cui elementi devono essere scambiati con gli elementi di un'altra stringa.

*Ok*\
Altra stringa di cui scambiare gli elementi con quelli della prima stringa.

### <a name="remarks"></a>Osservazioni

La funzione di modello esegue la funzione membro specializzata a *sinistra*. [swap](../standard-library/basic-string-class.md#swap)(*right*) per le stringhe, garantendo una complessità costante.

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

## <a name="to_string"></a><a name="to_string"></a> to_string

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

*valore*\
Valore da convertire.

### <a name="return-value"></a>Valore restituito

Valore `string` che rappresenta il valore X.

### <a name="remarks"></a>Osservazioni

La funzione converte il *valore* in una sequenza di elementi archiviati in un oggetto matrice `Buf` interno alla funzione come se venisse chiamato `sprintf(Buf, Fmt, value)` , dove `Fmt` è

- `"%d"` Se il *valore* è di tipo **`int`**

- `"%u"` Se il *valore* è di tipo **`unsigned int`**

- `"%ld"` Se il *valore* è di tipo **`long`**

- `"%lu"` Se il *valore* è di tipo **`unsigned long`**

- `"%lld"` Se il *valore* è di tipo **`long long`**

- `"%llu"` Se il *valore* è di tipo **`unsigned long long`**

- `"%f"` Se il *valore* è di tipo **`float`** o **`double`**

- `"%Lf"` Se il *valore* è di tipo **`long double`**

La funzione restituisce `string(Buf)`.

## <a name="to_wstring"></a><a name="to_wstring"></a> to_wstring

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

*valore*\
Valore da convertire.

### <a name="return-value"></a>Valore restituito

Stringa a caratteri "wide" che rappresenta il valore.

### <a name="remarks"></a>Osservazioni

La funzione converte il *valore* in una sequenza di elementi archiviati in un oggetto matrice `Buf` interno alla funzione come se venisse chiamato `swprintf(Buf, Len, Fmt, value)` , dove `Fmt` è

- `L"%d"` Se il *valore* è di tipo **`int`**

- `L"%u"` Se il *valore* è di tipo **`unsigned int`**

- `L"%ld"` Se il *valore* è di tipo **`long`**

- `L"%lu"` Se il *valore* è di tipo **`unsigned long`**

- `L"%lld"` Se il *valore* è di tipo **`long long`**

- `L"%llu"` Se il *valore* è di tipo **`unsigned long long`**

- `L"%f"` Se il *valore* è di tipo **`float`** o **`double`**

- `L"%Lf"` Se il *valore* è di tipo **`long double`**

La funzione restituisce `wstring(Buf)`.

## <a name="see-also"></a>Vedere anche

[\<string>](../standard-library/string.md)
