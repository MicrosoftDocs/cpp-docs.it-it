---
title: Classe basic_ios | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std.basic_ios
- ios/std::basic_ios
- basic_ios
- std::basic_ios
dev_langs:
- C++
helpviewer_keywords:
- basic_ios class
ms.assetid: 4fdcd8e1-62d2-4611-8a70-1e4f58434007
caps.latest.revision: 24
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
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 6987d9c75785ebb716324395e0ce295d4155e55f
ms.lasthandoff: 02/24/2017

---
# <a name="basicios-class"></a>Classe basic_ios
La classe di modello descrive le funzioni membro e di archiviazione comuni a entrambi i flussi di input (della classe di modello [basic_istream](../standard-library/basic-istream-class.md)) e di output (della classe di modello [basic_ostream](../standard-library/basic-ostream-class.md)) che dipendono dai parametri di modello. La classe [ios_base](../standard-library/ios-base-class.md) descrive gli elementi comuni e non dipendenti dai parametri di modello. Un oggetto della classe **basic_ios\<class Elem, class Traits>** semplifica il controllo di un flusso con elementi di tipo **Elem**, le cui caratteristiche dei caratteri sono determinate dalla classe **Traits**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
 
template <class Elem, class Traits>  
class basic_ios : public ios_base  
```  
  
#### <a name="parameters"></a>Parametri  
 `Elem`  
 Tipo.  
  
 `Traits`  
 Variabile di tipo `char_traits`.  
  
## <a name="remarks"></a>Note  
 Un oggetto della classe **basic_ios\<class Elem, class Traits>** archivia gli elementi seguenti:  
  
-   Un puntatore di tipo tie a un oggetto di tipo [basic_istream](../standard-library/basic-istream-class.md)**\<Elem, Traits>**.  
  
-   Un puntatore di tipo buffer del flusso a un oggetto di tipo [basic_streambuf](../standard-library/basic-streambuf-class.md)**\<Elem, Traits >**.  
  
- [Informazioni sulla formattazione](../standard-library/ios-base-class.md).  
  
- [Informazioni sullo stato del flusso](../standard-library/ios-base-class.md) in un oggetto base di tipo [ios_base](../standard-library/ios-base-class.md).  
  
-   Un carattere di riempimento in un oggetto di tipo `char_type`.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[basic_ios](#basic_ios__basic_ios)|Costruisce la classe `basic_ios`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#basic_ios__char_type)|Sinonimo del parametro di modello `Elem`.|  
|[int_type](#basic_ios__int_type)|Sinonimo di `Traits::int_type`.|  
|[off_type](#basic_ios__off_type)|Sinonimo di `Traits::off_type`.|  
|[pos_type](#basic_ios__pos_type)|Sinonimo di `Traits::pos_type`.|  
|[traits_type](#basic_ios__traits_type)|Sinonimo del parametro di modello `Traits`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[bad](#basic_ios__bad)|Indica una perdita di integrità del buffer del flusso.|  
|[clear](#basic_ios__clear)|Cancella tutti i flag di errore.|  
|[copyfmt](#basic_ios__copyfmt)|Copia i flag da un flusso a un altro.|  
|[eof](#basic_ios__eof)|Indica se è stata raggiunta la fine del flusso.|  
|[exceptions](#basic_ios__exceptions)|Indica quali eccezioni verranno generate dal flusso.|  
|[fail](#basic_ios__fail)|Indica un errore per estrarre un campo valido da un flusso.|  
|[fill](#basic_ios__fill)|Specifica o restituisce il carattere che verrà usato quando il testo non è largo quanto il flusso.|  
|[good](#basic_ios__good)|Indica che le condizioni del flusso sono buone.|  
|[imbue](#basic_ios__imbue)|Modifica le impostazioni locali.|  
|[init](#basic_ios__init)|Chiamato dai costruttori `basic_ios`.|  
|[move](#basic_ios__move)|Sposta tutti i valori, ad eccezione del puntatore al buffer del flusso, dal parametro all'oggetto corrente.|  
|[narrow](#basic_ios__narrow)|Individua il carattere equivalente per un `char_type` specifico.|  
|[rdbuf](#basic_ios__rdbuf)|Indirizza un flusso al buffer specificato.|  
|[rdstate](#basic_ios__rdstate)|Legge lo stato dei bit per i flag.|  
|[set_rdbuf](#basic_ios__set_rdbuf)|Assegna un buffer del flusso in modo che sia il buffer di lettura per questo oggetto flusso.|  
|[setstate](#basic_ios__setstate)|Imposta flag aggiuntivi.|  
|[swap](#basic_ios__swap)|Scambia i valori in questo oggetto `basic_ios` con quelli di un altro oggetto `basic_ios`. I puntatori ai buffer del flusso non vengono scambiati.|  
|[tie](#basic_ios__tie)|Assicura che un flusso venga elaborato prima di un altro flusso.|  
|[widen](#basic_ios__widen)|Individua il tipo `char_type` equivalente per un carattere specifico.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[explicit operator bool](#basic_ios__operator_bool)|Permette l'uso di un oggetto `basic_ios` come `bool`. La conversione automatica de tipo è disabilitata per impedire effetti collaterali imprevisti comuni.|  
|[operator void *](#basic_ios__operator_void_star)|Indica se il flusso è ancora valido.|  
|[operator!](#basic_ios__operator_not)|Indica se il flusso è corretto.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<ios>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namebasiciosbada--basiciosbad"></a><a name="basic_ios__bad"></a>  basic_ios::bad  
 Indica una perdita di integrità del buffer del flusso  
  
```  
bool bad() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se `rdstate & badbit` è diverso da zero; in caso contrario, `false`.  
  
 Per altre informazioni su `badbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_bad.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( void )  
{  
  using namespace std;  
  bool b = cout.bad( );  
  cout << boolalpha;  
  cout << b << endl;  
    
  b = cout.good( );  
  cout << b << endl;  
}  
  
```  
  
