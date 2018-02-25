---
title: Classe basic_regex | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- regex/std::basic_regex
dev_langs:
- C++
helpviewer_keywords:
- basic_regex class
ms.assetid: 8a18c6b4-f22a-4cfd-bc16-b4267867ebc3
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 51d607151b31c196b8bcd756538e2afdeba7ffa2
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="basicregex-class"></a>Classe basic_regex
Esegue il wrapping di un'espressione regolare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class basic_regex {  
   public:  
   basic_regex();
   explicit basic_regex(const Elem *ptr,  
   flag_type flags = ECMAScript);
   basic_regex(const Elem *ptr, size_type len,  
   flag_type flags = ECMAScript);
   basic_regex(const basic_regex& right);
   template <class STtraits, class STalloc>  
   explicit basic_regex(const basic_string<Elem, STtraits, STalloc>& str,  
   flag_type flags = ECMAScript);
   template <class InIt>  
   explicit basic_regex(InIt first, InIt last,  
   flag_type flags = ECMAScript);
   basic_regex& operator=(const basic_regex& right);
   basic_regex& operator=(const Elem *ptr);
   template <class STtraits, class STalloc>  
   basic_regex& operator=(const basic_string<Elem, STtraits, STalloc>& str);
   basic_regex& assign(const basic_regex& right);
   basic_regex& assign(const Elem *ptr,  
   flag_type flags = ECMAScript);
   basic_regex& assign(const Elem *ptr, size_type len,  
   flag_type flags = ECMAScript);
   template <class STtraits, class STalloc>  
   basic_regex& assign(const basic_string<Elem, STtraits, STalloc>& str,  
   flag_type flags = ECMAScript);
   template <class InIt>  
   basic_regex& assign(InIt first, InIt last,  
   flag_type flags = ECMAScript);
   locale_type imbue(locale_type loc);
   locale_type getloc() const;
   void swap(basic_regex& other) throw();
   unsigned mark_count() const;
   flag_type flags() const;
   typedef Elem value_type;  
   typedef regex_constants::syntax_option_type flag_type;  
   typedef typename RXtraits::locale_type locale_type;  
   static const flag_type icase = regex_constants::icase;  
   static const flag_type nosubs = regex_constants::nosubs;  
   static const flag_type optimize = regex_constants::optimize;  
   static const flag_type collate = regex_constants::collate;  
   static const flag_type ECMAScript = regex_constants::ECMAScript;  
   static const flag_type basic = regex_constants::basic;  
   static const flag_type extended = regex_constants::extended;  
   static const flag_type awk = regex_constants::awk;  
   static const flag_type grep = regex_constants::grep;  
   static const flag_type egrep = regex_constants::egrep;  
   private:  
   RXtraits traits;    // exposition only  
   };  
   ```   
  
#### <a name="parameters"></a>Parametri  
 `Elem`  
 Tipo di elementi di cui trovare una corrispondenza.  
  
 `RXtraits`  
 Classe traits per gli elementi.  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un oggetto contenente un'espressione regolare. Gli oggetti di questa classe modello possono essere passati alle funzioni del modello [regex_match](../standard-library/regex-functions.md#regex_match), [regex_search](../standard-library/regex-functions.md#regex_search), e [regex_replace](../standard-library/regex-functions.md#regex_replace), insieme agli argomenti di stringa di testo appropriati, Per cercare il testo che corrisponde all'espressione regolare. Esistono due specializzazioni di questa classe di modello con le definizioni di tipo [regex](../standard-library/regex-typedefs.md#regex) per gli elementi di tipo `char` e [wregex](../standard-library/regex-typedefs.md#wregex) per gli elementi di tipo `wchar_t`.  
  
 Nell'argomento di modello `RXtraits` vengono descritte le diverse proprietà importanti della sintassi delle espressioni regolari supportate dalla classe modello. Una classe che specifica questi tratti dell'espressione regolare deve avere la stessa interfaccia esterna di un oggetto della classe di modello [regex_traits](../standard-library/regex-traits-class.md).  
  
 Alcune funzioni accettano una sequenza di operandi che definisce un'espressione regolare. È possibile specificare tale sequenza di operandi in diversi modi:  
  
 `ptr`: una sequenza con terminazione Null, come ad esempio una stringa C, per `Elem` di tipo `char`, che inizia con `ptr` (che non deve essere un puntatore Null), in cui l'elemento di terminazione è costituito dal valore `value_type()` e non fa parte della sequenza di operandi.  
  
 `ptr`, `count`: una sequenza di elementi `count` che inizia con `ptr` (che non deve essere un puntatore Null)  
  
 `str`: la sequenza specificata dall'oggetto `basic_string` `str`  
  
 `first`, `last`: una sequenza di elementi delimitata dagli iteratori `first` e `last` nell'intervallo `[first, last)`  
  
 `right`: l'oggetto `basic_regex` `right`  
  
 Queste funzioni membro accettano anche un argomento `flags` che specifica le diverse opzioni per l'interpretazione dell'espressione regolare oltre a quelle descritte dal tipo `RXtraits`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<regex>  
  
 **Spazio dei nomi:** std  
  
##  <a name="assign"></a>  basic_regex::assign  
 Assegna un valore all'oggetto di espressione regolare.  
  
```  
basic_regex& assign(
    const basic_regex& right);

