---
title: Classe basic_ostream | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std::basic_ostream
- std.basic_ostream
- ostream/std::basic_ostream
- basic_ostream
dev_langs:
- C++
helpviewer_keywords:
- basic_ostream class
ms.assetid: 5baadc65-b662-4fab-8c9f-94457c58cda1
caps.latest.revision: 24
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 73cde54e382bb04b82739239bd0f07142c5b3321
ms.lasthandoff: 02/24/2017

---
# <a name="basicostream-class"></a>Classe basic_ostream
La classe di modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso con elementi di tipo **Elem**, chiamati anche [char_type](../standard-library/basic-ios-class.md#basic_ios__char_type), i cui tratti di carattere vengono determinati dalla classe **Tr**, chiamata anche [traits_type](../standard-library/basic-ios-class.md#basic_ios__traits_type).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem>>  
class basic_ostream : virtual public basic_ios<Elem, Tr>  
```  
  
#### <a name="parameters"></a>Parametri  
 `Elem`  
 Oggetto `char_type`.  
  
 `Tr`  
 Il carattere `traits_type`.  
  
## <a name="remarks"></a>Note  
 La maggior parte delle funzioni membro che sono in rapporto di overload con [operator<<](#basic_ostream__operator_lt__lt_) è costituita da funzioni di output formattato. Le funzioni seguono questo schema:  
  
```  
iostate state = goodbit;  
const sentry ok(*this);

if (ok)  
 {try  
 {<convert and insert elements  
    accumulate flags in state> }  
    catch (...)  
 {try  
 {setstate(badbit);

}  
    catch (...)  
 {}  
    if ((exceptions()& badbit) != 0)  
    throw; }}  
width(0);
// Except for operator<<(Elem)  
setstate(state);

return (*this);
```  
  
 Due altre funzioni membro sono funzioni di output formattate. Le funzioni seguono questo schema:  
  
```  
iostate state = goodbit;  
const sentry ok(*this);

if (!ok)  
    state |= badbit;  
else  
 {try  
 {<obtain and insert elements  
    accumulate flags in state> }  
    catch (...)  
 {try  
 {setstate(badbit);

}  
    catch (...)  
 {}  
    if ((exceptions()& badbit) != 0)  
    throw; }}  
setstate(state);

return (*this);
```  
  
 Entrambi i gruppi di funzioni chiamano [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)**(badbit)** se riscontrano un errore durante l'inserimento di elementi.  
  
 Un oggetto della classe basic_istream\< **Elem**, **Tr**> archivia solo un oggetto di base pubblico virtuale della classe [basic_ios](../standard-library/basic-ios-class.md)**\<Elem**, **Tr>**.  
  
## <a name="example"></a>Esempio  
 Per altre informazioni sui flussi di output, vedere l'esempio per la [Classe basic_ofstream](../standard-library/basic-ofstream-class.md).  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[basic_ostream](#basic_ostream__basic_ostream)|Costruisce un oggetto `basic_ostream`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[flush](#basic_ostream__flush)|Scarica il buffer.|  
|[put](#basic_ostream__put)|Inserisce un carattere in un flusso.|  
|[seekp](#basic_ostream__seekp)|Reimposta la posizione nel flusso di output.|  
|[sentry](#basic_ostream__sentry)|La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate.|  
|[swap](#basic_ostream__operator_eq)|Scambia i valori in questo oggetto `basic_ostream` con quelli dell'oggetto `basic_ostream` fornito.|  
|[tellp](#basic_ostream__tellp)|Indica la posizione nel flusso di output.|  
|[write](#basic_ostream__write)|Inserisce i caratteri in un flusso.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator=](#basic_ostream_operator_eq)|Assegna il valore del parametro di oggetto `basic_ostream` fornito a questo oggetto.|  
|[operator<<](#basic_ostream_operator_lt_lt_)|Scrive nel flusso.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<ostream>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namebasicostreambasicostreama--basicostreambasicostream"></a><a name="basic_ostream__basic_ostream"></a>  basic_ostream::basic_ostream  
 Costruisce un oggetto `basic_ostream`.  
  
```  
explicit basic_ostream(
    basic_streambuf<Elem, Tr>* strbuf,  
    bool _Isstd = false);

basic_ostream(basic_ostream&& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` strbuf`  
 Un oggetto di tipo [basic_streambuf](../standard-library/basic-streambuf-class.md).  
  
 `_Isstd`  
 `true` se si tratta di un flusso standard; in caso contrario, `false`.  
  
 ` right`  
 Riferimento rvalue a un oggetto di tipo `basic_ostream`.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore inizializza la classe base chiamando [init](../standard-library/basic-ios-class.md#basic_ios__init)(` strbuf`). Il secondo costruttore inizializza la classe base chiamando [basic_ios::move](../standard-library/basic-ios-class.md#basic_ios__move)`(`` right``)`.  
  
### <a name="example"></a>Esempio  
  Per altre informazioni sui flussi di output, vedere l'esempio per [basic_ofstream::basic_ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream__basic_ofstream).  
  
##  <a name="a-namebasicostreamflusha--basicostreamflush"></a><a name="basic_ostream__flush"></a>  basic_ostream::flush  
 Scarica il buffer.  
  
```  
basic_ostream<Elem, Tr>& flush();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto basic_ostream.  
  
### <a name="remarks"></a>Note  
 Se [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf) non è un puntatore null, la funzione chiama **rdbuf->**[pubsync](../standard-library/basic-streambuf-class.md#basic_streambuf__pubsync). Se restituisce -1, la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)(**badbit**). Restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ostream_flush.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout << "test";  
   cout.flush();  
}  
```  
  
```Output  
test  
```  
  
##  <a name="a-namebasicostreamoperatorltlta--basicostreamoperatorltlt"></a><a name="basic_ostream_operator_lt_lt_"></a>  basic_ostream::operator&lt;&lt;  
 Scrive nel flusso.  
  
```  
basic_ostream<Elem, Tr>& operator<<(
    basic_ostream<Elem, Tr>& (* Pfn)(basic_ostream<Elem, Tr>&));

basic_ostream<Elem, Tr>& operator<<(
    ios_base& (* Pfn)(ios_base&));

basic_ostream<Elem, Tr>& operator<<(
    basic_ios<Elem, Tr>& (* Pfn)(basic_ios<Elem, Tr>&));

basic_ostream<Elem, Tr>& operator<<(basic_streambuf<Elem, Tr>* strbuf);
basic_ostream<Elem, Tr>& operator<<(bool val);
basic_ostream<Elem, Tr>& operator<<(short val);
basic_ostream<Elem, Tr>& operator<<(unsigned short val);
basic_ostream<Elem, Tr>& operator<<(int __w64  val);
basic_ostream<Elem, Tr>& operator<<(unsigned int __w64  val);
basic_ostream<Elem, Tr>& operator<<(long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long __w64  val);
basic_ostream<Elem, Tr>& operator<<(long long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long long val);
basic_ostream<Elem, Tr>& operator<<(float val);
basic_ostream<Elem, Tr>& operator<<(double val);
basic_ostream<Elem, Tr>& operator<<(long double val);
basic_ostream<Elem, Tr>& operator<<(const void* val);
```  
  
### <a name="parameters"></a>Parametri  
 `Pfn`  
 Un puntatore di funzione.  
  
 ` strbuf`  
 Un puntatore a un oggetto **stream_buf**.  
  
 ` val`  
 Un elemento da scrivere nel flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto basic_ostream.  
  
### <a name="remarks"></a>Note  
 L'intestazione `<ostream>` definisce anche numerosi operatori di inserimento globali. Per altre informazioni, vedere [operator<< (\<ostream>)](../standard-library/ostream-operators.md#operator_lt__lt_).  
  
 La prima funzione membro garantisce che un'espressione nel formato **ostr << endl** chiami [endl](../standard-library/ostream-functions.md#endl)**(ostr)** e quindi restituisca **\*this**. La seconda e la terza funzione garantiscono che gli altri manipolatori, ad esempio [hex](../standard-library/ios-functions.md#hex), si comportino in modo analogo. Le funzioni rimanenti sono tutte funzioni di output formattato.  
  
 La funzione  
  
```  
basic_ostream<Elem, Tr>& operator<<(basic_streambuf<Elem, Tr>* strbuf);
```  
  
 estrae gli elementi da ` strbuf`, se ` strbuf` non è un puntatore null e li inserisce. L'estrazione si interrompe alla fine del file o se un'estrazione genera un'eccezione (che viene generata nuovamente). L'estrazione si interrompe, senza estrazione dell'elemento, se un inserimento ha esito negativo. Se la funzione non inserisce alcun elemento o se un'estrazione genera un'eccezione, la funzione chiama [setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)(**failbit**). In tutti i casi, la funzione restituisce **\*this**.  
  
 La funzione  
  
```  
basic_ostream<Elem, Tr>& operator<<(bool val);
```  
  
 converte _`Val` in un campo booleano e lo inserisce chiamando [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open)**<num_put\<Elem, OutIt>**`(`[getloc](../standard-library/ios-base-class.md#ios_base__getloc)). [put](#basic_ostream__put)(**OutIt**([rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf)), **\*this**, `getloc`, **val**). In questo caso, **OutIt** è definito come [ostreambuf_iterator](../standard-library/ostreambuf-iterator-class.md)**\<Elem, Tr>**. La funzione restituisce **\*this**.  
  
 Ogni funzione  
  
```  
basic_ostream<Elem, Tr>& operator<<(short val);
basic_ostream<Elem, Tr>& operator<<(unsigned short val);
basic_ostream<Elem, Tr>& operator<<(int val);
basic_ostream<Elem, Tr>& operator<<(unsigned int __w64  val);
basic_ostream<Elem, Tr>& operator<<(long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long val);
basic_ostream<Elem, Tr>& operator<<(long long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long long val);
basic_ostream<Elem, Tr>& operator<<(const void* val);
```  
  
 converte ` val` in un campo numerico e lo inserisce chiamando **use_facet<num_put\<Elem, OutIt>**(`getloc`). **put**(**OutIt**(`rdbuf`), **\*this**, `getloc`, **val**). In questo caso, **OutIt** è definito come **ostreambuf_iterator\<Elem, Tr>**. La funzione restituisce **\*this**.  
  
 Ogni funzione  
  
```  
basic_ostream<Elem, Tr>& operator<<(float val);
basic_ostream<Elem, Tr>& operator<<(double val);
basic_ostream<Elem, Tr>& operator<<(long double val);
```  
  
 converte `val` in un campo numerico e lo inserisce chiamando **use_facet<num_put\<Elem, OutIt>**(`getloc`)**. put**(**OutIt**(`rdbuf`), **\*this**, `getloc`, **val**). In questo caso, **OutIt** è definito come **ostreambuf_iterator\<Elem, Tr>**. La funzione restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ostream_op_write.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string.h>  
  
using namespace std;  
  
ios_base& hex2( ios_base& ib )  
{  
   ib.unsetf( ios_base::dec );  
   ib.setf( ios_base::hex );  
   return ib;  
}  
  
basic_ostream<char, char_traits<char> >& somefunc(basic_ostream<char, char_traits<char> > &i)
{
    if (i == cout)
    {
        i << "i is cout" << endl;
    }
    return i;
}

class CTxtStreambuf : public basic_streambuf< char, char_traits< char > >
{
public:
    CTxtStreambuf(char *_pszText)
    {
        pszText = _pszText;
        setg(pszText, pszText, pszText + strlen(pszText));
    };
    char *pszText;
};

int main()
{
    cout << somefunc;
    cout << 21 << endl;

    hex2(cout);
    cout << 21 << endl;

    CTxtStreambuf f("text in streambuf");
    cout << &f << endl;
}
```  
  
##  <a name="a-namebasicostreamoperatoreqa--basicostreamoperator"></a><a name="basic_ostream__operator_eq"></a>  basic_ostream::operator=  
 Assegna i valori per il parametro dell'oggetto `basic_ostream` specificato in questo oggetto.  
  
```  
basic_ostream& operator=(basic_ostream&& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Riferimento `rvalue` a un oggetto `basic_ostream`.  
  
### <a name="remarks"></a>Note  
 L'operatore membro chiama swap `(`` right``)`.  
  
##  <a name="a-namebasicostreamputa--basicostreamput"></a><a name="basic_ostream__put"></a>  basic_ostream::put  
 Inserisce un carattere in un flusso.  
  
```  
basic_ostream<Elem, Tr>& put(char_type _Ch);
```  
  
### <a name="parameters"></a>Parametri  
 `_Ch`  
 Carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto basic_ostream.  
  
### <a name="remarks"></a>Note  
 La funzione di output non formattato inserisce l'elemento `_Ch`. Restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ostream_put.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   cout.put( 'v' );  
   cout << endl;  
   wcout.put( L'l' );  
}  
```  
  
```Output  
v  
l  
```  
  
##  <a name="a-namebasicostreamseekpa--basicostreamseekp"></a><a name="basic_ostream__seekp"></a>  basic_ostream::seekp  
 Reimposta la posizione nel flusso di output.  
  
```  
basic_ostream<Elem, Tr>& seekp(pos_type _Pos);

basic_ostream<Elem, Tr>& seekp(off_type _Off, ios_base::seekdir _Way);
```  
  
### <a name="parameters"></a>Parametri  
 `_Pos`  
 La posizione all'interno del flusso.  
  
 `_Off`  
 L'offset relativo a `_Way`.  
  
 `_Way`  
 Una delle enumerazioni [ios_base::seekdir](../standard-library/ios-base-class.md#ios_base__seekdir).  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto basic_ostream.  
  
### <a name="remarks"></a>Note  
 Se [fail](../standard-library/basic-ios-class.md#basic_ios__fail) è **false**, la prima funzione membro chiama **newpos =** [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf)**->** [pubseekpos](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekpos)(_*Pos*) per un oggetto temporaneo `pos_type` **newpos**. Se **fail** è false, la seconda funzione chiama **newpos = rdbuf->** [pubseekoff](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekoff)(*_Off, _Way*). In entrambi i casi, se (`off_type`)**newpos ==** (`off_type`)(-1) (l'operazione di posizionamento ha esito negativo), la funzione chiama **istr.**[setstate](../standard-library/basic-ios-class.md#basic_ios__setstate)(**failbit**). Entrambe le funzioni restituiscono **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ostream_seekp.cpp  
// compile with: /EHsc  
#include <fstream>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    ofstream x("basic_ostream_seekp.txt");  
    streamoff i = x.tellp();  
    cout << i << endl;  
    x << "testing";  
    i = x.tellp();  
    cout << i << endl;  
    x.seekp(2);   // Put char in third char position in file  
    x << " ";  
  
    x.seekp(2, ios::end);   // Put char two after end of file  
    x << "z";  
}  
```  
  
```Output  
0  
7  
```  
  
##  <a name="a-namebasicostreamsentrya--basicostreamsentry"></a><a name="basic_ostream__sentry"></a>  basic_ostream::sentry  
 La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate.  
  
class sentry {  
   public:  
   explicit sentry(basic_ostream\<Elem, Tr>& _Ostr); operator bool() const; ~sentry(); };  
  
### <a name="remarks"></a>Note  
 La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate. Se **ostr.**[good](../standard-library/basic-ios-class.md#basic_ios__good) è **true** e **ostr.**[tie](../standard-library/basic-ios-class.md#basic_ios__tie) non è un puntatore null, il costruttore chiama **ostr.tie->**[flush](#basic_ostream__flush). Il costruttore archivia quindi il valore restituito da **ostr.good** in **status**. Una chiamata successiva a **operator bool** fornisce questo valore archiviato.  
  
 Se `uncaught_exception` restituisce **false** e [flags](../standard-library/ios-base-class.md#ios_base__flags) **&** [unitbuf](../standard-library/ios-functions.md#unitbuf) è diverso da zero, il distruttore chiama [flush](#basic_ostream__flush).  
  
##  <a name="a-namebasicostreamswapa--basicostreamswap"></a><a name="basic_ostream__swap"></a>  basic_ostream::swap  
 Scambia i valori in questo oggetto `basic_ostream` con quelli dell'oggetto `basic_ostream` specificato.  
  
```  
void swap(basic_ostream& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Riferimento a un oggetto `basic_ostream`.  
  
### <a name="remarks"></a>Note  
 La funzione membro chiama [basic_ios::swap](../standard-library/basic-ios-class.md#basic_ios__swap)`(`` right``)` per scambiare il contenuto di questo oggetto con il contenuto di ` right`.  
  
##  <a name="a-namebasicostreamtellpa--basicostreamtellp"></a><a name="basic_ostream__tellp"></a>  basic_ostream::tellp  
 Indica la posizione nel flusso di output.  
  
```  
pos_type tellp();
```  
  
### <a name="return-value"></a>Valore restituito  
 La posizione nel flusso di output.  
  
### <a name="remarks"></a>Note  
 Se [fail](../standard-library/basic-ios-class.md#basic_ios__fail) è **false**, la funzione membro restituisce [rdbuf](../standard-library/basic-ios-class.md#basic_ios__rdbuf)**->** [pubseekoff](../standard-library/basic-streambuf-class.md#basic_streambuf__pubseekoff)(0, `cur`, **in**). In caso contrario, restituisce `pos_type`(-1).  
  
### <a name="example"></a>Esempio  
  Vedere [seekp](#basic_ostream__seekp) per un esempio in cui viene usato `tellp`.  
  
##  <a name="a-namebasicostreamwritea--basicostreamwrite"></a><a name="basic_ostream__write"></a>  basic_ostream::write  
 Inserisce i caratteri in un flusso.  
  
```  
basic_ostream<Elem, Tr>& write(const char_type* str, streamsize count);
```  
  
### <a name="parameters"></a>Parametri  
 ` count`  
 Numero di caratteri da inserire nel flusso.  
  
 ` str`  
 Caratteri da inserire nel flusso.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto basic_ostream.  
  
### <a name="remarks"></a>Note  
 La [funzione di output non formattato](../standard-library/basic-ostream-class.md) inserisce la sequenza di ` count` elementi iniziando da ` str`.  
  
### <a name="example"></a>Esempio  
  Vedere [streamsize](../standard-library/ios-typedefs.md#streamsize) per un esempio in cui viene usato `write`.  
  
## <a name="see-also"></a>Vedere anche  
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)


