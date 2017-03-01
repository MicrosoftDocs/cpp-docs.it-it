---
title: Classe basic_istream | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- basic_istream
- istream/std::basic_istream
- std::basic_istream
- std.basic_istream
dev_langs:
- C++
helpviewer_keywords:
- basic_istream class
ms.assetid: c7c27111-de6d-42b4-95a3-a7e65259bf17
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 85c900f2263ae1c1089478badc85388e3b5e8548
ms.openlocfilehash: 32308d4cd6a3cc1409f04958dde8dad9204718bc
ms.lasthandoff: 02/24/2017

---
# <a name="basicistream-class"></a>Classe basic_istream
Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso con elementi di tipo `Elem`, chiamato anche [char_type](../standard-library/basic-ios-class.md#basic_ios__char_type), i cui tratti di carattere sono determinati dalla classe *Tr*, chiamata anche [traits_type](../standard-library/basic-ios-class.md#basic_ios__traits_type).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem>>  
class basic_istream : virtual public basic_ios<Elem, Tr>  
```  
  
## <a name="remarks"></a>Note  
 La maggior parte delle funzioni membro che sono in rapporto di overload con [operator>>](#basic_istream__operator_gt__gt_) è costituita da funzioni di input formattato. Le funzioni seguono questo schema:  
  
```cpp  
iostate state = goodbit;
const sentry ok(*this);

if (ok)
{
    try
    {
        /*extract elements and convert
            accumulate flags in state.
            store a successful conversion*/
    }
    catch (...)
    {
        try
        {
            setstate(badbit);

        }
        catch (...)
        {
        }
        if ((exceptions()& badbit) != 0)
            throw;
    }
}
setstate(state);

return (*this);
```  
  
 Molte altre funzioni membro sono funzioni di input formattate. Le funzioni seguono questo schema:  
  
```cpp  
iostate state = goodbit;
count = 0;    // the value returned by gcount  
const sentry ok(*this, true);

if (ok)
{
    try
    {
        /* extract elements and deliver
            count extracted elements in count
            accumulate flags in state */
    }
    catch (...)
    {
        try
        {
            setstate(badbit);

        }
        catch (...)
        {
        }
        if ((exceptions()& badbit) != 0)
            throw;
    }
}
setstate(state);
```  
  
 Entrambi i gruppi di funzioni chiamano [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **eofbit**) se riscontrano la fine del file durante l'estrazione di elementi.  
  
 Un oggetto della classe `basic_istream`< `Elem`, *Tr*> archivia:  
  
-   Un oggetto di base virtuale pubblico della classe [basic_ios](../standard-library/basic-ios-class.md)< `Elem`, *Tr*> `.`  
  
-   Un conteggio di estrazione per l'ultima operazione di input non formattato (chiamato **count** nel codice precedente).  
  
## <a name="example"></a>Esempio  
 Per altre informazioni sui flussi di input, vedere l'esempio per la [Classe basic_ifstream](../standard-library/basic-ifstream-class.md).  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[basic_istream](#basic_istream__basic_istream)|Costruisce un oggetto di tipo `basic_istream`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[gcount](#basic_istream__gcount)|Restituisce il numero di caratteri letti durante l'ultimo input non formattato.|  
|[get](#basic_istream__get)|Legge uno o più caratteri dal flusso di input.|  
|[getline](#basic_istream__getline)|Legge una riga dal flusso di input.|  
|[ignore](#basic_istream__ignore)|Fa sì che un certo numero di elementi venga ignorato dalla posizione di lettura corrente.|  
|[peek](#basic_istream__peek)|Restituisce il carattere successivo da leggere.|  
|[putback](#basic_istream__putback)|Inserisce un carattere specificato nel flusso.|  
|[read](#basic_istream__read)|Legge un numero specificato di caratteri dal flusso e li archivia in una matrice.|  
|[readsome](#basic_istream__readsome)|Legge solo dal buffer.|  
|[seekg](#basic_istream__seekg)|Sposta la posizione di lettura in un flusso.|  
|[sentry](#basic_istream__sentry)|La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di input formattate e quelle non formattate.|  
|[swap](#basic_istream__swap)|Scambia questo oggetto `basic_istream` con il parametro dell'oggetto `basic_istream` specificato.|  
|[sync](#basic_istream__sync)|Sincronizza il dispositivo di input associato al flusso con il buffer del flusso.|  
|[tellg](#basic_istream__tellg)|Segnala la posizione corrente all'interno del flusso.|  
|[unget](#basic_istream__unget)|Reinserisce il carattere letto più di recente nel flusso.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator>>](#basic_istream__operator_gt__gt_)|Chiama una funzione nel flusso di input o legge dati formattati dal flusso di input.|  
|[operator=](#basic_istream__operator_eq)|Assegna l'oggetto `basic_istream` a destra dell'operatore a questo oggetto. Si tratta di un'assegnazione di spostamento che implica un riferimento `rvalue` che non lascia alcuna una copia.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<istream>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namebasicistreambasicistreama--basicistreambasicistream"></a><a name="basic_istream__basic_istream"></a>  basic_istream::basic_istream  
 Costruisce un oggetto di tipo `basic_istream`.  
  
```  
explicit basic_istream(
    basic_streambuf<Elem, Tr>* strbuf,  
    bool _Isstd = false);

basic_istream(basic_istream&& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` strbuf`  
 Un oggetto di tipo [basic_streambuf](../standard-library/basic-streambuf-class.md).  
  
 `_Isstd`  
 `true` se si tratta di un flusso standard; in caso contrario, `false`.  
  
 ` right`  
 Oggetto `basic_istream` da copiare.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore inizializza la classe base chiamando [init](../standard-library/basic-ios-class.md#basic_ios__init)(_S `trbuf`). Archivia anche zero nel conteggio di estrazione. Per altre informazioni sul conteggio di estrazione, vedere la sezione Note dell'argomento introduttivo [basic_istream Class](../standard-library/basic-istream-class.md).  
  
 Il secondo costruttore inizializza la classe base chiamando `move``( right)`. Archivia anche _R `ight.gcount()` nel conteggio di estrazione e archivia zero nel conteggio di estrazione per _R `ight`.  
  
### <a name="example"></a>Esempio  
  Per altre informazioni sui flussi di input, vedere l'esempio [basic_ifstream::basic_ifstream](../standard-library/basic-ifstream-class.md#basic_ifstream__basic_ifstream).  
  
##  <a name="a-namebasicistreamgcounta--basicistreamgcount"></a><a name="basic_istream__gcount"></a>  basic_istream::gcount  
 Restituisce il numero di caratteri letti durante l'ultimo input non formattato.  
  
```  
streamsize gcount() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il conteggio di estrazione.  
  
### <a name="remarks"></a>Note  
 Usare [basic_istream::get](#basic_istream__get) per leggere i caratteri non formattati.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_gcount.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   cout << "Type the letter 'a': ";  
  
   ws( cin );  
   char c[10];  
  
   cin.get( &c[0],9 );  
   cout << c << endl;  
  
   cout << cin.gcount( ) << endl;  
}  
```  
  
```Output  
  
a  
  
```  
  
```Output  
  
      aType the letter 'a':  
a  
1  
```  
  
##  <a name="a-namebasicistreamgeta--basicistreamget"></a><a name="basic_istream__get"></a>  basic_istream::get  
 Legge uno o più caratteri dal flusso di input.  
  
```  
int_type get();

basic_istream<Elem, Tr>& get(Elem& Ch);
basic_istream<Elem, Tr>& get(Elem* str, streamsize count);
basic_istream<Elem, Tr>& get(Elem* str, streamsize count, Elem Delim);

basic_istream<Elem, Tr>& get(basic_streambuf<Elem, Tr>& strbuf);
basic_istream<Elem, Tr>& get(basic_streambuf<Elem, Tr>& strbuf, Elem Delim);
```  
  
### <a name="parameters"></a>Parametri  
 ` count`  
 Numero di caratteri da leggere da `strbuf`.  
  
 `Delim`  
 Il carattere che deve terminare la lettura se rilevato prima di ` count`.  
  
 ` str`  
 Una stringa in cui scrivere.  
  
 `Ch`  
 Un carattere da ottenere.  
  
 ` strbuf`  
 Un buffer in cui scrivere.  
  
### <a name="return-value"></a>Valore restituito  
 Il form senza parametri di get restituisce l'elemento letto come integer o fine del file. I form rimanenti restituiscono il flusso (* `this`).  
  
### <a name="remarks"></a>Note  
 Se possibile, la prima di queste funzioni di input non formattato estrae un elemento, restituendo `rdbuf`-> `sbumpc`. In caso contrario, restituisce **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof). Se non estrae alcun elemento, la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**).  
  
 La seconda funzione estrae `meta` dell'elemento [int_type](../standard-library/basic-ios-class.md#basic_ios__int_type) allo stesso modo. Se `meta` risulta uguale a **traits_type::eof**, la funzione chiama `setstate`( **failbit**). In caso contrario, archivia **traits_type::**[to_char_type](../standard-library/char-traits-struct.md#char_traits__to_char_type)( `meta`) in `Ch`. La funzione restituisce **\*this**.  
  
 La terza funzione restituisce **get**(_ *Str*, ` count`, `widen`('\ **n**')).  
  
 La quarta funzione estrae fino a ` count` - 1 elementi e li archivia nella matrice che inizia da _ *Str*. `char_type` viene sempre archiviato dopo gli elementi estratti archiviati. In ordine di test, l'estrazione si interrompe:  
  
-   Alla fine del file.  
  
-   Dopo l'estrazione da parte della funzione di un elemento che risulta uguale a `Delim`, nel qual caso l'elemento viene reinserito nella sequenza controllata.  
  
-   Dopo l'estrazione da parte della funzione di ` count` - 1 elementi.  
  
 Se non estrae alcun elemento, la funzione chiama `setstate`( **failbit**). In tutti i casi, restituisce **\*this**.  
  
 La quinta funzione restituisce **get**( **strbuf**, `widen`('\ **n**')).  
  
 La sesta funzione estrae gli elementi e li inserisce in **strbuf**. L'estrazione si interrompe alla fine del file o in corrispondenza di un elemento che risulta uguale a _ *Delim,* che non viene estratto. L'estrazione si interrompe anche, senza estrazione dell'elemento, se un inserimento ha esito negativo o genera un'eccezione che viene rilevata ma non generata nuovamente. Se non estrae alcun elemento, la funzione chiama `setstate`( **failbit**). In tutti i casi, la funzione restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_get.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10];  
  
   c[0] = cin.get( );  
   cin.get( c[1] );  
   cin.get( &c[2],3 );  
   cin.get( &c[4], 4, '7' );  
  
   cout << c << endl;  
}  
```  
  
```Output  
  
