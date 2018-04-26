---
title: Classe path | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- filesystem/std::experimental::filesystem::path
dev_langs:
- C++
ms.assetid: 8a1227ca-aeb2-4e0e-84aa-86e34e4f4fe8
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 12e342baa69a0fa9b354d1eac7890f5c38637c1b
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="path-class"></a>Classe path

La classe **path** archivia un oggetto di tipo string\_type, denominato myname in questo esempio a scopo illustrativo, idoneo all'uso come percorso. string\_type è un sinonimo di basic\_string\<value_type>, dove value\_type è un sinonimo di char in Windows o di wchar_t in Posix.

Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).

## <a name="syntax"></a>Sintassi

```cpp
class path;
```

## <a name="pathappend"></a>path::append

```cpp
template <class Source>
path& append(const Source& source);

template <class InIt>
path& append(InIt first, InIt last);
```

Le funzioni membro aggiungono la sequenza specificata a mypath, convertendola e inserendo un preferred_separator in base alle necessità.

## <a name="pathassign"></a>path::assign

```cpp
template <class Source>
path& assign(const Source& source);

template <class InIt>
path& assign(InIt first, InIt last);
```

Le funzioni membro sostituiscono mypath con la sequenza specificata, convertendola in base alle necessità.

## <a name="pathbegin"></a>path::begin

```cpp
iterator begin() const;
```

Restituisce un path::iterator che definisce il primo elemento path nel percorso, se presente.

## <a name="pathcstr"></a>path::c_str

```cpp
const value_type& *c_str() const noexcept;
```

Restituisce un puntatore al primo carattere in mypath.

## <a name="pathclear"></a>path::clear

```cpp
void clear() noexcept;
```

La funzione membro esegue mypath.clear()

## <a name="pathcompare"></a>path::compare

```cpp
int compare(const path& pval) const noexcept;
int compare(const string_type& str) const;
int compare(const value_type *ptr) const;
```

La prima funzione restituisce mypath.compare(pval.native()). La seconda funzione restituisce mypath.compare(str). La terza funzione restituisce mypath.compare(ptr).

## <a name="pathconcat"></a>path::concat

```cpp
template <class Source>
path& concat(const Source& source);

template <class InIt>
path& concat(InIt first, InIt last);
```

Le funzioni membro aggiungono la sequenza specificata a mypath, convertendola (ma senza inserire un separatore) in base alle necessità.

## <a name="pathconstiterator"></a>path::const_iterator

```cpp
typedef iterator const_iterator;
```

Il tipo è un sinonimo di iterator.

## <a name="pathempty"></a>path::empty

```cpp
bool empty() const noexcept;
```

Restituisce mypath.empty().

## <a name="pathend"></a>path::end

```cpp
iterator end() const;
```

Restituisce un iteratore di fine sequenza di tipo iterator.

## <a name="pathextension"></a>path::extension

```cpp
path extension() const;
```

Restituisce i suffisso di filename() X quale:

Se X == path(".") &#124;&#124; X == path("..") oppure se X non contiene alcun punto, il suffisso è vuoto.

In caso contrario, il suffisso comincia con (e include) il punto all'estrema destra.

## <a name="pathfilename"></a>path::filename

```cpp
path filename() const;
```

Restituisce il componente della directory radice di myname, in maniera specifica `empty()  path() : *--end()`. Il componente può essere vuoto.

## <a name="pathgenericstring"></a>path::generic_string

```cpp
template <class Elem,
    class Traits = char_traits<Elem>,
    class Alloc = allocator<Elem>>
  basic_string<Elem, Traits, Alloc>
    generic_string(const Alloc& al = Alloc()) const;

string generic_string() const;
```

Restituisce `this->string<Elem, Traits, Alloc>(al)` con (in Windows) qualsiasi barra rovesciata convertita in una barra.

## <a name="pathgenericu16string"></a>path::generic_u16string

```cpp
u16string generic_u16string() const;
```

Restituisce u16string() con (in Windows) qualsiasi barra rovesciata convertita in una barra.

## <a name="pathgenericu32string"></a>path::generic_u32string

```cpp
u32string generic_u32string() const;
```

Restituisce u32string() con (in Windows) qualsiasi barra rovesciata convertita in una barra.

## <a name="pathgenericu8string"></a>path::generic_u8string

```cpp
string generic_u8string() const;
```

Restituisce u8string() con (in Windows) qualsiasi barra rovesciata convertita in una barra.

## <a name="pathgenericwstring"></a>path::generic_wstring

```cpp
wstring generic_wstring() const;
```

Restituisce wstring() con (in Windows) qualsiasi barra rovesciata convertita in una barra.

