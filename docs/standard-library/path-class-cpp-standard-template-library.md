---
title: "Classe path (Libreria dei modelli standard C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::tr2::sys::path"
dev_langs: 
  - "C++"
ms.assetid: 8a1227ca-aeb2-4e0e-84aa-86e34e4f4fe8
caps.latest.revision: 14
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe path (Libreria dei modelli standard C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe **path** archivia un oggetto di tipo string\_type, denominato myname in questo esempio a scopo illustrativo, idoneo all'uso come percorso. string\_type è un sinonimo per basic\_string\<value\_type\>, dove value\_type è un sinonimo di char in Windows o wchar\_t in Posix.  
  
 Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system \(C\+\+\)](../standard-library/file-system-navigation.md).  
  
## Sintassi  
  
```  
class path;  
```  
  
## path::append  
  
```  
template<class Source>  
    path& append(const Source& source);  
template<class InIt>  
    path& append(InIt first, InIt last);  
```  
  
 Le funzioni membro aggiungono la sequenza specificata a mypath, convertendola e inserendo un preferred\_separator in base alle necessità.  
  
## path::assign  
  
```  
template<class Source>  
    path& assign(const Source& source);  
template<class InIt>  
    path& assign(InIt first, InIt last);  
```  
  
 Le funzioni membro sostituiscono mypath con la sequenza specificata, convertendola in base alle necessità.  
  
## path::begin  
  
```  
iterator begin() const;  
```  
  
 Restituisce un path::iterator che definisce il primo elemento path nel percorso, se presente.  
  
## path::c\_str  
  
```  
const value_type& *c_str() const noexcept;  
```  
  
 Restituisce un puntatore al primo carattere in mypath.  
  
## path::clear  
  
```  
void clear() noexcept;  
```  
  
 La funzione membro esegue mypath.clear\(\)  
  
## path::compare  
  
```  
int compare(const path& pval) const noexcept;  
int compare(const string_type& str) const;  
int compare(const value_type *ptr) const;  
```  
  
 La prima funzione restituisce mypath.compare\(pval.native\(\)\). La seconda funzione restituisce mypath.compare\(str\). La terza funzione restituisce mypath.compare\(ptr\).  
  
## path::concat  
  
```  
template<class Source>  
    path& concat(const Source& source);  
template<class InIt>  
    path& concat(InIt first, InIt last);  
```  
  
 Le funzioni membro aggiungono la sequenza specificata a mypath, convertendola \(ma senza inserire un separatore\) in base alle necessità.  
  
## path::const\_iterator  
  
```  
typedef iterator const_iterator;  
```  
  
 Il tipo è un sinonimo di iterator.  
  
## path::empty  
  
```  
bool empty() const noexcept;  
```  
  
 Restituisce mypath.empty\(\).  
  
## path::end  
  
```  
iterator end() const;  
```  
  
 Restituisce un iteratore di fine sequenza di tipo iterator.  
  
## path::extension  
  
```  
path extension() const;  
```  
  
 Restituisce i suffisso di filename\(\) X quale:  
  
 Se X \=\= path\("."\) &#124;&#124; X \=\= path\(".."\) oppure se X non contiene alcun punto, il suffisso è vuoto.  
  
 In caso contrario, il suffisso comincia con \(e include\) il punto all'estrema destra.  
  
## path::filename  
  
```  
path filename() const;  
```  
  
 Restituisce il componente della directory radice di myname, in maniera specifica `empty() ? path() : *--end()`. Il componente può essere vuoto.  
  
## path::generic\_string  
  
```  
template<class Elem,  
    class Traits = char_traits<Elem>,  
    class Alloc = allocator<Elem>>  
    basic_string<Elem, Traits, Alloc>  
        generic_string(const Alloc& al = Alloc()) const;  
STD string generic_string() const;  
```  
  
 Restituisce `this->string<Elem, Traits, Alloc>(_Al)` con \(in Windows\) qualsiasi barra rovesciata convertita in una barra.  
  
## path::generic\_u16string  
  
