---
title: Classe path
ms.date: 09/27/2018
f1_keywords:
- filesystem/std::experimental::filesystem::path
ms.assetid: 8a1227ca-aeb2-4e0e-84aa-86e34e4f4fe8
ms.openlocfilehash: 669dfd2c8cd8576ebfb6684bab7cf63cdd51babc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372114"
---
# <a name="path-class"></a>Classe path

La classe **path** memorizza `string_type`un `myname` oggetto di tipo , chiamato qui ai fini dell'esposizione, adatto per l'utilizzo come nome di percorso. `string_type`è `basic_string<value_type>`un sinonimo di , `value_type` dove è un sinonimo di **wchar_t** su Windows o **char** su POSIX.

Per ulteriori informazioni ed esempi di codice, vedere Navigazione del [file system (C )](../standard-library/file-system-navigation.md).

## <a name="syntax"></a>Sintassi

```cpp
class path;
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[Percorso](#path)|Costruisce un oggetto `path`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[const_iterator](#const_iterator)|Sinonimo di `iterator`.|
|[Iteratore](#iterator)|Iteratore costante bidirezionale che `path` definisce `myname`i componenti di .|
|[string_type](#string_type)|Il tipo è sinonimo di `basic_string<value_type>`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[append](#append)|Aggiunge la sequenza `mypath`specificata a , convertindo e inserendo un preferred_separator in base alle esigenze.|
|[Assegnare](#assign)|Sostituisce `mypath` con la sequenza specificata, convertita in base alle esigenze.|
|[Iniziare](#begin)|Restituisce `path::iterator` un elemento designante del primo elemento path nel percorso, se presente.|
|[c_str](#c_str)|Restituisce un puntatore `mypath`al primo carattere in .|
|[Chiaro](#clear)|Esegue `mypath.clear()`.|
|[Confrontare](#compare)|Restituisce i valori di confronto.|
|[Concat](#compare)|Aggiunge la sequenza `mypath`specificata a , convertita (ma non inserendo un separatore) in base alle esigenze.|
|[Vuoto](#empty)|Restituisce `mypath.empty()`.|
|[end](#end)|Restituisce un iteratore di `iterator`fine sequenza di tipo .|
|[Estensione](#extension)|Restituisce il `filename()`suffisso di .|
|[Filename](#filename)|Restituisce il componente della directory radice di myname, in maniera specifica `empty() path() : *--end()`. Il componente può essere vuoto.|
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
|[is_absolute](#is_absolute)|Per Windows, la `has_root_name() && has_root_directory()`funzione restituisce . Per POSIX, la `has_root_directory()`funzione restituisce .|
|[is_relative](#is_relative)|Restituisce `!is_absolute()`.|
|[make_preferred](#make_preferred)|Converte ogni separatore in un preferred_separator in base alle esigenze.|
|[Nativo](#native)|Restituisce `myname`.|
|[parent_path](#parent_path)|Restituisce il componente `myname`del percorso padre di .|
|[preferred_separator](#preferred_separator)|L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host. |
|[relative_path](#relative_path)|Restituisce il componente `myname`del percorso relativo di . |
|[remove_filename](#remove_filename)|Rimuove il nome del file.|
|[replace_extension](#replace_extension)|Sostituisce l'estensione di `myname`. |
|[replace_filename](#replace_filename)|RSostituisce il nome del file.|
|[root_directory](#root_directory)|Restituisce il componente `myname`directory radice di . |
|[root_name](#root_name)|Restituisce il componente `myname`del nome radice di . |
|[root_path](#root_path)|Restituisce il componente `myname`del percorso radice di .|
|[stem](#stem)|Restituisce `stem` il `myname`componente di .|
|[string](#string)|Converte la sequenza memorizzata in `mypath`.|
|[Swap](#swap)|Esegue `swap(mypath, right.mypath)`.|
|[u16stringa](#u16string)|Converte la sequenza memorizzata in `mypath` UTF-16 e `u16string`la restituisce in un oggetto di tipo .|
|[u32string (stringa u32)](#u32string)|Converte la sequenza memorizzata in `mypath` UTF-32 e `u32string`la restituisce in un oggetto di tipo .|
|[u8stringa](#u8string)|Converte la sequenza memorizzata in `mypath` UTF-8 e `u8string`la restituisce in un oggetto di tipo .|
|[Value_type](#value_type)|Il tipo descrive gli elementi path preferiti dal sistema operativo host.|
|[wstring](#wstring)|Converte la sequenza memorizzata nella `mypath` codifica preferita `wchar_t` dal sistema host per una `wstring`sequenza e la restituisce archiviata in un oggetto di tipo .|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore di comando](#op_as)|Sostituisce gli elementi del tracciato con una copia di un altro tracciato.|
|[operatore .](#op_add)|Varie `concat` espressioni.|
|[operatore/](#op_divide)|Varie `append` espressioni.|
|[string_type operatore](#op_string)|Restituisce `myname`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> del file system

**Spazio dei nomi:** std::experimental::filesystem

## <a name="pathappend"></a><a name="append"></a>percorso::aggiungere

Aggiunge la sequenza `mypath`specificata a , `preferred_separator` convertirla e inserire un oggetto in base alle esigenze.

```cpp
template <class Source>
path& append(const Source& source);