##  <a name="a-namebasiciosbasiciosa--basiciosbasicios"></a><a name="basic_ios__basic_ios"></a>  basic_ios::basic_ios  
 Costruisce la classe basic_ios.  
  
```   
explicit basic_ios(basic_streambuf<Elem,  Traits>* sb);
basic_ios();
```  
  
### <a name="parameters"></a>Parametri  
 `sb`  
 Buffer standard in cui archiviare gli elementi di input o output.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore inizializza i relativi oggetti membro chiamando [init](#basic_ios__init)(_ *Sb*). Il secondo costruttore (protetto) lascia i relativi oggetti membro non inizializzati. Una chiamata successiva a **init** deve inizializzare l'oggetto prima che possa essere eliminato definitivamente.  
  
##  <a name="a-namebasicioschartypea--basicioschartype"></a><a name="basic_ios__char_type"></a>  basic_ios::char_type  
 Sinonimo del parametro di modello **Elem**.  
  
```   
typedef Elem char_type;  
```  
  
##  <a name="a-namebasicioscleara--basiciosclear"></a><a name="basic_ios__clear"></a>  basic_ios::clear  
 Cancella tutti i flag di errore.  
  
```   
void clear(iostate state = goodbit, bool reraise = false); 
void clear(io_state state);
```  
  
### <a name="parameters"></a>Parametri  
 `state` (facoltativo)  
 Flag da impostare dopo la cancellazione di tutti i flag. Il valore predefinito è `goodbit`.  
  
 `reraise` (facoltativo)  
 Specifica se l'eccezione deve essere generata nuovamente. Il valore predefinito è `false` (l'eccezione non verrà generata nuovamente).  
  
