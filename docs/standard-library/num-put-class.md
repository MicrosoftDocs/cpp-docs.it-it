---
title: "Classe num_put | Microsoft Docs"
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
  - "std::num_put"
  - "xlocnum/std::num_put"
  - "num_put"
  - "std.num_put"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "num_put (classe)"
ms.assetid: 36c5bffc-8283-4201-8ed4-78c4d81f8a17
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe num_put
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori numerici in sequenze di tipo `CharType`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class CharType,  
    class OutputIterator = ostreambuf_iterator<CharType>>  
class num_put : public locale::facet;  
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.  
  
 `OutputIterator`  
 Tipo di iteratore in cui le funzioni Put numeriche scrivono il proprio output.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato archivia un valore positivo univoco in **id.**  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[num_put](#num_put__num_put)|Costruttore per oggetti di tipo `num_put`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#num_put__char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter_type](#num_put__iter_type)|Tipo che descrive un iteratore di output.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[do_put](#num_put__do_put)|Funzione virtuale chiamata per convertire un numero in una sequenza di `CharType` che rappresenta il numero formattato per le impostazioni locali specificate.|  
|[inserire](#num_put__put)|Converte un numero in una sequenza di `CharType` che rappresenta il numero formattato per le impostazioni locali specificate.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namenumputchartypea-numputchartype"></a><a name="num_put__char_type"></a>  num_put:: char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```  
typedef CharType char_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="a-namenumputdoputa-numputdoput"></a><a name="num_put__do_put"></a>  num_put:: do_put  
 Una funzione virtuale chiamata per convertire un numero in una sequenza di **CharType**che rappresenta il numero formattato per impostazioni locali specificate.  
  
```  
virtual iter_type do_put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    bool val) const;

 
virtual iter_type do_put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    long val) const;

 
virtual iter_type do_put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    unsigned long val) const;

 
virtual iter_type do_put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    double val) const;

 
virtual iter_type do_put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    long double val) const;

 
virtual iter_type do_put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    const void* val) const;

 
virtual iter_type do_put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    const long long val) const;

virtual iter_type do_put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    const unsigned long long val) const;
```  
  
### <a name="parameters"></a>Parametri  
 ` next`  
 Un iteratore che punta al primo elemento della stringa inserita.  
  
 `_Iosbase`  
 Specificare il flusso che contiene impostazioni locali con il facet numpunct utilizzato per punctuate i flag per la formattazione dell'output e output.  
  
 `_Fill`  
 Carattere utilizzato per la spaziatura.  
  
 ` val`  
 Il numero o tipo Boolean che verrà visualizzati.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di output prodotta la prima posizione oltre l'ultimo elemento gli indirizzi.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro virtuale protetta genera elementi sequenziali a partire da ` next` per produrre un campo di output integer dal valore di ` val`. La funzione restituisce un iteratore che designa la posizione successiva per inserire un elemento dopo il campo di output numero intero generato.  
  
 Il campo di output di tipo integer viene generato dalle stesse regole utilizzate dalle funzioni di stampa per la generazione di una serie di `char` elementi in un file. Ciascun elemento char equivale a eseguire il mapping a un elemento equivalente del tipo **CharType** da un mapping semplice e uno a uno. Se una funzione di stampa aggiunge un campo con spazi o con la cifra 0, tuttavia, `do_put` utilizza invece **riempimento**. La specifica di conversione stampa equivalente viene determinata come segue:  
  
-   Se **iosbase**. [flag](../standard-library/ios-base-class.md#ios_base__flags) & `ios_base::basefield` == `ios_base::`[ottobre](../Topic/%3Cios%3E%20functions.md#oct), la specifica di conversione è **lo**.  
  
-   Se **iosbase.flags** & **ios_base** == `ios_base::`[esadecimale](../Topic/%3Cios%3E%20functions.md#hex), la specifica di conversione è **lx**.  
  
-   In caso contrario, la specifica di conversione è **ld**.  
  
 Se **iosbase**. [Larghezza](../standard-library/ios-base-class.md#ios_base__width) è diverso da zero, una larghezza di campo di questo valore viene anteposto. Quindi chiama la funzione **iosbase**. **Larghezza**(0) per reimpostare la larghezza del campo a zero.  
  
 Spaziatura interna viene applicata solo se il numero minimo di elementi *N* è necessario specificare il campo di output è minore di **iosbase**. [Larghezza](../standard-library/ios-base-class.md#ios_base__width). Tale riempimento è costituito da una sequenza di *N* - **larghezza** copie di **riempimento**. Padding quindi avviene nel modo seguente:  
  
-   Se **iosbase**. **flag** & `ios_base::adjustfield` == `ios_base::`[sinistro](../Topic/%3Cios%3E%20functions.md#left), il flag **-** viene anteposto. (La spaziatura interna si verifica dopo il testo generato).  
  
-   Se **iosbase.flags** & **ios_base::adjustfield** == `ios_base::`[interno](../Topic/%3Cios%3E%20functions.md#internal), il flag **0** viene anteposto. (Per un campo di output numerica, la spaziatura interna si verifica in cui le funzioni di stampa riempire con 0.)  
  
-   In caso contrario, non viene anteposto alcun flag aggiuntivi. (La spaziatura interna si verifica prima della sequenza generata).  
  
 Infine:  
  
-   Se **iosbase**. **flag** & `ios_base::`[showpos](../Topic/%3Cios%3E%20functions.md#showpos) è diverso da zero, il flag **+** viene anteposto alla specifica di conversione.  
  
-   Se **iosbase**. **flag** & **ios_base::**[showbase](../Topic/%3Cios%3E%20functions.md#showbase) è diverso da zero, il flag **#** viene anteposto alla specifica di conversione.  
  
 Il formato di un intero campo ulteriormente varia a seconda di output di [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class)**/FAc** restituito dalla chiamata [use_facet](../Topic/%3Clocale%3E%20functions.md#use_facet) < [numpunct](../standard-library/numpunct-class.md)\< **Elem**> ( **iosbase**. [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). In particolare:  
  
- **FAc**. [raggruppamento](../standard-library/numpunct-class.md#numpunct__grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale  
  
- **FAc**. [thousands_sep](../standard-library/numpunct-class.md#numpunct__thousands_sep) determina la sequenza che separa i gruppi di cifre a sinistra della virgola decimale  
  
 Se nessun vincolo raggruppamento è imposte da **/FAc**. **raggruppamento** (il primo elemento include il valore CHAR_MAX), quindi non esistono istanze di **/FAc**. `thousands_sep` vengono generati nel campo di output. In caso contrario, dopo la conversione di stampa sono inseriti separatori.  
  
 La seconda funzione membro virtuale protetta:  
  
```  
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,  
    CharType _Fill,
    unsigned long val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che sostituisce una specifica di conversione **ld** con **lu**.  
  
 La terza funzione membro virtuale protetta:  
  
```  
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,  
    CharType _Fill,
    double val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che produce un campo di output a virgola mobile e dal valore di **val**. **FAc**. [decimal_point](../standard-library/numpunct-class.md#numpunct__decimal_point) determina la sequenza che separa le cifre frazionarie di cifre intere. La specifica di conversione stampa equivalente viene determinata come segue:  
  
-   Se **iosbase**. **flag** & `ios_base::floatfield` == `ios_base::`[fissa](../Topic/%3Cios%3E%20functions.md#fixed), la specifica di conversione è **lf**.  
  
-   Se **iosbase**. **flag** & **ios_base::floatfield** == `ios_base::`[scientifico](../Topic/%3Cios%3E%20functions.md#scientific), la specifica di conversione è `le`. Se **iosbase**. **flag** & `ios_base::`[maiuscolo](../Topic/%3Cios%3E%20functions.md#uppercase) è diverso da zero, **e** viene sostituito con **E**.  
  
-   In caso contrario, la specifica di conversione è **lg**. Se **iosbase**. **flag** & **ios_base::uppercase** è diverso da zero, **g** viene sostituito con **G**.  
  
 Se **iosbase**. **flag** & **ios_base::fixed** è diverso da zero o se **iosbase**. [precisione](../standard-library/ios-base-class.md#ios_base__precision) è maggiore di zero, una precisione con il valore **iosbase**. **precisione** viene anteposto alla specifica di conversione. Spaziatura interna si comporta come un campo di output di tipo integer. Il carattere di riempimento è **riempimento**. Infine:  
  
-   Se **iosbase**. **flag** & `ios_base::`[showpos](../Topic/%3Cios%3E%20functions.md#showpos) è diverso da zero, il flag **+** viene anteposto alla specifica di conversione.  
  
-   Se **iosbase**. **flag** & `ios_base::`[showpoint](../Topic/%3Cios%3E%20functions.md#showpoint) è diverso da zero, il flag **#** viene anteposto alla specifica di conversione.  
  
 La quarta funzione membro virtuale protetta:  
  
```  
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,  
    CharType _Fill,
    long double val) const;
```  
  
 si comporta il terzo, con la differenza che il qualificatore **l** nella conversione specifica viene sostituita con **L**.  
  
 La funzione membro virtuale protetta quinta:  
  
```  
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,  
    CharType _Fill,
    const void* val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che la specifica di conversione è `p`**,** plus qualsiasi qualificatore necessarie per specificare la spaziatura interna.  
  
 La funzione membro virtuale protetta sesta:  
  
```  
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,  
    CharType _Fill,
    bool val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che genera un campo booleano output da ` val`.  
  
 Un campo booleano output accetta uno dei due formati. Se **iosbase**. **flag** & `ios_base::`[boolalpha](../Topic/%3Cios%3E%20functions.md#boolalpha) è **false**, la funzione membro restituisce `do_put`(_ *Avanti*, \_ *Iosbase*, \_ *riempimento*, ( **lungo**) ` val`), che in genere produce una sequenza di valori validi sono 0 generata (per **false**) o 1 (per **true**). In caso contrario, la sequenza generata è **/FAc**. [falsename](../standard-library/numpunct-class.md#numpunct__falsename)`)` (per **false**), o **/FAc**. [truename](../standard-library/numpunct-class.md#numpunct__truename) (per **true**).  
  
 La funzione membro virtuale protetta settima:  
  
```  
virtual iter_type do_put(iter_type next,
    ios_base& iosbase,  
    Elem fill,
    long long val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che sostituisce una specifica di conversione **ld** con **lld**.  
  
 La funzione membro virtuale protetta ottava:  
  
```  
virtual iter_type do_put(iter_type next,
    ios_base& iosbase,  
    Elem fill,
    unsigned long long val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che sostituisce una specifica di conversione `ld` con `llu`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [inserire](#num_put__put), che chiama `do_put`.  
  
##  <a name="a-namenumputitertypea-numputitertype"></a><a name="num_put__iter_type"></a>  num_put:: iter_type  
 Tipo che descrive un iteratore di output.  
  
```  
typedef OutputIterator iter_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **OutputIterator.**  
  
##  <a name="a-namenumputnumputa-numputnumput"></a><a name="num_put__num_put"></a>  num_put:: num_put  
 Costruttore per oggetti di tipo `num_put`.  
  
```  
explicit num_put(size_t _Refs = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `_Refs`  
 Valore integer utilizzato per specificare il tipo di gestione della memoria per l'oggetto.  
  
### <a name="remarks"></a>Note  
 I valori possibili per il `_Refs` parametro e il loro significato sono:  
  
-   0: la durata dell'oggetto è gestita da impostazioni locali che contengono.  
  
-   1: la durata dell'oggetto deve essere gestita manualmente.  
  
-   \> 0: questi valori non definiti.  
  
 Nessun esempi diretti sono possibili, poiché il distruttore è protetto.  
  
 Il costruttore inizializza il relativo oggetto di base con **delle impostazioni locali::**[facet](../standard-library/locale-class.md#facet_class)(_ *Refs*).  
  
##  <a name="a-namenumputputa-numputput"></a><a name="num_put__put"></a>  num_put:: Put  
 Converte un numero in una sequenza di **CharType**che rappresenta il numero formattato per impostazioni locali specificate.  
  
```  
iter_type put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    bool val) const;

 
iter_type put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    long val) const;

 
iter_type put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    unsigned long val) const;

 
iter_type put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    Long long val) const;

 
iter_type put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    Unsigned long long val) const;

 
 
iter_type put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    double val) const;

 
iter_type put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    long double val) const;

 
iter_type put(
    iter_type dest,  
    ios_base& _Iosbase,  
    _Elem _Fill,  
    const void* val) const;
```  
  
### <a name="parameters"></a>Parametri  
 ` dest`  
 Un iteratore che punta al primo elemento della stringa inserita.  
  
 `_Iosbase`  
 Specificare il flusso che contiene impostazioni locali con il facet numpunct utilizzato per punctuate i flag per la formattazione dell'output e output.  
  
 `_Fill`  
 Carattere utilizzato per la spaziatura.  
  
 ` val`  
 Il numero o tipo Boolean che verrà visualizzati.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di output prodotta la prima posizione oltre l'ultimo elemento gli indirizzi.  
  
### <a name="remarks"></a>Note  
 Restituiranno tutte le funzioni membro [do_put](#num_put__do_put)( ` next`, `_Iosbase`, `_Fill`, ` val`).  
  
### <a name="example"></a>Esempio  
  
```  
// num_put_put.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
   basic_stringstream<char> psz2;  
   ios_base::iostate st = 0;  
   long double fVal;  
   cout << "The thousands separator is: "   
        << use_facet < numpunct <char> >(loc).thousands_sep( )   
        << endl;  
  
   psz2.imbue( loc );  
   use_facet < num_put < char > >  
      ( loc ).put(basic_ostream<char>::_Iter(psz2.rdbuf( ) ),  
                    psz2, ' ', fVal=1000.67);  
  
   if ( st & ios_base::failbit )  
      cout << "num_put( ) FAILED" << endl;  
   else  
      cout << "num_put( ) = " << psz2.rdbuf( )->str( ) << endl;  
}  
```  
  
```Output  
The thousands separator is: .  
num_put( ) = 1.000,67  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\< impostazioni locali>](../standard-library/locale.md)   
 [Classe facet](../standard-library/locale-class.md#facet_class)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