template <class InIt>
path& append(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*fonte*\
Sequenza specificata.

*Prima*\
Inizio della sequenza specificata.

*Ultima*\
Fine della sequenza specificata.

## <a name="pathassign"></a><a name="assign"></a>percorso::assegnare

Sostituisce `mypath` con la sequenza specificata, convertita in base alle esigenze.

```cpp
template <class Source>
path& assign(const Source& source);

template <class InIt>
path& assign(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*fonte*\
Sequenza specificata.

*Prima*\
Inizio della sequenza specificata.

*Ultima*\
Fine della sequenza specificata.

## <a name="pathbegin"></a><a name="begin"></a>percorso::inizio

Restituisce `path::iterator` un elemento designante del primo elemento path nel percorso, se presente.

```cpp
iterator begin() const;
```

## <a name="pathc_str"></a><a name="c_str"></a>percorso::c_str

Restituisce un puntatore `mypath`al primo carattere in .

```cpp
const value_type& *c_str() const noexcept;
```

## <a name="pathclear"></a><a name="clear"></a>percorso::cancellare

Esegue `mypath.clear()`.

```cpp
void clear() noexcept;
```

## <a name="pathcompare"></a><a name="compare"></a>percorso::confrontare

La prima funzione restituisce `mypath.compare(pval.native())`. La seconda funzione restituisce `mypath.compare(str)`. La terza `mypath.compare(ptr)`funzione restituisce .

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

*Ptr*\
Puntatore da confrontare.

## <a name="pathconcat"></a><a name="concat"></a>percorso::concat

Aggiunge la sequenza `mypath`specificata a , convertita (ma non inserendo un separatore) in base alle esigenze.

```cpp
template <class Source>
path& concat(const Source& source);

template <class InIt>
path& concat(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*fonte*\
Sequenza specificata.

*Prima*\
Inizio della sequenza specificata.

*Ultima*\
Fine della sequenza specificata.

## <a name="pathconst_iterator"></a><a name="const_iterator"></a>percorso::const_iterator

Sinonimo di `iterator`.

```cpp
typedef iterator const_iterator;
```

## <a name="pathempty"></a><a name="empty"></a>percorso::vuoto

Restituisce `mypath.empty()`.

```cpp
bool empty() const noexcept;
```

## <a name="pathend"></a><a name="end"></a>percorso::fine

Restituisce un iteratore di `iterator`fine sequenza di tipo .

```cpp
iterator end() const;
```

## <a name="pathextension"></a><a name="extension"></a>percorso::estensione

Restituisce il `filename()`suffisso di .

```cpp
path extension() const;
```

### <a name="remarks"></a>Osservazioni

Restituisce il `filename() X` suffisso di tale che:

Se `X == path(".") || X == path("..")` o `X` se non contiene punti, il suffisso è vuoto.

In caso contrario, il suffisso comincia con (e include) il punto all'estrema destra.

## <a name="pathfilename"></a><a name="filename"></a>percorso::nomefile

Restituisce il componente della directory radice di myname, in maniera specifica `empty() path() : *--end()`. Il componente può essere vuoto.

```cpp
path filename() const;
```

## <a name="pathgeneric_string"></a><a name="generic_string"></a>percorso::generic_string

Restituisce `this->string<Elem, Traits, Alloc>(al)` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
template <class Elem,
    class Traits = char_traits<Elem>,
    class Alloc = allocator<Elem>>
  basic_string<Elem, Traits, Alloc>
    generic_string(const Alloc& al = Alloc()) const;

string generic_string() const;
```

## <a name="pathgeneric_u16string"></a><a name="generic_u16string"></a>percorso::generic_u16string

Restituisce `u16string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
u16string generic_u16string() const;
```

## <a name="pathgeneric_u32string"></a><a name="generic_u32string"></a>percorso::generic_u32string

Restituisce `u32string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
u32string generic_u32string() const;
```

## <a name="pathgeneric_u8string"></a><a name="generic_u8string"></a>percorso::generic_u8string

Restituisce `u8string()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
string generic_u8string() const;
```

## <a name="pathgeneric_wstring"></a><a name="generic_wstring"></a>percorso::generic_wstring

Restituisce `wstring()` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
wstring generic_wstring() const;
```

## <a name="pathhas_extension"></a><a name="has_extension"></a>percorso::has_extension

Restituisce `!extension().empty()`.

```cpp
bool has_extension() const;
```

## <a name="pathhas_filename"></a><a name="has_filename"></a>percorso::has_filename

Restituisce `!filename().empty()`.

```cpp
bool has_filename() const;
```

## <a name="pathhas_parent_path"></a><a name="has_parent_path"></a>percorso::has_parent_path

Restituisce `!parent_path().empty()`.

```cpp
bool has_parent_path() const;
```

## <a name="pathhas_relative_path"></a><a name="has_relative_path"></a>percorso::has_relative_path

Restituisce `!relative_path().empty()`.

```cpp
bool has_relative_path() const;
```

## <a name="pathhas_root_directory"></a><a name="has_root_directory"></a>percorso::has_root_directory

Restituisce `!root_directory().empty()`.

```cpp
bool has_root_directory() const;
```

## <a name="pathhas_root_name"></a><a name="has_root_name"></a>percorso::has_root_name

Restituisce `!root_name().empty()`.

```cpp
bool has_root_name() const;
```

## <a name="pathhas_root_path"></a><a name="has_root_path"></a>percorso::has_root_path

Restituisce `!root_path().empty()`.

```cpp
bool has_root_path() const;
```

## <a name="pathhas_stem"></a><a name="has_stem"></a>percorso::has_stem

Restituisce `!stem().empty()`.

```cpp
bool has_stem() const;
```

## <a name="pathis_absolute"></a><a name="is_absolute"></a>percorso::is_absolute

Per Windows, la `has_root_name() && has_root_directory()`funzione restituisce . Per POSIX, la `has_root_directory()`funzione restituisce .

```cpp
bool is_absolute() const;
```

## <a name="pathis_relative"></a><a name="is_relative"></a>percorso::is_relative

Restituisce `!is_absolute()`.

```cpp
bool is_relative() const;
```

## <a name="pathiterator"></a><a name="iterator"></a>percorso::iteratore

Iteratore costante bidirezionale che definisce `myname`i componenti del percorso di .

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

### <a name="remarks"></a>Osservazioni

La classe descrive un iteratore costante bidirezionale che definisce i componenti di nella sequenza:The class describes a bidirectional constant iterator that designates the `path` components of `myname` in the sequence:

1. nome radice, se presente

1. directory radice, se presente

1. gli elementi di directory `path`rimanenti dell'elemento padre , se presenti, che terminano con il nome del file, se presenti

Per `pval` un oggetto `path`di tipo :

1. `path::iterator X = pval.begin()`indica il `path` primo elemento nel nome del percorso, se presente.

1. `X == pval.end()`è vero `X` quando i punti hanno appena oltre la fine della sequenza di componenti.

1. `*X`restituisce una stringa che corrisponde al componente corrente

1. `++X` definisce il componente successivo nella sequenza, se presente.

1. `--X` definisce il componente precedente nella sequenza, se presente.

1. La `myname` modifica invalida tutti gli iteratori `myname`che designano gli elementi in .

## <a name="pathmake_preferred"></a><a name="make_preferred"></a>percorso::make_preferred

Converte ogni separatore in `preferred_separator` base alle esigenze.

```cpp
path& make_preferred();
```

## <a name="pathnative"></a><a name="native"></a>percorso::nativo

Restituisce `myname`.

```cpp
const string_type& native() const noexcept;
```

## <a name="pathoperator"></a><a name="op_as"></a>percorso::operatore

Sostituisce gli elementi del tracciato con una copia di un altro tracciato.

```cpp
path& operator=(const path& right);
path& operator=(path&& right) noexcept;

template <class Source>
path& operator=(const Source& source);
```

### <a name="parameters"></a>Parametri

*va bene*\
Il [percorso](../standard-library/path-class.md) copiato `path`nel file .

*fonte*\
Percorso di origine.

### <a name="remarks"></a>Osservazioni

Il primo operatore `right.myname` `myname`membro copia in . Il secondo operatore membro si sposta `right.myname` su `myname`. Il terzo operatore membro si `*this = path(source)`comporta come .

## <a name="pathoperator"></a><a name="op_add"></a>percorso::operatore

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

*va bene*\
Percorso aggiunto.

*Str*\
Stringa aggiunta.

*Ptr*\
Puntatore aggiunto.

*elem*\
Il `value_type` file `Elem`aggiunto o .

*fonte*\
Origine aggiunta.

### <a name="remarks"></a>Osservazioni

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. `concat(right);`

1. `concat(path(str));`

1. `concat(ptr);`

1. `concat(string_type(1, elem));`

1. `concat(source);`

1. `concat(path(basic_string<Elem>(1, elem)));`

## <a name="pathoperator"></a><a name="op_divide"></a>percorso::operatore/

Varie `append` espressioni.

```cpp
path& operator/=(const path& right);

template <class Source>
path& operator/=(const Source& source);
```

### <a name="parameters"></a>Parametri

*va bene*\
Percorso aggiunto.

*fonte*\
Origine aggiunta.

### <a name="remarks"></a>Osservazioni

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. `append(right);`

1. `append(source);`

## <a name="pathoperator-string_type"></a><a name="op_string"></a>path::string_type operator

Restituisce `myname`.

```cpp
operator string_type() const;
```

## <a name="pathparent_path"></a><a name="parent_path"></a>path::parent_path

Restituisce il componente `myname`del percorso padre di .

```cpp
path parent_path() const;
```

### <a name="remarks"></a>Osservazioni

Restituisce il componente `myname`del percorso `myname` padre di `filename().native()` , in particolare il prefisso dopo la rimozione e gli eventuali separatori di directory immediatamente precedenti. Allo stesso `begin() != end()`modo, se , è la `[begin(), --end())` combinazione di tutti `operator/=`gli elementi nell'intervallo applicando successivamente .) Il componente potrebbe essere vuoto.

## <a name="pathpath"></a><a name="path"></a>percorso::path

Costruisce un `path` in vari modi.

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

*va bene*\
Percorso di cui il percorso costruito deve essere una copia.

*fonte*\
Origine del quale il percorso costruito deve essere una copia.

*Loc*\
Impostazioni locali specificate.

*Prima*\
Posizione del primo elemento da copiare.

*Ultima*\
Posizione dell'ultimo elemento da copiare.

### <a name="remarks"></a>Osservazioni

Tutti i costruttori costruiscono in vari modi:The constructors all construct `myname` in various ways:

Perché `path()` è `myname()`.

Per `path(const path& right`) `myname(right.myname)`è .

Perché `path(path&& right)` è `myname(right.myname)`.

Perché `template<class Source> path(const Source& source)` è `myname(source)`.

Forit `template<class Source> path(const Source& source, const locale& loc)` `myname(source)`is , ottenere tutti i facet `loc`codecvt necessari da .

Perché `template<class InIt> path(InIt first, InIt last)` è `myname(first, last)`.

Forit `template<class InIt> path(InIt first, InIt last, const locale& loc)` `myname(first, last)`is , ottenere tutti i facet `loc`codecvt necessari da .

## <a name="pathpreferred_separator"></a><a name="preferred_separator"></a>percorso:separatore :pindicato

L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host.

```cpp
#if _WIN32_C_LIB
static constexpr value_type preferred_separator == L'\\';
#else // assume POSIX
static constexpr value_type preferred_separator == '/';
#endif // filesystem model now defined
```

### <a name="remarks"></a>Osservazioni

Si noti che è ugualmente consentito usare L'/' al suo posto nella maggior parte dei contesti in Windows.

## <a name="pathrelative_path"></a><a name="relative_path"></a>percorso::relative_path

Restituisce il componente `myname`del percorso relativo di .

```cpp
path relative_path() const;
```

### <a name="remarks"></a>Osservazioni

Restituisce il componente `myname`percorso relativo `myname` di `root_path().native()` , in particolare il suffisso di dopo la rimozione e tutti i separatori di directory ridondanti immediatamente successivi. Il componente può essere vuoto.

## <a name="pathremove_filename"></a><a name="remove_filename"></a>percorso::remove_filename

Rimuove il nome del file.

```cpp
path& remove_filename();
```

## <a name="pathreplace_extension"></a><a name="replace_extension"></a>percorso::replace_extension

Sostituisce l'estensione di `myname`.

```cpp
path& replace_extension(const path& newext = path());
```

### <a name="parameters"></a>Parametri

*newext*\
La nuova estensione.

### <a name="remarks"></a>Osservazioni

Rimuove innanzitutto `extension().native()` `myname`il suffisso da . Quindi, `!newext.empty() && newext[0] != dot` se `dot` `*path(".").c_str()`(dove `dot` si trova `myname`), viene aggiunto a . Quindi *newext* viene `myname`aggiunto a .

## <a name="pathreplace_filename"></a><a name="replace_filename"></a>percorso::replace_filename

Sostituisce il nome del file.

```cpp
path& replace_filename(const path& pval);
```

### <a name="parameters"></a>Parametri

*Pval*\
Percorso del nome del file.

### <a name="remarks"></a>Osservazioni

La funzione membro esegue:

```cpp
remove_filename();

*this /= pval;
return (*this);
```

## <a name="pathroot_directory"></a><a name="root_directory"></a>percorso::root_directory

Restituisce il componente `myname`directory radice di .

```cpp
path root_directory() const;
```

### <a name="remarks"></a>Osservazioni

Il componente può essere vuoto.

## <a name="pathroot_name"></a><a name="root_name"></a>percorso::root_name

Restituisce il componente `myname`del nome radice di .

```cpp
path root_name() const;
```

### <a name="remarks"></a>Osservazioni

Il componente può essere vuoto.

## <a name="pathroot_path"></a><a name="root_path"></a>percorso::root_path

Restituisce il componente `myname`del percorso radice di .

```cpp
path root_path() const;
```

### <a name="remarks"></a>Osservazioni

Restituisce il componente `myname`del `root_name()`  /  `root_directory`percorso radice di , in particolare . Il componente può essere vuoto.

## <a name="pathstem"></a><a name="stem"></a>path::stem

Restituisce `stem` il `myname`componente di .

```cpp
path stem() const;
```

### <a name="remarks"></a>Osservazioni

Restituisce `stem` il `myname`componente `filename().native()` di , `extension().native()` in particolare con qualsiasi finale rimosso. Il componente può essere vuoto.

## <a name="pathstring"></a><a name="string"></a>percorso::stringa

Converte la sequenza memorizzata in `mypath`.

```cpp
template \<class Elem, class Traits = char_traits\<Elem>, class Alloc = allocator\<Elem>>
basic_string\<Elem, Traits, Alloc> string(const Alloc& al = Alloc()) const;
string string() const;
```

### <a name="remarks"></a>Osservazioni

La prima funzione membro (modello) converte la sequenza archiviata nello stesso modo in cui:The first (template) member function converts the sequence stored in `mypath` the same way as:

1. `string()` per `string<char, Traits, Alloc>()`

1. `wstring()` per `string<wchar_t, Traits, Alloc>()`

1. `u16string()` per `string<char16_t, Traits, Alloc>()`

1. `u32string()` per `string<char32_t, Traits, Alloc>()`

La seconda funzione membro converte `mypath` la sequenza archiviata nella codifica preferita dal sistema host `string`per una sequenza **char** e la restituisce archiviata in un oggetto di tipo .

## <a name="pathstring_type"></a><a name="string_type"></a>percorso::string_type

Il tipo è sinonimo di `basic_string<value_type>`.

```cpp
typedef basic_string<value_type> string_type;
```

## <a name="pathswap"></a><a name="swap"></a>percorso::swap

Esegue `swap(mypath, right.mypath)`.

```cpp
void swap(path& right) noexcept;
```

## <a name="pathu16string"></a><a name="u16string"></a>percorso::u16stringa

Converte la sequenza memorizzata in `mypath` UTF-16 e `u16string`la restituisce in un oggetto di tipo .

```cpp
u16string u16string() const;
```

## <a name="pathu32string"></a><a name="u32string"></a>percorso::u32stringa

Converte la sequenza memorizzata in `mypath` UTF-32 e `u32string`la restituisce in un oggetto di tipo .

```cpp
u32string u32string() const;
```

## <a name="pathu8string"></a><a name="u8string"></a>percorso::u8stringa

Converte la sequenza memorizzata in `mypath` UTF-8 e `u8string`la restituisce in un oggetto di tipo .

```cpp
string u8string() const;
```

## <a name="pathvalue_type"></a><a name="value_type"></a>percorso::value_type

Il tipo descrive `path` gli elementi preferiti dal sistema operativo host.

```cpp
#if _WIN32_C_LIB
typedef wchar_t value_type;
#else // assume POSIX
typedef char value_type;
#endif // filesystem model now defined
```

## <a name="pathwstring"></a><a name="wstring"></a>percorso::wstringa

Converte la sequenza memorizzata nella `mypath` codifica preferita dal sistema host per una sequenza **wchar_t** e la restituisce archiviata in un oggetto di tipo `wstring`.

```cpp
wstring wstring() const;
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