## <a name="pathhasextension"></a>path::has_extension

```cpp
bool has_extension() const;
```

Restituisce !extension().empty().

## <a name="pathhasfilename"></a>path::has_filename

```cpp
bool has_filename() const;
```

Restituisce !filename().empty().

## <a name="pathhasparentpath"></a>path::has_parent_path

```cpp
bool has_parent_path() const;
```

Restituisce !parent_path().empty().

## <a name="pathhasrelativepath"></a>path::has_relative_path

```cpp
bool has_relative_path() const;
```

Restituisce !relative_path().empty().

## <a name="pathhasrootdirectory"></a>path::has_root_directory

```cpp
bool has_root_directory() const;
```

Restituisce !root_directory().empty().

## <a name="pathhasrootname"></a>path::has_root_name

```cpp
bool has_root_name() const;
```

Restituisce !root_name().empty().

## <a name="pathhasrootpath"></a>path::has_root_path

```cpp
bool has_root_path() const;
```

Restituisce !root_path().empty().

## <a name="pathhasstem"></a>path::has_stem

```cpp
bool has_stem() const;
```

Restituisce !stem().empty().

## <a name="pathisabsolute"></a>path::is_absolute

```cpp
bool is_absolute() const;
```

Per Windows, la funzione restituisce has_root_name() && has_root_directory(). Per Posix, la funzione restituisce has_root_directory().

## <a name="pathisrelative"></a>path::is_relative

```cpp
bool is_relative() const;
```

Restituisce !is_absolute().

## <a name="pathiterator"></a>path::iterator

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

La classe descrive un iteratore costante bidirezionale che definisce i componenti path di myname nella sequenza:

1. nome radice, se presente

1. directory radice, se presente

1. gli elementi di directory rimanenti del percorso padre, se presenti, che terminano con il nome file, se presente

Per rendere pval un oggetto di tipo path:

1. path::iterator X = pval.begin() definisce il primo elemento path nel percorso, se presente.

1. X == pval.end() è true quando X punta poco dopo la fine della sequenza dei componenti.

3. *X restituisce una stringa che corrisponde al componente corrente.

1. ++X definisce il componente successivo nella sequenza, se presente.

1. --X definisce il componente precedente nella sequenza, se presente.

1. La modifica di myname invalida tutti gli iteratori che definiscono gli elementi in myname.

## <a name="pathmakepreferred"></a>path::make_preferred

```cpp
path& make_preferred();
```

La funzione membro converte ogni separatore in un preferred_separator in base alle necessità.

## <a name="pathnative"></a>path::native

```cpp
const string_type& native() const noexcept;
```

Restituisce myname.

## <a name="pathoperator"></a>path::operator=

```cpp
path& operator=(const path& right);
path& operator=(path&& right) noexcept;

template <class Source>
path& operator=(const Source& source);
```

Il primo operatore membro copia right.myname in myname. Il secondo operatore membro sposta right.myname in myname. Il terzo operatore membro si comporta allo stesso modo di *this = path(source).

## <a name="pathoperator"></a>path::operator+=

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

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. concat(right);

1. concat(path(str));

1. concat(ptr);

1. concat(string_type(1, elem));

1. concat(source);

1. concat(path(basic_string\<Elem>(1, elem)));

## <a name="pathoperator"></a>path::operator/=

```cpp
path& operator/=(const path& right);

template <class Source>
path& operator/=(const Source& source);
```

Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:

1. append(right);

1. append(source);

## <a name="pathoperator-stringtype"></a>path::operator string_type

```cpp
operator string_type() const;
```

L'operatore membro restituisce myname.

## <a name="pathparentpath"></a>path::parent_path

```cpp
path parent_path() const;
```

