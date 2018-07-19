---
title: Funzioni &lt;string&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
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
author: corob-msft
ms.author: corob
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
ms.workload:
- cplusplus
ms.openlocfilehash: 6534d93b4f04826188fa13c942efd080e152aebe
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954903"
---
# <a name="ltstringgt-functions"></a>Funzioni &lt;string&gt;

||||
|-|-|-|
|[getline](#getline)|[stod](#stod)|[stof](#stof)|
|[stoi](#stoi)|[stol](#stol)|[stold](#stold)|
|[stoll](#stoll)|[stoul](#stoul)|[stoull](#stoull)|
|[swap](#swap)|[to_string](#to_string)|[to_wstring](#to_wstring)|

## <a name="getline"></a>  getline

Estrarre stringhe dal flusso di input riga per riga.

```cpp
// (1) delimiter as parameter
template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>& is,
    basic_string<CharType, Traits, Allocator>& str,
    CharType delim);


template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>&& is,
    basic_string<CharType, Traits, Allocator>& str,
    const CharType delim);


// (2) default delimiter used
template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& getline(
    basic_istream<CharType, Traits>& is,
    basic_string<CharType, Traits, Allocator>& str);


template <class Allocator, class Traits, class Allocator>
basic_istream<Allocator, Traits>& getline(
    basic_istream<Allocator, Traits>&& is,
    basic_string<Allocator, Traits, Allocator>& str);
```

### <a name="parameters"></a>Parametri

*è* il flusso di input da cui è possibile estrarre una stringa.

*str* la stringa in cui vengono letti i caratteri dal flusso di input.

*Delim* il delimitatore di riga.

### <a name="return-value"></a>Valore restituito

Il flusso di input *è*.

### <a name="remarks"></a>Note

La coppia di firme di funzione contrassegnata `(1)` estrarre i caratteri *viene* fino a quando non *delim* viene trovato, archiviarli in *str*.

La coppia di firme di funzione contrassegnata `(2)` usare una nuova riga come delimitatore di riga predefinito e si comporta come **getline**(`is`, `str`, `is`. `widen`(' `\n`')).

La seconda funzione di ogni coppia è analoga alla prima per il supporto dei [riferimenti rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md).

L'estrazione termina quando si verifica una delle condizioni seguenti:

- Alla fine del file, nel qual caso lo stato interno flag dei *viene* è impostata su `ios_base::eofbit`.

- Dopo l'estrazione da parte della funzione di un elemento che risulta uguale a `delim`, nel qual caso l'elemento non viene reinserito né aggiunto alla sequenza controllata.

- Dopo la funzione estrae `str.` [max_size](../standard-library/basic-string-class.md#max_size) elementi, nel quale caso il flag di stato interno di *viene* è impostata su `ios_base::failbit`.

- Un altro errore diverso da quelli elencati in precedenza, nel qual caso lo stato interno flag dei *è* è impostato su `ios_base::badbit`

Per informazioni sui flag di stato interno, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

Se la funzione non estrae alcun elemento, i flag di stato interno di *viene* è impostata su `ios_base::failbit`. In ogni caso `getline` restituisce *è*.

Se viene generata un'eccezione, *viene* e *str* vengono lasciati in uno stato valido.

### <a name="example"></a>Esempio

Il codice seguente illustra `getline()` secondo due modalità: la prima con il delimitatore predefinito (carattere di nuova riga) e la seconda con uno spazio vuoto come delimitatore. Il carattere di fine file (CTRL-Z sulla tastiera) viene usato per controllare la terminazione dei cicli while. Il flag di stato interno di `cin` viene quindi impostato su `eofbit`, che deve essere cancellato con [basic_ios::clear()](../standard-library/basic-ios-class.md#clear) per il corretto funzionamento del secondo ciclo while.

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

## <a name="stod"></a>  stod

Converte una sequenza di caratteri in una **doppie**.

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

|Parametro|Descrizione|
|---------------|-----------------|
|*str*|Sequenza di caratteri da convertire.|
|*IDX*|Valore di indice del primo carattere non convertito.|

### <a name="return-value"></a>Valore restituito

Il **doppie** valore.

### <a name="remarks"></a>Note

La funzione converte la sequenza di elementi in *str* su un valore `val` typu **double** come se venisse chiamata `strtod( str.c_str(), _Eptr)`, dove `_Eptr` è un oggetto interno alla funzione. Se ` str.c_str() == *_Eptr` viene generato un oggetto di tipo `invalid_argument`. Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` nelle `*idx` e restituisce `val`.

## <a name="stof"></a>  stof

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

|Parametro|Descrizione|
|---------------|-----------------|
|*str*|Sequenza di caratteri da convertire.|
|*IDX*|Valore di indice del primo carattere non convertito.|

### <a name="return-value"></a>Valore restituito

Valore float.

### <a name="remarks"></a>Note

La funzione converte la sequenza di elementi in *str* su un valore `val` typu **float** come se venisse chiamata `strtof( str.c_str(), _Eptr)`, dove `_Eptr` è un oggetto interno alla funzione. Se ` str.c_str() == *_Eptr` viene generato un oggetto di tipo `invalid_argument`. Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` nelle `*idx` e restituisce `val`.

## <a name="stoi"></a>  stoi

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

|Parametro|Descrizione|
|---------------|-----------------|
|*str*|Sequenza di caratteri da convertire.|
|*IDX*|Contiene l'indice del primo carattere non convertito alla restituzione.|
|*base*|Base numerica da usare.|

### <a name="remarks"></a>Note

La funzione `stoi` Converte la sequenza di caratteri *str* su un valore di tipo **int** e restituisce il valore. Ad esempio, se viene passata la sequenza di caratteri "10", il valore restituito da `stoi` sarà 10.

`stoi` si comporta in modo analogo alla funzione `strtol` per i caratteri a un byte quando viene chiamata come in `strtol( str.c_str(), _Eptr, idx)`, dove `_Eptr` è un oggetto interno alla funzione, oppure alla funzione `wcstol` per i caratteri wide, quando viene chiamata in modo simile, `wcstol(Str.c_str(), _Eptr, idx)`. Per altre informazioni, vedere [strtol, wcstol, _strtol_l, _wcstol_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md).

Se `str.c_str() == *_Eptr`, `stoi` genera un oggetto di tipo `invalid_argument`. Se tale chiamata imposta `errno`, o se il valore restituito non può essere rappresentato come un oggetto di tipo **int**, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr - str.c_str()` in `*idx`.

## <a name="stol"></a>  stol

Converte una sequenza di caratteri in una **lungo**.

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

|Parametro|Descrizione|
|---------------|-----------------|
|*str*|Sequenza di caratteri da convertire.|
|*IDX*|Valore di indice del primo carattere non convertito.|
|*base*|Base numerica da usare.|

### <a name="return-value"></a>Valore restituito

Valore Long Integer.

### <a name="remarks"></a>Note

La funzione converte la sequenza di elementi in *str* su un valore `val` typu **long** come se venisse chiamata `strtol( str.c_str(), _Eptr, idx)`, dove `_Eptr` è un oggetto interno alla funzione. Se ` str.c_str() == *_Eptr` viene generato un oggetto di tipo `invalid_argument`. Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` nelle `*idx` e restituisce `val`.

## <a name="stold"></a>  stold

Converte una sequenza di caratteri in una **long double**.

```cpp
double stold(
    const string& str,
    size_t* idx = 0);

double stold(
    const wstring& str,
    size_t* idx = 0);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*str*|Sequenza di caratteri da convertire.|
|*IDX*|Valore di indice del primo carattere non convertito.|

### <a name="return-value"></a>Valore restituito

Il **long double** valore.

### <a name="remarks"></a>Note

La funzione converte la sequenza di elementi in *str* su un valore `val` typu **long double** come se venisse chiamata `strtold( str.c_str(), _Eptr)`, dove `_Eptr` è un oggetto interno alla funzione. Se ` str.c_str() == *_Eptr` viene generato un oggetto di tipo `invalid_argument`. Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` nelle `*idx` e restituisce `val`.

## <a name="stoll"></a>  stoll

Converte una sequenza di caratteri in una **long long**.

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

|Parametro|Descrizione|
|---------------|-----------------|
|*str*|Sequenza di caratteri da convertire.|
|*IDX*|Valore di indice del primo carattere non convertito.|
|*base*|Base numerica da usare.|

### <a name="return-value"></a>Valore restituito

Il **long long** valore.

### <a name="remarks"></a>Note

La funzione converte la sequenza di elementi in *str* su un valore `val` typu **long long** come se venisse chiamata `strtoll( str.c_str(), _Eptr, idx)`, dove `_Eptr` è un oggetto interno alla funzione. Se ` str.c_str() == *_Eptr` viene generato un oggetto di tipo `invalid_argument`. Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` nelle `*idx` e restituisce `val`.

## <a name="stoul"></a>  stoul

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

|Parametro|Descrizione|
|---------------|-----------------|
|*str*|Sequenza di caratteri da convertire.|
|*IDX*|Valore di indice del primo carattere non convertito.|
|*base*|Base numerica da usare.|

### <a name="return-value"></a>Valore restituito

Valore Unsigned Long Integer.

### <a name="remarks"></a>Note

La funzione converte la sequenza di elementi in *str* su un valore `val` typu **long senza segno** come se venisse chiamata `strtoul( str.c_str(), _Eptr, idx)`, dove `_Eptr` è un oggetto interno alla funzione . Se ` str.c_str() == *_Eptr` viene generato un oggetto di tipo `invalid_argument`. Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` nelle `*idx` e restituisce `val`.

## <a name="stoull"></a>  stoull

Converte una sequenza di caratteri a un **long long senza segno**.

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

|Parametro|Descrizione|
|---------------|-----------------|
|*str*|Sequenza di caratteri da convertire.|
|*IDX*|Valore di indice del primo carattere non convertito.|
|*base*|Base numerica da usare.|

### <a name="return-value"></a>Valore restituito

Il **long long senza segno** valore.

### <a name="remarks"></a>Note

La funzione converte la sequenza di elementi in *str* su un valore `val` typu **long long senza segno** come se venisse chiamata `strtoull( str.c_str(), _Eptr, idx)`, dove `_Eptr` è un oggetto interno per il funzione. Se ` str.c_str() == *_Eptr` viene generato un oggetto di tipo `invalid_argument`. Se tale chiamata imposta `errno`, viene generato un oggetto di tipo `out_of_range`. In caso contrario, se *idx* non è un puntatore null, la funzione Archivia `*_Eptr -  str.c_str()` nelle `*idx` e restituisce `val`.

## <a name="swap"></a>  swap

Scambia le matrici di caratteri di due stringhe.

```cpp
template <class Traits, class Allocator>
void swap(basic_string<CharType, Traits, Allocator>& left, basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*a sinistra* un'unica stringa cui elementi sono da scambiare con quelli di un'altra stringa.

*a destra* la stringa di cui elementi sono da scambiare con la prima stringa.

### <a name="remarks"></a>Note

La funzione modello esegue la funzione membro specializzata *a sinistra*.[ swap](../standard-library/basic-string-class.md#swap)(*destro*) per le stringhe, garantendo una complessità costante.

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

## <a name="to_string"></a>  to_string

Converte un valore in un valore `string`.

```cpp
string to_string(int Val);
string to_string(unsigned int Val);
string to_string(long Val);
string to_string(unsigned long Val);
string to_string(long long Val);
string to_string(unsigned long long Val);
string to_string(float Val);
string to_string(double Val);
string to_string(long double Val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Val*|Valore da convertire.|

### <a name="return-value"></a>Valore restituito

Valore `string` che rappresenta il valore X.

### <a name="remarks"></a>Note

La funzione converte *Val* a una sequenza di elementi archiviati in un oggetto array `Buf` interno alla funzione come se venisse chiamata `sprintf(Buf, Fmt, Val)`, dove `Fmt` è

- `"%d"` Se `Val` ha tipo **int**

- `"%u"` Se `Val` ha tipo **int senza segno**

- `"%ld"` Se `Val` ha tipo **long**

- `"%lu"` Se `Val` ha tipo **long senza segno**

- `"%lld"` Se `Val` ha tipo **long long**

- `"%llu"` Se `Val` ha tipo **long long senza segno**

- `"%f"` Se `Val` è di tipo **float** o **double**

- `"%Lf"` Se `Val` ha tipo **long double**

La funzione restituisce `string(Buf)`.

## <a name="to_wstring"></a>  to_wstring

Converte un valore in un valore string di tipo wide.

```cpp
wstring to_wstring(int Val);
wstring to_wstring(unsigned int Val);
wstring to_wstring(long Val);
wstring to_wstring(unsigned long Val);
wstring to_wstring(long long Val);
wstring to_wstring(unsigned long long Val);
wstring to_wstring(float Val);
wstring to_wstring(double Val);
wstring to_wstring(long double Val);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`Val`|Valore da convertire.|

### <a name="return-value"></a>Valore restituito

Stringa a caratteri "wide" che rappresenta il valore.

### <a name="remarks"></a>Note

La funzione converte `Val` in una sequenza di elementi archiviati in un oggetto matrice `Buf` interno alla funzione come se venisse chiamato `swprintf(Buf, Len, Fmt, Val)`, in cui `Fmt` è

- `L"%d"` Se `Val` ha tipo **int**

- `L"%u"` Se `Val` ha tipo **int senza segno**

- `L"%ld"` Se `Val` ha tipo **long**

- `L"%lu"` Se `Val` ha tipo **long senza segno**

- `L"%lld"` Se `Val` ha tipo **long long**

- `L"%llu"` Se `Val` ha tipo **long long senza segno**

- `L"%f"` Se `Val` è di tipo **float** o **double**

- `L"%Lf"` Se `Val` ha tipo **long double**

La funzione restituisce `wstring(Buf)`.

## <a name="see-also"></a>Vedere anche

[\<string>](../standard-library/string.md)<br/>