basic_regex& assign(
    const Elem* ptr,  
    flag_type flags = ECMAScript);

basic_regex& assign(
    const Elem* ptr,   
    size_type len,  
    flag_type flags = ECMAScript);

basic_regex& assign(
    initializer_list<_Elem> IList,  
    flag_type flags = regex_constants::ECMAScript);

template <class STtraits, class STalloc>  
basic_regex& assign(
    const basic_string<Elem, STtraits, STalloc>& str,  
    flag_type flags = ECMAScript);

template <class InIt>  
basic_regex& assign(
    InIt first, InIt last,  
    flag_type flags = ECMAScript);
```  
  
### <a name="parameters"></a>Parametri  
 `STtraits`  
 Classe traits per un'origine di stringa.  
  
 `STalloc`  
 Classe allocator per un'origine di stringa.  
  
 `InIt`  
 Tipo di iteratore di input per un'origine di intervallo.  
  
 `right`  
 Origine regex da copiare.  
  
 `ptr`  
 Puntatore all'inizio della sequenza da copiare.  
  
 `flags`  
 Flag di opzione sintassi da aggiungere durante la copia.  
  
 `len/TD>`  
 Lunghezza della sequenza da copiare.  
  
 `str`  
 Stringa da copiare.  
  
 `first`  
 Inizio della sequenza da copiare.  
  
 `last`  
 Fine della sequenza da copiare.  
  
 `IList`  
 Initializer_list da copiare.  
  
### <a name="remarks"></a>Note  
 Ciascuna funzione membro sostituisce l'espressione regolare contenuta in `*this` con l'espressione regolare descritta dalla sequenza di operandi, quindi restituisce `*this`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_assign.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
using namespace std;  
  
int main()  
{  
    regex::value_type elem = 'x';  
    regex::flag_type flag = regex::grep;  
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;  
  
    // constructors   
    regex rx0;  
    cout << "match(\"abc\", \"\") == " << boolalpha  
        << regex_match("abc", rx0) << endl;  
  
    regex rx1("abcd", regex::ECMAScript);  
    cout << "match(\"abc\", \"abcd\") == " << boolalpha  
        << regex_match("abc", rx1) << endl;  
  
    regex rx2("abcd", 3);  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx2) << endl;  
  
    regex rx3(rx2);  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx3) << endl;  
  
    string str("abcd");  
    regex rx4(str);  
    cout << "match(string(\"abcd\"), \"abc\") == " << boolalpha  
        << regex_match("abc", rx4) << endl;  
  
    regex rx5(str.begin(), str.end() - 1);  
    cout << "match(string(\"abc\"), \"abc\") == " << boolalpha  
        << regex_match("abc", rx5) << endl;  
    cout << endl;  
  
    // assignments   
    rx0 = "abc";  
    rx0 = rx1;  
    rx0 = str;  
  
    rx0.assign("abcd", regex::ECMAScript);  
    rx0.assign("abcd", 3);  
    rx0.assign(rx1);  
    rx0.assign(str);  
    rx0.assign(str.begin(), str.end() - 1);  
  
    rx0.swap(rx1);  
  
    // mark_count   
    cout << "\"abc\" mark_count == "  
        << regex("abc").mark_count() << endl;  
    cout << "\"(abc)\" mark_count == "  
        << regex("(abc)").mark_count() << endl;  
  
    // locales   
    regex::locale_type loc = rx0.imbue(locale());  
    cout << "getloc == imbued == " << boolalpha  
        << (loc == rx0.getloc()) << endl;  
  
    // initializer_list  
    regex rx6({ 'a', 'b', 'c' }, regex::ECMAScript);  
    cout << "match(\"abc\") == " << boolalpha  
        << regex_match("abc", rx6);  
    cout << endl;   
}  
  
```  
  
