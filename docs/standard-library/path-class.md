---
title: Classe path | Microsoft Docs
ms.custom: ''
ms.date: 09/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- filesystem/std::experimental::filesystem::path
dev_langs:
- C++
ms.assetid: 8a1227ca-aeb2-4e0e-84aa-86e34e4f4fe8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fd8fa524d0c41d437575a61ff4e4456fd9933404
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45725309"
---
# <a name="path-class"></a>Classe path

Il **tracciato** classe archivia un oggetto di tipo `string_type`, denominato `myname` qui come a scopo illustrativo, idoneo per l'uso come percorso. `string_type` è un sinonimo `basic_string<value_type>`, dove `value_type` è un sinonimo **char** in Windows o **wchar_t** in Posix.

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
|[iterator](#iterator)|Un iteratore costante bidirezionale che definisce il `path` i componenti di `myname`.|
|[string_type](#string_type)|Il tipo è sinonimo di `basic_string<value_type>`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[append](#append)|Aggiunge la sequenza specificata a `mypath`, convertendola e inserendo un preferred_separator in base alle esigenze.|
|[assign](#assign)|Sostituisce `mypath` con la sequenza specificata, convertito in base alle esigenze.|
|[begin](#begin)|Restituisce un `path::iterator` che designa il primo elemento path nel percorso, se presente.|
|[c_str](#c_str)|Restituisce un puntatore al primo carattere in `mypath`.|
|[clear](#clear)|Esegue `mypath.clear()`.|
|[compare](#compare)|Restituisce i valori di confronto.|
|[concat](#compare)|Aggiunge la sequenza specificata a `mypath`, convertito (ma senza inserire un separatore) in base alle esigenze.|
|[empty](#empty)|Restituisce `mypath.empty()`.|
|[end](#end)|Restituisce un iteratore di fine della sequenza di tipo `iterator`.|
|[Estensione](#extension)|Restituisce i suffisso di `filename()`.|
|[filename](#filename)|Restituisce il componente della directory radice di myname, nello specifico `empty() path() : *--end()`. Il componente può essere vuoto.|
|[generic_string](#generic_string)|Restituisce `this->string<Elem, Traits, Alloc>(al)` con (in Windows) qualsiasi barra rovesciata convertita in una barra.|
|[generic_u16string](#generic_u16string)|Restituisce `u16string()` con qualsiasi barra rovesciata convertita in una barra (in Windows).|
|[generic_u32string](#generic_u32string)|Restituisce `u32string()` con qualsiasi barra rovesciata convertita in una barra (in Windows).|
|[generic_u8string](#generic_u8string)|Restituisce `u8string()` con qualsiasi barra rovesciata convertita in una barra (in Windows).|
|[generic_wstring](#generic_wstring)|Restituisce `wstring()` con qualsiasi barra rovesciata convertita in una barra (in Windows).|
|[has_extension](#has_extension)|Restituisce `!extension().empty()`.|
|[has_filename](#has_filename)|Restituisce `!filename().empty()`.|
|[has_parent_path](#has_parent_path)|Restituisce `!parent_path().empty()`.|
|[has_relative_path](#has_relative_path)|Restituisce `!relative_path().empty()`.|
|[has_root_directory](#has_root_directory)|Restituisce `!root_directory().empty()`.|
|[has_root_name](#has_root_name)|Restituisce `!root_name().empty()`.|
|[has_root_path](#has_root_path)|Restituisce `!root_path().empty()`.|
|[has_stem](#has_stem)|Restituisce `!stem().empty()`.|
|[is_absolute](#is_absolute)|Per Windows, la funzione restituisce `has_root_name() && has_root_directory()`. Per Posix, la funzione restituisce `has_root_directory()`.|
|[is_relative](#is_relative)|Restituisce `!is_absolute()`.|
|[make_preferred](#make_preferred)|Converte ogni separatore in un preferred_separator in base alle esigenze.|
|[native](#native)|Restituisce `myname`.|
|[parent_path](#parent_path)|Restituisce l'elemento padre del componente del percorso `myname`.|
|[preferred_separator in base alle](#preferred_separator)|L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host. |
|[Impossibile trovare RELATIVE_PATH](#relative_path)|Restituisce il componente path relativo di `myname`. |
|[remove_filename](#remove_filename)|Rimuove il nome del file.|
|[replace_extension](#replace_extension)|Sostituisce l'estensione di `myname`. |
|[replace_filename](#replace_filename)|RReplaces il nome del file.|
|[root_directory](#root_directory)|Restituisce il componente della directory radice di `myname`. |
|[root_name](#root_name)|Restituisce il componente del nome radice `myname`. |
|[root_path](#root_path)|Restituisce il componente del percorso radice `myname`.|
|[Stem](#stem)|Restituisce il `stem` componente di `myname`.|
|[string](#string)|Converte la sequenza archiviata `mypath`.|
|[swap](#swap)|Esegue `swap(mypath, right.mypath)`.|
|[u16string](#u16string)|Converte la sequenza archiviata `mypath` UTF-16 e restituisce archiviata in un oggetto di tipo `u16string`.|
|[u32string](#u32string)|Converte la sequenza archiviata `mypath` UTF-32 e restituisce archiviata in un oggetto di tipo `u32string`.|
|[u8string](#u8string)|Converte la sequenza archiviata `mypath` UTF-8 e restituisce archiviata in un oggetto di tipo `u8string`.|
|[value_type](#value_type)|Il tipo descrive gli elementi path preferiti dal sistema operativo host.|
|[wstring](#wstring)|Converte la sequenza archiviata `mypath` per la codifica preferita dal sistema hot per una `wchar_t` sequenza e restituisce archiviata in un oggetto di tipo `wstring`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#op_as)|Sostituisce gli elementi del percorso con una copia di un altro percorso.|
|[operator+=](#op_add)|Vari `concat` espressioni.|
|[operator/=](#op_divide)|Vari `append` espressioni.|
|[operator string_type](#op_string)|Restituisce `myname`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio nomi:** std::experimental::filesystem

## <a name="append"></a> Path:: Append

Aggiunge la sequenza specificata da `mypath`, convertire e inserisce un `preferred_separator` in base alle esigenze.

```cpp
template <class Source>
path& append(const Source& source);

template <class InIt>
path& append(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*source*<br/>
Sequenza specificata.

*first*<br/>
Inizio della sequenza specificata.

*last*<br/>
Fine della sequenza specificata.

## <a name="assign"></a> Path:: Assign

Sostituisce `mypath` con la sequenza specificata, convertito in base alle esigenze.

```cpp
template <class Source>
path& assign(const Source& source);

template <class InIt>
path& assign(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*source*<br/>
Sequenza specificata.

*first*<br/>
Inizio della sequenza specificata.

*last*<br/>
Fine della sequenza specificata.

## <a name="begin"></a> Path:: begin

Restituisce un `path::iterator` che designa il primo elemento path nel percorso, se presente.

```cpp
iterator begin() const;
```

## <a name="c_str"></a> Path::c_str

Restituisce un puntatore al primo carattere in `mypath`.

```cpp
const value_type& *c_str() const noexcept;
```

## <a name="clear"></a> Path:: Clear

Esegue `mypath.clear()`.

```cpp
void clear() noexcept;
```

## <a name="compare"></a> Path:: compare

La prima funzione restituisce `mypath.compare(pval.native())`. La seconda funzione restituisce `mypath.compare(str)`. La terza funzione restituisce `mypath.compare(ptr)`.

```cpp
int compare(const path& pval) const noexcept;
int compare(const string_type& str) const;
int compare(const value_type *ptr) const;
```

### <a name="parameters"></a>Parametri

*PVal*<br/>
Percorso da confrontare.

*str*<br/>
Stringa da confrontare.

*ptr*<br/>
Puntatore da confrontare.

## <a name="concat"></a> Path:: concat

Aggiunge la sequenza specificata a `mypath`, convertito (ma senza inserire un separatore) in base alle esigenze.

```cpp
template <class Source>
path& concat(const Source& source);

template <class InIt>
path& concat(InIt first, InIt last);
```

### <a name="parameters"></a>Parametri

*source*<br/>
Sequenza specificata.

*first*<br/>
Inizio della sequenza specificata.

*last*<br/>
Fine della sequenza specificata.

## <a name="const_iterator"></a> Path::const_iterator

Sinonimo di `iterator`.

```cpp
typedef iterator const_iterator;
```

## <a name="empty"></a> Path:: Empty

Restituisce `mypath.empty()`.

```cpp
bool empty() const noexcept;
```

## <a name="end"></a> Path:: end

Restituisce un iteratore di fine della sequenza di tipo `iterator`.

```cpp
iterator end() const;
```

## <a name="extension"></a> Path:: Extension

Restituisce i suffisso di `filename()`.

```cpp
path extension() const;
```

### <a name="remarks"></a>Note

Restituisce i suffisso di `filename() X` in modo che:

Se `X == path(".") || X == path("..")` oppure se `X` non contiene alcun punto, il suffisso è vuoto.

In caso contrario, il suffisso comincia con (e include) il punto all'estrema destra.

## <a name="filename"></a> Path:: filename

Restituisce il componente della directory radice di myname, nello specifico `empty() path() : *--end()`. Il componente può essere vuoto.

```cpp
path filename() const;
```

## <a name="generic_string"></a> Path::generic_string

Restituisce `this->string<Elem, Traits, Alloc>(al)` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

```cpp
template <class Elem,
    class Traits = char_traits<Elem>,
    class Alloc = allocator<Elem>>
  basic_string<Elem, Traits, Alloc>
    generic_string(const Alloc& al = Alloc()) const;

string generic_string() const;
```

## <a name="generic_u16string"></a> Path::generic_u16string

Restituisce `u16string()` con qualsiasi barra rovesciata convertita in una barra (in Windows).

```cpp
u16string generic_u16string() const;
```

## <a name="generic_u32string"></a> Path::generic_u32string

Restituisce `u32string()` con qualsiasi barra rovesciata convertita in una barra (in Windows).

```cpp
u32string generic_u32string() const;
```

## <a name="generic_u8string"></a> Path::generic_u8string

Restituisce `u8string()` con qualsiasi barra rovesciata convertita in una barra (in Windows).

```cpp
string generic_u8string() const;
```

## <a name="generic_wstring"></a> Path::generic_wstring

Restituisce `wstring()` con qualsiasi barra rovesciata convertita in una barra (in Windows).

```cpp
wstring generic_wstring() const;
```

## <a name="has_extension"></a> Path::has_extension

Restituisce `!extension().empty()`.

```cpp
bool has_extension() const;
```

## <a name="has_filename"></a> Path:: has_filename

Restituisce `!filename().empty()`.

```cpp
bool has_filename() const;
```

## <a name="has_parent_path"></a> Path:: has_parent_path

Restituisce `!parent_path().empty()`.

```cpp
bool has_parent_path() const;
```

## <a name="has_relative_path"></a> Path:: has_relative_path

Restituisce `!relative_path().empty()`.

```cpp
bool has_relative_path() const;
```

## <a name="has_root_directory"></a> Path:: has_root_directory

Restituisce `!root_directory().empty()`.

```cpp
bool has_root_directory() const;
```

## <a name="has_root_name"></a> Path:: has_root_name

Restituisce `!root_name().empty()`.

```cpp
bool has_root_name() const;
```

## <a name="has_root_path"></a> Path:: has_root_path

Restituisce `!root_path().empty()`.

```cpp
bool has_root_path() const;
```

## <a name="has_stem"></a> Path::has_stem

Restituisce `!stem().empty()`.

```cpp
bool has_stem() const;
```

## <a name="is_absolute"></a> Path:: is_absolute

Per Windows, la funzione restituisce `has_root_name() && has_root_directory()`. Per Posix, la funzione restituisce `has_root_directory()`.

```cpp
bool is_absolute() const;
```

## <a name="is_relative"></a> Path:: is_relative

Restituisce `!is_absolute()`.

```cpp
bool is_relative() const;
```

## <a name="iterator"></a> Path:: iterator

Un iteratore costante bidirezionale che definisce i componenti path di `myname`.

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

La classe descrive un iteratore costante bidirezionale che definisce il `path` i componenti di `myname` nella sequenza:

1. nome radice, se presente

1. directory radice, se presente

1. gli elementi di directory rimanenti del padre `path`, se presente, che terminano con il nome del file, se presente

Per la `pval` un oggetto di tipo `path`:

1. `path::iterator X = pval.begin()` designa il primo `path` elemento nel percorso, se presente.

1. `X == pval.end()` è true quando `X` punta poco dopo la fine della sequenza di componenti.

3. `*X` Restituisce una stringa che corrisponde al componente corrente

1. `++X` definisce il componente successivo nella sequenza, se presente.

1. `--X` definisce il componente precedente nella sequenza, se presente.

1. Alterazione `myname` invalida tutti gli iteratori che designano gli elementi in `myname`.

## <a name="make_preferred"></a> Path:: make_preferred

Converte ogni separatore per un `preferred_separator` in base alle esigenze.

```cpp
path& make_preferred();
```

## <a name="native"></a> Path::native

Restituisce `myname`.

```cpp
const string_type& native() const noexcept;
```

## <a name="op_as"></a> Path:: operator =

Sostituisce gli elementi del percorso con una copia di un altro percorso.

```cpp
path& operator=(const path& right);
path& operator=(path&& right) noexcept;

template <class Source>
path& operator=(const Source& source);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [tracciato](../standard-library/path-class.md) copiata nel `path`.

*source*<br/>
Il percorso di origine.

### <a name="remarks"></a>Note

Le copie di operatore membro primo `right.myname` a `myname`. Il secondo operatore membro sposta `right.myname` a `myname`. Il terzo operatore membro si comporta come `*this = path(source)`.

## <a name="op_add"></a> Path:: operator + =

Vari `concat` espressioni.

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

*right*<br/>
Percorso aggiunto.

*str*<br/>
La stringa aggiunta.

*ptr*<br/>
Il puntatore aggiunto.

*Elem*<br/>
L'aggiunta `value_type` o `Elem`.

*source*<br/>
L'origine aggiunta.

### <a name="remarks"></a>Note

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. `concat(right);`

1. `concat(path(str));`

1. `concat(ptr);`

1. `concat(string_type(1, elem));`

1. `concat(source);`

1. `concat(path(basic_string<Elem>(1, elem)));`

## <a name="op_divide"></a> Path:: operator / =

Vari `append` espressioni.

```cpp
path& operator/=(const path& right);

template <class Source>
path& operator/=(const Source& source);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Percorso aggiunto.

*source*<br/>
L'origine aggiunta.

### <a name="remarks"></a>Note

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. `append(right);`

1. `append(source);`

## <a name="op_string"></a> Path:: operator string_type

Restituisce `myname`.

```cpp
operator string_type() const;
```

## <a name="parent_path"></a> Path:: parent_path

Restituisce l'elemento padre del componente del percorso `myname`.

```cpp
path parent_path() const;
```

### <a name="remarks"></a>Note

Restituisce l'elemento padre del componente del percorso `myname`, in modo specifico il prefisso `myname` dopo la rimozione `filename().native()` e di eventuali separatori di directory immediatamente precedenti. (Allo stesso modo, se `begin() != end()`, è la combinazione di tutti gli elementi nell'intervallo `[begin(), --end())` applicando in successione `operator/=`.) Il componente può essere vuoto.

## <a name="path"></a> Path:: Path

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

*right*<br/>
Il percorso di cui deve essere una copia il percorso completo.

*source*<br/>
L'origine di cui è il percorso costruito deve essere una copia.

*Loc*<br/>
Le impostazioni locali specificate.

*first*<br/>
Posizione del primo elemento da copiare.

*last*<br/>
La posizione dell'ultimo elemento da copiare.

### <a name="remarks"></a>Note

I costruttori tutti costruire `myname` in vari modi:

Per la `path()` è `myname()`.

Per la `path(const path& right`) è `myname(right.myname)`.

Per la `path(path&& right)` è `myname(right.myname)`.

Per la `template<class Source> path(const Source& source)` è `myname(source)`.

Per la `template<class Source> path(const Source& source, const locale& loc)` risulta `myname(source)`, ottiene eventuali facet codecvt necessari da `loc`.

Per la `template<class InIt> path(InIt first, InIt last)` è `myname(first, last)`.

Per la `template<class InIt> path(InIt first, InIt last, const locale& loc)` risulta `myname(first, last)`, ottiene eventuali facet codecvt necessari da `loc`.

## <a name="preferred_separator"></a> Path::preferred_separator

L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host.

```cpp
#if _WIN32_C_LIB
static constexpr value_type preferred_separator == L'\\';
#else // assume Posix
static constexpr value_type preferred_separator == '/';
#endif // filesystem model now defined
```

### <a name="remarks"></a>Note

Si noti che è ugualmente consentito usare L'/' al suo posto nella maggior parte dei contesti in Windows.

## <a name="relative_path"></a> Path:: RELATIVE_PATH

Restituisce il componente path relativo di `myname`.

```cpp
path relative_path() const;
```

### <a name="remarks"></a>Note

Restituisce il componente del percorso relativo `myname`, in modo specifico il suffisso `myname` dopo la rimozione `root_path().native()` e di eventuali separatori di directory immediatamente successivi. Il componente può essere vuoto.

## <a name="remove_filename"></a> Path:: remove_filename

Rimuove il nome del file.

```cpp
path& remove_filename();
```

## <a name="replace_extension"></a> Path:: replace_extension

Sostituisce l'estensione di `myname`.

```cpp
path& replace_extension(const path& newext = path());
```

### <a name="parameters"></a>Parametri

*newext*<br/>
La nuova estensione.

### <a name="remarks"></a>Note

Rimuove prima il suffisso `extension().native()` da `myname`. Quindi, se `!newext.empty() && newext[0] != dot` (dove `dot` viene `*path(".").c_str()`), quindi `dot` viene aggiunto al `myname`. Quindi *newext* viene aggiunto al `myname`.

## <a name="replace_filename"></a> Path:: replace_filename

Sostituisce il nome del file.

```cpp
path& replace_filename(const path& pval);
```

### <a name="parameters"></a>Parametri

*PVal*<br/>
Il percorso del nome del file.

### <a name="remarks"></a>Note

La funzione membro esegue:

```cpp
remove_filename();

*this /= pval;
return (*this);
```

## <a name="root_directory"></a> Path:: root_directory

Restituisce il componente della directory radice di `myname`.

```cpp
path root_directory() const;
```

### <a name="remarks"></a>Note

Il componente può essere vuoto.

## <a name="root_name"></a> Path:: root_name

Restituisce il componente del nome radice `myname`.

```cpp
path root_name() const;
```

### <a name="remarks"></a>Note

Il componente può essere vuoto.

## <a name="root_path"></a> Path:: root_path

Restituisce il componente del percorso radice `myname`.

```cpp
path root_path() const;
```

### <a name="remarks"></a>Note

Restituisce il componente del percorso radice `myname`, in particolare `root_name()`  /  `root_directory`. Il componente può essere vuoto.

## <a name="stem"></a> Path:: Stem

Restituisce il `stem` componente di `myname`.

```cpp
path stem() const;
```

### <a name="remarks"></a>Note

Restituisce il `stem` componente del `myname`, in particolare `filename().native()` con qualsiasi finali `extension().native()` rimosso. Il componente può essere vuoto.

## <a name="string"></a> Path:: String

Converte la sequenza archiviata `mypath`.

```cpp
template \<class Elem, class Traits = char_traits\<Elem>, class Alloc = allocator\<Elem>>
basic_string\<Elem, Traits, Alloc> string(const Alloc& al = Alloc()) const;
string string() const;
```

### <a name="remarks"></a>Note

La prima funzione membro (modello) Converte la sequenza archiviata `mypath` allo stesso modo:

1. `string()` per `string<char, Traits, Alloc>()`

1. `wstring()` per `string<wchar_t, Traits, Alloc>()`

1. `u16string()` per `string<char16_t, Traits, Alloc>()`

1. `u32string()` per `string<char32_t, Traits, Alloc>()`

La seconda funzione membro Converte la sequenza archiviata `mypath` per la codifica preferita dal sistema hot per una **char** sequenza e restituisce archiviata in un oggetto di tipo `string`.

## <a name="string_type"></a> Path::STRING_TYPE

Il tipo è sinonimo di `basic_string<value_type>`.

```cpp
typedef basic_string<value_type> string_type;
```

## <a name="swap"></a> Path:: swap

Esegue `swap(mypath, right.mypath)`.

```cpp
void swap(path& right) noexcept;
```

## <a name="u16string"></a> Path::u16string

Converte la sequenza archiviata `mypath` UTF-16 e restituisce archiviata in un oggetto di tipo `u16string`.

```cpp
u16string u16string() const;
```

## <a name="u32string"></a> Path::u32string

Converte la sequenza archiviata `mypath` UTF-32 e restituisce archiviata in un oggetto di tipo `u32string`.

```cpp
u32string u32string() const;
```

## <a name="u8string"></a> Path::u8string

Converte la sequenza archiviata `mypath` UTF-8 e restituisce archiviata in un oggetto di tipo `u8string`.

```cpp
string u8string() const;
```

## <a name="value_type"></a> Path::value_type

Il tipo descrive il `path` elementi preferiti dal sistema operativo host.

```cpp
#if _WIN32_C_LIB
typedef wchar_t value_type;
#else // assume Posix
typedef char value_type;
#endif // filesystem model now defined
```

## <a name="wstring"></a> Path::wstring

Converte la sequenza archiviata `mypath` per la codifica preferita dal sistema hot per una **wchar_t** sequenza e restituisce archiviata in un oggetto di tipo `wstring`.

```cpp
wstring wstring() const;
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
