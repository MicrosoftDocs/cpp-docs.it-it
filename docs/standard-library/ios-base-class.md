---
title: Classe ios_base | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xiosbase/std::ios_base
- ios/std::ios_base::event_callback
- xiosbase/std::ios_base::fmtflags
- xiosbase/std::ios_base::iostate
- xiosbase/std::ios_base::openmode
- xiosbase/std::ios_base::seekdir
- xiosbase/std::ios_base::event
- xiosbase/std::ios_base::adjustfield
- xiosbase/std::ios_base::app
- xiosbase/std::ios_base::ate
- xiosbase/std::ios_base::badbit
- xiosbase/std::ios_base::basefield
- xiosbase/std::ios_base::beg
- xiosbase/std::ios_base::binary
- xiosbase/std::ios_base::boolalpha
- xiosbase/std::ios_base::cur
- xiosbase/std::ios_base::dec
- xiosbase/std::ios_base::end
- xiosbase/std::ios_base::eofbit
- xiosbase/std::ios_base::failbit
- xiosbase/std::ios_base::fixed
- xiosbase/std::ios_base::floatfield
- xiosbase/std::ios_base::goodbit
- xiosbase/std::ios_base::hex
- xiosbase/std::ios_base::in
- xiosbase/std::ios_base::internal
- xiosbase/std::ios_base::left
- xiosbase/std::ios_base::oct
- xiosbase/std::ios_base::out
- xiosbase/std::ios_base::right
- xiosbase/std::ios_base::scientific
- xiosbase/std::ios_base::showbase
- xiosbase/std::ios_base::showpoint
- xiosbase/std::ios_base::showpos
- xiosbase/std::ios_base::skipws
- xiosbase/std::ios_base::trunc
- xiosbase/std::ios_base::unitbuf
- xiosbase/std::ios_base::uppercase
- xiosbase/std::ios_base::failure
- xiosbase/std::ios_base::flags
- xiosbase/std::ios_base::getloc
- xiosbase/std::ios_base::imbue
- xiosbase/std::ios_base::Init
- xiosbase/std::ios_base::iword
- xiosbase/std::ios_base::precision
- xiosbase/std::ios_base::pword
- ios/std::ios_base::register_callback
- xiosbase/std::ios_base::setf
- xiosbase/std::ios_base::sync_with_stdio
- xiosbase/std::ios_base::unsetf
- xiosbase/std::ios_base::width
- xiosbase/std::ios_base::xalloc
dev_langs: C++
helpviewer_keywords:
- std::ios_base [C++]
- std::ios_base [C++], event_callback
- std::ios_base [C++], fmtflags
- std::ios_base [C++], iostate
- std::ios_base [C++], openmode
- std::ios_base [C++], seekdir
- std::ios_base [C++], event
- std::ios_base [C++], adjustfield
- std::ios_base [C++], app
- std::ios_base [C++], ate
- std::ios_base [C++], badbit
- std::ios_base [C++], basefield
- std::ios_base [C++], beg
- std::ios_base [C++], binary
- std::ios_base [C++], boolalpha
- std::ios_base [C++], cur
- std::ios_base [C++], dec
- std::ios_base [C++], end
- std::ios_base [C++], eofbit
- std::ios_base [C++], failbit
- std::ios_base [C++], fixed
- std::ios_base [C++], floatfield
- std::ios_base [C++], goodbit
- std::ios_base [C++], hex
- std::ios_base [C++], in
- std::ios_base [C++], internal
- std::ios_base [C++], left
- std::ios_base [C++], oct
- std::ios_base [C++], out
- std::ios_base [C++], right
- std::ios_base [C++], scientific
- std::ios_base [C++], showbase
- std::ios_base [C++], showpoint
- std::ios_base [C++], showpos
- std::ios_base [C++], skipws
- std::ios_base [C++], trunc
- std::ios_base [C++], unitbuf
- std::ios_base [C++], uppercase
- std::ios_base [C++], failure
- std::ios_base [C++], flags
- std::ios_base [C++], getloc
- std::ios_base [C++], imbue
- std::ios_base [C++], Init
- std::ios_base [C++], iword
- std::ios_base [C++], precision
- std::ios_base [C++], pword
- std::ios_base [C++], register_callback
- std::ios_base [C++], setf
- std::ios_base [C++], sync_with_stdio
- std::ios_base [C++], unsetf
- std::ios_base [C++], width
- std::ios_base [C++], xalloc
ms.assetid: 0f9e0abc-f70f-49bc-aa1f-003859f56cfe
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 04605ec5df5512549822d0e585bf1b28eb0b42e6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="iosbase-class"></a>Classe ios_base
La classe descrive le funzioni membro e di archiviazione comuni ai flussi di input e di output che non dipendono dai parametri di modello. La classe modello [basic_ios](../standard-library/basic-ios-class.md) descrive gli elementi comuni e dipendenti dai parametri modello.  
  
 Un oggetto della classe ios_base archivia le informazioni di formattazione che sono costituite da:  
  