1111  
```  
  
##  <a name="a-namebasicistreamgetlinea--basicistreamgetline"></a><a name="basic_istream__getline"></a>  basic_istream::getline  
 Ottiene una riga dal flusso di input.  
  
```  
basic_istream<Elem, Tr>& getline(
    char_type* str,   
    streamsize count);

basic_istream<Elem, Tr>& getline(
    char_type* str,   
    streamsize count,   
    char_type Delim);
```  
  
### <a name="parameters"></a>Parametri  
 ` count`  
 Numero di caratteri da leggere da **strbuf**.  
  
 `Delim`  
 Il carattere che deve terminare la lettura se rilevato prima di ` count`.  
  
 ` str`  
 Una stringa in cui scrivere.  
  
### <a name="return-value"></a>Valore restituito  
 Il flusso ( **\*this**).  
  
### <a name="remarks"></a>Note  
 La prima di queste funzioni di input non formattato restituisce **getline**(_ *Str*, ` count`, `widen`(' `\`**n**')).  
  
 La seconda funzione estrae fino a ` count` - 1 elementi e li archivia nella matrice che inizia da _ *Str*. La funzione archivia sempre il carattere di terminazione della stringa dopo gli elementi estratti archiviati. In ordine di test, l'estrazione si interrompe:  
  
-   Alla fine del file.  
  
-   Dopo l'estrazione da parte della funzione di un elemento che risulta uguale a `Delim`, nel qual caso l'elemento non viene reinserito né aggiunto alla sequenza controllata.  
  
-   Dopo l'estrazione da parte della funzione di ` count` - 1 elementi.  
  
 Se non estrae alcun elemento o estrae ` count` - 1 elementi, la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In tutti i casi, restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_getline.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10];  
  
   cin.getline( &c[0], 5, '2' );  
   cout << c << endl;  
}  
```  
  