```  
STD u16string generic_u16string() const;  
```  
  
 Restituisce u16string\(\) con \(in Windows\) qualsiasi barra rovesciata convertita in una barra.  
  
## path::generic\_u32string  
  
```  
STD u32string generic_u32string() const;  
```  
  
 Restituisce u32string\(\) con \(in Windows\) qualsiasi barra rovesciata convertita in una barra.  
  
## path::generic\_u8string  
  
```  
STD string generic_u8string() const;  
```  
  
 Restituisce u8string\(\) con \(in Windows\) qualsiasi barra rovesciata convertita in una barra.  
  
## path::generic\_wstring  
  
```  
STD wstring generic_wstring() const;  
```  
  
 Restituisce wstring\(\) con \(in Windows\) qualsiasi barra rovesciata convertita in una barra.  
  
## path::has\_extension  
  
```  
bool has_extension() const;  
```  
  
 Restituisce \!extension\(\).empty\(\).  
  
## path::has\_filename  
  
```  
bool has_filename() const;  
```  
  
 Restituisce \!filename\(\).empty\(\).  
  
## path::has\_parent\_path  
  
```  
  
bool has_parent_path() const;  
  
```  
  
 Restituisce \!parent\_path\(\).empty\(\).  
  
## path::has\_relative\_path  
  
```  
bool has_relative_path() const;  
  
```  
  
 Restituisce \!relative\_path\(\).empty\(\).  
  
## path::has\_root\_directory  
  
```  
bool has_root_directory() const;  
  
```  
  
 Restituisce \!root\_directory\(\).empty\(\).  
  
## path::has\_root\_name  
  
```  
bool has_root_name() const;  
```  
  
 Restituisce \!root\_name\(\).empty\(\).  
  
## path::has\_root\_path  
  
```  
bool has_root_path() const;  
  
```  
  
 Restituisce \!root\_path\(\).empty\(\).  
  
## path::has\_stem  
  
```  
bool has_stem() const;  
```  
  
 Restituisce \!stem\(\).empty\(\).  
  
## path::is\_absolute  
  
```  
bool is_absolute() const;  
```  
  
 Per Windows, la funzione restituisce has\_root\_name\(\) && has\_root\_directory\(\). Per Posix, la funzione restituisce has\_root\_directory\(\).  
  
## path::is\_relative  
  
```  
bool is_relative() const;  
```  
  
 Restituisce \!is\_absolute\(\).  
  
## path::iterator  
  
```  
class iterator  
    {// bidirectional iterator for path  
    typedef bidirectional_iterator_tag iterator_category;  
    typedef path_type value_type;  
    typedef ptrdiff_t difference_type;  
    typedef const value_type *pointer;  
    typedef const value_type& reference;  
    .....  
    };  
  
```  
  
 La classe descrive un iteratore costante bidirezionale che definisce i componenti path di myname nella sequenza:  
  
1.  nome radice, se presente  
  
2.  directory radice, se presente  
  
3.  gli elementi di directory rimanenti del percorso padre, se presenti, che terminano con il nome file, se presente  
  
4.  
  
5.  
  
 Per rendere pval un oggetto di tipo path:  
  
1.  path::iterator X \= pval.begin\(\) definisce il primo elemento path nel percorso, se presente.  
  
2.  X \=\= pval.end\(\) è true quando X punta poco dopo la fine della sequenza dei componenti.  
  
3.  \*X restituisce una stringa che corrisponde al componente corrente.  
  
4.  \+\+X definisce il componente successivo nella sequenza, se presente.  
  
5.  \-\-X definisce il componente precedente nella sequenza, se presente.  
  
6.  La modifica di myname invalida tutti gli iteratori che definiscono gli elementi in myname.  
  
## path::make\_preferred  
  
```  
path& make_preferred();  
  
```  
  
 La funzione membro converte ogni separatore in un preferred\_separator in base alle necessità.  
  
## path::native  
  
```  
const string_type& native() const noexcept;  
```  
  
 Restituisce myname.  
  
## path::operator\=  
  