```Output  
match("abc", "") == falsematch("abc", "abcd") == falsematch("abc", "abc") == truematch("abc", "abc") == truematch(string("abcd"), "abc") == falsematch(string("abc"), "abc") == true"abc" mark_count == 0"(abc)" mark_count == 1getloc == imbued == truematch("abc") == true  
```  
  
##  <a name="basic_regex"></a>  basic_regex::basic_regex  
 Costruisce l'oggetto dell'espressione regolare.  
  
```  
basic_regex();

explicit basic_regex(
    const Elem* ptr,  
    flag_type flags);

explicit basic_regex(
    const Elem* ptr,   
    size_type len,  
    flag_type flags);

basic_regex(
    const basic_regex& right);

basic_regex(
    initializer_list<Type> IList,  
    flag_type flags);

template <class STtraits, class STalloc>  
explicit basic_regex(
    const basic_string<Elem, STtraits, STalloc>& str,  
    flag_type flags);

template <class InIt>  
explicit basic_regex(
    InIt first,   
    InIt last,  
    flag_type flags);
```  
  
### <a name="parameters"></a>Parametri  
 `STtraits`  
 Classe traits per un'origine di stringa.  
  
 `STalloc`  
 Classe allocator per un'origine di stringa.  
  
 `InIt`  
 Tipo di iteratore di input per un'origine di intervallo.  
  
 `right`  
 Origine regex da copiare.  
  
 `ptr`  
 Puntatore all'inizio della sequenza da copiare.  
  
 `flags`  
 Flag di opzione sintassi da aggiungere durante la copia.  
  
 `len/TD>`  
 Lunghezza della sequenza da copiare.  
  
 `str`  
 Stringa da copiare.  
  
 `first`  
 Inizio della sequenza da copiare.  
  
 `last`  
 Fine della sequenza da copiare.  
  
 `IList`  
 Initializer_list da copiare.  
  