```Output  
  
121  
```  
  
##  <a name="a-namebasicistreamignorea--basicistreamignore"></a><a name="basic_istream__ignore"></a>  basic_istream::ignore  
 Fa sì che un certo numero di elementi venga ignorato dalla posizione di lettura corrente.  
  
```  
basic_istream<Elem, Tr>& ignore(
    streamsize count = 1,  
    int_type Delim = traits_type::eof());
```  
  
### <a name="parameters"></a>Parametri  
 ` count`  
 Numero di elementi da ignorare dalla posizione di lettura corrente.  
  
 `Delim`  
 Elemento che se rilevato prima del conteggio fa in modo che **ignore** restituisca e consenta la lettura di tutti gli elementi successivi a `Delim`.  
  
### <a name="return-value"></a>Valore restituito  
 Il flusso ( **\*this**).  
  
### <a name="remarks"></a>Note  
 La funzione di input non formattato estrae fino a ` count` elementi e li ignora. Tuttavia, se ` count` è uguale a **numeric_limits\<int>::max**, è considerato come arbitrariamente grande. L'estrazione si interrompe prima della fine del file o in corrispondenza di un elemento `Ch` in modo che **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#char_traits__to_int_type)( `Ch`) risulti uguale a _ *Delim* incluso nell'estrazione. La funzione restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_ignore.cpp  
