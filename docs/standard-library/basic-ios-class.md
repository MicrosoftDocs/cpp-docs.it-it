---
title: Classe basic_ios | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ios/std::basic_ios
- ios/std::basic_ios::char_type
- ios/std::basic_ios::int_type
- ios/std::basic_ios::off_type
- ios/std::basic_ios::pos_type
- ios/std::basic_ios::traits_type
- ios/std::basic_ios::bad
- ios/std::basic_ios::clear
- ios/std::basic_ios::copyfmt
- ios/std::basic_ios::eof
- ios/std::basic_ios::exceptions
- ios/std::basic_ios::fail
- ios/std::basic_ios::fill
- ios/std::basic_ios::good
- ios/std::basic_ios::imbue
- ios/std::basic_ios::init
- ios/std::basic_ios::move
- ios/std::basic_ios::narrow
- ios/std::basic_ios::rdbuf
- ios/std::basic_ios::rdstate
- ios/std::basic_ios::set_rdbuf
- ios/std::basic_ios::setstate
- ios/std::basic_ios::swap
- ios/std::basic_ios::tie
- ios/std::basic_ios::widen
- ios/std::basic_ios::explicit operator bool
dev_langs:
- C++
helpviewer_keywords:
- std::basic_ios [C++]
- std::basic_ios [C++], char_type
- std::basic_ios [C++], int_type
- std::basic_ios [C++], off_type
- std::basic_ios [C++], pos_type
- std::basic_ios [C++], traits_type
- std::basic_ios [C++], bad
- std::basic_ios [C++], clear
- std::basic_ios [C++], copyfmt
- std::basic_ios [C++], eof
- std::basic_ios [C++], exceptions
- std::basic_ios [C++], fail
- std::basic_ios [C++], fill
- std::basic_ios [C++], good
- std::basic_ios [C++], imbue
- std::basic_ios [C++], init
- std::basic_ios [C++], move
- std::basic_ios [C++], narrow
- std::basic_ios [C++], rdbuf
- std::basic_ios [C++], rdstate
- std::basic_ios [C++], set_rdbuf
- std::basic_ios [C++], setstate
- std::basic_ios [C++], swap
- std::basic_ios [C++], tie
- std::basic_ios [C++], widen
ms.assetid: 4fdcd8e1-62d2-4611-8a70-1e4f58434007
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6bbcfb2f315c9b453d49b2bbdb5be60a6dbc8f6f
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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
|[basic_ios](#basic_ios)|Costruisce la classe `basic_ios`.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[char_type](#char_type)|Sinonimo del parametro di modello `Elem`.|  
|[int_type](#int_type)|Sinonimo di `Traits::int_type`.|  
|[off_type](#off_type)|Sinonimo di `Traits::off_type`.|  
|[pos_type](#pos_type)|Sinonimo di `Traits::pos_type`.|  
|[traits_type](#traits_type)|Sinonimo del parametro di modello `Traits`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[bad](#bad)|Indica una perdita di integrità del buffer del flusso.|  
|[clear](#clear)|Cancella tutti i flag di errore.|  
|[copyfmt](#copyfmt)|Copia i flag da un flusso a un altro.|  
|[eof](#eof)|Indica se è stata raggiunta la fine del flusso.|  
|[exceptions](#exceptions)|Indica quali eccezioni verranno generate dal flusso.|  
|[fail](#fail)|Indica un errore per estrarre un campo valido da un flusso.|  
|[fill](#fill)|Specifica o restituisce il carattere che verrà usato quando il testo non è largo quanto il flusso.|  
|[good](#good)|Indica che le condizioni del flusso sono buone.|  
|[imbue](#imbue)|Modifica le impostazioni locali.|  
|[init](#init)|Chiamato dai costruttori `basic_ios`.|  
|[move](#move)|Sposta tutti i valori, ad eccezione del puntatore al buffer del flusso, dal parametro all'oggetto corrente.|  
|[narrow](#narrow)|Individua il carattere equivalente per un `char_type` specifico.|  
|[rdbuf](#rdbuf)|Indirizza un flusso al buffer specificato.|  
|[rdstate](#rdstate)|Legge lo stato dei bit per i flag.|  
|[set_rdbuf](#set_rdbuf)|Assegna un buffer del flusso in modo che sia il buffer di lettura per questo oggetto flusso.|  
|[setstate](#setstate)|Imposta flag aggiuntivi.|  
|[swap](#swap)|Scambia i valori in questo oggetto `basic_ios` con quelli di un altro oggetto `basic_ios`. I puntatori ai buffer del flusso non vengono scambiati.|  
|[tie](#tie)|Assicura che un flusso venga elaborato prima di un altro flusso.|  
|[widen](#widen)|Individua il tipo `char_type` equivalente per un carattere specifico.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[explicit operator bool](#op_bool)|Permette l'uso di un oggetto `basic_ios` come `bool`. La conversione automatica de tipo è disabilitata per impedire effetti collaterali imprevisti comuni.|  
|[operator void *](#op_void_star)|Indica se il flusso è ancora valido.|  
|[operator!](#op_not)|Indica se il flusso è corretto.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<ios>  
  
 **Spazio dei nomi:** std  
  
##  <a name="bad"></a>  basic_ios::bad  
 Indica una perdita di integrità del buffer del flusso  
  
```  
bool bad() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se `rdstate & badbit` è diverso da zero; in caso contrario, `false`.  
  
 Per altre informazioni su `badbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).  
  
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
  
##  <a name="basic_ios"></a>  basic_ios::basic_ios  
 Costruisce la classe basic_ios.  
  
```   
explicit basic_ios(basic_streambuf<Elem,  Traits>* sb);
basic_ios();
```  
  
### <a name="parameters"></a>Parametri  
 `sb`  
 Buffer standard in cui archiviare gli elementi di input o output.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore inizializza i relativi oggetti membro chiamando [init](#init)(_ *Sb*). Il secondo costruttore (protetto) lascia i relativi oggetti membro non inizializzati. Una chiamata successiva a **init** deve inizializzare l'oggetto prima che possa essere eliminato definitivamente.  
  
##  <a name="char_type"></a>  basic_ios::char_type  
 Sinonimo del parametro di modello **Elem**.  
  
```   
typedef Elem char_type;  
```  
  
##  <a name="clear"></a>  basic_ios::clear  
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
 I flag sono **goodbit**, **failbit**, **eofbit** e **badbit**. Testare questi flag con [good](#good), [bad](#bad), [eof](#eof) e [fail](#fail).  
  
 La funzione membro sostituisce le informazioni archiviate sullo stato del flusso con:  
  
 `state` &#124; `(`[rdbuf](#rdbuf) != 0 **goodbit** : **badbit**)  
  
 Se `state`**&**[exceptions](#exceptions) è diverso da zero, verrà generato un oggetto di classe [failure](../standard-library/ios-base-class.md#failure).  
  
### <a name="example"></a>Esempio  
  Vedere [rdstate](#rdstate) e [getline](../standard-library/string-functions.md#getline) per gli esempi di utilizzo di **clear**.  
  
##  <a name="copyfmt"></a>  basic_ios::copyfmt  
 Copia i flag da un flusso a un altro.  
  
```   
basic_ios<Elem, Traits>& copyfmt(
const basic_ios<Elem, Traits>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Flusso di cui si vuole copiare i flag.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto **this** per il flusso in cui vengono copiati i flag.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce l'evento di callback **erase\_evento**. La funzione copia quindi da `right` a **\*this** il carattere di riempimento, il puntatore tie e le informazioni di formattazione. Prima di modificare la maschera di eccezione, genera l'evento di callback **copyfmt_event**. Se al termine della copia **state &**[exceptions](#exceptions) è diverso da zero, la funzione chiama [clear](#clear) con l'argomento [rdstate](#rdstate). Restituisce **\*this**.  
  
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
  
##  <a name="eof"></a>  basic_ios::eof  
 Indica se è stata raggiunta la fine del flusso.  
  
```  
bool eof() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se è stata raggiunta la fine del flusso; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `true` se [rdstate](#rdstate) `& eofbit` è diverso da zero. Per altre informazioni su `eofbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).  
  
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
  
##  <a name="exceptions"></a>  basic_ios::exceptions  
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
 La prima funzione membro restituisce la maschera delle eccezioni archiviata. La seconda funzione membro archivia *_Except* nella maschera delle eccezioni e restituisce il relativo valore archiviato precedente. Si noti che l'archiviazione di una nuova maschera delle eccezioni può generare un'eccezione analogamente alla chiamata di [clear](#clear)( [rdstate](#rdstate) ).  
  
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
  
##  <a name="fail"></a>  basic_ios::fail  
 Indica un errore per estrarre un campo valido da un flusso.  
  
```  
bool fail() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se [rdstate](#rdstate) `& (badbit|failbit)` è diverso da zero; in caso contrario, `false`.  
  
 Per altre informazioni su `failbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).  
  
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
  
##  <a name="fill"></a>  basic_ios::fill  
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
  
##  <a name="good"></a>  basic_ios::good  
 Indica che le condizioni del flusso sono buone.  
  
```  
bool good() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se [rdstate](#rdstate) `== goodbit` (senza flag di stato impostati); in caso contrario, `false`.  
  
 Per altre informazioni su `goodbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).  
  
### <a name="example"></a>Esempio  
  Vedere [basic_ios::bad](#bad) per un esempio di utilizzo di `good`.  
  
##  <a name="imbue"></a>  basic_ios::imbue  
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
 Se [rdbuf](#rdbuf) non è un puntatore null, la funzione membro chiama  
  
 `rdbuf`-> [pubimbue](../standard-library/basic-streambuf-class.md#pubimbue)(_ *Loc*)  
  
 In ogni caso, restituisce [ios_base::imbue](../standard-library/ios-base-class.md#imbue)(_ *Loc*).  
  
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
  
##  <a name="init"></a>  basic_ios::init  
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
  
- [rdbuf](#rdbuf) restituisce *_Sb.*  
  
- [tie](#tie) restituisce un puntatore null.  
  
- [rdstate](#rdstate) restituisce [goodbit](../standard-library/ios-base-class.md#iostate) se `_Sb` è diverso da zero; in caso contrario, restituisce [badbit](../standard-library/ios-base-class.md#iostate).  
  
- [exceptions](#exceptions) restituisce **goodbit**.  
  
- [flags](../standard-library/ios-base-class.md#flags) restituisce [skipws](../standard-library/ios-base-class.md#fmtflags) &#124; [dec](../standard-library/ios-base-class.md#fmtflags).  
  
- [width](../standard-library/ios-base-class.md#width) restituisce 0.  
  
- [precision](../standard-library/ios-base-class.md#precision) restituisce 6.  
  
- [fill](#fill) restituisce il carattere di spaziatura.  
  
- [getloc](../standard-library/ios-base-class.md#getloc) restituisce `locale::classic`.  
  
- [iword](../standard-library/ios-base-class.md#iword) restituisce zero e [pword](../standard-library/ios-base-class.md#pword) restituisce un puntatore null per i valori di tutti gli argomenti.  
  
##  <a name="int_type"></a>  basic_ios::int_type  
 Un sinonimo di **traits_type::int_type**.  
  
```  
typedef typename traits_type::int_type int_type;  
```  
  
##  <a name="move"></a>  basic_ios::move  
 Sposta tutti i valori, ad eccezione del puntatore al buffer del flusso, dal parametro all'oggetto corrente.  
  
```   
void move(basic_ios&& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 L'oggetto `ios_base` da cui spostare i valori.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetto sposta tutti i valori archiviati in `right` in `*this`, ad eccezione di `stream buffer pointer` archiviato che resta invariato in `right` e impostato su un puntatore null in `*this`. `tie pointer` archiviato è impostato su un puntatore null in `right`.  
  
##  <a name="narrow"></a>  basic_ios::narrow  
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
 La funzione membro restituisce [use_facet](../standard-library/basic-filebuf-class.md#open)\<ctype\<E >> ( [getloc](../standard-library/ios-base-class.md#getloc)()).`narrow` ( `Char`, `Default`).  
  
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
  
##  <a name="off_type"></a>  basic_ios::off_type  
 Un sinonimo di **traits_type::off_type**.  
  
```  
typedef typename traits_type::off_type off_type;  
```  
  
##  <a name="op_void_star"></a>  basic_ios::operator void *  
 Indica se il flusso è ancora valido.  
  
```  
 operator void *() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 L'operatore restituisce un puntatore null solo se [fail](#fail).  
  
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
  
##  <a name="op_not"></a>  basic_ios::operator!  
 Indica se il flusso è corretto.  
  
```   
bool operator!() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce [fail](#fail).  
  
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
  
##  <a name="op_bool"></a>  basic_ios::operator bool  
 Permette l'uso di un oggetto `basic_ios` come `bool`. La conversione automatica de tipo è disabilitata per impedire effetti collaterali imprevisti comuni.  
  
```  
explicit operator bool() const;
```  
  
### <a name="remarks"></a>Note  
 L'operatore restituisce un valore convertibile in `false` solo se `fail()`. Il tipo restituito è convertibile solo in `bool`, non in `void *` o altri tipi scalari noti.  
  
##  <a name="pos_type"></a>  basic_ios::pos_type  
 Un sinonimo di **traits_type::pos_type**.  
  
```  
typedef typename traits_type::pos_type pos_type;  
```  
  
##  <a name="rdbuf"></a>  basic_ios::rdbuf  
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
  
##  <a name="rdstate"></a>  basic_ios::rdstate  
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
  
##  <a name="setstate"></a>  basic_ios::setstate  
 Imposta flag aggiuntivi.  
  
```   
void setstate(iostate _State);
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Flag aggiuntivi da impostare.  
  
### <a name="remarks"></a>Note  
 La funzione membro chiama [clear](#clear)(_ *State* &#124; [rdstate](#rdstate)).  
  
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
  
##  <a name="set_rdbuf"></a>  basic_ios::set_rdbuf  
 Assegna un buffer del flusso in modo che sia il buffer di lettura per questo oggetto flusso.  
  
```   
void set_rdbuf(
basic_streambuf<Elem, Tr>* strbuf)  
```  
  
### <a name="parameters"></a>Parametri  
 `strbuf`  
 Buffer del flusso che deve diventare il buffer di lettura.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetto archivia `strbuf` in `stream buffer pointer`. Non chiama `clear`.  
  
##  <a name="tie"></a>  basic_ios::tie  
 Assicura che un flusso venga elaborato prima di un altro flusso.  
  
```  
 
basic_ostream<Elem, Traits> *tie() const; 
basic_ostream<Elem, Traits> *tie(
basic_ostream<Elem, Traits>* str);
```  
  
### <a name="parameters"></a>Parametri  
 `str`  
 Flusso.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce il puntatore tie archiviato. La seconda funzione membro archivia `str` nel puntatore tie e restituisce il relativo valore archiviato precedente.  
  
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
  
##  <a name="traits_type"></a>  basic_ios::traits_type  
 Un sinonimo del parametro di modello **Traits**.  
  
```   
typedef Traits traits_type;  
```  
  
##  <a name="widen"></a>  basic_ios::widen  
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
 La funzione membro restituisce [use_facet](../standard-library/basic-filebuf-class.md#open)< **ctype**\< **E**> >( [getloc](../standard-library/ios-base-class.md#getloc)). `widen`( `Char`).  
  
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
  
##  <a name="swap"></a>  basic_ios::swap  
 Scambia i valori in questo oggetto `basic_ios` con quelli di un altro oggetto `basic_ios`. Tuttavia, i puntatori ai buffer di flusso non vengono scambiati.  
  
```   
void swap(basic_ios&& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto `basic_ios` usato per lo scambio dei valori.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetto scambia tutti i valori archiviati in `right` con `*this`, ad eccezione di `stream buffer pointer` archiviato.  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)

