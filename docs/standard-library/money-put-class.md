---
title: "Classe money_put | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::money_put"
  - "xlocmon/std::money_put"
  - "money_put"
  - "std.money_put"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "money_put (classe)"
ms.assetid: f439fd56-c9b1-414c-95e1-66c918c6eee6
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe money_put
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori monetari in sequenze di tipo `CharType`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class CharType,  
    class OutputIterator = ostreambuf_iterator<CharType>>  
class money_put : public locale::facet;  
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.  
  
 `OutputIterator`  
 Tipo di iteratore in cui le funzioni Put monetarie scrivono il proprio output.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato archivia un valore positivo univoco in **id.**  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[money_put](#money_put__money_put)|Costruttore per oggetti di tipo `money_put`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#money_put__char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter_type](#money_put__iter_type)|Tipo che descrive un iteratore di output.|  
|[STRING_TYPE](#money_put__string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[do_put](#money_put__do_put)|Funzione virtuale chiamata per convertire un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.|  
|[inserire](#money_put__put)|Converte un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namemoneyputchartypea-moneyputchartype"></a><a name="money_put__char_type"></a>  money_put:: char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```  
typedef CharType char_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="a-namemoneyputdoputa-moneyputdoput"></a><a name="money_put__do_put"></a>  money_put:: do_put  
 Funzione virtuale chiamata per convertire un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.  
  
```  
virtual iter_type do_put(
    iter_type next,   
    bool _Intl,   
    ios_base& _Iosbase,  
    CharType _Fill,   
    const string_type& val) const;

 
virtual iter_type do_put(
    iter_type next,   
    bool _Intl,   
    ios_base& _Iosbase,  
    CharType _Fill,  
    long double val) const;
```  
  
### <a name="parameters"></a>Parametri  
 ` next`  
 Un iteratore che punta al primo elemento della stringa inserita.  
  
 `_Intl`  
 Valore booleano che indica il tipo del simbolo di valuta previsto nella sequenza: **true** se internazionali, **false** se nazionali.  
  
 `_Iosbase`  
 Flag di formato che quando impostato indica che il simbolo di valuta è facoltativo. in caso contrario, è necessario  
  
 `_Fill`  
 Un carattere utilizzato per la spaziatura.  
  
 ` val`  
 Un oggetto stringa da convertire.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di output prodotta la prima posizione oltre l'ultimo elemento gli indirizzi.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro virtuale protetta genera elementi sequenziali a partire da ` next` per produrre un campo di output monetario dal [string_type](#money_put__string_type) oggetto ` val`. La sequenza controllata da ` val` deve iniziare con uno o più cifre decimali, essere preceduti dal segno meno (-), che rappresenta la quantità. La funzione restituisce un iteratore che designa il primo elemento oltre il campo generato output monetario.  
  
 La seconda funzione membro virtuale protetta si comporta come la prima, tranne che converte in modo efficace primo ` val` in una sequenza di cifre decimali, essere preceduto da un segno meno, quindi converte tale sequenza come sopra.  
  
 Il formato di un campo di output monetario è determinato dal [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) /FAc restituito dalla chiamata (validità) [use_facet](../Topic/%3Clocale%3E%20functions.md#use_facet) < [moneypunct](../standard-library/moneypunct-class.md)\< **CharType**, **intl**>> ( **iosbase**. [getloc](../standard-library/ios-base-class.md#ios_base__getloc)).  
  
 In particolare:  
  
- **FAc**. [pos_format](../standard-library/moneypunct-class.md#moneypunct__pos_format) determina l'ordine in cui vengono generati i componenti del campo per un valore non negativo.  
  
- **FAc**. [neg_format](../standard-library/moneypunct-class.md#moneypunct__neg_format) determina l'ordine in cui vengono generati i componenti del campo per un valore negativo.  
  
- **FAc**. [curr_symbol](../standard-library/moneypunct-class.md#moneypunct__curr_symbol) determina la sequenza di elementi da generare per un simbolo di valuta.  
  
- **FAc**. [positive_sign](../standard-library/moneypunct-class.md#moneypunct__positive_sign) determina la sequenza di elementi per generare un segno positivo.  
  
- **FAc**. [negative_sign](../standard-library/moneypunct-class.md#moneypunct__negative_sign) determina la sequenza di elementi per generare un segno negativo.  
  
- **FAc**. [raggruppamento](../standard-library/moneypunct-class.md#moneypunct__grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
- **FAc**. [thousands_sep](../standard-library/moneypunct-class.md#moneypunct__thousands_sep) determina l'elemento che separa i gruppi di cifre a sinistra della virgola decimale.  
  
- **FAc**. [decimal_point](../standard-library/moneypunct-class.md#moneypunct__decimal_point) determina l'elemento che separa le cifre intere da eventuali cifre frazionarie.  
  
- **FAc**. [frac_digits](../standard-library/moneypunct-class.md#moneypunct__frac_digits) determina il numero di cifre significative frazione a destra della virgola decimale.  
  
 Se la stringa di accesso ( **/FAc**. `negative_sign` o **/FAc**. `positive_sign`) dispone di più di un elemento, il primo elemento viene generato in cui l'elemento uguale a **money_base::sign** viene visualizzato nel modello di formato ( **/FAc**. `neg_format` o **/FAc**. `pos_format`). Tutti gli elementi rimanenti vengono generati alla fine del campo output monetario.  
  
 Se **iosbase**. [flag](../standard-library/ios-base-class.md#ios_base__flags) & [showbase](../Topic/%3Cios%3E%20functions.md#showbase) è diverso da zero, la stringa **/FAc**. `curr_symbol` viene generato in cui l'elemento uguale a **money_base::symbol** viene visualizzato nel modello di formato. In caso contrario, non viene generato alcun simbolo di valuta.  
  
 Se nessun vincolo raggruppamento è imposte da **/FAc**. **raggruppamento** (il primo elemento include il valore CHAR_MAX), quindi non esistono istanze di **/FAc**. `thousands_sep` vengono generati nella parte del valore del campo output monetario (in cui l'elemento uguale a **money_base::value** viene visualizzato nel modello di formato). Se **/FAc**. `frac_digits` è zero, quindi alcuna istanza di **/FAc**. `decimal_point` viene generato dopo le cifre decimali. In caso contrario, il campo di output monetario risultante inserisce di ordine inferiore **/FAc**. `frac_digits` cifre decimali a destra del separatore decimale.  
  
 Spaziatura interna si verifica per qualsiasi campo di output numerici, tranne se **iosbase**. **flag** & **iosbase**. [interno](../Topic/%3Cios%3E%20functions.md#internal) è diverso da zero, qualsiasi interna spaziatura interna viene generato in cui l'elemento uguale a **money_base::space** viene visualizzato nel modello di formato, se viene visualizzato. Spaziatura interna in caso contrario, si verifica prima della sequenza generata. Il carattere di riempimento è **riempimento**.  
  
 Le chiamate di funzione **iosbase**. **Larghezza**(0) per reimpostare la larghezza del campo a zero.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [inserire](#money_put__put), in cui viene chiamata la funzione membro virtuale **inserire**.  
  
##  <a name="a-namemoneyputitertypea-moneyputitertype"></a><a name="money_put__iter_type"></a>  money_put:: iter_type  
 Tipo che descrive un iteratore di output.  
  
```  
typedef OutputIterator iter_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **OutputIterator.**  
  
##  <a name="a-namemoneyputmoneyputa-moneyputmoneyput"></a><a name="money_put__money_put"></a>  money_put:: money_put  
 Costruttore per oggetti di tipo `money_put`.  
  
```  
explicit money_put(size_t _Refs = 0);
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
  
 Il costruttore inizializza il relativo oggetto di base con **delle impostazioni locali::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).  
  
##  <a name="a-namemoneyputputa-moneyputput"></a><a name="money_put__put"></a>  money_put:: Put  
 Converte un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.  
  
```  
iter_type put(
    iter_type next,   
    bool _Intl,   
    ios_base& _Iosbase,  
    CharType _Fill,   
    const string_type& val) const;

 
iter_type put(
    iter_type next,   
    bool _Intl,   
    ios_base& _Iosbase,  
    CharType _Fill,  
    long double val) const;
```  
  
### <a name="parameters"></a>Parametri  
 ` next`  
 Un iteratore che punta al primo elemento della stringa inserita.  
  
 `_Intl`  
 Valore booleano che indica il tipo del simbolo di valuta previsto nella sequenza: **true** se internazionali, **false** se nazionali.  
  
 `_Iosbase`  
 Flag di formato che quando impostato indica che il simbolo di valuta è facoltativo. in caso contrario, è necessario  
  
 `_Fill`  
 Un carattere utilizzato per la spaziatura.  
  
 ` val`  
 Un oggetto stringa da convertire.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di output prodotta la prima posizione oltre l'ultimo elemento gli indirizzi.  
  
### <a name="remarks"></a>Note  
 Entrambe le funzioni membro restituiscono [do_put](#money_put__do_put)( ` next`, `_Intl`, `_Iosbase`, `_Fill`, ` val`).  
  
### <a name="example"></a>Esempio  
  
```  
// money_put_put.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
//   locale loc( "german_germany" );  
   locale loc( "english_canada" );  
   basic_stringstream<char> psz, psz2;  
   ios_base::iostate st = 0;  
  
   psz2.imbue( loc );  
   psz2.flags( psz2.flags( )|ios_base::showbase ); // force the printing of the currency symbol  
   use_facet < money_put < char > >(loc).put(basic_ostream<char>::_Iter( psz2.rdbuf( ) ), true, psz2, st, 100012);  
   if (st & ios_base::failbit)  
      cout << "money_put( ) FAILED" << endl;  
   else  
      cout << "money_put( ) = \"" << psz2.rdbuf( )->str( ) <<"\""<< endl;     
  
   st = 0;  
};  
```  
  
```Output  
money_put( ) = "CAD1,000.12"  
```  
  
##  <a name="a-namemoneyputstringtypea-moneyputstringtype"></a><a name="money_put__string_type"></a>  money_put:: STRING_TYPE  
 Un tipo che descrive una stringa contenente caratteri di tipo **CharType**.  
  
```  
typedef basic_string<CharType, Traits, Allocator> string_type;  
```  
  
### <a name="remarks"></a>Note  
 Tipo che descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare le sequenze di elementi dalla sequenza di origine.  
  
## <a name="see-also"></a>Vedere anche  
 [\< impostazioni locali>](../standard-library/locale.md)   
 [Classe facet](../standard-library/locale-class.md#facet_class)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