// compile with: /EHsc  
#include <iostream>  
int main( )   
{  
   using namespace std;  
   char chararray[10];  
   cout << "Type 'abcdef': ";  
   cin.ignore( 5, 'c' );  
   cin >> chararray;  
   cout << chararray;  
}  
```  
  
```Output  
  
abcdef  
  
```  
  
```Output  
  
abcdefdef  
```  
  
##  <a name="a-namebasicistreamoperatorgtgta--basicistreamoperatorgtgt"></a><a name="basic_istream__operator_gt__gt_"></a>  basic_istream::operator&gt;&gt;
  
Chiama una funzione nel flusso di input o legge dati formattati dal flusso di input.  
    
```  
basic_istream& operator>>(basic_istream& (* Pfn)(basic_istream&));
basic_istream& operator>>(ios_base& (* Pfn)(ios_base&));
basic_istream& operator>>(basic_ios<Elem, Tr>& (* Pfn)(basic_ios<Elem, Tr>&));  
basic_istream& operator>>(basic_streambuf<Elem, Tr>* strbuf);
basic_istream& operator>>(bool& val);
basic_istream& operator>>(short& val);
basic_istream& operator>>(unsigned short& val);
basic_istream& operator>>(int& val);
basic_istream& operator>>(unsigned int& val);
basic_istream& operator>>(long& val);
basic_istream& operator>>(unsigned long& val);
basic_istream& operator>>(long long& val);
basic_istream& operator>>(unsigned long long& val);
basic_istream& operator>>(void *& val);
basic_istream& operator>>(float& val);
basic_istream& operator>>(double& val);
basic_istream& operator>>(long double& val);
```  
  
### <a name="parameters"></a>Parametri  
 `Pfn`  
 Un puntatore di funzione.  
  
 ` strbuf`  
 Oggetto di tipo **stream_buf**.  
  
 ` val`  
 Valore che deve essere letto dal flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Il flusso ( **\*this**).  
  
### <a name="remarks"></a>Note  
 L'intestazione `<istream>` definisce anche numerosi operatori di estrazione globali. Per altre informazioni, vedere [operator>> (\<istream>)](../standard-library/istream-operators.md#operator_gt__gt_).  
  
 La prima funzione membro garantisce che un'espressione nel formato **istr** >> `ws` chiami [ws](../standard-library/istream-functions.md#ws)( **istr**) e quindi restituisca **\*this**. La seconda e la terza funzione garantiscono che gli altri manipolatori, ad esempio [hex](../standard-library/ios-functions.md#hex), si comportino in modo analogo. Le funzioni rimanenti sono funzioni di input formattato.  
  
 La funzione:  
  
```  
basic_istream& operator>>(
    basic_streambuf<Elem, Tr>* strbuf);