```  
path& operator=(const path& right);  
path& operator=(path&& right) noexcept;  
template<class Source>  
    path& operator=(const Source& source);  
  
```  
  
 Il primo operatore membro copia right.myname in myname. Il secondo operatore membro sposta right.myname in myname. Il terzo operatore membro si comporta allo stesso modo di \*this \= path\(source\).  
  
## path::operator\+\=  
  
```  
path& operator+=(const path& right);  
path& operator+=(const string_type& str);  
path& operator+=(const value_type *ptr);  
path& operator+=(value_type elem);  
template<class Source>  
    path& operator+=(const Source& source);  
template<class Elem>  
    path& operator+=(Elem elem);  
```  
  
 Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:  
  
1.  concat\(right\);  
  
2.  concat\(path\(str\)\);  
  
3.  concat\(ptr\);  
  
4.  concat\(string\_type\(1, elem\)\);  
  
5.  concat\(source\);  
  
6.  concat\(path\(basic\_string\<Elem\>\(1, elem\)\)\);  
  
## path::operator\/\=  
  
```  
path& operator/=(const path& right);  
template<class Source>  
    path& operator/=(const Source& source);  
  
```  
  
 Le funzioni membro si comportano allo stesso modo delle corrispondenti espressioni riportate di seguito:  
  
1.  append\(right\);  
  
2.  append\(source\);  
  
## path::operator string\_type  
  
```  
operator string_type() const;  
```  
  
 L'operatore membro restituisce myname.  
  
## path::parent\_path  
  
