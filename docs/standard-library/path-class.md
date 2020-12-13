---
description: 'Altre informazioni su: classe Path'
title: Classe path
ms.date: 09/27/2018
f1_keywords:
- filesystem/std::experimental::filesystem::path
ms.assetid: 8a1227ca-aeb2-4e0e-84aa-86e34e4f4fe8
ms.openlocfilehash: 469d594800036b165f8693162ca11ca161736cf0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340775"
---
# <a name="path-class"></a>Classe path

La classe **path** archivia un oggetto di tipo `string_type` , chiamato `myname` qui per finalità di esposizione, adatto per l'uso come percorso. `string_type` è un sinonimo di `basic_string<value_type>` , dove `value_type` è un sinonimo di **`wchar_t`** in Windows o **`char`** POSIX.

Per ulteriori informazioni ed esempi di codice, vedere [esplorazione del file System (C++)](../standard-library/file-system-navigation.md).

## <a name="syntax"></a>Sintassi

```cpp
class path;
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[path](#path)|Costruisce un oggetto `path`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[const_iterator](#const_iterator)|Sinonimo di `iterator`.|
|[iteratore](#iterator)|Iteratore costante bidirezionale che designa i `path` componenti di `myname` .|
|[string_type](#string_type)|Il tipo è sinonimo di `basic_string<value_type>`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[append](#append)|Accoda la sequenza specificata a `mypath` , convertita e inserendo un preferred_separator in base alle esigenze.|
|[assign](#assign)|Sostituisce `mypath` con la sequenza specificata, convertita in base alle esigenze.|
|[iniziare](#begin)|Restituisce un oggetto che `path::iterator` designa il primo elemento Path nel percorso, se presente.|
|[c_str](#c_str)|Restituisce un puntatore al primo carattere in `mypath` .|
|[deselezionare](#clear)|Viene eseguito `mypath.clear()` .|
|[confrontare](#compare)|Restituisce i valori di confronto.|
|[concat](#compare)|Accoda la sequenza specificata a `mypath` , convertita, ma non inserendo un separatore, in base alle esigenze.|
|[empty](#empty)|Restituisce `mypath.empty()`.|
|[end](#end)|Restituisce un iteratore di fine sequenza di tipo `iterator` .|
|[extension](#extension)|Restituisce il suffisso di `filename()` .|
|[filename](#filename)|Restituisce il componente della directory radice di myname, in maniera specifica `empty() ? path() : *--end()`. Il componente può essere vuoto.|
|[generic_string](#generic_string)|Restituisce `this->string<Elem, Traits, Alloc>(al)` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_u16string](#generic_u16string)|Restituisce `u16string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_u32string](#generic_u32string)|Restituisce `u32string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_u8string](#generic_u8string)|Restituisce `u8string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_wstring](#generic_wstring)|Restituisce `wstring()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[has_extension](#has_extension)|Restituisce `!extension().empty()`.|
|[has_filename](#has_filename)|Restituisce `!filename().empty()`.|
|[has_parent_path](#has_parent_path)|Restituisce `!parent_path().empty()`.|
|[has_relative_path](#has_relative_path)|Restituisce `!relative_path().empty()`.|
|[has_root_directory](#has_root_directory)|Restituisce `!root_directory().empty()`.|
|[has_root_name](#has_root_name)|Restituisce `!root_name().empty()`.|
|[has_root_path](#has_root_path)|Restituisce `!root_path().empty()`.|
|[has_stem](#has_stem)|Restituisce `!stem().empty()`.|
|[is_absolute](#is_absolute)|Per Windows, la funzione restituisce `has_root_name() && has_root_directory()` . Per POSIX, la funzione restituisce `has_root_directory()` .|
|[is_relative](#is_relative)|Restituisce `!is_absolute()`.|
|[make_preferred](#make_preferred)|Converte ogni separatore in un preferred_separator in base alle esigenze.|
|[native](#native)|Restituisce `myname`.|
|[parent_path](#parent_path)|Restituisce il componente del percorso padre di `myname` .|
|[preferred_separator](#preferred_separator)|L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host. |
|[relative_path](#relative_path)|Restituisce il componente path relativo di `myname` . |
|[remove_filename](#remove_filename)|Rimuove il nome del file.|
|[replace_extension](#replace_extension)|Sostituisce l'estensione di `myname` . |
|[replace_filename](#replace_filename)|RReplaces il nome del file.|
|[root_directory](#root_directory)|Restituisce il componente della directory radice di `myname` . |
|[root_name](#root_name)|Restituisce il componente del nome radice di `myname` . |
|[root_path](#root_path)|Restituisce il componente del percorso radice di `myname` .|
|[stem](#stem)|Restituisce il `stem` componente di `myname` .|
|[string](#string)|Converte la sequenza archiviata in `mypath` .|
|[scambio](#swap)|Viene eseguito `swap(mypath, right.mypath)` .|
|[u16string](#u16string)|Converte la sequenza archiviata in `mypath` UTF-16 e la restituisce archiviata in un oggetto di tipo `u16string` .|
|[u32string](#u32string)|Converte la sequenza archiviata in `mypath` UTF-32 e la restituisce archiviata in un oggetto di tipo `u32string` .|
|[u8string](#u8string)|Converte la sequenza archiviata in `mypath` UTF-8 e la restituisce archiviata in un oggetto di tipo `u8string` .|
|[value_type](#value_type)|Il tipo descrive gli elementi path preferiti dal sistema operativo host.|
|[wstring](#wstring)|Converte la sequenza archiviata nella `mypath` codifica preferita dal sistema host per una **`wchar_t`** sequenza e la restituisce archiviata in un oggetto di tipo `wstring` .|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_as)|Sostituisce gli elementi del percorso con una copia di un altro percorso.|
|[operatore + =](#op_add)|Varie `concat` espressioni.|
|[operatore/=](#op_divide)|Varie `append` espressioni.|
|[operatore string_type](#op_string)|Restituisce `myname`.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<filesystem>

**Spazio dei nomi:** std::experimental::filesystem

## <a name="pathappend"></a><a name="append"></a> Path:: Append

Accoda la sequenza specificata a `mypath` , convertita e inserendo un oggetto `preferred_separator` in base alle esigenze.

```cpp
template <class Source>
path& append(const Source& source);

template <class InIt>
path& append(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*origine*\
Sequenza specificata.

*prima*\
Inizio della sequenza specificata.

*Ultima*\
Fine della sequenza specificata.

## <a name="pathassign"></a><a name="assign"></a> percorso:: Assign

Sostituisce `mypath` con la sequenza specificata, convertita in base alle esigenze.

```cpp
template <class Source>
path& assign(const Source& source);

template <class InIt>
path& assign(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*origine*\
Sequenza specificata.

*prima*\
Inizio della sequenza specificata.

*Ultima*\
Fine della sequenza specificata.

## <a name="pathbegin"></a><a name="begin"></a> Path:: Begin

Restituisce un oggetto che `path::iterator` designa il primo elemento Path nel percorso, se presente.

```cpp
iterator begin() const;
```

## <a name="pathc_str"></a><a name="c_str"></a> percorso:: c_str

Restituisce un puntatore al primo carattere in `mypath` .

```cpp
const value_type& *c_str() const noexcept;
```

## <a name="pathclear"></a><a name="clear"></a> percorso:: Clear

Viene eseguito `mypath.clear()` .

```cpp
void clear() noexcept;
```

## <a name="pathcompare"></a><a name="compare"></a> Path:: compare

La prima funzione restituisce `mypath.compare(pval.native())`. La seconda funzione restituisce `mypath.compare(str)`. La terza funzione restituisce `mypath.compare(ptr)` .

```cpp
int compare(const path& pval) const noexcept;
int compare(const string_type& str) const;
int compare(const value_type *ptr) const;
```

### <a name="parameters"></a>Parametri

*Pval*\
Percorso da confrontare.

*Str*\
Stringa da confrontare.

*PTR*\
Puntatore da confrontare.

## <a name="pathconcat"></a><a name="concat"></a> percorso:: Concat

Accoda la sequenza specificata a `mypath` , convertita, ma non inserendo un separatore, in base alle esigenze.

```cpp
template <class Source>
path& concat(const Source& source);

template <class InIt>
path& concat(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*origine*\
Sequenza specificata.

*prima*\
Inizio della sequenza specificata.

*Ultima*\
Fine della sequenza specificata.

## <a name="pathconst_iterator"></a><a name="const_iterator"></a> percorso:: const_iterator

Sinonimo di `iterator`.

```cpp
typedef iterator const_iterator;
```

## <a name="pathempty"></a><a name="empty"></a> Path:: Empty

Restituisce `mypath.empty()`.

```cpp
bool empty() const noexcept;
```

## <a name="pathend"></a><a name="end"></a> Path:: end

Restituisce un iteratore di fine sequenza di tipo `iterator` .

```cpp
iterator end() const;
```

## <a name="pathextension"></a><a name="extension"></a> Path:: Extension

Restituisce il suffisso di `filename()` .

```cpp
path extension() const;
```

### <a name="remarks"></a>Commenti

Restituisce il suffisso di `filename() X` tale oggetto:

Se `X == path(".") || X == path("..")` o se `X` non contiene alcun punto, il suffisso è vuoto.

In caso contrario, il suffisso comincia con (e include) il punto all'estrema destra.

## <a name="pathfilename"></a><a name="filename"></a> Path:: filename

Restituisce il componente della directory radice di myname, in maniera specifica `empty() path() : *--end()`. Il componente può essere vuoto.

```cpp
path filename() const;
```

## <a name="pathgeneric_string"></a><a name="generic_string"></a> percorso:: generic_string

Restituisce `this->string<Elem, Traits, Alloc>(al)` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
template <class Elem,
    class Traits = char_traits<Elem>,
    class Alloc = allocator<Elem>>
  basic_string<Elem, Traits, Alloc>
    generic_string(const Alloc& al = Alloc()) const;

string generic_string() const;
```

## <a name="pathgeneric_u16string"></a><a name="generic_u16string"></a> percorso:: generic_u16string

Restituisce `u16string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
u16string generic_u16string() const;
```

## <a name="pathgeneric_u32string"></a><a name="generic_u32string"></a> percorso:: generic_u32string

Restituisce `u32string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
u32string generic_u32string() const;
```

## <a name="pathgeneric_u8string"></a><a name="generic_u8string"></a> percorso:: generic_u8string

Restituisce `u8string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
string generic_u8string() const;
```

## <a name="pathgeneric_wstring"></a><a name="generic_wstring"></a> percorso:: generic_wstring

Restituisce `wstring()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
wstring generic_wstring() const;
```

## <a name="pathhas_extension"></a><a name="has_extension"></a> percorso:: has_extension

Restituisce `!extension().empty()`.

```cpp
bool has_extension() const;
```

## <a name="pathhas_filename"></a><a name="has_filename"></a> percorso:: has_filename

Restituisce `!filename().empty()`.

```cpp
bool has_filename() const;
```

## <a name="pathhas_parent_path"></a><a name="has_parent_path"></a> percorso:: has_parent_path

Restituisce `!parent_path().empty()`.

```cpp
bool has_parent_path() const;
```

## <a name="pathhas_relative_path"></a><a name="has_relative_path"></a> percorso:: has_relative_path

Restituisce `!relative_path().empty()`.

```cpp
bool has_relative_path() const;
```

## <a name="pathhas_root_directory"></a><a name="has_root_directory"></a> percorso:: has_root_directory

Restituisce `!root_directory().empty()`.

```cpp
bool has_root_directory() const;
```

## <a name="pathhas_root_name"></a><a name="has_root_name"></a> percorso:: has_root_name

Restituisce `!root_name().empty()`.

```cpp
bool has_root_name() const;
```

## <a name="pathhas_root_path"></a><a name="has_root_path"></a> percorso:: has_root_path

Restituisce `!root_path().empty()`.

```cpp
bool has_root_path() const;
```

## <a name="pathhas_stem"></a><a name="has_stem"></a> percorso:: has_stem

Restituisce `!stem().empty()`.

```cpp
bool has_stem() const;
```

## <a name="pathis_absolute"></a><a name="is_absolute"></a> percorso:: is_absolute

Per Windows, la funzione restituisce `has_root_name() && has_root_directory()` . Per POSIX, la funzione restituisce `has_root_directory()` .

```cpp
bool is_absolute() const;
```

## <a name="pathis_relative"></a><a name="is_relative"></a> percorso:: is_relative

Restituisce `!is_absolute()`.

```cpp
bool is_relative() const;
```

## <a name="pathiterator"></a><a name="iterator"></a> Path:: iterator

Iteratore costante bidirezionale che definisce i componenti del percorso di `myname` .

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

### <a name="remarks"></a>Commenti

La classe descrive un iteratore costante bidirezionale che designa i `path` componenti di `myname` nella sequenza:

1. nome radice, se presente

1. directory radice, se presente

1. gli elementi di directory rimanenti del padre `path` , se presenti, che terminano con il nome del file, se presente

Per `pval` un oggetto di tipo `path` :

1. `path::iterator X = pval.begin()` designa il primo `path` elemento nel percorso, se presente.

1. `X == pval.end()` è true quando `X` punta appena oltre la fine della sequenza di componenti.

1. `*X` Restituisce una stringa che corrisponde al componente corrente.

1. `++X` definisce il componente successivo nella sequenza, se presente.

1. `--X` definisce il componente precedente nella sequenza, se presente.

1. La modifica `myname` di invalida tutti gli iteratori che definiscono gli elementi in `myname` .

## <a name="pathmake_preferred"></a><a name="make_preferred"></a> percorso:: make_preferred

Converte ogni separatore in un oggetto `preferred_separator` in base alle esigenze.

```cpp
path& make_preferred();
```

## <a name="pathnative"></a><a name="native"></a> Path:: native

Restituisce `myname`.

```cpp
const string_type& native() const noexcept;
```

## <a name="pathoperator"></a><a name="op_as"></a> Path:: operator =

Sostituisce gli elementi del percorso con una copia di un altro percorso.

```cpp
path& operator=(const path& right);
path& operator=(path&& right) noexcept;

template <class Source>
path& operator=(const Source& source);
```

### <a name="parameters"></a>Parametri

*Ok*\
[Percorso](../standard-library/path-class.md) copiato nell'oggetto `path` .

*origine*\
Percorso di origine.

### <a name="remarks"></a>Commenti

Il primo operatore membro copia `right.myname` in `myname` . Il secondo operatore membro passa `right.myname` a `myname` . Il terzo operatore membro si comporta allo stesso modo di `*this = path(source)` .

## <a name="pathoperator"></a><a name="op_add"></a> Path:: operator + =

Varie `concat` espressioni.

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

*Ok*\
Percorso aggiunto.

*Str*\
Stringa aggiunta.

*PTR*\
Puntatore aggiunto.

*elem*\
Oggetto aggiunto `value_type` o `Elem` .

*origine*\
Origine aggiunta.

### <a name="remarks"></a>Commenti

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. `concat(right);`

1. `concat(path(str));`

1. `concat(ptr);`

1. `concat(string_type(1, elem));`

1. `concat(source);`

1. `concat(path(basic_string<Elem>(1, elem)));`

## <a name="pathoperator"></a><a name="op_divide"></a> Path:: operator/=

Varie `append` espressioni.

```cpp
path& operator/=(const path& right);

template <class Source>
path& operator/=(const Source& source);
```

### <a name="parameters"></a>Parametri

*Ok*\
Percorso aggiunto.

*origine*\
Origine aggiunta.

### <a name="remarks"></a>Commenti

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. `append(right);`

1. `append(source);`

## <a name="pathoperator-string_type"></a><a name="op_string"></a> string_type Path:: operator

Restituisce `myname`.

```cpp
operator string_type() const;
```

## <a name="pathparent_path"></a><a name="parent_path"></a> percorso::p arent_path

Restituisce il componente del percorso padre di `myname` .

```cpp
path parent_path() const;
```

### <a name="remarks"></a>Commenti

Restituisce il componente del percorso padre di `myname` , in particolare il prefisso di `myname` dopo la rimozione di e di `filename().native()` eventuali separatori di directory immediatamente precedenti. (In modo analogo, se `begin() != end()` è la combinazione di tutti gli elementi nell'intervallo `[begin(), --end())` applicando successivamente `operator/=` ). Il componente può essere vuoto.

## <a name="pathpath"></a><a name="path"></a> percorso::p ATH

Costruisce un oggetto `path` in diversi modi.

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

*Ok*\
Percorso in cui il percorso costruito deve essere una copia.

*origine*\
Origine della quale il percorso costruito deve essere una copia.

*loc*\
Impostazioni locali specificate.

*prima*\
Posizione del primo elemento da copiare.

*Ultima*\
Posizione dell'ultimo elemento da copiare.

### <a name="remarks"></a>Commenti

Costrutti tutti i costruttori `myname` in diversi modi:

Per è `path()` `myname()` .

Per `path(const path& right` ) è `myname(right.myname)` .

Per è `path(path&& right)` `myname(right.myname)` .

Per è `template<class Source> path(const Source& source)` `myname(source)` .

A `template<class Source> path(const Source& source, const locale& loc)` tale proposito `myname(source)` , ottenere tutti i facet codecvt necessari da `loc` .

Per è `template<class InIt> path(InIt first, InIt last)` `myname(first, last)` .

A `template<class InIt> path(InIt first, InIt last, const locale& loc)` tale proposito `myname(first, last)` , ottenere tutti i facet codecvt necessari da `loc` .

## <a name="pathpreferred_separator"></a><a name="preferred_separator"></a> percorso::p referred_separator

L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host.

```cpp
#if _WIN32_C_LIB
static constexpr value_type preferred_separator == L'\\';
#else // assume POSIX
static constexpr value_type preferred_separator == '/';
#endif // filesystem model now defined
```

### <a name="remarks"></a>Commenti

Si noti che è ugualmente consentito usare L'/' al suo posto nella maggior parte dei contesti in Windows.

## <a name="pathrelative_path"></a><a name="relative_path"></a> percorso:: relative_path

Restituisce il componente path relativo di `myname` .

```cpp
path relative_path() const;
```

### <a name="remarks"></a>Commenti

Restituisce il componente path relativo di `myname` , in particolare il suffisso di `myname` dopo la rimozione di `root_path().native()` e di eventuali separatori di directory immediatamente successivi. Il componente può essere vuoto.

## <a name="pathremove_filename"></a><a name="remove_filename"></a> percorso:: remove_filename

Rimuove il nome del file.

```cpp
path& remove_filename();
```

## <a name="pathreplace_extension"></a><a name="replace_extension"></a> percorso:: replace_extension

Sostituisce l'estensione di `myname` .

```cpp
path& replace_extension(const path& newext = path());
```

### <a name="parameters"></a>Parametri

*newext*\
Nuova estensione.

### <a name="remarks"></a>Commenti

Rimuove innanzitutto il suffisso `extension().native()` da `myname` . Quindi se `!newext.empty() && newext[0] != dot` (dove `dot` è `*path(".").c_str()` ), `dot` viene aggiunto a `myname` . Quindi *newext* viene aggiunto a `myname` .

## <a name="pathreplace_filename"></a><a name="replace_filename"></a> percorso:: replace_filename

Sostituisce il nome file.

```cpp
path& replace_filename(const path& pval);
```

### <a name="parameters"></a>Parametri

*Pval*\
Percorso del nome file.

### <a name="remarks"></a>Commenti

La funzione membro esegue:

```cpp
remove_filename();

*this /= pval;
return (*this);
```

## <a name="pathroot_directory"></a><a name="root_directory"></a> percorso:: root_directory

Restituisce il componente della directory radice di `myname` .

```cpp
path root_directory() const;
```

### <a name="remarks"></a>Commenti

Il componente può essere vuoto.

## <a name="pathroot_name"></a><a name="root_name"></a> percorso:: root_name

Restituisce il componente del nome radice di `myname` .

```cpp
path root_name() const;
```

### <a name="remarks"></a>Commenti

Il componente può essere vuoto.

## <a name="pathroot_path"></a><a name="root_path"></a> percorso:: root_path

Restituisce il componente del percorso radice di `myname` .

```cpp
path root_path() const;
```

### <a name="remarks"></a>Commenti

Restituisce il componente del percorso radice di `myname` , in modo specifico `root_name()`  /  `root_directory` . Il componente può essere vuoto.

## <a name="pathstem"></a><a name="stem"></a> Path:: stem

Restituisce il `stem` componente di `myname` .

```cpp
path stem() const;
```

### <a name="remarks"></a>Commenti

Restituisce il `stem` componente di `myname` , in particolare `filename().native()` con eventuali finali `extension().native()` rimossi. Il componente può essere vuoto.

## <a name="pathstring"></a><a name="string"></a> Path:: String

Converte la sequenza archiviata in `mypath` .

```cpp
template \<class Elem, class Traits = char_traits\<Elem>, class Alloc = allocator\<Elem>>
basic_string\<Elem, Traits, Alloc> string(const Alloc& al = Alloc()) const;
string string() const;
```

### <a name="remarks"></a>Commenti

La prima funzione membro (modello) converte la sequenza archiviata in `mypath` modo analogo a quanto segue:

1. `string()` per `string<char, Traits, Alloc>()`

1. `wstring()` per `string<wchar_t, Traits, Alloc>()`

1. `u16string()` per `string<char16_t, Traits, Alloc>()`

1. `u32string()` per `string<char32_t, Traits, Alloc>()`

La seconda funzione membro converte la sequenza archiviata in nella `mypath` codifica preferita dal sistema host per una **`char`** sequenza e la restituisce archiviata in un oggetto di tipo `string` .

## <a name="pathstring_type"></a><a name="string_type"></a> percorso:: string_type

Il tipo è sinonimo di `basic_string<value_type>`.

```cpp
typedef basic_string<value_type> string_type;
```

## <a name="pathswap"></a><a name="swap"></a> Path:: swap

Viene eseguito `swap(mypath, right.mypath)` .

```cpp
void swap(path& right) noexcept;
```

## <a name="pathu16string"></a><a name="u16string"></a> percorso:: u16string

Converte la sequenza archiviata in `mypath` UTF-16 e la restituisce archiviata in un oggetto di tipo `u16string` .

```cpp
u16string u16string() const;
```

## <a name="pathu32string"></a><a name="u32string"></a> percorso:: u32string

Converte la sequenza archiviata in `mypath` UTF-32 e la restituisce archiviata in un oggetto di tipo `u32string` .

```cpp
u32string u32string() const;
```

## <a name="pathu8string"></a><a name="u8string"></a> percorso:: u8string

Converte la sequenza archiviata in `mypath` UTF-8 e la restituisce archiviata in un oggetto di tipo `u8string` .

```cpp
string u8string() const;
```

## <a name="pathvalue_type"></a><a name="value_type"></a> percorso:: value_type

Il tipo descrive gli `path` elementi preferiti dal sistema operativo host.

```cpp
#if _WIN32_C_LIB
typedef wchar_t value_type;
#else // assume POSIX
typedef char value_type;
#endif // filesystem model now defined
```

## <a name="pathwstring"></a><a name="wstring"></a> percorso:: wstring

Converte la sequenza archiviata nella `mypath` codifica preferita dal sistema host per una **`wchar_t`** sequenza e la restituisce archiviata in un oggetto di tipo `wstring` .

```cpp
wstring wstring() const;
```

## <a name="see-also"></a>Vedi anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