```  
  
 estrae gli elementi, se _ *Strbuf* non è un puntatore null e li inserisce in ` strbuf`. L'estrazione si interrompe alla fine del file. L'estrazione si interrompe anche, senza estrazione dell'elemento, se un inserimento ha esito negativo o genera un'eccezione che viene rilevata ma non generata nuovamente. Se non estrae alcun elemento, la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In tutti i casi, la funzione restituisce **\*this**.  
  
 La funzione:  
  
```  
basic_istream& operator>>(bool& val);
```  
  
 estrae un campo e lo converte in un valore booleano chiamando [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open) < `num_get`\< **Elem**, **InIt**>( [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). [get](../standard-library/ios-base-class.md#ios_base__getloc)( **InIt**( [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf)), `Init`(0), **\*this**, `getloc`, ` val`). In questo caso, **InIt** è definito come [istreambuf_iterator](../standard-library/istreambuf-iterator-class.md)\< **Elem**, **Tr**>. La funzione restituisce **\*this**.  
  
 Ogni funzione:  
  
```  
basic_istream& operator>>(short& val);
basic_istream& operator>>(unsigned short& val);
basic_istream& operator>>(int& val);
basic_istream& operator>>(unsigned int& val);
basic_istream& operator>>(long& val);
basic_istream& operator>>(unsigned long& val); 
basic_istream& operator>>(long long& val);
basic_istream& operator>>(unsigned long long& val); 
basic_istream& operator>>(void *& val);
```  
  
 estrae un campo e lo converte in un valore numerico chiamando `use_facet`< `num_get`\< **Elem**, **InIt**>( `getloc`). [get](#basic_istream__get)( **InIt**( `rdbuf`), `Init`(0), **\*this**, `getloc`, ` val`). In questo caso, **InIt** è definito come `istreambuf_iterator`\< **Elem**, **Tr**> e ` val` e di tipo **long***,*`unsigned long`*,* o **void \***.  
  
 Se il valore convertito non può essere rappresentato come tipo di ` val`, la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In tutti i casi, la funzione restituisce **\*this**.  
  
 Ogni funzione:  
  
```  
basic_istream& operator>>(float& val);
basic_istream& operator>>(double& val);
basic_istream& operator>>(long double& val);
```  
  
 estrae un campo e lo converte in un valore numerico chiamando `use_facet`< `num_get`\< **Elem**, **InIt**>( `getloc`). **get**( **InIt**( `rdbuf`), `Init`(0), **\*this**, `getloc`, ` val`). In questo caso, **InIt** è definito come `istreambuf_iterator`\< **Elem**, **Tr**> e ` val` è di tipo **double** o `long double`.  
  
 Se il valore convertito non può essere rappresentato come tipo di ` val`, la funzione chiama `setstate`( **failbit**). In tutti i casi, restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// istream_basic_istream_op_is.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
  
ios_base& hex2( ios_base& ib )   
{  
   ib.unsetf( ios_base::dec );  
   ib.setf( ios_base::hex );  
   return ib;  
}  
  
basic_istream<char, char_traits<char> >& somefunc(basic_istream<char, char_traits<char> > &i)  
{  
   if ( i == cin )   
   {  
      cerr << "i is cin" << endl;  
   }  
   return i;  
}  
  
int main( )   
{  
   int i = 0;  
   cin >> somefunc;  
   cin >> i;  
   cout << i << endl;  
   cin >> hex2;  
   cin >> i;  
   cout << i << endl;  
}  
```  
  
##  <a name="a-namebasicistreamoperatoreqa--basicistreamoperator"></a><a name="basic_istream__operator_eq"></a>  basic_istream::operator=  
 Assegna l'oggetto `basic_istream` a destra dell'operatore a questo oggetto. Si tratta di un'assegnazione di spostamento che implica un riferimento `rvalue` che non lascia alcuna una copia.  
  