-   Flag di formato in un oggetto di tipo [fmtflags](#fmtflags).  
  
-   Una maschera di eccezione in un oggetto di tipo [iostate](#iostate).  
  
-   Larghezza del campo in un oggetto di tipo `int`.  
  
-   Una precisione di visualizzazione in un oggetto di tipo `int`.  
  
-   Un oggetto di impostazioni locali in un oggetto di tipo **locale**.  
  
-   Due matrici estendibili con elementi di tipo **long** e puntatore `void`.  
  
 Un oggetto della classe ios_base archivia anche informazioni sullo stato del flusso, in un oggetto di tipo [iostate](#iostate), e uno stack di callback.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[ios_base](#ios_base)|Costruisce oggetti `ios_base`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[event_callback](#event_callback)|Descrive una funzione passata a [register_call](#register_callback).|  
|[fmtflags](#fmtflags)|Costanti per specificare l'aspetto dell'output.|  
|[iostate](#iostate)|Definisce le costanti che descrivono lo stato di un flusso.|  
|[openmode](#openmode)|Descrive come interagire con un flusso.|  
|[seekdir](#seekdir)|Specifica il punto iniziale per operazioni di offset.|  
  
### <a name="enums"></a>Enumerazioni  
  
|||  
|-|-|  
|[event](#event)|Specifica i tipi di evento.|  
  
### <a name="constants"></a>Costanti  
  
|||  
|-|-|  
|[adjustfield](#fmtflags)|Maschera di bit definita come `internal` &#124; `left` &#124; `right`.|  
|[app](#openmode)|Specifica la ricerca alla fine di un flusso prima di ogni inserimento.|  
|[ate](#openmode)|Specifica la ricerca alla fine di un flusso quando il relativo oggetto di controllo viene inizialmente creato.|  
|[badbit](#iostate)|Registra una perdita di integrità del buffer del flusso.|  
|[basefield](#fmtflags)|Maschera di bit definita come `dec` &#124; `hex` &#124; `oct`.|  
|[beg](#seekdir)|Specifica la ricerca relativa all'inizio di una sequenza.|  
|[binary](#openmode)|Specifica che un file deve essere letto come flusso binario, anziché come flusso di testo.|  
|[boolalpha](#fmtflags)|Specifica l'inserimento o l'estrazione di oggetti di tipo `bool` come nomi (ad esempio `true` e `false`), anziché come valori numerici.|  
|[cur](#seekdir)|Specifica la ricerca relativa alla posizione corrente all'interno di una sequenza.|  
|[dec](#fmtflags)|Specifica l'inserimento o l'estrazione di valori interi in formato decimale.|  
|[end](#seekdir)|Specifica la ricerca relativa alla fine di una sequenza.|  
|[eofbit](#iostate)|Registra la fine del file durante l'estrazione da un flusso.|  
|[failbit](#iostate)|Registra un errore per estrarre un campo valido da un flusso.|  
|[fixed](#fmtflags)|Specifica l'inserimento di valori a virgola mobile in formato a virgola fissa (senza il campo dell'esponente).|  
|[floatfield](#fmtflags)|Maschera di bit definita come `fixed` &#124; `scientific`|  
|[goodbit](#iostate)|Tutti i bit dello stato vengono cancellati.|  
|[hex](#fmtflags)|Specifica l'inserimento o l'estrazione di valori interi in formato esadecimale.|  
|[in](#openmode)|Specifica l'estrazione da un flusso.|  
|[internal](#fmtflags)|Inserendo caratteri di riempimento in un punto interno a un campo numerico generato, riempie la larghezza di un campo.|  
|[left](#fmtflags)|Specifica la giustificazione a sinistra.|  
|[oct](#fmtflags)|Specifica l'inserimento o l'estrazione di valori interi in formato ottale.|  
|[out](#openmode)|Specifica l'inserimento in un flusso.|  
|[right](#fmtflags)|Specifica la giustificazione a destra.|  
|[scientific](#fmtflags)|Specifica l'inserimento di valori a virgola mobile in formato a virgola fissa (con un campo dell'esponente).|  
|[showbase](#fmtflags)|Specifica l'inserimento di un prefisso che consente di visualizzare la base di un campo Integer generato.|  
|[showpoint](#fmtflags)|Specifica l'inserimento non condizionale di un punto decimale in un campo a virgola mobile generato.|  
|[showpos](#fmtflags)|Specifica l'inserimento di un segno più in un campo numerico generato non negativo.|  
|[skipws](#fmtflags)|Specifica di ignorare lo spazio vuoto iniziale prima di determinate estrazioni.|  
|[trunc](#openmode)|Specifica l'eliminazione di contenuti di un file esistente quando viene creato l'oggetto di controllo.|  
|[unitbuf](#fmtflags)|Provoca lo scaricamento dell'output dopo ogni inserimento.|  
|[uppercase](#fmtflags)|Specifica l'inserimento di equivalenti in lettere maiuscole di lettere minuscole in determinati inserimenti.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[failure](#failure)|Classe membro che svolge la funzione di classe di base per tutte le eccezioni generate dalla funzione membro [clear](../standard-library/basic-ios-class.md#clear) nella classe modello [basic_ios](../standard-library/basic-ios-class.md).|  
|[flags](#flags)|Imposta o restituisce le impostazioni dei flag correnti.|  
|[getloc](#getloc)|Restituisce l'oggetto delle impostazioni locali archiviate.|  
|[imbue](#imbue)|Modifica le impostazioni locali.|  
|[Init](#init)|Crea gli oggetti iostream standard al momento della costruzione.|  
|[iword](#iword)|Assegna un valore da archiviare come un `iword`.|  
|[precision](#precision)|Specifica il numero di cifre da visualizzare in un numero a virgola mobile.|  
|[pword](#pword)|Assegna un valore da archiviare come un `pword`.|  
|[register_callback](#register_callback)|Specifica una funzione di callback.|  
|[setf](#setf)|Imposta i flag specificati.|  
|[sync_with_stdio](#sync_with_stdio)|Assicura che le operazioni della libreria di runtime iostream e C vengano eseguite nell'ordine in cui appaiono nel codice sorgente.|  
|[unsetf](#unsetf)|Provoca la disattivazione dei flag specificati.|  
|[width](#width)|Imposta la lunghezza del flusso di output.|  
|[xalloc](#xalloc)|Specifica che una variabile deve far parte del flusso.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator=](#op_eq)|L'operatore di assegnazione per gli oggetti `ios_base`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<ios>  
  
 **Spazio dei nomi:** std  
  
##  <a name="event"></a>  ios_base::event  
 Specifica i tipi di evento.  
  
```  
enum event {
    erase_event,
    imbue_event,
    copyfmt_event};  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è costituito da un tipo non enumerato che descrive un oggetto in grado di archiviare l'evento di callback usato come argomento di una funzione registrata con [register_callback](#register_callback). I valori distinti degli eventi sono:  
  
- **copyfmt_event** per identificare un callback che si verifica in prossimità della fine di una chiamata a [copyfmt](../standard-library/basic-ios-class.md#copyfmt), immediatamente prima che venga copiata la [maschera di eccezione](../standard-library/ios-base-class.md).  
  
- **erase_event** per identificare un callback che si verifica all'inizio di una chiamata a [copyfmt](../standard-library/basic-ios-class.md#copyfmt) o all'inizio di una chiamata al distruttore di **\*this**.  
  
- **imbue_event** per identificare un callback che si verifica alla fine di una chiamata a [imbue](#imbue), immediatamente prima che venga restituita la funzione.  
  
### <a name="example"></a>Esempio  
  
  Vedere [register_callback](#register_callback) per un esempio.  
  
##  <a name="event_callback"></a>  ios_base::event_callback  

 Descrive una funzione passata a [register_call](#register_callback).  
  
```  
typedef void (__cdecl *event_callback)(
    event _E,  
    ios_base& _Base,  
    int _I);
```  
  
### <a name="parameters"></a>Parametri  
 *_E*  
 [Evento](#event).  
  
 `_Base`  
 Flusso in cui è stato chiamato l'evento.  
  
 *_I*  
 Numero definito dall'utente.  
  
### <a name="remarks"></a>Note  
  
 Il tipo descrive un puntatore a una funzione che può essere registrata con [register_callback](#register_callback). Questo tipo di funzione non deve generare un'eccezione.  
  
### <a name="example"></a>Esempio  
  
  Vedere [register_call](#register_callback) per un esempio d'uso di `event_callback`.  
  
##  <a name="failure"></a>  ios_base::failure  
  
 La classe `failure` definisce la classe di base per tutti i tipi di oggetti generati come eccezioni dalle funzioni della libreria `iostreams` per segnalare gli errori rilevati durante le operazioni del buffer del flusso.  
  
```  
namespace std {  
    class failure : public system_error {  
    public:  
        explicit failure(
            const string& _Message,  
            const error_code& _Code = io_errc::stream);

        explicit failure(
            const char* str,  
            const error_code& _Code = io_errc::stream);
    };
}  
```  
  
### <a name="remarks"></a>Note  

 Il valore restituito da `what()` è una copia di `_Message`, possibilmente aumentato con un test basato su `_Code`. Se `_Code` non viene specificato, il valore predefinito è `make_error_code(io_errc::stream)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_failure.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main ( )  
{  
    using namespace std;  
    fstream file;  
    file.exceptions(ios::failbit);  
    try  
    {  
        file.open( "rm.txt", ios_base::in );  
        // Opens nonexistent file for reading  
    }  
    catch( ios_base::failure f )  
    {  
        cout << "Caught an exception: " << f.what() << endl;  
    }  
}  
```  
  
```Output  
Caught an exception: ios_base::failbit set  
```  
  
##  <a name="flags"></a>  ios_base::flags  
  
 Imposta o restituisce le impostazioni dei flag correnti.  
  
```  
fmtflags flags() const;
fmtflags flags(fmtflags fmtfl);
```  
  
### <a name="parameters"></a>Parametri  
 `fmtfl`  
 Nuova impostazione `fmtflags`.  
  
### <a name="return-value"></a>Valore restituito  
  
 Impostazione `fmtflags` precedente o corrente.  
  
### <a name="remarks"></a>Note  
  
 Vedere [ios_base::fmtflags](#fmtflags) per un elenco dei flag.  
  
 La prima funzione membro restituisce i flag di formato archiviati. La seconda funzione membro archivia `fmtfl` nei flag di formato e restituisce il relativo valore archiviato precedente.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_flags.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main ( )  
{  
    using namespace std;  
    cout << cout.flags( ) << endl;  
    cout.flags( ios::dec | ios::boolalpha );  
    cout << cout.flags( );  
}    
```  
  
```Output  
513  
16896  
```  
  
##  <a name="fmtflags"></a>  ios_base::fmtflags  
  
 Costanti per specificare l'aspetto dell'output.  
  
```
class ios_base {  
public:  
   typedef implementation-defined-bitmask-type fmtflags;  
   static const fmtflags boolalpha;  
   static const fmtflags dec;  
   static const fmtflags fixed;  
   static const fmtflags hex;  
   static const fmtflags internal;  
   static const fmtflags left;  
   static const fmtflags oct;  
   static const fmtflags right;  
   static const fmtflags scientific;  
   static const fmtflags showbase;  
   static const fmtflags showpoint;  
   static const fmtflags showpos;  
   static const fmtflags skipws;  
   static const fmtflags unitbuf;  
   static const fmtflags uppercase;  
   static const fmtflags adjustfield;  
   static const fmtflags basefield;  
   static const fmtflags floatfield;  
   // ...  
};  
```  
  
### <a name="remarks"></a>Note  
  
 Supporta i manipolatori in [ios](../standard-library/ios.md).  
  
 Il tipo è un tipo maschera di bit che descrive un oggetto in grado di archiviare flag di formato. I valori flag distinti (elementi) sono:  
  
- `dec`, per inserire o estrarre i valori interi in formato decimale.  
  
- `hex`, per inserire o estrarre i valori interi in formato esadecimale.  
  
- `oct`, per inserire o estrarre i valori interi in formato ottale.  
  
- `showbase`, per inserire un prefisso che consente di visualizzare la base di un campo Integer generato.  
  
- `internal`, per riempire la larghezza del campo in base alle necessità inserendo caratteri di riempimento in un punto interno di un campo numerico generato. Per informazioni sull'impostazione della larghezza del campo, vedere [setw](../standard-library/iomanip-functions.md#setw).  
  
- `left`, per riempire la larghezza del campo in base alle necessità inserendo caratteri di riempimento alla fine di un campo generato (giustificazione a sinistra).  
  
- `right`, per riempire la larghezza del campo in base alle necessità inserendo caratteri di riempimento all'inizio di un campo generato (giustificazione a destra).  
  
- `boolalpha`, per inserire o estrarre oggetti di tipo `bool` come nomi (ad esempio `true` e `false`) anziché come valori numerici.  
  
- `fixed`, per inserire valori a virgola mobile in formato a virgola fissa (senza il campo dell'esponente).  
  
- `scientific`, per inserire valori a virgola mobile in formato scientifico (con un campo dell'esponente).  
  
- `showpoint`, per inserire in modo non condizionale un punto decimale in un campo a virgola mobile generato.  
  
- `showpos`, per inserire un segno più in un campo numerico generato non negativo.  
  
- `skipws`, per ignorare lo spazio vuoto iniziale prima di determinate estrazioni.  
  
- `unitbuf`, per scaricare l'output dopo ogni inserimento.  
  
- `uppercase`, per inserire gli equivalenti in lettere maiuscole di lettere minuscole in determinati inserimenti.  
  
 Inoltre, altri valori utili sono:  
  
- `adjustfield`, una maschera di bit definita come `internal` &#124; `left` &#124; `right`  
  
- `basefield`, definito come `dec` &#124; `hex` &#124; `oct`  
  
- `floatfield`, definito come `fixed` &#124; `scientific`  
  
 Per esempi di funzioni che modificano questi flag di formato, vedere [\<iomanip>](../standard-library/iomanip.md).  
  
##  <a name="getloc"></a>  ios_base::getloc  
  
 Restituisce l'oggetto delle impostazioni locali archiviate.  
  
```  
locale getloc() const;
```  
  
### <a name="return-value"></a>Valore restituito  
  
 Oggetto delle impostazioni locali archiviato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_getlock.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )  
{  
    using namespace std;  
    cout << cout.getloc( ).name( ).c_str( ) << endl;  
}  
```  
  
```Output  
C  
```  
  
##  <a name="imbue"></a>  ios_base::imbue  

 Modifica le impostazioni locali.  
  
```  
locale imbue(const locale& _Loc);
```  
  
### <a name="parameters"></a>Parametri  
 `_Loc`  
 Nuove impostazioni locali.  
  
### <a name="return-value"></a>Valore restituito  
  
 Impostazioni locali precedenti.  
  
### <a name="remarks"></a>Note  
  
 La funzione membro archivia `_Loc` nell'oggetto delle impostazioni locali e segnala l'evento di callback e `imbue_event`. Restituisce il valore archiviato precedente.  
  
### <a name="example"></a>Esempio  
  
  Vedere [basic_ios::imbue](../standard-library/basic-ios-class.md#imbue) per un esempio.  
  
##  <a name="init"></a>  ios_base::Init  
  
 Crea gli oggetti iostream standard al momento della costruzione.  
  
```  
class Init { };  
```
  
### <a name="remarks"></a>Note  
  
 La classe annidata descrive un oggetto la cui costruzione garantisce che gli oggetti iostream standard vengano creati correttamente, anche prima dell'esecuzione di un costruttore per un oggetto arbitrario statico.  
  
##  <a name="ios_base"></a>  ios_base::ios_base  
  
 Crea oggetti ios_base.  
  
```  
ios_base();
```  
  
### <a name="remarks"></a>Note  
  
 Il costruttore (protetto) non esegue alcuna operazione. Una chiamata successiva a **basic_ios::**[init](../standard-library/basic-ios-class.md#init) deve inizializzare l'oggetto prima che possa essere eliminato definitivamente. La classe ios_base, quindi, può essere usata in modo sicuro solo come classe di base per la classe modello [basic_ios](../standard-library/basic-ios-class.md).  
  
##  <a name="iostate"></a>  ios_base::iostate  
  
 Tipo di costanti che descrivono lo stato di un flusso.  
  
```  
class ios_base {  
public:  
   typedef implementation-defined-bitmask-type iostate;  
   static const iostate badbit;  
   static const iostate eofbit;  
   static const iostate failbit;  
   static const iostate goodbit;  
   // ...  
};  
```  
  
### <a name="remarks"></a>Note  
  
 Il tipo è costituito da un tipo maschera di bit che descrive un oggetto in grado di archiviare informazioni sullo stato del flusso. I valori flag distinti (elementi) sono:  
  
- `badbit`, per registrare una perdita di integrità del buffer del flusso.  
  
- `eofbit`, per registrare la fine del file durante l'estrazione da un flusso.  
  
- `failbit`, per registrare un errore per l'estrazione di un campo valido da un flusso.  
  
 Un valore utile è anche `goodbit`, in cui non è impostato nessuno dei bit indicati in precedenza ( `goodbit` è sempre zero).  
  
##  <a name="iword"></a>  ios_base::iword  
  
 Assegna un valore da archiviare come un `iword`.  
  
```  
long& iword(int idx);
```  
  
### <a name="parameters"></a>Parametri  
 `idx`  
 Indice del valore da archiviare come `iword`.  
  
### <a name="remarks"></a>Note  
  
 La funzione membro restituisce un riferimento all'elemento `idx` della matrice estendibile con elementi di tipo **long**. Tutti gli elementi sono effettivamente presenti e archiviano inizialmente il valore zero. Il riferimento restituito non è valido dopo la chiamata successiva a `iword` per l'oggetto, dopo che l'oggetto viene modificato da una chiamata in **basic_ios::**[copyfmt](../standard-library/basic-ios-class.md#copyfmt) o dopo che l'oggetto viene eliminato.  
  
 Se `idx` è negativo o se per l'elemento non è disponibile un'archiviazione univoca, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)**(badbit)** e restituisce un riferimento che potrebbe non essere univoco.  
  
 Per ottenere un indice univoco, da usare con tutti gli oggetti di tipo `ios_base`, chiamare [xalloc](#xalloc).  
  
### <a name="example"></a>Esempio  
  
  Vedere [xalloc](#xalloc) per un esempio di come usare `iword`.  
  
##  <a name="openmode"></a>  ios_base::openmode  
  
 Descrive come interagire con un flusso.  
  
```  
class ios_base {  
public:  
   typedef implementation-defined-bitmask-type iostate;  
   static const iostate badbit;  
   static const iostate eofbit;  
   static const iostate failbit;  
   static const iostate goodbit;  
   // ...  
};  
```  
  
### <a name="remarks"></a>Note  
  
 Il tipo è costituito da un `bitmask type` che descrive un oggetto in grado di archiviare la modalità di apertura per vari oggetti iostream. I valori flag distinti (elementi) sono:  
  
- **app**, per eseguire la ricerca alla fine di un flusso prima di ogni inserimento.  
  
- **ate**, per eseguire la ricerca alla fine di un flusso quando il relativo oggetto di controllo viene inizialmente creato.  
  
- **binary**, per leggere un file come flusso binario, anziché come flusso di testo.  
  
- **in**, per consentire l'estrazione da un flusso.  
  
- **out**, per consentire l'inserimento in un flusso.  
  
- **trunc**, per eliminare i contenuti di un file esistente quando viene creato l'oggetto di controllo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_openmode.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main ( )  
{  
    using namespace std;  
    fstream file;  
    file.open( "rm.txt", ios_base::out | ios_base::trunc );  
    
    file << "testing";  
}    
```  
  
##  <a name="op_eq"></a>  ios_base::operator=  

 L'operatore di assegnazione per oggetti ios_base.  
  
```  
ios_base& operator=(const ios_base& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto di tipo `ios_base`.  
  
### <a name="return-value"></a>Valore restituito  
  
 Oggetto destinatario dell'assegnazione.  
  
### <a name="remarks"></a>Note  
  
 L'operatore copia le informazioni di formattazione archiviate e crea così una nuova copia delle matrici estendibili. Restituisce quindi **\*this**. Tenere presente che lo stack di callback non viene copiato.  
  
 Questo operatore viene usato solo dalle classi derivate da `ios_base`.  
  
##  <a name="precision"></a>  ios_base::precision  
  
 Specifica il numero di cifre da visualizzare in un numero a virgola mobile.  
  
```  
streamsize precision() const;
streamsize precision(streamsize _Prec);
```  
  
### <a name="parameters"></a>Parametri  
 `_Prec`  
 Numero di cifre significative da visualizzare o numero di cifre dopo il separatore decimale nella notazione fissa.  
  
### <a name="return-value"></a>Valore restituito  
  
 La prima funzione membro restituisce la [precisione di visualizzazione](../standard-library/ios-base-class.md) archiviata. La seconda funzione membro archivia `_Prec` nella precisione di visualizzazione e restituisce il relativo valore precedente archiviato.  
  
### <a name="remarks"></a>Note  
  
 I numeri a virgola mobile vengono visualizzati nella notazione fissa con la funzione [fixed](../standard-library/ios-functions.md#fixed).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_precision.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )  
{  
    using namespace std;  
    float i = 31.31234F;  
    
    cout.precision( 3 );  
    cout << i << endl;          // display three significant digits  
    cout << fixed << i << endl; // display three digits after decimal  
                                // point  
}  
```  
  
```Output  
31.3  
31.312  
```  
  
##  <a name="pword"></a>  ios_base::pword  
  
 Assegna un valore da archiviare come un `pword`.  
  
```  
void *& pword(int _Idx);
```  
  
### <a name="parameters"></a>Parametri  
 `_Idx`  
 Indice del valore da archiviare come `pword`.  
  
### <a name="remarks"></a>Note  
  
 La funzione membro restituisce un riferimento all'elemento _ *Idx* della matrice estendibile con elementi di tipo puntatore `void`. Tutti gli elementi sono effettivamente presenti e archiviano inizialmente il puntatore Null. Il riferimento restituito non è valido dopo la chiamata successiva a `pword` per l'oggetto, dopo che l'oggetto viene modificato da una chiamata in **basic_ios::**[copyfmt](../standard-library/basic-ios-class.md#copyfmt) o dopo che l'oggetto viene eliminato.  
  
 Se _ *Idx* è negativo o se per l'elemento non è disponibile un'archiviazione univoca, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)**(badbit)** e restituisce un riferimento che potrebbe non essere univoco.  
  
 Per ottenere un indice univoco, da usare con tutti gli oggetti di tipo `ios_base`, chiamare [xalloc](#xalloc).  
  
### <a name="example"></a>Esempio  
  
  Vedere [xalloc](#xalloc) per un esempio d'uso di `pword`.  
  
##  <a name="register_callback"></a>  ios_base::register_callback  
  
 Specifica una funzione di callback.  
  
```  
void register_callback(
    event_callback pfn, int idx);
```  
  
### <a name="parameters"></a>Parametri  
 `pfn`  
 Puntatore alla funzione di callback.  
  
 `idx`  
 Numero definito dall'utente.  
  
### <a name="remarks"></a>Note  
  
 La funzione membro inserisce la coppia `{pfn, idx}` nello stack di callback stored [stack di callback](../standard-library/ios-base-class.md). Quando un evento di callback **ev** viene segnalato, le funzioni vengono chiamate in ordine inverso del Registro di sistema, dall'espressione `(*pfn)(ev, *this, idx)`.  
 
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_register_callback.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
using namespace std;  
  
void callback1( ios_base::event e, ios_base& stream, int arg )  
{  
    cout << "in callback1" << endl;  
    switch ( e )  
    {  
    case ios_base::erase_event:  
        cout << "an erase event" << endl;  
        break;  
    case ios_base::imbue_event:  
        cout << "an imbue event" << endl;  
        break;  
    case ios_base::copyfmt_event:  
        cout << "an copyfmt event" << endl;  
        break;  
    };  
}  
  
void callback2( ios_base::event e, ios_base& stream, int arg )  
{  
    cout << "in callback2" << endl;  
    switch ( e )  
    {  
    case ios_base::erase_event:  
        cout << "an erase event" << endl;  
        break;  
    case ios_base::imbue_event:  
        cout << "an imbue event" << endl;  
        break;  
    case ios_base::copyfmt_event:  
        cout << "an copyfmt event" << endl;  
        break;  
    };  
}  
  
int main( )  
{  
    // Make sure the imbue will not throw an exception  
    // assert( setlocale( LC_ALL, "german" )!=NULL );  
    
    cout.register_callback( callback1, 0 );  
    cin.register_callback( callback2, 0 );  
    
    try  
    {  
        // If no exception because the locale's not found,  
        // generate an imbue_event on callback1  
        cout.imbue(locale("german"));  
    }  
    catch(...)  
    {  
        cout << "exception" << endl;  
    }  
    
    // This will  
    // (1) erase_event on callback1  
    // (2) copyfmt_event on callback2  
    cout.copyfmt(cin);  
    
    // We get two erase events from callback2 at the end because  
    // both cin and cout have callback2 registered when cin and cout  
    // are destroyed at the end of program.  
}  
```  
  
```Output  
in callback1  
an imbue event  
in callback1  
an erase event  
in callback2  
an copyfmt event  
in callback2  
an erase event  
in callback2  
an erase event  
```  
 
##  <a name="seekdir"></a> ios_base::seekdir  
  
Specifica il punto iniziale per operazioni di offset.  
  
```  
namespace std {  
    class ios_base {  
    public:  
        typedef implementation-defined-enumerated-type seekdir;  
        static const seekdir beg;  
        static const seekdir cur;  
        static const seekdir end;  
        // ...  
    };  
}  
```  
 
### <a name="remarks"></a>Note  
  
Il tipo è un tipo enumerato che descrive un oggetto che può archiviare la modalità di ricerca utilizzata come argomenti alle funzioni membro delle classi iostream diversi. I valori flag distinti sono:  
 
- **beg**,   per eseguire la ricerca (modifica della posizione di lettura o scrittura corrente) relativa all'inizio di una sequenza (array,   flusso   o file).  
 
- **cur**,   per eseguire la ricerca relativa alla posizione corrente all'interno di una sequenza.  
 
- **end**,   per eseguire la ricerca relativa alla fine di una sequenza.  
 
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_seekdir.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <fstream>  
  
int main ( )  
{  
    using namespace std;  
    fstream file;  
    file.open( "rm.txt", ios_base::out | ios_base::trunc );  
    
    file << "testing";  
    file.seekp( 0, ios_base::beg );  
    file << "a";  
    file.seekp( 0, ios_base::end );  
    file << "a";  
}  
```  
  
##  <a name="setf"></a> ios_base::setf  
  
Imposta i flag specificati.  

```    
fmtflags setf(  
    fmtflags _Mask  
);  
fmtflags setf(  
    fmtflags _Mask,  
    fmtflags _Unset  
);  
```  
 
### <a name="parameters"></a>Parametri  
 `_Mask`  
    Flag da attivare.  
 
 *_Unset* i flag da disattivare.  
 
### <a name="return-value"></a>Valore restituito  
    The previous format flags  
 
### <a name="remarks"></a>Note  
    The first member function effectively calls [flags](#flags)(_ *Mask* &#124; \_ *Flags*) (set selected bits) and then returns the previous format flags. The second member function effectively calls **flags**(\_ *Mask* **& fmtfl, flags& ~**`_Mask`) (replace selected bits under a mask) and then returns the previous format flags.  
 
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_setf.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( )  
{  
    using namespace std;  
    int i = 10;  
    cout << i << endl;  
    
    cout.unsetf( ios_base::dec );  
    cout.setf( ios_base::hex );  
    cout << i << endl;  
    
    cout.setf( ios_base::dec );  
    cout << i << endl;  
    cout.setf( ios_base::hex, ios_base::dec );  
    cout << i << endl;  
}  
```  
 
##  <a name="sync_with_stdio"></a> ios_base::sync_with_stdio  
  
Assicura che le operazioni della libreria di runtime iostream e C vengano eseguite nell'ordine in cui appaiono nel codice sorgente.  
  
```  
static bool sync_with_stdio(  
   bool _Sync = true  
);  
```  
 
### <a name="parameters"></a>Parametri  
 `_Sync`  
    Se tutti i flussi sono sincronizzati con **stdio**.  
 
### <a name="return-value"></a>Valore restituito  
    Previous setting for this function.  
 
### <a name="remarks"></a>Note  
    The static member function stores a **stdio** sync flag, which is initially **true**. When **true**, this flag ensures that operations on the same file are properly synchronized between the [iostreams](../standard-library/iostreams-conventions.md) functions and those defined in the C++ Standard Library. Otherwise, synchronization may or may not be guaranteed, but performance may be improved. The function stores `_Sync` in the **stdio** sync flag and returns its previous stored value. You can call it reliably only before performing any operations on the standard streams.  
 
##  <a name="unsetf"></a> ios_base::unsetf  
  
Provoca la disattivazione dei flag specificati.  
  
```  
void unsetf(  
   fmtflags _Mask  
);  
```  
 
### <a name="parameters"></a>Parametri  
 `_Mask`  
    Flag che si vuole disattivare.  
 
### <a name="remarks"></a>Note  
    The member function effectively calls [flags](#flags)(`~`*_Mask* **& flags**) (clear selected bits).  
 
### <a name="example"></a>Esempio  
    See [ios_base::setf](#setf) for a sample of using `unsetf`.  
 
##  <a name="width"></a> ios_base::width  
  
Imposta la lunghezza del flusso di output.  
  
```  
streamsize width( ) const;  
streamsize width(  
   streamsize _Wide  
);  
```  
 
### <a name="parameters"></a>Parametri  
 `_Wide`  
    Dimensione desiderata del flusso di output.  
 
### <a name="return-value"></a>Valore restituito  

    The current width setting.  
 
### <a name="remarks"></a>Note  

    The first member function returns the stored field width. The second member function stores `_Wide` in the field width and returns its previous stored value.  
 
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_width.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main( ) {  
    using namespace std;  
    
    cout.width( 20 );  
    cout << cout.width( ) << endl;  
    cout << cout.width( ) << endl;  
}  
```  
  
```Output  
20  
0  
```  
 
##  <a name="xalloc"></a> ios_base::xalloc  
  
    Specifies that a variable is part of the stream.  
  
```  
static int xalloc( );  
```  
 
### <a name="return-value"></a>Valore restituito  
    The static member function returns a stored static value, which it increments on each call.  
 
### <a name="remarks"></a>Note  
    You can use the return value as a unique index argument when calling the member functions [iword](#iword) or [pword](#pword).  
 
### <a name="example"></a>Esempio  
  
```cpp  
// ios_base_xalloc.cpp  
// compile with: /EHsc  
// Lets you store user-defined information.  
// iword, jword, xalloc  
#include <iostream>  
  
int main( )  
{  
    using namespace std;  
    
    static const int i = ios_base::xalloc();  
    static const int j = ios_base::xalloc();  
    cout.iword( i ) = 11;  
    cin.iword( i ) = 13;  
    cin.pword( j ) = "testing";  
    cout << cout.iword( i ) << endl;  
    cout << cin.iword( i ) << endl;  
    cout << ( char * )cin.pword( j ) << endl;  
}    
```  
  
```Output  
11  
13  
testing  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)
