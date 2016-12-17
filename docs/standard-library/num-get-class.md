---
title: "Classe num_get | Microsoft Docs"
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
  - "num_get"
  - "std::num_get"
  - "std.num_get"
  - "xlocnum/std::num_get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "num_get (classe)"
ms.assetid: 9933735d-3918-4b17-abad-5fca2adc62d7
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe num_get
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo `CharType` in valori numerici.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class CharType, class InputIterator = istreambuf_iterator<CharType>>  
class num_get : public locale::facet;
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.  
  
 `InputIterator`  
 Tipo di iteratore da cui le funzioni get numeric leggono il relativo input.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato archivia un valore positivo univoco in **id.**  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[num_get](#num_get__num_get)|Costruttore per oggetti di tipo `num_get` utilizzati per estrarre i valori numerici dalle sequenze.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#num_get__char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter_type](#num_get__iter_type)|Tipo che descrive un iteratore di input.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[do_get](#num_get__do_get)|Funzione virtuale chiamata per estrarre un valore numerico o booleano da una sequenza di caratteri.|  
|[Ottieni](#num_get__get)|Estrae un tipo numerico o booleano da una sequenza di caratteri.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namenumgetchartypea-numgetchartype"></a><a name="num_get__char_type"></a>  num_get:: char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```
typedef CharType char_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="a-namenumgetdogeta-numgetdoget"></a><a name="num_get__do_get"></a>  num_get:: do_get  
 Funzione virtuale chiamata per estrarre un valore numerico o booleano da una sequenza di caratteri.  
  
```
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long& val) const;virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned short& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned int& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    float& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    double& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    void *& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    bool& val) const;
```  
  
### <a name="parameters"></a>Parametri  
 `first`  
 Inizio dell'intervallo di caratteri da cui leggere il numero.  
  
 `last`  
 Fine dell'intervallo di caratteri da cui leggere il numero.  
  
 `_Iosbase`  
 Il [ios_base](../standard-library/ios-base-class.md) il cui flag vengono utilizzati per la conversione.  
  
 `_State`  
 Lo stato su cui failbit (vedere [ios_base:: iostate](../standard-library/ios-base-class.md#ios_base__iostate)) viene aggiunto al momento dell'errore.  
  
 `val`  
 Valore letto.  
  
### <a name="return-value"></a>Valore restituito  
 L'iteratore dopo il valore è stato letto.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro virtuale protetta,  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `long& val`  
  
 `) const;`  
  
 corrisponde a elementi sequenziali a partire dalla `first` nella sequenza `[``first``,` `last``)` fino a quando non è riconosciuta completa, non vuoto intero campo di input. Se ha esito positivo, viene convertita in questo campo al relativo valore equivalente come tipo `long``,` e archivia il risultato in `val`. Restituisce un iteratore che designa il primo elemento oltre il campo di input numerico. In caso contrario, la funzione Archivia nulla in `val` e imposta `ios_base::failbit` in `state`. Restituisce un iteratore che designa il primo elemento oltre qualsiasi prefisso di un campo di input numero intero valido. In entrambi i casi, se il valore restituito è uguale a `last`, la funzione imposta `ios_base::eofbit` in `state`.  
  
 Il campo di input di integer viene convertito utilizzando le stesse regole usate dalle funzioni di analisi per la corrispondenza e la conversione di una serie di `char` elementi da un file. (Ognuno di tali `char` elemento equivale a eseguire il mapping a un elemento equivalente del tipo `Elem` da un semplice, uno a uno, il mapping.) La specifica di conversione equivalente analisi viene determinata come segue:  
  
 Se `iosbase.`[ios_base:: Flags](../standard-library/ios-base-class.md#ios_base__flags)`() & ios_base::basefield == ios_base::`[ottobre](../Topic/%3Cios%3E%20functions.md#oct), la specifica di conversione è `lo`.  
  
 Se `iosbase.flags() & ios_base::basefield == ios_base::`[esadecimale](../Topic/%3Cios%3E%20functions.md#hex), la specifica di conversione è `lx`.  
  
 Se `iosbase.flags() & ios_base::basefield == 0`, la specifica di conversione è `li`.  
  
 In caso contrario, la specifica di conversione è `ld`.  
  
 Il formato di un campo di input di tipo integer è determinato inoltre dal [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class)`fac` restituito dalla chiamata [use_facet](../Topic/%3Clocale%3E%20functions.md#use_facet) `<`[numpunct](../standard-library/numpunct-class.md)`<Elem>(iosbase.` [ios_base:: getloc](../standard-library/ios-base-class.md#ios_base__getloc)`())`. In particolare:  
  
 `fac.` [numpunct:: Grouping](../standard-library/numpunct-class.md#numpunct__grouping) `()` Determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale  
  
 `fac.` [numpunct:: thousands_sep](../standard-library/numpunct-class.md#numpunct__thousands_sep) `()` Determina la sequenza che separa i gruppi di cifre a sinistra della virgola decimale.  
  
 Se non esistono istanze di `fac.thousands_sep()` si verificano nel campo di input numerico, alcun vincolo di raggruppamento. In caso contrario, i vincoli di raggruppamento imposte da `fac.grouping()` vengono applicate e i separatori vengono rimosse prima che venga eseguita la conversione di analisi.  
  
 La quarta funzione membro virtuale protetta:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `unsigned long& val`  
  
 `) const;`  
  
 si comporta come il primo, ad eccezione del fatto che sostituisce una specifica di conversione `ld` con `lu`. Se ha esito positivo converte il campo di input numerico in un valore di tipo `unsigned long` e archivia tale valore in `val`.  
  
 La funzione membro virtuale protetta quinta:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `long long& val`  
  
 `) const;`  
  
 si comporta come il primo, ad eccezione del fatto che sostituisce una specifica di conversione `ld` con `lld`. Se ha esito positivo converte il campo di input numerico in un valore di tipo `long long` e archivia tale valore in `val`.  
  
 La funzione membro virtuale protetta sesta:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `unsigned long long& val`  
  
 `) const;`  
  
 si comporta come il primo, ad eccezione del fatto che sostituisce una specifica di conversione `ld` con `llu`. Se ha esito positivo converte il campo di input numerico in un valore di tipo `unsigned long long` e archivia tale valore in `val`.  
  
 La funzione membro virtuale protetta settima:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `float& val`  
  
 `) const;`  
  
 si comporta come il primo, ad eccezione del fatto che saranno incentrati corrisponde a un campo di input a virgola mobile completato e non vuoto. `fac.`[numpunct:: decimal_point](../standard-library/numpunct-class.md#numpunct__decimal_point)`()` determina la sequenza che separa le cifre frazionarie di cifre intere. È l'identificatore di conversione analisi equivalente `lf`.  
  
 La funzione membro virtuale protetta ottava:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `double& val`  
  
 `) const;`  
  
 si comporta come il primo, ad eccezione del fatto che saranno incentrati corrisponde a un campo di input a virgola mobile completato e non vuoto. `fac.`[numpunct:: decimal_point](../standard-library/numpunct-class.md#numpunct__decimal_point)`()` determina la sequenza che separa le cifre frazionarie di cifre intere. È l'identificatore di conversione analisi equivalente `lf`.  
  
 La funzione membro virtuale protetta nona:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `long double& val`  
  
 `) const;`  
  
 si comporta come l'ottavo, ad eccezione del fatto che è l'identificatore di conversione analisi equivalente `Lf`.  
  
 La funzione membro virtuale protetta nona:  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `void *& val`  
  
 `) const;`  
  
 si comporta come il primo, ad eccezione del fatto che è l'identificatore di conversione analisi equivalente `p`.  
  
 L'ultima funzione membro protetto virtuale (undicesima):  
  
 `virtual iter_type do_get(`  
  
 `iter_type first,`  
  
 `iter_type last,`  
  
 `ios_base& _Iosbase,`  
  
 `ios_base::iostate& _State,`  
  
 `bool& val`  
  
 `) const;`  
  
 si comporta come il primo, ad eccezione del fatto che saranno incentrati corrisponde a un campo di input booleano completo e non vuoto. Se ha esito positivo converte il campo di input booleano in un valore di tipo `bool` e archivia tale valore in `val`.  
  
 Un campo di input booleano accetta uno dei due formati. Se `iosbase.flags() & ios_base::`[boolalpha](../Topic/%3Cios%3E%20functions.md#boolalpha) è false, è lo stesso come un campo di input di tipo integer, ad eccezione del fatto che il valore convertito deve essere 0 (false) o 1 (per l'impostazione true). In caso contrario, la sequenza deve corrispondere a uno `fac.`[numpunct:: falsename](../standard-library/numpunct-class.md#numpunct__falsename)`()` (FALSO), o `fac.`[numpunct:: truename](../standard-library/numpunct-class.md#numpunct__truename)`()` (per l'impostazione true).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [ottenere](#num_get__get), in cui la funzione membro virtuale viene chiamata da `do_get`.  
  
##  <a name="a-namenumgetgeta-numgetget"></a><a name="num_get__get"></a>  num_get:: Get  
 Estrae un tipo numerico o booleano da una sequenza di caratteri.  
  
```
iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    bool& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned short& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned int& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    float& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    double& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    void *& val) const;
```  
  
### <a name="parameters"></a>Parametri  
 `first`  
 Inizio dell'intervallo di caratteri da cui leggere il numero.  
  
 `last`  
 Fine dell'intervallo di caratteri da cui leggere il numero.  
  
 `_Iosbase`  
 Il [ios_base](../standard-library/ios-base-class.md) il cui flag vengono utilizzati per la conversione.  
  
 `_State`  
 Lo stato su cui failbit (vedere [ios_base:: iostate](../standard-library/ios-base-class.md#ios_base__iostate)) viene aggiunto al momento dell'errore.  
  
 `val`  
 Valore letto.  
  
### <a name="return-value"></a>Valore restituito  
 L'iteratore dopo il valore è stato letto.  
  
### <a name="remarks"></a>Note  
 Restituiranno tutte le funzioni membro [do_get](#num_get__do_get)( `first`, `last`, `_Iosbase`, `_State`, `val`).  
  
 La prima funzione membro virtuale protetta tenta di confrontare elementi sequenziali a partire dalla prima nella sequenza [ `first`, `last`) fino a quando non è riconosciuta completa, non vuoto intero campo di input. Se ha esito positivo, viene convertita in questo campo al relativo valore equivalente come tipo **lungo** e archivia il risultato in `val`. Restituisce un iteratore che designa il primo elemento oltre il campo di input numerico. In caso contrario, la funzione Archivia nulla in `val` e imposta `ios_base::failbit` in _ *stato*. Restituisce un iteratore che designa il primo elemento oltre qualsiasi prefisso di un campo di input numero intero valido. In entrambi i casi, se il valore restituito è uguale a **ultimo**, la funzione imposta `ios_base::eofbit` in `_State`.  
  
 Il campo di input di integer viene convertito utilizzando le stesse regole usate dalle funzioni di analisi per la corrispondenza e la conversione di una serie di `char` elementi da un file. Ognuno di tali `char` elemento equivale a eseguire il mapping a un elemento equivalente del tipo **CharType** da un mapping semplice e uno a uno. La specifica di conversione equivalente analisi viene determinata come segue:  
  
-   Se **iosbase**. [flag](../standard-library/ios-base-class.md#ios_base__flags) & `ios_base::basefield` == `ios_base::`[ottobre](../Topic/%3Cios%3E%20functions.md#oct), la specifica di conversione è **lo**.  
  
-   Se **iosbase.flags** & **ios_base** == `ios_base::`[esadecimale](../Topic/%3Cios%3E%20functions.md#hex), la specifica di conversione è **lx**.  
  
-   Se **iosbase.flags** & **ios_base** = = 0, la specifica di conversione è `li`.  
  
-   In caso contrario, la specifica di conversione è **ld**.  
  
 Il formato di un campo di input di tipo integer è determinato inoltre dal [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class)**/FAc** restituito dalla chiamata [use_facet](../Topic/%3Clocale%3E%20functions.md#use_facet) < [numpunct](../standard-library/numpunct-class.md)\< **Elem**> ( **iosbase**. [getloc](../standard-library/ios-base-class.md#ios_base__getloc)). In particolare:  
  
- **FAc**. [raggruppamento](../standard-library/numpunct-class.md#numpunct__grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
- **FAc**. [thousands_sep](../standard-library/numpunct-class.md#numpunct__thousands_sep) determina la sequenza che separa i gruppi di cifre a sinistra della virgola decimale.  
  
 Se non esistono istanze di **/FAc**. `thousands_sep` si verificano nel campo di input numerico, alcun vincolo di raggruppamento. In caso contrario, i vincoli di raggruppamento imposte da **/FAc**. **raggruppamento** viene applicata e i separatori vengono rimosse prima che venga eseguita la conversione di analisi.  
  
 La seconda funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long& val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che sostituisce una specifica di conversione **ld** con **lu**. Se ha esito positivo, converte il campo di input numerico in un valore di tipo `unsigned long` e archivia tale valore in `val`.  
  
 La terza funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    double& val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che tenta di far corrispondere un campo di input a virgola mobile completato e non vuoto. **FAc**. [decimal_point](../standard-library/numpunct-class.md#numpunct__decimal_point) determina la sequenza che separa le cifre frazionarie di cifre intere. È l'identificatore di conversione analisi equivalente **lf**.  
  
 La quarta funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;
```  
  
 si comporta il terzo, ad eccezione del fatto che è l'identificatore di conversione analisi equivalente **Lf**.  
  
 La funzione membro virtuale protetta quinta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    void *& val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che è l'identificatore di conversione analisi equivalente **p**.  
  
 La funzione membro virtuale protetta sesta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    bool& val) const;
```  
  
 si comporta come il primo, ad eccezione del fatto che tenta di far corrispondere un campo di input booleano completo e non vuoto. Se ha esito positivo converte il campo di input booleano in un valore di tipo `bool` e archivia tale valore in `val`.  
  
 Un campo di input booleano accetta uno dei due formati. Se **iosbase**. **flag** & `ios_base::`[boolalpha](../Topic/%3Cios%3E%20functions.md#boolalpha) è **false**, è lo stesso come un campo di input di tipo integer, ad eccezione del fatto che il valore convertito deve essere: 0 (per **false**) o 1 (per **true**). In caso contrario, la sequenza deve corrispondere a uno **/FAc**. [falsename](../standard-library/numpunct-class.md#numpunct__falsename) (per **false**), o **/FAc**. [truename](../standard-library/numpunct-class.md#numpunct__truename) (per **true**).  
  
### <a name="example"></a>Esempio  
  
```  
// num_get_get.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   basic_stringstream<char> psz, psz2;  
   psz << "-1000,56";  
  
   ios_base::iostate st = 0;  
   long double fVal;  
   cout << use_facet <numpunct <char> >(loc).thousands_sep( ) << endl;  
  
   psz.imbue( loc );  
   use_facet <num_get <char> >  
   (loc).get( basic_istream<char>::_Iter( psz.rdbuf( ) ),  
           basic_istream<char>::_Iter(0), psz, st, fVal );  
  
   if ( st & ios_base::failbit )  
      cout << "money_get( ) FAILED" << endl;  
   else  
      cout << "money_get( ) = " << fVal << endl;  
}  
```  
  
##  <a name="a-namenumgetitertypea-numgetitertype"></a><a name="num_get__iter_type"></a>  num_get:: iter_type  
 Tipo che descrive un iteratore di input.  
  
```
typedef InputIterator iter_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **InputIterator**.  
  
##  <a name="a-namenumgetnumgeta-numgetnumget"></a><a name="num_get__num_get"></a>  num_get:: num_get  
 Costruttore per oggetti di tipo `num_get` utilizzati per estrarre i valori numerici dalle sequenze.  
  
```
explicit num_get(size_t _Refs = 0);
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
  
## <a name="see-also"></a>Vedere anche  
 [\< impostazioni locali>](../standard-library/locale.md)   
 [Classe facet](../standard-library/locale-class.md#facet_class)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)