Restituisce il componente path padre di myname, in modo specifico il prefisso di myname dopo la rimozione di filename().native() e di eventuali separatori di directory immediatamente precedenti (in maniera analoga, se begin() != end(), è la combinazione di tutti gli elementi nell'intervallo [begin(), --end()) applicando successivamente operator/=.) Il componente può essere vuoto.

## <a name="pathpath"></a>path::path

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

I costruttori costruiscono tutti myname in vari modi:

Per path() è myname().

Per path(const path& right) è myname(right.myname).

Per path(path&& right) è myname(right.myname).

Per template\<class Source> path(const Source& source) è myname(source).

Per template\<class Source> path(const Source& source, const locale& loc) è myname(source) e ottiene eventuali facet codecvt necessari da loc.

Per template\<class InIt> path(InIt first, InIt last) è myname(first, last).

Per template\<class InIt> path(InIt first, InIt last, const locale& loc) è myname(first, last) e ottiene eventuali facet codecvt necessari da loc.

## <a name="pathpreferredseparator"></a>path::preferred_separator

```cpp
#if _WIN32_C_LIB
static constexpr value_type preferred_separator == L'\\';
#else // assume Posix
static constexpr value_type preferred_separator == '/';
#endif // filesystem model now defined
```

L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host. Si noti che è ugualmente consentito usare L'/' al suo posto nella maggior parte dei contesti in Windows.

## <a name="pathrelativepath"></a>path::relative_path

```cpp
path relative_path() const;
```

Restituisce il componente path relativo di myname, in modo specifico il suffisso di myname dopo la rimozione di root_path().native() e di eventuali separatori di directory immediatamente successivi. Il componente può essere vuoto.

## <a name="pathremovefilename"></a>path::remove_filename

```cpp
path& remove_filename();
```

## <a name="pathreplaceextension"></a>path::replace_extension

```cpp
path& replace_extension(const path& newext = path());
```

La funzione membro rimuove prima il suffisso extension().native() da myname. Quindi, se !newext.empty() && newext[0] != dot (dove dot è *path(".").c_str()), dot verrà aggiunto a myname. Quindi newext viene aggiunto a myname.

## <a name="pathreplacefilename"></a>path::replace_filename

```cpp
path& replace_filename(const path& pval);
```

La funzione membro esegue:

```cpp
remove_filename();

*this /= pval;
return (*this);
```

## <a name="pathrootdirectory"></a>path::root_directory

```cpp
path root_directory() const;
```

Restituisce il componente della directory radice di myname. Il componente può essere vuoto.

## <a name="pathrootname"></a>path::root_name

```cpp
path root_name() const;
```

Restituisce il componente del nome radice di myname. Il componente può essere vuoto.

## <a name="pathrootpath"></a>path::root_path

```cpp
path root_path() const;
```

Restituisce il componente del percorso radice di myname, in maniera specifica root_name() / root_directory. Il componente può essere vuoto.

## <a name="pathstem"></a>path::stem

```cpp
path stem() const;
```

Restituisce il componente stem di myname, in maniera specifica filename().native() con eventuale extension().native() finale rimosso. Il componente può essere vuoto.

## <a name="pathstring"></a>path::string

```cpp
template \<class Elem, class Traits = char_traits\<Elem>, class Alloc = allocator\<Elem>>
basic_string\<Elem, Traits, Alloc> string(const Alloc& al = Alloc()) const;
string string() const;
```

La prima funzione membro (modello) converte la sequenza archiviata in mypath allo stesso modo di:

1. string() per string\<char, Traits, Alloc>()

1. wstring() per string\<wchar_t, Traits, Alloc>()

1. u16string() per string\<char16_t, Traits, Alloc>()

1. u32string() per string\<char32_t, Traits, Alloc>()

La seconda funzione membro converte la sequenza archiviata in mypath nella codifica preferita dal sistema hot per una sequenza char e la restituisce archiviata in un oggetto di tipo string.

## <a name="pathstringtype"></a>path::string_type

```cpp
typedef basic_string<value_type> string_type;
```

Il tipo è un sinonimo di basic_string<value_type>.

## <a name="pathswap"></a>path::swap

```cpp
void swap(path& right) noexcept;
```

Esegue swap(mypath, right.mypath).

## <a name="pathu16string"></a>path::u16string

```cpp
u16string u16string() const;
```

La funzione membro converte la sequenza archiviata in mypath nella codifica UTF-16 e la restituisce archiviata in un oggetto di tipo u16string.

## <a name="pathu32string"></a>path::u32string

```cpp
u32string u32string() const;
```

La funzione membro converte la sequenza archiviata in mypath nella codifica UTF-32 e la restituisce archiviata in un oggetto di tipo u32string.

## <a name="pathu8string"></a>path::u8string

```cpp
string u8string() const;
```

La funzione membro converte la sequenza archiviata in mypath nella codifica UTF-8 e la restituisce archiviata in un oggetto di tipo u8string.

## <a name="pathvaluetype"></a>path::value_type

```cpp
#if _WIN32_C_LIB
typedef wchar_t value_type;
#else // assume Posix
typedef char value_type;
#endif // filesystem model now defined
```

Il tipo descrive gli elementi path preferiti dal sistema operativo host.

## <a name="pathwstring"></a>path::wstring

```cpp
wstring wstring() const;
```

Converte la sequenza archiviata in mypath nella codifica preferita dal sistema hot per una sequenza wchar_t e la restituisce archiviata in un oggetto di tipo wstring.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio nomi:** std::experimental::filesystem

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
