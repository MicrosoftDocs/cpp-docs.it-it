---
title: "Classe money_get | Microsoft Docs"
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
  - "xlocmon/std::money_get"
  - "money_get"
  - "std.money_get"
  - "std::money_get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "money_get (classe)"
ms.assetid: 692d3374-3fe7-4b46-8aeb-f8d91ed66b2e
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe money_get
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo `CharType` in valori monetari.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class CharType, class InputIterator = istreambuf_iterator<CharType>>  
class money_get : public locale::facet;
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.  
  
 `InputIterator`  
 Tipo di iteratore da cui le funzioni get leggono il relativo input.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato archivia un valore positivo univoco in **id.**  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[money_get](#money_get__money_get)|Costruttore per oggetti di tipo `money_get` utilizzati per estrarre i valori numerici dalle sequenze che rappresentano valori monetari.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#money_get__char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter_type](#money_get__iter_type)|Tipo che descrive un iteratore di input.|  
|[STRING_TYPE](#money_get__string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[do_get](#money_get__do_get)|Funzione virtuale chiamata per estrarre un valore numerico da una sequenza di caratteri che rappresenta un valore monetario.|  
|[Ottieni](#money_get__get)|Estrae un valore numerico da una sequenza di caratteri che rappresenta un valore monetario.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namemoneygetchartypea-moneygetchartype"></a><a name="money_get__char_type"></a>  money_get:: char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```
typedef CharType char_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="a-namemoneygetdogeta-moneygetdoget"></a><a name="money_get__do_get"></a>  money_get:: do_get  
 Funzione virtuale chiamata per estrarre un valore numerico da una sequenza di caratteri che rappresenta un valore monetario.  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    bool _Intl,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const virtual iter_type do_get(iter_type first,
    iter_type last,
    bool _Intl,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    string_type& val) const
```  
  
### <a name="parameters"></a>Parametri  
 `first`  
 Iteratore di input che indirizza l'inizio della sequenza da convertire.  
  
 `last`  
 Iteratore di input che punta alla fine della sequenza da convertire.  
  
 `_Intl`  
 Valore booleano che indica il tipo del simbolo di valuta previsto nella sequenza: **true** se internazionali, **false** se nazionali.  
  
 `_Iosbase`  
 Flag di formato che quando impostato indica che il simbolo di valuta è facoltativo. in caso contrario, è necessario.  
  
 `_State`  
 Imposta gli elementi di maschera di bit appropriate per lo stato di flusso in base a se le operazioni è riuscito o meno.  
  
 `val`  
 Archiviare la sequenza di convertire una stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di input che punta al primo elemento oltre il campo di input.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro virtuale protetta tenta di confrontare elementi sequenziali a partire dalla prima nella sequenza [ `first`, `last`) fino a quando non è riconosciuta completa, nonempty valuta nel campo di input. Se ha esito positivo, viene convertita in questo campo in una sequenza di uno o più cifre decimali, essere preceduto da un segno meno ( `–`), per rappresentare la quantità e archivia il risultato di [string_type](#money_get__string_type) oggetto `val`. Restituisce un iteratore che designa il primo elemento oltre il campo di input. In caso contrario, la funzione archivia una sequenza vuota in `val` e imposta `ios_base::failbit` in `_State`. Restituisce un iteratore che designa il primo elemento oltre qualsiasi prefisso di un campo di input valido. In entrambi i casi, se il valore restituito è uguale a `last`, la funzione imposta `ios_base::eofbit` in `_State`.  
  
 La seconda funzione membro virtuale protetta si comporta come il primo, ma in questo caso di esito positivo Converte la sequenza di cifre facoltativamente con segno in un valore di tipo `long double` e archivia tale valore in `val`.  
  
 Il formato di un campo di input è determinato dal [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class)**/FAc** restituito dalla chiamata effettiva [use_facet](../Topic/%3Clocale%3E%20functions.md#use_facet) < [moneypunct](../standard-library/moneypunct-class.md)\< **CharType**, **intl**>> ( **iosbase**. [getloc](../standard-library/ios-base-class.md#ios_base__getloc)).  
  
 In particolare:  
  
- **FAc**. [neg_format](../standard-library/moneypunct-class.md#moneypunct__neg_format) determina l'ordine in cui si verificano i componenti del campo.  
  
- **FAc**. [curr_symbol](../standard-library/moneypunct-class.md#moneypunct__curr_symbol) determina la sequenza di elementi che costituiscono un simbolo di valuta.  
  
- **FAc**. [positive_sign](../standard-library/moneypunct-class.md#moneypunct__positive_sign) determina la sequenza di elementi che costituiscono un segno positivo.  
  
- **FAc**. [negative_sign](../standard-library/moneypunct-class.md#moneypunct__negative_sign) determina la sequenza di elementi che costituiscono un segno negativo.  
  
- **FAc**. [raggruppamento](../standard-library/moneypunct-class.md#moneypunct__grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
- **FAc**. [thousands_sep](../standard-library/moneypunct-class.md#moneypunct__thousands_sep) determina l'elemento che separa i gruppi di cifre a sinistra della virgola decimale.  
  
- **FAc**. [decimal_point](../standard-library/moneypunct-class.md#moneypunct__decimal_point) determina l'elemento che separa le cifre frazionarie di cifre intere.  
  
- **FAc**. [frac_digits](../standard-library/moneypunct-class.md#moneypunct__frac_digits) determina il numero di cifre significative frazione a destra della virgola decimale. Durante l'analisi di un importo monetario con altre cifre frazionarie rispetto a quelli richiesti per `frac_digits`, `do_get` Arresta l'analisi dopo l'utilizzo al massimo `frac_digits` caratteri.  
  
 Se la stringa di accesso ( **/FAc**. `negative_sign` o **/FAc**. `positive_sign`) dispone di più di un elemento, il primo elemento corrispondente in cui l'elemento uguale a **money_base::sign** viene visualizzato nel modello di formato ( **/FAc**. `neg_format`). Alla fine del campo di input valuta vengono confrontati tutti gli elementi rimanenti. Se nessuna delle due stringhe è un primo elemento che corrisponde all'elemento successivo nel campo di input, la stringa di accesso viene eseguita come vuota e il segno è positivo.  
  
 Se **iosbase**. [flag](../standard-library/ios-base-class.md#ios_base__flags) & [showbase](../Topic/%3Cios%3E%20functions.md#showbase) è diverso da zero, la stringa **/FAc**. `curr_symbol` deve corrispondere in cui l'elemento uguale a **money_base::symbol** viene visualizzato nel modello di formato. In caso contrario, se **money_base::symbol** si verifica alla fine del modello di formato, e se nessun elemento della stringa di accesso per cui trovare una corrispondenza, il simbolo di valuta non corrisponde. In caso contrario, il simbolo di valuta, facoltativamente, esiste una corrispondenza.  
  
 Se non esistono istanze di **/FAc**. `thousands_sep` si verificano nella parte del valore del campo di input valuta (in cui l'elemento uguale a **money_base::value** viene visualizzato nel modello di formato), alcun vincolo di raggruppamento. In caso contrario, i vincoli di raggruppamento imposte da **/FAc**. **raggruppamento** viene applicata. Si noti che la sequenza di cifre risultante rappresenta un numero intero il cui ordine inferiore **/FAc**. `frac_digits` cifre decimali sono considerate a destra del separatore decimale.  
  
 Esiste una corrispondenza per uno spazio vuoto arbitrario in cui l'elemento uguale a **money_base::space** viene visualizzato nel modello di formato, se diverso da visualizzata alla fine del modello di formato. In caso contrario, non esiste una corrispondenza spazi interni. Un elemento *ch* è considerati spazi vuoti se [use_facet](../Topic/%3Clocale%3E%20functions.md#use_facet) < [ctype](../standard-library/ctype-class.md)\< **CharType**>> ( **iosbase**. [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). [è](../standard-library/ctype-class.md#ctype__is)( **ctype_base::space**, *ch*) è **true**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [ottenere](#money_get__get), che chiama `do_get`.  
  
##  <a name="a-namemoneygetgeta-moneygetget"></a><a name="money_get__get"></a>  money_get:: Get  
 Estrae un valore numerico da una sequenza di caratteri che rappresenta un valore monetario.  
  
```
iter_type get(iter_type first,
    iter_type last,
    bool _Intl,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;

iter_type get(iter_type first,
    iter_type last,
    bool _Intl,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    string_type& val) const;
```  
  
### <a name="parameters"></a>Parametri  
 `first`  
 Iteratore di input che indirizza l'inizio della sequenza da convertire.  
  
 `last`  
 Iteratore di input che punta alla fine della sequenza da convertire.  
  
 `_Intl`  
 Valore booleano che indica il tipo del simbolo di valuta previsto nella sequenza: **true** se internazionali, **false** se nazionali.  
  
 `_Iosbase`  
 Flag di formato che quando impostato indica che il simbolo di valuta è facoltativo. in caso contrario, è necessario  
  
 `_State`  
 Imposta gli elementi di maschera di bit appropriate per lo stato di flusso in base alle positivo o meno le operazioni.  
  
 `val`  
 Archiviare la sequenza di convertire una stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore di input che punta al primo elemento oltre il campo di input.  
  
### <a name="remarks"></a>Note  
 Entrambe le funzioni membro restituiscono [do_get](#money_get__do_get)( `first``,` `last``,` `_Intl`, `_Iosbase`, `_State`, `val`).  
  
### <a name="example"></a>Esempio  
  
```  
// money_get_get.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
  
int main( )  
{  
   locale loc( "german_germany" );  
  
   basic_stringstream< char > psz;  
   psz << use_facet<moneypunct<char, 1> >(loc).curr_symbol() << "-1.000,56";  
   basic_stringstream< char > psz2;  
   psz2 << "-100056" << use_facet<moneypunct<char, 1> >(loc).curr_symbol();  
  
   ios_base::iostate st = 0;  
   long double fVal;  
  
   psz.flags( psz.flags( )|ios_base::showbase );   
   // Which forced the READING the currency symbol  
   psz.imbue(loc);  
   use_facet < money_get < char > >( loc ).  
      get( basic_istream<char>::_Iter( psz.rdbuf( ) ),     
           basic_istream<char>::_Iter( 0 ), true, psz, st, fVal );  
  
   if ( st & ios_base::failbit )  
      cout << "money_get(" << psz.str( ) << ", intl = 1) FAILED"  
           << endl;  
   else  
      cout << "money_get(" << psz.str( ) << ", intl = 1) = "   
           << fVal/100.0 << endl;  
  
   use_facet < money_get < char > >( loc ).  
      get(basic_istream<char>::_Iter(psz2.rdbuf( )),     
          basic_istream<char>::_Iter(0), false, psz2, st, fVal);  
  
   if ( st & ios_base::failbit )  
      cout << "money_get(" << psz2.str( ) << ", intl = 0) FAILED"   
           << endl;  
   else  
      cout << "money_get(" << psz2.str( ) << ", intl = 0) = "   
           << fVal/100.0 << endl;  
};  
```  
  
##  <a name="a-namemoneygetitertypea-moneygetitertype"></a><a name="money_get__iter_type"></a>  money_get:: iter_type  
 Tipo che descrive un iteratore di input.  
  
```
typedef InputIterator iter_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **InputIterator**.  
  
##  <a name="a-namemoneygetmoneygeta-moneygetmoneyget"></a><a name="money_get__money_get"></a>  money_get:: money_get  
 Costruttore per oggetti di tipo `money_get` utilizzati per estrarre i valori numerici dalle sequenze che rappresentano valori monetari.  
  
```
explicit money_get(size_t _Refs = 0);
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
  
 Il costruttore inizializza il relativo oggetto di base con **delle impostazioni locali::**[facet](../standard-library/locale-class.md#facet_class)( **_***Refs*).  
  
##  <a name="a-namemoneygetstringtypea-moneygetstringtype"></a><a name="money_get__string_type"></a>  money_get:: STRING_TYPE  
 Un tipo che descrive una stringa contenente caratteri di tipo **CharType**.  
  
```
typedef basic_string<CharType, Traits, Allocator> string_type;
```  
  
### <a name="remarks"></a>Note  
 Tipo che descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md).  
  
## <a name="see-also"></a>Vedere anche  
 [\< impostazioni locali>](../standard-library/locale.md)   
 [Classe facet](../standard-library/locale-class.md#facet_class)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)