```  
path parent_path() const;  
  
```  
  
 Restituisce il componente path padre di myname, in modo specifico il prefisso di myname dopo la rimozione di filename\(\).native\(\) e di eventuali separatori di directory immediatamente precedenti \(in maniera analoga, se begin\(\) \!\= end\(\), è la combinazione di tutti gli elementi nell'intervallo \[begin\(\), \-\-end\(\)\) applicando successivamente operator\/\=.\) Il componente può essere vuoto.  
  
## path::path  
  
```  
path();  
path(const path& right);  
path(path&& right) noexcept;  
template<class Source>  
    path(const Source& source);  
template<class Source>  
    path(const Source& source, const locale& loc);  
template<class InIt>  
    path(InIt first, InIt last);  
template<class InIt>  
    path(InIt first, InIt last, const locale& loc);  
  
```  
  
 I costruttori costruiscono tutti myname in vari modi:  
  
 Per path\(\) è myname\(\).  
  
 Per path\(const path& right\) è myname\(right.myname\).  
  
 Per path\(path&& right\) è myname\(right.myname\).  
  
 Per template\<class Source\> path\(const Source& source\) è myname\(source\).  
  
 Per template\<class Source\> path\(const Source& source, const locale& loc\) è myname\(source\) e ottiene eventuali facet codecvt necessari da loc.  
  
 Per template\<class InIt\> path\(InIt first, InIt last\) è myname\(first, last\).  
  
 Per template\<class InIt\> path\(InIt first, InIt last, const locale& loc\) è myname\(first, last\) e ottiene eventuali facet codecvt necessari da loc.  
  
## path::preferred\_separator  
  
```  
#if _WIN32_C_LIB  
static constexpr value_type preferred_separator == L'\\';  
#else // assume Posix  
static constexpr value_type preferred_separator == '/';  
#endif // filesystem model now defined  
  
```  
  
 L'oggetto costante fornisce il carattere preferito per la separazione dei componenti path, a seconda del sistema operativo host. Si noti che è ugualmente consentito usare L'\/' al suo posto nella maggior parte dei contesti in Windows.  
  
## path::relative\_path  
  
```  
path relative_path() const;  
  
```  
  
 Restituisce il componente path relativo di myname, in modo specifico il suffisso di myname dopo la rimozione di root\_path\(\).native\(\) e di eventuali separatori di directory immediatamente successivi. Il componente può essere vuoto.  
  
## path::remove\_filename  
  
```  
path& remove_filename();  
  
```  
  
## path::replace\_extension  
  
```  
path& replace_extension(const path& newext = path());  
  
```  
  
 La funzione membro rimuove prima il suffisso extension\(\).native\(\) da myname. Quindi, se \!newext.empty\(\) && newext\[0\] \!\= dot \(dove dot è \*path\("."\).c\_str\(\)\), dot verrà aggiunto a myname. Quindi newext viene aggiunto a myname.  
  
## path::replace\_filename  
  
```  
  
path& replace_filename(const path& pval);  
  
```  
  
 La funzione membro esegue:  
  
```  
remove_filename();  
*this /= pval;  
return (*this);  
```  
  
## path::root\_directory  
  
```  
path root_directory() const;  
  
```  
  
 Restituisce il componente della directory radice di myname. Il componente può essere vuoto.  
  
## path::root\_name  
  
```  
path root_name() const;  
  
```  
  
 Restituisce il componente del nome radice di myname. Il componente può essere vuoto.  
  
## path::root\_path  
  
```  
  
path root_path() const;  
  
```  
  
 Restituisce il componente del percorso radice di myname, in maniera specifica root\_name\(\) \/ root\_directory. Il componente può essere vuoto.  
  
## path::stem  
  
```  
  
path stem() const;  
  
```  
  
 Restituisce il componente stem di myname, in maniera specifica filename\(\).native\(\) con eventuale extension\(\).native\(\) finale rimosso. Il componente può essere vuoto.  
  
## path::string  
  
```  
template<class Elem,  
    class Traits = char_traits<Elem>,  
    class Alloc = allocator<Elem>>  
    basic_string<Elem, Traits, Alloc>  
        string(const Alloc& al = Alloc()) const;  
STD string string() const;  
  
```  
  
 La prima funzione membro \(modello\) converte la sequenza archiviata in mypath allo stesso modo di:  
  
1.  string\(\) for string\<char, Traits, Alloc\>\(\)  
  
2.  wstring\(\) for string\<wchar\_t, Traits, Alloc\>\(\)  
  
3.  u16string\(\) for string\<char16\_t, Traits, Alloc\>\(\)  
  
4.  u32string\(\) for string\<char32\_t, Traits, Alloc\>\(\)  
  
 La seconda funzione membro converte la sequenza archiviata in mypath nella codifica preferita dal sistema hot per una sequenza char e la restituisce archiviata in un oggetto di tipo string.  
  
## path::string\_type  
  
```  
typedef basic_string<value_type> string_type;  
  
```  
  
 Il tipo è un sinonimo di basic\_string\<value\_type\>.  
  
## path::swap  
  
```  
void swap(path & right) noexcept;  
  
```  
  
 Esegue swap\(mypath, right.mypath\).  
  
## path::u16string  
  
```  
STD u16string u16string() const;  
  
```  
  
 La funzione membro converte la sequenza archiviata in mypath nella codifica UTF\-16 e la restituisce archiviata in un oggetto di tipo u16string.  
  
## path::u32string  
  
```  
STD u32string u32string() const;  
  
```  
  
 La funzione membro converte la sequenza archiviata in mypath nella codifica UTF\-32 e la restituisce archiviata in un oggetto di tipo u32string.  
  
## path::u8string  
  
```  
STD string u8string() const;  
  
```  
  
 La funzione membro converte la sequenza archiviata in mypath nella codifica UTF\-8 e la restituisce archiviata in un oggetto di tipo u8string.  
  
## path::value\_type  
  
```  
  
#if _WIN32_C_LIB  
typedef wchar_t value_type;  
#else // assume Posix  
typedef char value_type;  
#endif // filesystem model now defined  
  
```  
  
 Il tipo descrive gli elementi path preferiti dal sistema operativo host.  
  
## path::wstring  
  
```  
STD wstring wstring() const;  
```  
  
 Converte la sequenza archiviata in mypath nella codifica preferita dal sistema hot per una sequenza wchar\_t e la restituisce archiviata in un oggetto di tipo wstring.  
  
## Requisiti  
 **Intestazione:** filesystem  
  
 **Spazio dei nomi:** std::tr2::sys  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)