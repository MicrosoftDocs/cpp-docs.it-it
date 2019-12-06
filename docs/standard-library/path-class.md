---
title: Classe path
ms.date: 09/27/2018
f1_keywords:
- filesystem/std::experimental::filesystem::path
ms.assetid: 8a1227ca-aeb2-4e0e-84aa-86e34e4f4fe8
ms.openlocfilehash: 0bc26bb04464c52ed08d46e6a12c12cae6909d6f
ms.sourcegitcommit: 6ddfb8be5e5923a4d90a2c0f93f76a27ce7ac299
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/06/2019
ms.locfileid: "74898800"
---
# <a name="path-class"></a>Classe path

La classe **path** archivia un oggetto di tipo `string_type`, denominato `myname` qui a scopo di esposizione, adatto per l'uso come percorso. `string_type` è un sinonimo di `basic_string<value_type>`, in cui `value_type` è sinonimo di **wchar_t** in Windows o **char** in POSIX.

Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).

## <a name="syntax"></a>Sintassi

```cpp
class path;
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[path](#path)|Costruisce un oggetto `path`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[const_iterator](#const_iterator)|Sinonimo di `iterator`.|
|[iterator](#iterator)|Iteratore costante bidirezionale che definisce i componenti del `path` di `myname`.|
|[string_type](#string_type)|Il tipo è sinonimo di `basic_string<value_type>`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[append](#append)|Accoda la sequenza specificata per `mypath`, convertita e inserendo un preferred_separator in base alle esigenze.|
|[assign](#assign)|Sostituisce `mypath` con la sequenza specificata, convertita in base alle esigenze.|
|[begin](#begin)|Restituisce un `path::iterator` che designa il primo elemento Path nel percorso, se presente.|
|[c_str](#c_str)|Restituisce un puntatore al primo carattere in `mypath`.|
|[clear](#clear)|Esegue `mypath.clear()`.|
|[compare](#compare)|Restituisce i valori di confronto.|
|[concat](#compare)|Accoda la sequenza specificata a `mypath`, convertita, ma non inserendo un separatore, in base alle esigenze.|
|[empty](#empty)|Restituisce un valore `mypath.empty()`.|
|[end](#end)|Restituisce un iteratore di fine sequenza di tipo `iterator`.|
|[extension](#extension)|Restituisce il suffisso di `filename()`.|
|[filename](#filename)|Restituisce il componente della directory radice di myname, in maniera specifica `empty() path() : *--end()`. Il componente può essere vuoto.|
|[generic_string](#generic_string)|Restituisce `this->string<Elem, Traits, Alloc>(al)` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_u16string](#generic_u16string)|Restituisce `u16string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_u32string](#generic_u32string)|Restituisce `u32string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_u8string](#generic_u8string)|Restituisce `u8string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_wstring](#generic_wstring)|Restituisce `wstring()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[has_extension](#has_extension)|Restituisce un valore `!extension().empty()`.|
|[has_filename](#has_filename)|Restituisce un valore `!filename().empty()`.|
|[has_parent_path](#has_parent_path)|Restituisce un valore `!parent_path().empty()`.|
|[has_relative_path](#has_relative_path)|Restituisce un valore `!relative_path().empty()`.|
|[has_root_directory](#has_root_directory)|Restituisce un valore `!root_directory().empty()`.|
|[has_root_name](#has_root_name)|Restituisce un valore `!root_name().empty()`.|
|[has_root_path](#has_root_path)|Restituisce un valore `!root_path().empty()`.|
|[has_stem](#has_stem)|Restituisce un valore `!stem().empty()`.|
|[is_absolute](#is_absolute)|Per Windows, la funzione restituisce `has_root_name() && has_root_directory()`. Per POSIX, la funzione restituisce `has_root_directory()`.|
|[is_relative](#is_relative)|Restituisce un valore `!is_absolute()`.|
|[make_preferred](#make_preferred)|Converte ogni separatore in un preferred_separator in base alle esigenze.|
|[native](#native)|Restituisce un valore `myname`.|
|[parent_path](#parent_path)|Restituisce il componente del percorso padre dell'`myname`.|
|[preferred_separator](#preferred_separator)|L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host. |
|[relative_path](#relative_path)|Restituisce il componente path relativo di `myname`. |
|[remove_filename](#remove_filename)|Rimuove il nome del file.|
|[replace_extension](#replace_extension)|Sostituisce l'estensione del `myname`. |
|[replace_filename](#replace_filename)|RReplaces il nome del file.|
|[root_directory](#root_directory)|Restituisce il componente della directory radice di `myname`. |
|[root_name](#root_name)|Restituisce il componente del nome radice di `myname`. |
|[root_path](#root_path)|Restituisce il componente del percorso radice di `myname`.|
|[stem](#stem)|Restituisce il componente `stem` di `myname`.|
|[string](#string)|Converte la sequenza archiviata in `mypath`.|
|[swap](#swap)|Esegue `swap(mypath, right.mypath)`.|
|[u16string](#u16string)|Converte la sequenza archiviata in `mypath` in UTF-16 e la restituisce archiviata in un oggetto di tipo `u16string`.|
|[u32string](#u32string)|Converte la sequenza archiviata in `mypath` in UTF-32 e la restituisce archiviata in un oggetto di tipo `u32string`.|
|[u8string](#u8string)|Converte la sequenza archiviata in `mypath` in UTF-8 e la restituisce archiviata in un oggetto di tipo `u8string`.|
|[value_type](#value_type)|Il tipo descrive gli elementi path preferiti dal sistema operativo host.|
|[wstring](#wstring)|Converte la sequenza archiviata in `mypath` alla codifica preferita dal sistema host per una sequenza di `wchar_t` e la restituisce archiviata in un oggetto di tipo `wstring`.|

### <a name="operators"></a>Operatori

|??|Descrizione|
|-|-|
|[operator=](#op_as)|Sostituisce gli elementi del percorso con una copia di un altro percorso.|
|[operator+=](#op_add)|Diverse espressioni `concat`.|
|[operator/=](#op_divide)|Diverse espressioni `append`.|
|[operatore string_type](#op_string)|Restituisce un valore `myname`.|

## <a name="requirements"></a>Requisiti di

**Intestazione:** \<filesystem >

**Spazio dei nomi:** std::experimental::filesystem

## <a name="append"></a>Path:: Append

Accoda la sequenza specificata per `mypath`, convertita e inserendo un `preferred_separator` in base alle esigenze.

```cpp
template <class Source>
path& append(const Source& source);

template <class InIt>
path& append(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

\ di *origine*
Sequenza specificata.

*primo*\
Inizio della sequenza specificata.

*ultimo*\
Fine della sequenza specificata.

## <a name="assign"></a>percorso:: Assign

Sostituisce `mypath` con la sequenza specificata, convertita in base alle esigenze.

```cpp
template <class Source>
path& assign(const Source& source);

template <class InIt>
path& assign(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

\ di *origine*
Sequenza specificata.

*primo*\
Inizio della sequenza specificata.

*ultimo*\
Fine della sequenza specificata.

## <a name="begin"></a>Path:: Begin

Restituisce un `path::iterator` che designa il primo elemento Path nel percorso, se presente.

```cpp
iterator begin() const;
```

## <a name="c_str"></a>percorso:: c_str

Restituisce un puntatore al primo carattere in `mypath`.

```cpp
const value_type& *c_str() const noexcept;
```

## <a name="clear"></a>percorso:: Clear

Esegue `mypath.clear()`.

```cpp
void clear() noexcept;
```

## <a name="compare"></a>Path:: compare

La prima funzione restituisce `mypath.compare(pval.native())`. La seconda funzione restituisce `mypath.compare(str)`. La terza funzione restituisce `mypath.compare(ptr)`.

```cpp
int compare(const path& pval) const noexcept;
int compare(const string_type& str) const;
int compare(const value_type *ptr) const;
```

### <a name="parameters"></a>Parametri

\ *pval*
Percorso da confrontare.

\ *Str*
Stringa da confrontare.

\ *ptr*
Puntatore da confrontare.

## <a name="concat"></a>percorso:: Concat

Accoda la sequenza specificata a `mypath`, convertita, ma non inserendo un separatore, in base alle esigenze.

```cpp
template <class Source>
path& concat(const Source& source);

template <class InIt>
path& concat(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

\ di *origine*
Sequenza specificata.

*primo*\
Inizio della sequenza specificata.

*ultimo*\
Fine della sequenza specificata.

## <a name="const_iterator"></a> path::const_iterator

Sinonimo di `iterator`.

```cpp
typedef iterator const_iterator;
```

## <a name="empty"></a>Path:: Empty

Restituisce un valore `mypath.empty()`.

```cpp
bool empty() const noexcept;
```

## <a name="end"></a>Path:: end

Restituisce un iteratore di fine sequenza di tipo `iterator`.

```cpp
iterator end() const;
```

## <a name="extension"></a> path::extension

Restituisce il suffisso di `filename()`.

```cpp
path extension() const;
```

### <a name="remarks"></a>Note

Restituisce il suffisso di `filename() X` in modo che:

Se `X == path(".") || X == path("..")` o se `X` non contiene alcun punto, il suffisso è vuoto.

In caso contrario, il suffisso comincia con (e include) il punto all'estrema destra.

## <a name="filename"></a>Path:: filename

Restituisce il componente della directory radice di myname, in maniera specifica `empty() path() : *--end()`. Il componente può essere vuoto.

```cpp
path filename() const;
```

## <a name="generic_string"></a>percorso:: generic_string

Restituisce `this->string<Elem, Traits, Alloc>(al)` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
template <class Elem,
    class Traits = char_traits<Elem>,
    class Alloc = allocator<Elem>>
  basic_string<Elem, Traits, Alloc>
    generic_string(const Alloc& al = Alloc()) const;

string generic_string() const;
```

## <a name="generic_u16string"></a>percorso:: generic_u16string

Restituisce `u16string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
u16string generic_u16string() const;
```

## <a name="generic_u32string"></a>percorso:: generic_u32string

Restituisce `u32string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
u32string generic_u32string() const;
```

## <a name="generic_u8string"></a>percorso:: generic_u8string

Restituisce `u8string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
string generic_u8string() const;
```

## <a name="generic_wstring"></a> path::generic_wstring

Restituisce `wstring()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
wstring generic_wstring() const;
```

## <a name="has_extension"></a> path::has_extension

Restituisce un valore `!extension().empty()`.

```cpp
bool has_extension() const;
```

## <a name="has_filename"></a>percorso:: has_filename

Restituisce un valore `!filename().empty()`.

```cpp
bool has_filename() const;
```

## <a name="has_parent_path"></a> path::has_parent_path

Restituisce un valore `!parent_path().empty()`.

```cpp
bool has_parent_path() const;
```

## <a name="has_relative_path"></a> path::has_relative_path

Restituisce un valore `!relative_path().empty()`.

```cpp
bool has_relative_path() const;
```

## <a name="has_root_directory"></a> path::has_root_directory

Restituisce un valore `!root_directory().empty()`.

```cpp
bool has_root_directory() const;
```

## <a name="has_root_name"></a> path::has_root_name

Restituisce un valore `!root_name().empty()`.

```cpp
bool has_root_name() const;
```

## <a name="has_root_path"></a> path::has_root_path

Restituisce un valore `!root_path().empty()`.

```cpp
bool has_root_path() const;
```

## <a name="has_stem"></a> path::has_stem

Restituisce un valore `!stem().empty()`.

```cpp
bool has_stem() const;
```

## <a name="is_absolute"></a> path::is_absolute

Per Windows, la funzione restituisce `has_root_name() && has_root_directory()`. Per POSIX, la funzione restituisce `has_root_directory()`.

```cpp
bool is_absolute() const;
```

## <a name="is_relative"></a>percorso:: is_relative

Restituisce un valore `!is_absolute()`.

```cpp
bool is_relative() const;
```

## <a name="iterator"></a>Path:: iterator

Iteratore costante bidirezionale che definisce i componenti del percorso di `myname`.

```cpp
class iterator
   {
   // bidirectional iterator for path
   typedef bidirectional_iterator_tag iterator_category;
   typedef path_type value_type;
   typedef ptrdiff_t difference_type;
   typedef const value_type *pointer;
   typedef const value_type& reference;
   // ...
   };
```

### <a name="remarks"></a>Note

La classe descrive un iteratore costante bidirezionale che definisce i componenti `path` di `myname` nella sequenza:

1. nome radice, se presente

1. directory radice, se presente

1. gli elementi di directory rimanenti del `path`padre, se presente, che termina con il nome del file, se presente

Per `pval` un oggetto di tipo `path`:

1. `path::iterator X = pval.begin()` definisce il primo elemento `path` nel percorso, se presente.

1. `X == pval.end()` è true quando `X` punta appena oltre la fine della sequenza di componenti.

3. `*X` restituisce una stringa che corrisponde al componente corrente.

1. `++X` definisce il componente successivo nella sequenza, se presente.

1. `--X` definisce il componente precedente nella sequenza, se presente.

1. La modifica di `myname` invalida tutti gli iteratori che definiscono gli elementi nel `myname`.

## <a name="make_preferred"></a> path::make_preferred

Converte ogni separatore in un `preferred_separator` in base alle esigenze.

```cpp
path& make_preferred();
```

## <a name="native"></a>Path:: native

Restituisce un valore `myname`.

```cpp
const string_type& native() const noexcept;
```

## <a name="op_as"></a>Path:: operator =

Sostituisce gli elementi del percorso con una copia di un altro percorso.

```cpp
path& operator=(const path& right);
path& operator=(path&& right) noexcept;

template <class Source>
path& operator=(const Source& source);
```

### <a name="parameters"></a>Parametri

\ a *destra*
[Percorso](../standard-library/path-class.md) copiato nell'`path`.

\ di *origine*
Percorso di origine.

### <a name="remarks"></a>Note

Il primo operatore membro copia `right.myname` `myname`. Il secondo operatore membro sposta `right.myname` `myname`. Il terzo operatore membro si comporta come `*this = path(source)`.

## <a name="op_add"></a>Path:: operator + =

Diverse espressioni `concat`.

```cpp
path& operator+=(const path& right);
path& operator+=(const string_type& str);
path& operator+=(const value_type *ptr);
path& operator+=(value_type elem);

template <class Source>
path& operator+=(const Source& source);

template <class Elem>
path& operator+=(Elem elem);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Percorso aggiunto.

\ *Str*
Stringa aggiunta.

\ *ptr*
Puntatore aggiunto.

*elem*\
`value_type` o `Elem`aggiunti.

\ di *origine*
Origine aggiunta.

### <a name="remarks"></a>Note

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. `concat(right);`

1. `concat(path(str));`

1. `concat(ptr);`

1. `concat(string_type(1, elem));`

1. `concat(source);`

1. `concat(path(basic_string<Elem>(1, elem)));`

## <a name="op_divide"></a>Path:: operator/=

Diverse espressioni `append`.

```cpp
path& operator/=(const path& right);

template <class Source>
path& operator/=(const Source& source);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Percorso aggiunto.

\ di *origine*
Origine aggiunta.

### <a name="remarks"></a>Note

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. `append(right);`

1. `append(source);`

## <a name="op_string"></a>string_type Path:: operator

Restituisce un valore `myname`.

```cpp
operator string_type() const;
```

## <a name="parent_path"></a> path::parent_path

Restituisce il componente del percorso padre dell'`myname`.

```cpp
path parent_path() const;
```

### <a name="remarks"></a>Note

Restituisce il componente del percorso padre di `myname`, in particolare il prefisso di `myname` dopo aver rimosso `filename().native()` e tutti i separatori di directory immediatamente precedenti. In modo analogo, se `begin() != end()`, è la combinazione di tutti gli elementi nell'intervallo `[begin(), --end())` applicando successivamente `operator/=`.) Il componente può essere vuoto.

## <a name="path"></a>percorso::p ATH

Costruisce un `path` in diversi modi.

```cpp
path();

path(const path& right);
path(path&& right) noexcept;

template <class Source>
path(const Source& source);

template <class Source>
path(const Source& source, const locale& loc);

template <class InIt>
path(InIt first, InIt last);

template <class InIt>
path(InIt first, InIt last, const locale& loc);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Percorso in cui il percorso costruito deve essere una copia.

\ di *origine*
Origine della quale il percorso costruito deve essere una copia.

\ *loc*
Impostazioni locali specificate.

*primo*\
Posizione del primo elemento da copiare.

*ultimo*\
Posizione dell'ultimo elemento da copiare.

### <a name="remarks"></a>Note

Tutti i costruttori costruiscono `myname` in diversi modi:

Per `path()` è `myname()`.

Per `path(const path& right`) è `myname(right.myname)`.

Per `path(path&& right)` è `myname(right.myname)`.

Per `template<class Source> path(const Source& source)` è `myname(source)`.

Per `template<class Source> path(const Source& source, const locale& loc)` è `myname(source)`, ottenendo tutti i facet codecvt necessari da `loc`.

Per `template<class InIt> path(InIt first, InIt last)` è `myname(first, last)`.

Per `template<class InIt> path(InIt first, InIt last, const locale& loc)` è `myname(first, last)`, ottenendo tutti i facet codecvt necessari da `loc`.

## <a name="preferred_separator"></a> path::preferred_separator

L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host.

```cpp
#if _WIN32_C_LIB
static constexpr value_type preferred_separator == L'\\';
#else // assume POSIX
static constexpr value_type preferred_separator == '/';
#endif // filesystem model now defined
```

### <a name="remarks"></a>Note

Si noti che è ugualmente consentito usare L'/' al suo posto nella maggior parte dei contesti in Windows.

## <a name="relative_path"></a> path::relative_path

Restituisce il componente path relativo di `myname`.

```cpp
path relative_path() const;
```

### <a name="remarks"></a>Note

Restituisce il componente path relativo di `myname`, in particolare il suffisso di `myname` dopo la rimozione di `root_path().native()` e di eventuali separatori di directory immediatamente successivi. Il componente può essere vuoto.

## <a name="remove_filename"></a> path::remove_filename

Rimuove il nome del file.

```cpp
path& remove_filename();
```

## <a name="replace_extension"></a> path::replace_extension

Sostituisce l'estensione del `myname`.

```cpp
path& replace_extension(const path& newext = path());
```

### <a name="parameters"></a>Parametri

\ *newext*
Nuova estensione.

### <a name="remarks"></a>Note

Rimuove innanzitutto il suffisso `extension().native()` da `myname`. Quindi, se `!newext.empty() && newext[0] != dot` (dove `dot` è `*path(".").c_str()`), `dot` viene accodato a `myname`. Quindi *newext* viene aggiunto a `myname`.

## <a name="replace_filename"></a> path::replace_filename

Sostituisce il nome file.

```cpp
path& replace_filename(const path& pval);
```

### <a name="parameters"></a>Parametri

\ *pval*
Percorso del nome file.

### <a name="remarks"></a>Note

La funzione membro esegue:

```cpp
remove_filename();

*this /= pval;
return (*this);
```

## <a name="root_directory"></a> path::root_directory

Restituisce il componente della directory radice di `myname`.

```cpp
path root_directory() const;
```

### <a name="remarks"></a>Note

Il componente può essere vuoto.

## <a name="root_name"></a>percorso:: root_name

Restituisce il componente del nome radice di `myname`.

```cpp
path root_name() const;
```

### <a name="remarks"></a>Note

Il componente può essere vuoto.

## <a name="root_path"></a> path::root_path

Restituisce il componente del percorso radice di `myname`.

```cpp
path root_path() const;
```

### <a name="remarks"></a>Note

Restituisce il componente del percorso radice di `myname`, in particolare `root_name()` / `root_directory`. Il componente può essere vuoto.

## <a name="stem"></a>Path:: stem

Restituisce il componente `stem` di `myname`.

```cpp
path stem() const;
```

### <a name="remarks"></a>Note

Restituisce il componente `stem` di `myname`, in particolare `filename().native()` con eventuali `extension().native()` finali rimossi. Il componente può essere vuoto.

## <a name="string"></a>Path:: String

Converte la sequenza archiviata in `mypath`.

```cpp
template \<class Elem, class Traits = char_traits\<Elem>, class Alloc = allocator\<Elem>>
basic_string\<Elem, Traits, Alloc> string(const Alloc& al = Alloc()) const;
string string() const;
```

### <a name="remarks"></a>Note

La prima funzione membro (modello) converte la sequenza archiviata in `mypath` allo stesso modo di:

1. `string()` per `string<char, Traits, Alloc>()`

1. `wstring()` per `string<wchar_t, Traits, Alloc>()`

1. `u16string()` per `string<char16_t, Traits, Alloc>()`

1. `u32string()` per `string<char32_t, Traits, Alloc>()`

La seconda funzione membro converte la sequenza archiviata in `mypath` alla codifica preferita dal sistema host per una sequenza **char** e la restituisce archiviata in un oggetto di tipo `string`.

## <a name="string_type"></a> path::string_type

Il tipo è sinonimo di `basic_string<value_type>`.

```cpp
typedef basic_string<value_type> string_type;
```

## <a name="swap"></a> path::swap

Esegue `swap(mypath, right.mypath)`.

```cpp
void swap(path& right) noexcept;
```

## <a name="u16string"></a>percorso:: u16string

Converte la sequenza archiviata in `mypath` in UTF-16 e la restituisce archiviata in un oggetto di tipo `u16string`.

```cpp
u16string u16string() const;
```

## <a name="u32string"></a> path::u32string

Converte la sequenza archiviata in `mypath` in UTF-32 e la restituisce archiviata in un oggetto di tipo `u32string`.

```cpp
u32string u32string() const;
```

## <a name="u8string"></a>percorso:: u8string

Converte la sequenza archiviata in `mypath` in UTF-8 e la restituisce archiviata in un oggetto di tipo `u8string`.

```cpp
string u8string() const;
```

## <a name="value_type"></a> path::value_type

Il tipo descrive gli elementi `path` Preferiti dal sistema operativo host.

```cpp
#if _WIN32_C_LIB
typedef wchar_t value_type;
#else // assume POSIX
typedef char value_type;
#endif // filesystem model now defined
```

## <a name="wstring"></a>percorso:: wstring

Converte la sequenza archiviata in `mypath` alla codifica preferita dal sistema host per una sequenza di **wchar_t** e la restituisce archiviata in un oggetto di tipo `wstring`.

```cpp
wstring wstring() const;
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