```  
basic_istream& operator=(basic_istream&& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Riferimento `rvalue` a un oggetto `basic_ifstream`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce *this.  
  
### <a name="remarks"></a>Note  
 L'operatore membro chiama swap `( right)`.  
  
##  <a name="a-namebasicistreampeeka--basicistreampeek"></a><a name="basic_istream__peek"></a>  basic_istream::peek  
 Restituisce il carattere successivo da leggere.  
  
```  
int_type peek();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il carattere successivo che verrà letto.  
  
### <a name="remarks"></a>Note  
 Se possibile, la funzione di input non formattato estrae un elemento, restituendo `rdbuf` -> [sgetc](../standard-library/basic-streambuf-class.md#basic_streambuf__sgetc). In caso contrario, restituisce **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_peek.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10], c2;  
   cout << "Type 'abcde': ";  
  
   c2 = cin.peek( );  
   cin.getline( &c[0], 9 );  
  
   cout << c2 << " " << c << endl;  
}  
```  
  
```Output  
  
abcde  
  
```  
  
```Output  
  
      abcdeType 'abcde': abcde  
a abcde  
```  
  
##  <a name="a-namebasicistreamputbacka--basicistreamputback"></a><a name="basic_istream__putback"></a>  basic_istream::putback  
 Inserisce un carattere specificato nel flusso.  
  
```  
basic_istream<Elem, Tr>& putback(
    char_type Ch);
```  
  
### <a name="parameters"></a>Parametri  
 `Ch`  
 Carattere da inserire nuovamente nel flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Il flusso ( **\*this**).  
  
### <a name="remarks"></a>Note  
 Se possibile, la [funzione di input non formattato](../standard-library/basic-istream-class.md) reinserisce `Ch`, chiamando [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf)`->`[sputbackc](../standard-library/basic-streambuf-class.md#basic_streambuf__sputbackc). Se rdbuf è un puntatore null o se la chiamata a `sputbackc` restituisce **traits_type::**[eof](../standard-library/char-traits-struct.md#char_traits__eof), la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **badbit**). In tutti i casi, restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_putback.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10], c2, c3;  
  
   c2 = cin.get( );  
   c3 = cin.get( );  
   cin.putback( c2 );  
   cin.getline( &c[0], 9 );  
   cout << c << endl;  
}  
```  
  
```Output  
  
qwq  
```  
  
##  <a name="a-namebasicistreamreada--basicistreamread"></a><a name="basic_istream__read"></a>  basic_istream::read  
 Legge un numero specificato di caratteri dal flusso e li archivia in una matrice.  
  
 Questo metodo è potenzialmente pericoloso poiché si basa sul controllo dei valori passati effettuato dal chiamante.  
  
```  
basic_istream<Elem, Tr>& read(
    char_type* str,   
    streamsize count);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Matrice in cui leggere i caratteri.  
  
 ` count`  
 Numero di caratteri da leggere.  
  
### <a name="return-value"></a>Valore restituito  
 Il flusso ( `*this`).  
  
### <a name="remarks"></a>Note  
 La funzione di input non formattato estrae fino a `count` elementi e li archivia nella matrice che inizia da _ `Str`. L'estrazione si interrompe prima della fine del file e in tal caso la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( `failbit`). In tutti i casi, restituisce `*this`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_read.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main()  
{  
    char c[10];  
    int count = 5;  
  
    cout << "Type 'abcde': ";  
  
    // Note: cin::read is potentially unsafe, consider  
    // using cin::_Read_s instead.  
    cin.read(&c[0], count);  
    c[count] = 0;  
  
    cout << c << endl;  
}  
```  
  
```Output  
  
abcde  
  
```  
  
```Output  
  
      abcdeType 'abcde': abcde  
abcde  
```  
  
##  <a name="a-namebasicistreamreadsomea--basicistreamreadsome"></a><a name="basic_istream__readsome"></a>  basic_istream::readsome  
 Legge il numero specificato di valori di carattere.  
  
 Questo metodo è potenzialmente pericoloso poiché si basa sul controllo dei valori passati effettuato dal chiamante.  
  