### <a name="remarks"></a>Note  
 Tutti i costruttori archiviano un oggetto costruito predefinito di tipo `RXtraits`.  
  
 Il primo costruttore crea un oggetto `basic_regex` vuoto. Gli altri costruttori creano un oggetto `basic_regex` che contiene l'espressione regolare descritta dalla sequenza di operandi.  
  
 Un oggetto vuoto `basic_regex` oggetto non corrisponde a qualsiasi sequenza di caratteri quando viene passato a [regex_match](../standard-library/regex-functions.md#regex_match), [regex_search](../standard-library/regex-functions.md#regex_search), o [regex_replace](../standard-library/regex-functions.md#regex_replace).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_construct.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
using namespace std;  
  
int main()  
{  
    regex::value_type elem = 'x';  
    regex::flag_type flag = regex::grep;  
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;  
  
    // constructors   
    regex rx0;  
    cout << "match(\"abc\", \"\") == " << boolalpha  
        << regex_match("abc", rx0) << endl;  
  
    regex rx1("abcd", regex::ECMAScript);  
    cout << "match(\"abc\", \"abcd\") == " << boolalpha  
        << regex_match("abc", rx1) << endl;  
  
    regex rx2("abcd", 3);  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx2) << endl;  
  
    regex rx3(rx2);  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx3) << endl;  
  
    string str("abcd");  
    regex rx4(str);  
    cout << "match(string(\"abcd\"), \"abc\") == " << boolalpha  
        << regex_match("abc", rx4) << endl;  
  
    regex rx5(str.begin(), str.end() - 1);  
    cout << "match(string(\"abc\"), \"abc\") == " << boolalpha  
        << regex_match("abc", rx5) << endl;  
    cout << endl;  
  
    // assignments   
    rx0 = "abc";  
    rx0 = rx1;  
    rx0 = str;  
  
    rx0.assign("abcd", regex::ECMAScript);  
    rx0.assign("abcd", 3);  
    rx0.assign(rx1);  
    rx0.assign(str);  
    rx0.assign(str.begin(), str.end() - 1);  
  
    rx0.swap(rx1);  
  
    // mark_count   
    cout << "\"abc\" mark_count == "  
        << regex("abc").mark_count() << endl;  
    cout << "\"(abc)\" mark_count == "  
        << regex("(abc)").mark_count() << endl;  
  
    // locales   
    regex::locale_type loc = rx0.imbue(locale());  
    cout << "getloc == imbued == " << boolalpha  
        << (loc == rx0.getloc()) << endl;  
  
    // initializer_list  
    regex rx6{ { 'a', 'b', 'c' } };  
    cout << "match(\"abc\", \"abc\") == " << boolalpha  
        << regex_match("abc", rx6);  
    cout << endl;  
}  
  
