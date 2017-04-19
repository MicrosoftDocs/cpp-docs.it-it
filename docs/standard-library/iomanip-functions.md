---
title: Funzioni &lt;iomanip&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- iomanip/std::get_money
- iomanip/std::get_time
- iomanip/std::put_money
- iomanip/std::put_time
- iomanip/std::quoted
- iomanip/std::resetiosflags
- iomanip/std::setbase
- iomanip/std::setfill
- iomanip/std::setiosflags
- iomanip/std::setprecision
- iomanip/std::setw
ms.assetid: 3ddde610-70cc-4cfa-8a89-3e83d1d356a8
caps.latest.revision: 10
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: d54e1d5071414f1e8f6ae96391aa1659397bbcb3
ms.lasthandoff: 02/24/2017

---
# <a name="ltiomanipgt-functions"></a>Funzioni &lt;iomanip&gt;
||||  
|-|-|-|  
|[get_money](#iomanip_get_money)|[get_time](#iomanip_get_time)|[put_money](#iomanip_put_money)|  
|[put_time](#iomanip_put_time)|[quoted](#quoted)|[resetiosflags](#resetiosflags)|  
|[setbase](#setbase)|[setfill](#setfill)|[setiosflags](#setiosflags)|  
|[setprecision](#setprecision)|[setw](#setw)|  
  
##  <a name="iomanip_get_money"></a>  get_money  
 Estrae un valore monetario da un flusso usando il formato desiderato e restituisce il valore in un parametro.  
  
```  
template <class Money>  
T7 get_money(Money& _Amount, bool _Intl);
```  
  
### <a name="parameters"></a>Parametri  
 _Amount  
 Valore monetario estratto.  
  
 _Intl  
 Se `true`, usare il formato internazionale. Il valore predefinito è `false`.  
  
### <a name="remarks"></a>Note  
 Il manipolatore restituisce un oggetto che, se estratto dal flusso `str`, si comporta come un oggetto `formatted input function` che chiama la funzione membro `get` per il facet delle impostazioni locali `money_get` associato a `str`, usando `_Intl` per indicare il formato internazionale. Se ha esito positivo, la chiamata archivia il valore monetario estratto in `_Amount`. Il manipolatore restituisce quindi `str`.  
  
 `Money` deve essere di tipo `long double` o un'istanza di `basic_string` con gli stessi parametri di elemento e dei tratti di `str`.  
  
##  <a name="iomanip_get_time"></a>  get_time  
 Estrae un valore di ora da un flusso usando il formato desiderato. Restituisce il valore in un parametro come una struttura temporale.  
  
```  
template <class Elem>  
T10 put_time(struct tm *_Tptr, const Elem *_Fmt);
```  
  
### <a name="parameters"></a>Parametri  
 `_Tptr`  
 Ora nella forma di una struttura temporale.  
  
 `_Fmt`  
 Formato desiderato da usare per ottenere il valore di ora.  
  
### <a name="remarks"></a>Note  
 Il manipolatore restituisce un oggetto che, se estratto dal flusso `str`, si comporta come un oggetto `formatted input function` che chiama la funzione membro `get` per il facet delle impostazioni locali `time_get` associato a `str`, usando `tptr` per indicare la struttura temporale e `fmt` per indicare l'inizio di una stringa di formato con terminazione Null. Se ha esito positivo, la chiamata archivia nella struttura temporale i valori associati ai campi ora estratti. Il manipolatore restituisce quindi `str`.  
  
##  <a name="iomanip_put_money"></a>  put_money  
 Inserisce un importo monetario in un flusso usando il formato desiderato.  
  
```  
template <class Money>  
T8 put_money(const Money& _Amount, bool _Intl);
```  
  
### <a name="parameters"></a>Parametri  
 `_Amount`  
 Importo monetario da inserire nel flusso.  
  
 `_Intl`  
 Impostare il parametro su `true` se il manipolatore deve usare il formato internazionale; in caso contrario, impostarlo su `false`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `str`.  
  
### <a name="remarks"></a>Note  
 Il manipolatore restituisce un oggetto che, se inserito nel flusso `str`, si comporta come una funzione di output formattata che chiama la funzione membro `put` per il facet delle impostazioni locali `money_put` associato a `str`. Se ha esito positivo, la chiamata inserisce l'oggetto `amount` correttamente formattato, usando `_Intl` per indicare il formato internazionale e `str.fill()` come elemento di riempimento. Il manipolatore restituisce quindi `str`.  
  
 `Money` deve essere di tipo `long double` o un'istanza di `basic_string` con gli stessi parametri di elemento e dei tratti di `str`.  
  
##  <a name="iomanip_put_time"></a>  put_time  
 Scrive un valore di ora di una struttura temporale in un flusso usando un formato specificato.  
  
```  
template <class Elem>  
T10 put_time(struct tm* _Tptr, const Elem* _Fmt);
```  
  
### <a name="parameters"></a>Parametri  
 `_Tptr`  
 Valore di ora da scrivere nel flusso, fornito in una struttura temporale.  
  
 `_Fmt`  
 Formato in cui scrivere il valore di ora.  
  
### <a name="remarks"></a>Note  
 Il manipolatore restituisce un oggetto che, se inserito nel flusso `str`, si comporta come un oggetto `formatted output function`. La funzione di output chiama la funzione membro `put` per il facet delle impostazioni locali `time_put` associato a `str`. La funzione di output usa `_Tptr` per indicare la struttura temporale e `_Fmt` per indicare l'inizio di una stringa di formato con terminazione Null. Se ha esito positivo, la chiamata inserisce testo letterale ottenuto dalla stringa di formato e i valori convertiti dalla struttura temporale. Il manipolatore restituisce quindi `str`.  
  
##  <a name="quoted"></a>  quoted  
 **(Novità in C++14)** Manipolatore iostream che consente di usare gli operatori >> e << per il round trip delle stringhe da e verso i flussi.  
  
```  
quoted(std::string str) // or wstring  
quoted(const char* str) //or wchar_t* 
quoted(std::string str, char delimiter, char escape) // or wide versions  
quoted(const char* str, char delimiter, char escape) // or wide versions  
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 std::string, char*, valore letterale stringa o valore letterale stringa non elaborato oppure versione estesa di uno di questi elementi, ad esempio std::wstring, wchar_t\*).  
  
 `delimiter`  
 Carattere specificato dall'utente o carattere wide da usare come delimitatore per l'inizio e la fine della stringa.  
  
 `escape`  
 Carattere specificato dall'utente o carattere wide da usare come carattere di escape per le sequenze di escape all'interno della stringa.  
  
### <a name="remarks"></a>Note  
 Vedere [Uso degli operatori di inserimento e controllo del formato](../standard-library/using-insertion-operators-and-controlling-format.md).  
  
### <a name="example"></a>Esempio  
  Questo esempio illustra come usare `quoted` con il delimitatore e il carattere di escape predefiniti usando stringhe narrow. Sono supportate anche le stringhe wide.  
  
```cpp  
#include <iostream>  
#include <iomanip>  
#include <sstream>  
  
using namespace std;  
  
void show_quoted_v_nonquoted()  
{  
    // Results are identical regardless of input string type:  
    // string inserted { R"(This is a "sentence".)" }; // raw string literal  
    // string inserted { "This is a \"sentence\"." };  // regular string literal  
    const char* inserted = "This is a \"sentence\".";  // const char*  
    stringstream ss, ss_quoted;  
    string extracted, extracted_quoted;  
  
    ss << inserted;  
    ss_quoted << quoted(inserted);  
  
    cout << "ss.str() is storing       : " << ss.str() << endl;  
    cout << "ss_quoted.str() is storing: " << ss_quoted.str() << endl << endl;  
  
    // Round-trip the strings   
    ss >> extracted;  
    ss_quoted >> quoted(extracted_quoted);  
  
    cout << "After round trip: " << endl;  
    cout << "Non-quoted      : " << extracted << endl;  
    cout << "Quoted          : " << extracted_quoted << endl;  
}  
  
void main(int argc, char* argv[])  
{  
    show_quoted_v_nonquoted();  
  
    // Keep console window open in debug mode.  
    cout << endl << "Press Enter to exit" << endl;  
    string input{};  
    getline(cin, input);  
}  
  
/* Output:  
ss.str() is storing       : This is a "sentence".  
ss_quoted.str() is storing: "This is a \"sentence\"."  
  
After round trip:  
Non-quoted      : This  
Quoted          : This is a "sentence".  
  
Press Enter to exit  
*/  
```  
  
### <a name="example"></a>Esempio  
  L'esempio seguente illustra come specificare un delimitatore e/o un carattere di escape personalizzati:  
  
```cpp  
#include <iostream>  
#include <iomanip>  
#include <sstream>  
  
using namespace std;  
  
void show_custom_delimiter()  
{  
    string inserted{ R"("This" "is" "a" "heavily-quoted" "sentence".)" };  
    // string inserted{ "\"This\" \"is\" \"a\" \"heavily-quoted\" \"sentence\"" };  
    // const char* inserted{ "\"This\" \"is\" \"a\" \"heavily-quoted\" \"sentence\"" };  
    stringstream ss, ss_quoted;  
    string extracted;  
  
    ss_quoted << quoted(inserted, '*');  
    ss << inserted;  
    cout << "ss_quoted.str() is storing: " << ss_quoted.str() << endl;  
    cout << "ss.str() is storing       : " << ss.str() << endl << endl;  
  
    // Use the same quoted arguments as on insertion.  
    ss_quoted >> quoted(extracted, '*');  
  
    cout << "After round trip: " << endl;  
    cout << "Quoted          : " << extracted << endl;  
  
    extracted = {};  
    ss >> extracted;  
    cout << "Non-quoted      : " << extracted << endl << endl;  
}  
  
void show_custom_escape()  
{  
    string inserted{ R"(\\root\trunk\branch\nest\egg\yolk)" };  
    // string inserted{ "\\\\root\\trunk\\branch\\nest\\egg\\yolk" };  
    stringstream ss, ss_quoted, ss_quoted_custom;  
    string extracted;  
  
    // Use '"' as delimiter and '~' as escape character.  
    ss_quoted_custom << quoted(inserted, '"', '~');  
    ss_quoted << quoted(inserted);  
    ss << inserted;  
    cout << "ss_quoted_custom.str(): " << ss_quoted_custom.str() << endl;  
    cout << "ss_quoted.str()       : " << ss_quoted.str() << endl;  
    cout << "ss.str()              : " << ss.str() << endl << endl;  
  
    // No spaces in this string, so non-quoted behaves same as quoted  
    // after round-tripping.  
}  
  
void main(int argc, char* argv[])  
{  
    cout << "Custom delimiter:" << endl;  
    show_custom_delimiter();  
    cout << "Custom escape character:" << endl;  
    show_custom_escape();  
  
    // Keep console window open in debug mode.  
    cout << endl << "Press Enter to exit" << endl;  
    string input{};  
    getline(cin, input);  
}  
/* Output:  
Custom delimiter:  
ss_quoted.str() is storing: *"This" "is" "a" "heavily-quoted" "sentence".*  
ss.str() is storing       : "This" "is" "a" "heavily-quoted" "sentence".  
  
After round trip:  
Quoted          : "This" "is" "a" "heavily-quoted" "sentence".  
Non-quoted      : "This"  
  
Custom escape character:  
ss_quoted_custom.str(): "\\root\trunk\branch\nest\egg\yolk"  
ss_quoted.str()       : "\\\\root\\trunk\\branch\\nest\\egg\\yolk"  
ss.str()              : \\root\trunk\branch\nest\egg\yolk  
  
Press Enter to exit  
*/  
  
```  
  
##  <a name="resetiosflags"></a>  resetiosflags  
 Cancella i flag specificati.  
  
```  
T1 resetiosflags(ios_base::fmtflags Mask);
```  
  
### <a name="parameters"></a>Parametri  
 `Mask`  
 Flag da cancellare.  
  
### <a name="return-value"></a>Valore restituito  
 Il manipolatore restituisce un oggetto che, se estratto o inserito nel flusso **str**, chiama **str**. [setf](../standard-library/ios-base-class.md#ios_base__setf)( `ios_base::`[fmtflags](../standard-library/ios-base-class.md#ios_base__fmtflags), _ *Mask*) e quindi restituisce **str**.  
  
### <a name="example"></a>Esempio  
  Vedere [setw](../standard-library/iomanip-functions.md#setw) per un esempio d'uso di `resetiosflags`.  
  
##  <a name="setbase"></a>  setbase  
 Imposta la base per i valori integer.  
  
```  
T3 setbase(int _Base);
```  
  
### <a name="parameters"></a>Parametri  
 `_Base`  
 Base numerica.  
  
### <a name="return-value"></a>Valore restituito  
 Il manipolatore restituisce un oggetto che, se estratto o inserito nel flusso **str**, chiama **str**. `setf`( **mask**, [ios_base::basefield](../standard-library/ios-base-class.md#ios_base__fmtflags)) e quindi restituisce **str**. In questo caso, **mask** viene determinato come segue:  
  
-   Se _ *Base* è 8, **mask** è `ios_base::`[oct](../standard-library/ios-functions.md#oct).  
  
-   Se _ *Base* è 10, mask è `ios_base::`[dec](../standard-library/ios-functions.md#dec).  
  
-   Se _ *Base* è 16, **mask** è `ios_base::`[hex](../standard-library/ios-functions.md#hex).  
  
-   Se _ *Base* è un qualsiasi altro valore, mask è `ios_base::`[fmtflags](../standard-library/ios-base-class.md#ios_base__fmtflags)(0).  
  
### <a name="example"></a>Esempio  
  Vedere [setw](../standard-library/iomanip-functions.md#setw) per un esempio d'uso di `setbase`.  
  
##  <a name="setfill"></a>  setfill  
 Imposta il carattere che verrà usato per riempire gli spazi in una visualizzazione giustificata a destra.  
  
```  
template <class Elem>  
T4 setfill(Elem Ch);
```  
  
### <a name="parameters"></a>Parametri  
 `Ch`  
 Carattere che verrà usato per riempire gli spazi in una visualizzazione giustificata a destra.  
  
### <a name="return-value"></a>Valore restituito  
 Il manipolatore di modelli restituisce un oggetto che, se estratto o inserito nel flusso **str**, chiama **str**. [fill](../standard-library/basic-ios-class.md#basic_ios__fill)( `Ch`) e quindi restituisce **str**. Il tipo **Elem** deve corrispondere al tipo di elemento del flusso **str**.  
  
### <a name="example"></a>Esempio  
  Vedere [setw](../standard-library/iomanip-functions.md#setw) per un esempio d'uso di `setfill`.  
  
##  <a name="setiosflags"></a>  setiosflags  
 Imposta i flag specificati.  
  
```  
T2 setiosflags(ios_base::fmtflags Mask);
```  
  
### <a name="parameters"></a>Parametri  
 `Mask`  
 Flag da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Il manipolatore restituisce un oggetto che, se estratto o inserito nel flusso **str**, chiama **str**. [setf](../standard-library/ios-base-class.md#ios_base__setf)(_ *Mask*) e quindi restituisce **str**.  
  
### <a name="example"></a>Esempio  
  Vedere [setw](../standard-library/iomanip-functions.md#setw) per un esempio d'uso di `setiosflags`.  
  
##  <a name="setprecision"></a>  setprecision  
 Imposta la precisione per i valori a virgola mobile.  
  
```  
T5 setprecision(streamsize Prec);
```  
  
### <a name="parameters"></a>Parametri  
 `Prec`  
 Precisione per i valori a virgola mobile.  
  
### <a name="return-value"></a>Valore restituito  
 Il manipolatore restituisce un oggetto che, se estratto o inserito nel flusso **str**, chiama **str**. [precision](../standard-library/ios-base-class.md#ios_base__precision)( `Prec`) e quindi restituisce **str**.  
  
### <a name="example"></a>Esempio  
  Vedere [setw](../standard-library/iomanip-functions.md#setw) per un esempio d'uso di `setprecision`.  
  
##  <a name="setw"></a>  setw  
 Specifica la larghezza del campo di visualizzazione per l'elemento successivo nel flusso.  
  
```  
T6 setw(streamsize Wide);
```  
  
### <a name="parameters"></a>Parametri  
 `Wide`  
 Larghezza del campo di visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Il manipolatore restituisce un oggetto che, se estratto o inserito nel flusso **str**, chiama **str**. [width](../standard-library/ios-base-class.md#ios_base__width)(_ *Wide*) e quindi restituisce **str**.  
  
### <a name="remarks"></a>Note  
 setw imposta la larghezza solo per l'elemento successivo nel flusso e deve essere inserito prima di ogni elemento di cui si vuole specificare la larghezza.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// iomanip_setw.cpp   
// compile with: /EHsc  
// Defines the entry point for the console application.  
//  
// Sample use of the following manipulators:  
//   resetiosflags  
//   setiosflags  
//   setbase  
//   setfill  
//   setprecision  
//   setw  
  
#include <iostream>  
#include <iomanip>  
  
using namespace std;  
  
const double   d1 = 1.23456789;  
const double   d2 = 12.3456789;  
const double   d3 = 123.456789;  
const double   d4 = 1234.56789;  
const double   d5 = 12345.6789;  
const long      l1 = 16;  
const long      l2 = 256;  
const long      l3 = 1024;  
const long      l4 = 4096;  
const long      l5 = 65536;  
int         base = 10;  
  
void DisplayDefault( )  
{  
   cout << endl << "default display" << endl;  
   cout << "d1 = " << d1 << endl;  
   cout << "d2 = " << d2 << endl;  
   cout << "d3 = " << d3 << endl;  
   cout << "d4 = " << d4 << endl;  
   cout << "d5 = " << d5 << endl;  
}  
  
void DisplayWidth( int n )  
{  
   cout << endl << "fixed width display set to " << n << ".\n";  
   cout << "d1 = " << setw(n) << d1 << endl;  
   cout << "d2 = " << setw(n) << d2 << endl;  
   cout << "d3 = " << setw(n) << d3 << endl;  
   cout << "d4 = " << setw(n) << d4 << endl;  
   cout << "d5 = " << setw(n) << d5 << endl;  
}  
  
void DisplayLongs( )  
{  
   cout << setbase(10);  
   cout << endl << "setbase(" << base << ")" << endl;  
   cout << setbase(base);  
   cout << "l1 = " << l1 << endl;  
   cout << "l2 = " << l2 << endl;  
   cout << "l3 = " << l3 << endl;  
   cout << "l4 = " << l4 << endl;  
   cout << "l5 = " << l5 << endl;  
}  
  
int main( int argc, char* argv[] )  
{  
   DisplayDefault( );  
  
   cout << endl << "setprecision(" << 3 << ")" << setprecision(3);  
   DisplayDefault( );  
  
   cout << endl << "setprecision(" << 12 << ")" << setprecision(12);  
   DisplayDefault( );  
  
   cout << setiosflags(ios_base::scientific);  
   cout << endl << "setiosflags(" << ios_base::scientific << ")";  
   DisplayDefault( );  
  
   cout << resetiosflags(ios_base::scientific);  
   cout << endl << "resetiosflags(" << ios_base::scientific << ")";  
   DisplayDefault( );  
  
   cout << endl << "setfill('" << 'S' << "')" << setfill('S');  
   DisplayWidth(15);  
   DisplayDefault( );  
  
   cout << endl << "setfill('" << ' ' << "')" << setfill(' ');  
   DisplayWidth(15);  
   DisplayDefault( );  
  
   cout << endl << "setprecision(" << 8 << ")" << setprecision(8);  
   DisplayWidth(10);  
   DisplayDefault( );  
  
   base = 16;  
   DisplayLongs( );  
  
   base = 8;  
   DisplayLongs( );  
  
   base = 10;  
   DisplayLongs( );  
  
   return   0;  
}  
```  
  
```Output  
  
default display  
d1 = 1.23457  
d2 = 12.3457  
d3 = 123.457  
d4 = 1234.57  
d5 = 12345.7  
  
setprecision(3)  
default display  
d1 = 1.23  
d2 = 12.3  
d3 = 123  
d4 = 1.23e+003  
d5 = 1.23e+004  
  
setprecision(12)  
default display  
d1 = 1.23456789  
d2 = 12.3456789  
d3 = 123.456789  
d4 = 1234.56789  
d5 = 12345.6789  
  
setiosflags(4096)  
default display  
d1 = 1.234567890000e+000  
d2 = 1.234567890000e+001  
d3 = 1.234567890000e+002  
d4 = 1.234567890000e+003  
d5 = 1.234567890000e+004  
  
resetiosflags(4096)  
default display  
d1 = 1.23456789  
d2 = 12.3456789  
d3 = 123.456789  
d4 = 1234.56789  
d5 = 12345.6789  
  
setfill('S')  
fixed width display set to 15.  
d1 = SSSSS1.23456789  
d2 = SSSSS12.3456789  
d3 = SSSSS123.456789  
d4 = SSSSS1234.56789  
d5 = SSSSS12345.6789  
  
default display  
d1 = 1.23456789  
d2 = 12.3456789  
d3 = 123.456789  
d4 = 1234.56789  
d5 = 12345.6789  
  
setfill(' ')  
fixed width display set to 15.  
d1 =      1.23456789  
d2 =      12.3456789  
d3 =      123.456789  
d4 =      1234.56789  
d5 =      12345.6789  
  
default display  
d1 = 1.23456789  
d2 = 12.3456789  
d3 = 123.456789  
d4 = 1234.56789  
d5 = 12345.6789  
  
setprecision(8)  
fixed width display set to 10.  
d1 =  1.2345679  
d2 =  12.345679  
d3 =  123.45679  
d4 =  1234.5679  
d5 =  12345.679  
  
default display  
d1 = 1.2345679  
d2 = 12.345679  
d3 = 123.45679  
d4 = 1234.5679  
d5 = 12345.679  
  
setbase(16)  
l1 = 10  
l2 = 100  
l3 = 400  
l4 = 1000  
l5 = 10000  
  
setbase(8)  
l1 = 20  
l2 = 400  
l3 = 2000  
l4 = 10000  
l5 = 200000  
  
setbase(10)  
l1 = 16  
l2 = 256  
l3 = 1024  
l4 = 4096  
l5 = 65536  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<iomanip>](../standard-library/iomanip.md)