### <a name="remarks"></a>Note  
 I flag sono **goodbit**, **failbit**, **eofbit** e **badbit**. Testare questi flag con [good](#basic_ios__good), [bad](#basic_ios__bad), [eof](#basic_ios__eof) e [fail](#basic_ios__fail).  
  
 La funzione membro sostituisce le informazioni archiviate sullo stato del flusso con:  
  
 `state` &#124; `(`[rdbuf](#basic_ios__rdbuf) != 0 **goodbit** : **badbit**)  
  
 Se `state`**&**[exceptions](#basic_ios__exceptions) è diverso da zero, verrà generato un oggetto di classe [failure](../standard-library/ios-base-class.md#ios_base__failure).  
  
### <a name="example"></a>Esempio  
  Vedere [rdstate](#basic_ios__rdstate) e [getline](../standard-library/string-functions.md#getline) per gli esempi di utilizzo di **clear**.  
  
##  <a name="a-namebasicioscopyfmta--basicioscopyfmt"></a><a name="basic_ios__copyfmt"></a>  basic_ios::copyfmt  
 Copia i flag da un flusso a un altro.  
  
```   
basic_ios<Elem, Traits>& copyfmt(
const basic_ios<Elem, Traits>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Flusso di cui si vuole copiare i flag.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto **this** per il flusso in cui vengono copiati i flag.  
  
### <a name="remarks"></a>Note  
 La funzione membro segnala l'evento di callback erase_event. La funzione copia quindi da ` right` a **\*this** il carattere di riempimento, il puntatore tie e le informazioni di formattazione. Prima di modificare la maschera delle eccezioni, la funzione segnala l'evento di callback copyfmt_event. Se al termine della copia **state &**[exceptions](#basic_ios__exceptions) è diverso da zero, la funzione chiama [clear](#basic_ios__clear) con l'argomento [rdstate](#basic_ios__rdstate). Restituisce **\*this**.  
  
### <a name="example"></a>Esempio  
  
```cpp    
// basic_ios_copyfmt.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main( )  
{  
  using namespace std;  
  ofstream x( "test.txt" );  
  int i = 10;  
    
  x << showpos;  
  cout << i << endl;  
  cout.copyfmt( x );  
  cout << i << endl;  
}  
  
```  
  
##  <a name="a-namebasicioseofa--basicioseof"></a><a name="basic_ios__eof"></a>  basic_ios::eof  
 Indica se è stata raggiunta la fine del flusso.  
  
```  
bool eof() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se è stata raggiunta la fine del flusso; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `true` se [rdstate](#basic_ios__rdstate) `& eofbit` è diverso da zero. Per altre informazioni su `eofbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate).  
  
### <a name="example"></a>Esempio  
  
```cpp    
// basic_ios_eof.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
using namespace std;  
  
int main( int argc, char* argv[] )  
{  
  fstream   fs;  
  int n = 1;  
  fs.open( "basic_ios_eof.txt" );   // an empty file  
  cout << boolalpha  
  cout << fs.eof() << endl;  
  fs >> n;   // Read the char in the file  
  cout << fs.eof() << endl;  
}  
  
```  
  
##  <a name="a-namebasiciosexceptionsa--basiciosexceptions"></a><a name="basic_ios__exceptions"></a>  basic_ios::exceptions  
 Indica quali eccezioni verranno generate dal flusso.  
  
```   
iostate exceptions() const; 
void exceptions(iostate Newexcept);
void exceptions(io_state Newexcept);
```  
  
### <a name="parameters"></a>Parametri  
 *Newexcept*  
 Flag che si vuole generino un'eccezione.  
  
### <a name="return-value"></a>Valore restituito  
 I flag attualmente specificati per generare un'eccezione per il flusso.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce la maschera delle eccezioni archiviata. La seconda funzione membro archivia *_Except* nella maschera delle eccezioni e restituisce il relativo valore archiviato precedente. Si noti che l'archiviazione di una nuova maschera delle eccezioni può generare un'eccezione analogamente alla chiamata di [clear](#basic_ios__clear)( [rdstate](#basic_ios__rdstate) ).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_exceptions.cpp  
// compile with: /EHsc /GR  
#include <iostream>  
  
int main( )  
{  
  using namespace std;  
    
  cout << cout.exceptions( ) << endl;  
  cout.exceptions( ios::eofbit );  
  cout << cout.exceptions( ) << endl;  
  try  
  {  
    cout.clear( ios::eofbit );   // Force eofbit on  
  }  
  catch ( exception &e )  
  {  
    cout.clear( );  
    cout << "Caught the exception." << endl;  
    cout << "Exception class: " << typeid(e).name()  << endl;  
    cout << "Exception description: " << e.what() << endl;  
  }  
}  
  
```  
  
```Output  
  
0  
1  
Caught the exception.  
Exception class: class std::ios_base::failure  
Exception description: ios_base::eofbit set   
```  
  
##  <a name="a-namebasiciosfaila--basiciosfail"></a><a name="basic_ios__fail"></a>  basic_ios::fail  
 Indica un errore per estrarre un campo valido da un flusso.  
  
```  
bool fail() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se [rdstate](#basic_ios__rdstate) `& (badbit|failbit)` è diverso da zero; in caso contrario, `false`.  
  
 Per altre informazioni su `failbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_fail.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( void )  
{  
  using namespace std;  
  bool b = cout.fail( );  
  cout << boolalpha;  
  cout << b << endl;  
}  
  
```  
  
##  <a name="a-namebasiciosfilla--basiciosfill"></a><a name="basic_ios__fill"></a>  basic_ios::fill  
 Specifica o restituisce il carattere che verrà usato quando il testo non è largo quanto il flusso.  
  
```   
char_type fill() const; 
char_type fill(char_type Char);
```  
  
### <a name="parameters"></a>Parametri  
 `Char`  
 Il carattere che si vuole usare come carattere di riempimento.  
  
### <a name="return-value"></a>Valore restituito  
 Il carattere di riempimento corrente.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce il carattere di riempimento archiviato. La seconda funzione membro archivia `Char` nel carattere di riempimento e restituisce il relativo valore archiviato precedente.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_fill.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <iomanip>  
  
int main( )  
{  
  using namespace std;  
    
  cout << setw( 5 ) << 'a' << endl;     
  cout.fill( 'x' );  
  cout << setw( 5 ) << 'a' << endl;      
  cout << cout.fill( ) << endl;  
}  
  
```  
  
```Output  
  
a  
xxxxa  
x   
```  
  
##  <a name="a-namebasiciosgooda--basiciosgood"></a><a name="basic_ios__good"></a>  basic_ios::good  
 Indica che le condizioni del flusso sono buone.  
  
```  
bool good() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se [rdstate](#basic_ios__rdstate) `== goodbit` (senza flag di stato impostati); in caso contrario, `false`.  
  
 Per altre informazioni su `goodbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#ios_base__iostate).  
  
### <a name="example"></a>Esempio  
  Vedere [basic_ios::bad](#basic_ios__bad) per un esempio di utilizzo di `good`.  
  
##  <a name="a-namebasiciosimbuea--basiciosimbue"></a><a name="basic_ios__imbue"></a>  basic_ios::imbue  
 Modifica le impostazioni locali.  
  
```   
locale imbue(const locale& Loc);
```  
  
### <a name="parameters"></a>Parametri  
 `Loc`  
 Stringa delle impostazioni locali.  
  
### <a name="return-value"></a>Valore restituito  
 Impostazioni locali precedenti.  
  
### <a name="remarks"></a>Note  
 Se [rdbuf](#basic_ios__rdbuf) non è un puntatore null, la funzione membro chiama  
  
 `rdbuf`-> [pubimbue](../standard-library/basic-streambuf-class.md#basic_streambuf__pubimbue)(_ *Loc*)  
  
 In ogni caso, restituisce [ios_base::imbue](../standard-library/ios-base-class.md#ios_base__imbue)(_ *Loc*).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_imbue.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <locale>  
  
int main( )  
{  
  using namespace std;  
    
  cout.imbue( locale( "french_france" ) );  
  double x = 1234567.123456;  
  cout << x << endl;  
}  
  
```  
  
##  <a name="a-namebasiciosinita--basiciosinit"></a><a name="basic_ios__init"></a>  basic_ios::init  
 Chiamata da costruttori basic_ios.  
  
```  
 
void init(basic_streambuf<Elem,Traits>* _Sb, bool _Isstd = false);
```  
  
### <a name="parameters"></a>Parametri  
 `_Sb`  
 Buffer standard in cui archiviare gli elementi di input o output.  
  
 `_Isstd`  
 Specifica se si tratta di un flusso standard.  
  
### <a name="remarks"></a>Note  
 La funzione membro archivia i valori in tutti gli oggetti membro in modo che si verifichi quanto segue:  
  
- [rdbuf](#basic_ios__rdbuf) restituisce *_Sb.*  
  
- [tie](#basic_ios__tie) restituisce un puntatore null.  
  
- [rdstate](#basic_ios__rdstate) restituisce [goodbit](../standard-library/ios-base-class.md#ios_base__iostate) se `_Sb` è diverso da zero; in caso contrario, restituisce [badbit](../standard-library/ios-base-class.md#ios_base__iostate).  
  
- [exceptions](#basic_ios__exceptions) restituisce **goodbit**.  
  
- [flags](../standard-library/ios-base-class.md#ios_base__flags) restituisce [skipws](../standard-library/ios-base-class.md#ios_base__fmtflags) &#124; [dec](../standard-library/ios-base-class.md#ios_base__fmtflags).  
  
- [width](../standard-library/ios-base-class.md#ios_base__width) restituisce 0.  
  
- [precision](../standard-library/ios-base-class.md#ios_base__precision) restituisce 6.  
  
- [fill](#basic_ios__fill) restituisce il carattere di spaziatura.  
  
- [getloc](../standard-library/ios-base-class.md#ios_base__getloc) restituisce `locale::classic`.  
  
- [iword](../standard-library/ios-base-class.md#ios_base__iword) restituisce zero e [pword](../standard-library/ios-base-class.md#ios_base__pword) restituisce un puntatore null per i valori di tutti gli argomenti.  
  
##  <a name="a-namebasiciosinttypea--basiciosinttype"></a><a name="basic_ios__int_type"></a>  basic_ios::int_type  
 Un sinonimo di **traits_type::int_type**.  
  
```  
typedef typename traits_type::int_type int_type;  
```  
  
##  <a name="a-namebasiciosmovea--basiciosmove"></a><a name="basic_ios__move"></a>  basic_ios::move  
 Sposta tutti i valori, ad eccezione del puntatore al buffer del flusso, dal parametro all'oggetto corrente.  
  
```   
void move(basic_ios&& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 L'oggetto `ios_base` da cui spostare i valori.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetto sposta tutti i valori archiviati in ` right` in `*this`, ad eccezione di `stream buffer pointer` archiviato che resta invariato in ` right` e impostato su un puntatore null in `*this`. `tie pointer` archiviato è impostato su un puntatore null in ` right`.  
  
##  <a name="a-namebasiciosnarrowa--basiciosnarrow"></a><a name="basic_ios__narrow"></a>  basic_ios::narrow  
 Individua il carattere equivalente per un `char_type` specifico.  
  
```  
 
char narrow(char_type Char, char Default = '\0') const;
```  
  
### <a name="parameters"></a>Parametri  
 `Char`  
 Oggetto `char` da convertire.  
  
 `Default`  
 `char` che si vuole restituire se non viene trovato alcun equivalente.  
  
### <a name="return-value"></a>Valore restituito  
 `char` equivalente in un `char_type` specificato.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open)**<**Â **ctype**\< **E**> >( [getloc](../standard-library/ios-base-class.md#ios_base__getloc)( ) ). `narrow`( `Char`, `Default`).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_narrow.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
#include <wchar.h>  
  
int main( )  
{  
  using namespace std;  
  wchar_t *x = L"test";  
  char y[10];  
  cout << x[0] << endl;  
  wcout << x << endl;  
  y[0] = wcout.narrow( x[0] );  
  cout << y[0] << endl;  
}  
  
```  
  
##  <a name="a-namebasiciosofftypea--basiciosofftype"></a><a name="basic_ios__off_type"></a>  basic_ios::off_type  
 Un sinonimo di **traits_type::off_type**.  
  
```  
typedef typename traits_type::off_type off_type;  
```  
  
##  <a name="a-namebasiciosoperatorvoidstara--basiciosoperator-void-"></a><a name="basic_ios__operator_void_star"></a>  basic_ios::operator void *  
 Indica se il flusso è ancora valido.  
  
```  
 operator void *() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 L'operatore restituisce un puntatore null solo se [fail](#basic_ios__fail).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_opgood.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )  
{  
  using namespace std;  
  cout << (bool)(&cout != 0) << endl;   // Stream is still good  
}  
  
```  
  
```Output  
1  
```  
  
##  <a name="a-namebasiciosoperatornota--basiciosoperator"></a><a name="basic_ios__operator_not"></a>  basic_ios::operator!  
 Indica se il flusso è corretto.  
  
```   
bool operator!() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce [fail](#basic_ios__fail).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_opbad.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )  
{  
  using namespace std;  
  cout << !cout << endl;   // Stream is not bad  
}  
  
```  
  
```Output  
0  
```  
  
##  <a name="a-namebasiciosoperatorboola--basiciosoperator-bool"></a><a name="basic_ios__operator_bool"></a>  basic_ios::operator bool  
 Permette l'uso di un oggetto `basic_ios` come `bool`. La conversione automatica de tipo è disabilitata per impedire effetti collaterali imprevisti comuni.  
  
```  
explicit operator bool() const;
```  
  
### <a name="remarks"></a>Note  
 L'operatore restituisce un valore convertibile in `false` solo se `fail``()`. Il tipo restituito è convertibile solo in `bool`, non in `void *` o altri tipi scalari noti.  
  
##  <a name="a-namebasiciospostypea--basiciospostype"></a><a name="basic_ios__pos_type"></a>  basic_ios::pos_type  
 Un sinonimo di **traits_type::pos_type**.  
  
```  
typedef typename traits_type::pos_type pos_type;  
```  
  
##  <a name="a-namebasiciosrdbufa--basiciosrdbuf"></a><a name="basic_ios__rdbuf"></a>  basic_ios::rdbuf  
 Indirizza un flusso al buffer specificato.  
  
```   
basic_streambuf<Elem, Traits> *rdbuf() const; 
basic_streambuf<Elem, Traits> *rdbuf(
basic_streambuf<Elem, Traits>* _Sb);
```  
  
### <a name="parameters"></a>Parametri  
 `_Sb`  
 Un flusso.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce il puntatore del buffer di flusso archiviato.  
  
 La seconda funzione membro archivia `_Sb` nel puntatore del buffer di flusso archiviato e restituisce il valore archiviato in precedenza.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_rdbuf.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
#include <fstream>  
  
int main( )  
{  
  using namespace std;  
  ofstream file( "rdbuf.txt" );  
  streambuf *x = cout.rdbuf( file.rdbuf( ) );  
  cout << "test" << endl;   // Goes to file  
  cout.rdbuf(x);  
  cout << "test2" << endl;  
}  
  
```  
  
```Output  
test2  
```  
  
##  <a name="a-namebasiciosrdstatea--basiciosrdstate"></a><a name="basic_ios__rdstate"></a>  basic_ios::rdstate  
 Legge lo stato dei bit per i flag.  
  
```  
 
iostate rdstate() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Le informazioni sullo stato del flusso archiviato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// basic_ios_rdstate.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
using namespace std;  
  
void TestFlags( ios& x )  
{  
  cout << ( x.rdstate( ) & ios::badbit ) << endl;  
  cout << ( x.rdstate( ) & ios::failbit ) << endl;  
  cout << ( x.rdstate( ) & ios::eofbit ) << endl;  
  cout << endl;  
}  
  
int main( )  
{  
  fstream x( "c:\test.txt", ios::out );  
  x.clear( );  
  TestFlags( x );  
  x.clear( ios::badbit | ios::failbit | ios::eofbit );  
  TestFlags( x );  
}  
  
```  
  
```Output  
  
0  
0  
0  
  
4  
2  
1   
```  
  
##  <a name="a-namebasiciossetstatea--basiciossetstate"></a><a name="basic_ios__setstate"></a>  basic_ios::setstate  
 Imposta flag aggiuntivi.  
  
```   
void setstate(iostate _State);
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Flag aggiuntivi da impostare.  
  
### <a name="remarks"></a>Note  
 La funzione membro chiama [clear](#basic_ios__clear)(_ *State* &#124; [rdstate](#basic_ios__rdstate)).  
  
### <a name="example"></a>Esempio  
  
```cpp    
// basic_ios_setstate.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
  bool b = cout.bad( );  
  cout << b << endl;   // Good  
  cout.clear( ios::badbit );  
  b = cout.bad( );  
  // cout.clear( );  
  cout << b << endl;   // Is bad, good  
  b = cout.fail( );  
  cout << b << endl;   // Not failed  
  cout.setstate( ios::failbit );  
  b = cout.fail( );  
  cout.clear( );  
  cout << b << endl;   // Is failed, good  
  return 0;  
}  
  
```  
  
```Output  
  
0  
1   
```  
  
##  <a name="a-namebasiciossetrdbufa--basiciossetrdbuf"></a><a name="basic_ios__set_rdbuf"></a>  basic_ios::set_rdbuf  
 Assegna un buffer del flusso in modo che sia il buffer di lettura per questo oggetto flusso.  
  
```   
void set_rdbuf(
basic_streambuf<Elem, Tr>* strbuf)  
```  
  
### <a name="parameters"></a>Parametri  
 ` strbuf`  
 Buffer del flusso che deve diventare il buffer di lettura.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetto archivia ` strbuf` in `stream buffer pointer`. Non chiama `clear`.  
  
##  <a name="a-namebasiciostiea--basiciostie"></a><a name="basic_ios__tie"></a>  basic_ios::tie  
 Assicura che un flusso venga elaborato prima di un altro flusso.  
  
```  
 
basic_ostream<Elem, Traits> *tie() const; 
basic_ostream<Elem, Traits> *tie(
basic_ostream<Elem, Traits>* str);
```  
  
### <a name="parameters"></a>Parametri  
 ` str`  
 Flusso.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce il puntatore tie archiviato. La seconda funzione membro archivia ` str` nel puntatore tie e restituisce il relativo valore archiviato precedente.  
  
### <a name="remarks"></a>Note  
 `tie` causa la sincronizzazione di due flussi in modo che le operazioni in un flusso vengano eseguite dopo il completamento delle operazioni nell'altro flusso.  
  
### <a name="example"></a>Esempio  
  In questo esempio il collegamento di cin e cout garantisce che la stringa "Enter a number:" passi alla console prima che il numero venga estratto da cin. In questo modo viene eliminata la possibilità che la stringa "Enter a number:" rimanga nel buffer quando viene letto il numero e viene garantita la visualizzazione all'utente di una richiesta a cui rispondere. Per impostazione predefinita, cin e cout sono collegati.  
  
```  
  
#include <ios>  
#include <iostream>  
  
int main( )  
{  
  using namespace std;  
  int i;  
  cin.tie( &cout );  
  cout << "Enter a number:";  
  cin >> i;  
}  
  
```  
  
##  <a name="a-namebasiciostraitstypea--basiciostraitstype"></a><a name="basic_ios__traits_type"></a>  basic_ios::traits_type  
 Un sinonimo del parametro di modello **Traits**.  
  
```   
typedef Traits traits_type;  
```  
  
##  <a name="a-namebasicioswidena--basicioswiden"></a><a name="basic_ios__widen"></a>  basic_ios::widen  
 Trova `char_type` equivalente a `char` specificato.  
  
```   
char_type widen(char Char) const;
```  
  
### <a name="parameters"></a>Parametri  
 `Char`  
 Carattere da convertire.  
  
### <a name="return-value"></a>Valore restituito  
 Trova `char_type` equivalente a `char` specificato.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [use_facet](../standard-library/basic-filebuf-class.md#basic_filebuf__open)< **ctype**\< **E**> >( [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). `widen`( `Char`).  
  
### <a name="example"></a>Esempio  
  
```cpp    
// basic_ios_widen.cpp  
// compile with: /EHsc  
#include <ios>  
#include <iostream>  
#include <wchar.h>  
  
int main( )  
{  
  using namespace std;  
  char *z = "Hello";  
  wchar_t y[2] = {0,0};  
  cout << z[0] << endl;  
  y[0] = wcout.widen( z[0] );  
  wcout << &y[0] << endl;  
}  
  
```  
  
##  <a name="a-namebasiciosswapa--basiciosswap"></a><a name="basic_ios__swap"></a>  basic_ios::swap  
 Scambia i valori in questo oggetto `basic_ios` con quelli di un altro oggetto `basic_ios`. Tuttavia, i puntatori ai buffer di flusso non vengono scambiati.  
  
```   
void swap(basic_ios&& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto `basic_ios` usato per lo scambio dei valori.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetto scambia tutti i valori archiviati in ` right` con `*this`, ad eccezione di `stream buffer pointer` archiviato.  
  
## <a name="see-also"></a>Vedere anche  
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)