```  
  
```Output  
match("abc", "") == falsematch("abc", "abcd") == falsematch("abc", "abc") == truematch("abc", "abc") == truematch(string("abcd"), "abc") == falsematch(string("abc"), "abc") == true"abc" mark_count == 0"(abc)" mark_count == 1getloc == imbued == truematch("abc", "abc") == true  
```  
  
##  <a name="flag_type"></a>  basic_regex::flag_type  
 Tipo di flag delle opzioni della sintassi.  
  
```  
typedef regex_constants::syntax_option_type flag_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è sinonimo di [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#syntax_option_type).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_flag_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="flags"></a>  basic_regex::flags  
 Restituisce i flag delle opzioni della sintassi.  
  
```  
flag_type flags() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il valore dell'argomento `flag_type` passato all'ultima chiamata a una delle funzioni membro [basic_regex::assign](#assign) oppure, se non è stata effettuata alcuna chiamata, il valore passato al costruttore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_flags.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="getloc"></a>  basic_regex::getloc  
 Restituisce l'oggetto delle impostazioni locali archiviate.  
  
```  
locale_type getloc() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `traits.`[regex_traits::getloc](../standard-library/regex-traits-class.md#getloc)`()`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_getloc.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="imbue"></a>  basic_regex::imbue  
 Modifica l'oggetto delle impostazioni locali archiviate.  
  
```  
locale_type imbue(locale_type loc);
```  
  
### <a name="parameters"></a>Parametri  
 `loc`  
 Oggetto impostazioni locali da archiviare.  
  
### <a name="remarks"></a>Note  
 La funzione membro svuota `*this` e restituisce `traits.`[regex_traits::imbue](../standard-library/regex-traits-class.md#imbue)`(loc)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_imbue.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="locale_type"></a>  basic_regex::locale_type  
 Tipo dell'oggetto impostazioni locali archiviato.  
  
```  
typedef typename RXtraits::locale_type locale_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è sinonimo di [regex_traits::locale_type](../standard-library/regex-traits-class.md#locale_type).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_locale_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="mark_count"></a>  basic_regex::mark_count  
 Restituisce il numero di sottoespressioni corrispondenti.  
  
```  
unsigned mark_count() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce il numero di gruppi Capture nell'espressione regolare.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_mark_count.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="op_eq"></a>  basic_regex::operator=  
 Assegna un valore all'oggetto di espressione regolare.  
  
```  
basic_regex& operator=(const basic_regex& right);

basic_regex& operator=(const Elem *str);

template <class STtraits, class STalloc>  
basic_regex& operator=(const basic_string<Elem, STtraits, STalloc>& str);
```  
  
### <a name="parameters"></a>Parametri  
 `STtraits`  
 Classe traits per un'origine di stringa.  
  
 `STalloc`  
 Classe allocator per un'origine di stringa.  
  
 `right`  
 Origine regex da copiare.  
  
 `str`  
 Stringa da copiare.  
  
### <a name="remarks"></a>Note  
 Ciascun operatore sostituisce l'espressione regolare contenuta in `*this` con l'espressione regolare descritta dalla sequenza di operandi, quindi restituisce `*this`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_operator_as.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="swap"></a>  basic_regex::swap  
 Scambia due oggetti di espressione regolare.  
  
```  
void swap(basic_regex& right) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 L'oggetto di espressione regolare con cui eseguire lo scambio.  
  
### <a name="remarks"></a>Note  
 La funzione membro scambia le espressioni regolari tra `*this` e `right`. Esegue tale operazione in un tempo costante e non genera eccezioni.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_swap.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
##  <a name="value_type"></a>  basic_regex::value_type  
 Tipo dell'elemento.  
  
```  
typedef Elem value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Elem`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__regex__basic_regex_value_type.cpp   
// compile with: /EHsc   
#include <regex>   
#include <iostream>   
  
int main()   
    {   
    std::regex::value_type elem = 'x';   
    std::regex::flag_type flag = std::regex::grep;   
  
    elem = elem;  // to quiet "unused" warnings   
    flag = flag;   
  
// constructors   
    std::regex rx0;   
    std::cout << "match(\"abc\", \"\") == " << std::boolalpha   
        << regex_match("abc", rx0) << std::endl;   
  
    std::regex rx1("abcd", std::regex::ECMAScript);   
    std::cout << "match(\"abc\", \"abcd\") == " << std::boolalpha   
        << regex_match("abc", rx1) << std::endl;   
  
    std::regex rx2("abcd", 3);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx2) << std::endl;   
  
    std::regex rx3(rx2);   
    std::cout << "match(\"abc\", \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx3) << std::endl;   
  
    std::string str("abcd");   
    std::regex rx4(str);   
    std::cout << "match(string(\"abcd\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx4) << std::endl;   
  
    std::regex rx5(str.begin(), str.end() - 1);   
    std::cout << "match(string(\"abc\"), \"abc\") == " << std::boolalpha   
        << regex_match("abc", rx5) << std::endl;   
    std::cout << std::endl;   
  
// assignments   
    rx0 = "abc";   
    rx0 = rx1;   
    rx0 = str;   
  
    rx0.assign("abcd", std::regex::ECMAScript);   
    rx0.assign("abcd", 3);   
    rx0.assign(rx1);   
    rx0.assign(str);   
    rx0.assign(str.begin(), str.end() - 1);   
  
    rx0.swap(rx1);   
  
// mark_count   
    std::cout << "\"abc\" mark_count == "   
        << std::regex("abc").mark_count() << std::endl;   
    std::cout << "\"(abc)\" mark_count == "   
        << std::regex("(abc)").mark_count() << std::endl;   
  
// locales   
    std::regex::locale_type loc = rx0.imbue(std::locale());   
    std::cout << "getloc == imbued == " << std::boolalpha   
        << (loc == rx0.getloc()) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
match("abc", "") == false  
match("abc", "abcd") == false  
match("abc", "abc") == true  
match("abc", "abc") == true  
match(string("abcd"), "abc") == false  
match(string("abc"), "abc") == true  
  
"abc" mark_count == 0  
"(abc)" mark_count == 1  
getloc == imbued == true  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<regex>](../standard-library/regex.md)   
 [regex_match](../standard-library/regex-functions.md#regex_match)   
 [regex_search](../standard-library/regex-functions.md#regex_search)   
 [regex_replace](../standard-library/regex-functions.md#regex_replace)   
 [regex](../standard-library/regex-typedefs.md#regex)   
 [wregex](../standard-library/regex-typedefs.md#wregex)   
 [Classe regex_traits](../standard-library/regex-traits-class.md)