```  
streamsize readsome(
    char_type* str,  
    streamsize count);
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 La matrice in cui `readsome` archivia i caratteri letti.  
  
 `count`  
 Numero di caratteri da leggere.  
  
### <a name="return-value"></a>Valore restituito  
 Numero di caratteri attualmente letti, [gcount](#basic_istream__gcount).  
  
### <a name="remarks"></a>Note  
 La funzione di input non formattato estrae fino a `count` elementi dal flusso di input e li archivia nella matrice `str`.  
  
 Questa funzione non attende l'input. Legge tutti i dati disponibili.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_readsome.cpp  
// compile with: /EHsc /W3  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
   char c[10];  
   int count = 5;  
  
   cout << "Type 'abcdefgh': ";  
  
   // cin.read blocks until user types input.  
   // Note: cin::read is potentially unsafe, consider  
   // using cin::_Read_s instead.  
   cin.read(&c[0], 2);  
  
   // Note: cin::readsome is potentially unsafe, consider  
   // using cin::_Readsome_s instead.  
   int n = cin.readsome(&c[0], count);  // C4996  
   c[n] = 0;  
   cout << n << " characters read" << endl;  
   cout << c << endl;  
}  
```  
  
##  <a name="a-namebasicistreamseekga--basicistreamseekg"></a><a name="basic_istream__seekg"></a>  basic_istream::seekg  
 Sposta la posizione di lettura in un flusso.  
  
```  
basic_istream<Elem, Tr>& seekg(pos_type pos);

basic_istream<Elem, Tr>& seekg(off_type off, ios_base::seekdir way);
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Posizione assoluta in cui spostare il puntatore di lettura.  
  
 `off`  
 Offset per lo spostamento del puntatore di lettura relativamente a `way`.  
  
 `way`  
 Una delle enumerazioni [ios_base::seekdir](../standard-library/ios-base-class.md#ios_base__seekdir).  
  
### <a name="return-value"></a>Valore restituito  
 Il flusso ( **\*this**).  
  
### <a name="remarks"></a>Note  
 La prima funzione membro esegue una ricerca assoluta, la seconda funzione membro esegue una ricerca relativa.  
  
> [!NOTE]
>  Non usare la seconda funzione membro con file di testo poiché C++ standard non supporta le ricerche relative nei file di testo.  
  
 Se [fail](../standard-library/basic-ios-class.md#basic_ios__fail) è false, la prima funzione membro chiama **newpos** = [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) -> [pubseekpos](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekpos)( `pos`) per un oggetto temporaneo **pos_type** **newpos**. Se **fail** è false, la seconda funzione chiama **newpos** = **rdbuf** -> [pubseekoff](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekoff)( `off`, `way`). In entrambi i casi, se ( `off_type`) **newpos** == ( `off_type`)(-1) (l'operazione di posizionamento ha esito negativo), la funzione chiama **istr**. [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). Entrambe le funzioni restituiscono **\*this**.  
  
 Se [fail](../standard-library/basic-ios-class.md#basic_ios__fail) è true, le funzioni membro non eseguono alcuna operazione.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_seekg.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main ( )   
{  
   using namespace std;  
   ifstream file;  
   char c, c1;  
  
   file.open( "basic_istream_seekg.txt" );  
   file.seekg(2);   // seek to position 2  
   file >> c;  
   cout << c << endl;  
}  
```  
  
##  <a name="a-namebasicistreamsentrya--basicistreamsentry"></a><a name="basic_istream__sentry"></a>  basic_istream::sentry  
 La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di input formattato e non formattato.  
  
class sentry {  
   public:  
   explicit sentry( basic_istream\<Elem, Tr>& _Istr,  
   bool _Noskip = false); operator bool() const; };  
  
### <a name="remarks"></a>Note  
 Se `_Istr``.`[good](../standard-library/basic-ios-class.md#basic_ios__good) è true, il costruttore:  
  
-   Chiama `_Istr`. [tie](../standard-library/basic-ios-class.md#basic_ios__tie) -> [flush](../standard-library/basic-ostream-class.md#basic_ostream__flush) se `_Istr`. `tie` non è un puntatore null  
  
-   Chiama [ws](../standard-library/istream-functions.md#ws)( `_Istr`) se `_Istr`. [flags](../standard-library/ios-base-class.md#ios_base__flags)**&**[skipws](../standard-library/ios-functions.md#skipws) è diverso da zero  
  
 Se, dopo la preparazione, `_Istr`. **good** è false, il costruttore chiama `_Istr`. [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **failbit**). In tutti i casi, il costruttore archivia il valore restituito da `_Istr`. **good** in **status**. Una chiamata successiva a **operator bool** fornisce questo valore archiviato.  
  
##  <a name="a-namebasicistreamswapa--basicistreamswap"></a><a name="basic_istream__swap"></a>  basic_istream::swap  
 Scambia il contenuto di due oggetti `basic_istream`.  
  
```  
void swap(basic_istream& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Riferimento lvalue a un oggetto `basic_istream`.  
  
### <a name="remarks"></a>Note  
 La funzione membro chiama [basic_ios::swap](../standard-library/basic-ios-class.md#basic_ios__swap)`(`` right``)`. e scambia il conteggio di estrazione con il conteggio di estrazione per ` right`.  
  
##  <a name="a-namebasicistreamsynca--basicistreamsync"></a><a name="basic_istream__sync"></a>  basic_istream::sync  
 Sincronizza il dispositivo di input associato al flusso con il buffer del flusso.  
  
```  
int sync();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) è un puntatore null, la funzione restituisce -1. In caso contrario, chiama `rdbuf` -> [pubsync](../standard-library/basic-streambuf-class.md#basic_streambuf__pubsync). Se restituisce -1, la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **badbit**) e restituisce -1. In caso contrario, la funzione restituisce zero.  
  
##  <a name="a-namebasicistreamtellga--basicistreamtellg"></a><a name="basic_istream__tellg"></a>  basic_istream::tellg  
 Segnala la posizione corrente all'interno del flusso.  
  
```  
pos_type tellg();
```  
  
### <a name="return-value"></a>Valore restituito  
 Posizione corrente all'interno del flusso.  
  
### <a name="remarks"></a>Note  
 Se [fail](../standard-library/basic-ios-class.md#basic_ios__fail) è false, la funzione membro restituisce [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) -> [pubseekoff](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekoff)(0, `cur`, **in**). In caso contrario, restituisce `pos_type`(-1).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_tellg.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main()  
{  
    using namespace std;  
    ifstream file;  
    char c;  
    streamoff i;  
  
    file.open("basic_istream_tellg.txt");  
    i = file.tellg();  
    file >> c;  
    cout << c << " " << i << endl;  
  
    i = file.tellg();  
    file >> c;  
    cout << c << " " << i << endl;  
}  
```  
  
##  <a name="a-namebasicistreamungeta--basicistreamunget"></a><a name="basic_istream__unget"></a>  basic_istream::unget  
 Reinserisce il carattere letto più di recente nel flusso.  
  
```  
basic_istream<Elem, Tr>& unget();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il flusso ( **\*this**).  
  
### <a name="remarks"></a>Note  
 Se possibile, la [funzione di input non formattato](../standard-library/basic-istream-class.md) reinserisce l'elemento precedente nel flusso, chiamando `rdbuf` -> [sungetc](../standard-library/basic-streambuf-class.md#basic_streambuf__sungetc). Se [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) è un puntatore null o se la chiamata a `sungetc` restituisce **traits_type::**[eof](../standard-library/basic-ios-class.md#basic_ios__eof), la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)( **badbit**). In tutti i casi, restituisce **\*this**.  
  
 Per informazioni su un possibile esito negativo di `unget`, vedere [basic_streambuf::sungetc](../standard-library/basic-streambuf-class.md#basic_streambuf__sungetc).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_istream_unget.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
int main( )   
{  
   char c[10], c2;  
  
   cout << "Type 'abc': ";  
   c2 = cin.get( );  
   cin.unget( );  
   cin.getline( &c[0], 9 );  
   cout << c << endl;  
}  
```  
  
```Output  
  
abc  
  
```  
  
```Output  
  
      abcType 'abc': abc  
abc  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)


