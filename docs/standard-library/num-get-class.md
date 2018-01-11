---
title: Classe num_get | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xlocnum/std::num_get
- locale/std::num_get::char_type
- locale/std::num_get::iter_type
- locale/std::num_get::do_get
- locale/std::num_get::get
dev_langs: C++
helpviewer_keywords:
- std::num_get [C++]
- std::num_get [C++], char_type
- std::num_get [C++], iter_type
- std::num_get [C++], do_get
- std::num_get [C++], get
ms.assetid: 9933735d-3918-4b17-abad-5fca2adc62d7
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7437bfe26f95b57584f294a7280540014e4a1b85
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="numget-class"></a>Classe num_get
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
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id.**  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[num_get](#num_get)|Costruttore per oggetti di tipo `num_get` utilizzati per estrarre i valori numerici dalle sequenze.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter_type](#iter_type)|Tipo che descrive un iteratore di input.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[do_get](#do_get)|Funzione virtuale chiamata per estrarre un valore numerico o booleano da una sequenza di caratteri.|  
|[get](#get)|Estrae un tipo numerico o booleano da una sequenza di caratteri.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
##  <a name="char_type"></a>  num_get::char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```
typedef CharType char_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="do_get"></a>  num_get::do_get  
 Funzione virtuale chiamata per estrarre un valore numerico o booleano da una sequenza di caratteri.  
  
```
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long& val) const;
    
virtual iter_type do_get(
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
 [ios_base](../standard-library/ios-base-class.md) i cui flag vengono usati per la conversione.  
  
 `_State`  
 Lo stato a cui viene aggiunto failbit (vedere [ios_base:: iostate](../standard-library/ios-base-class.md#iostate)) in caso di errore.  
  
 `val`  
 Valore letto.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore dopo la lettura del valore.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro virtuale protetta  
  
```  
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long& val) const;
```  
  
 corrisponde a elementi sequenziali a partire dalla `first` nella sequenza `[first, last)` fino a quando non ha riconosciuto completa, un campo di input integer non vuoto. Se ha esito positivo, viene convertita in questo campo come tipo di valore equivalente `long`e archivia il risultato in `val`. Restituisce un iteratore che designa il primo elemento successivo al campo di input numerico. In caso contrario, la funzione non archivia niente in `val` e imposta `ios_base::failbit` in `state`. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo Integer valido. In entrambi i casi, se il valore restituito è uguale a `last`, la funzione imposta `ios_base::eofbit` in `state`.  
  
 Il campo di input di tipo Integer viene convertito in base alle stesse regole usate dalle funzioni di analisi per la corrispondenza e la conversione di una serie di elementi `char` da un file. Si presuppone che ciascun elemento `char` esegua il mapping a un elemento equivalente di tipo `Elem` tramite un semplice mapping uno a uno. La specifica di conversione di analisi equivalente viene determinata nel modo seguente:  
  
 Se `iosbase.`[ios_base::flags](../standard-library/ios-base-class.md#flags)`() & ios_base::basefield == ios_base::`[oct](../standard-library/ios-functions.md#oct), la specifica di conversione è `lo`.  
  
 Se `iosbase.flags() & ios_base::basefield == ios_base::`[hex](../standard-library/ios-functions.md#hex), la specifica di conversione è `lx`.  
  
 Se `iosbase.flags() & ios_base::basefield == 0`, la specifica di conversione è `li`.  
  
 In caso contrario, la specifica di conversione è `ld`.  
  
 Il formato di un campo di input di tipo Integer è determinato inoltre dal valore [locale facet](../standard-library/locale-class.md#facet_class)`fac` restituito dalla chiamata [use_facet](../standard-library/locale-functions.md#use_facet) `<`[numpunct](../standard-library/numpunct-class.md)`<Elem>(iosbase.` [ios_base::getloc](../standard-library/ios-base-class.md#getloc)`())`. In particolare:  
  
 `fac.` [numpunct::grouping](../standard-library/numpunct-class.md#grouping) `()` determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale  
  
 `fac.` [numpunct::thousands_sep](../standard-library/numpunct-class.md#thousands_sep) `()` determina la sequenza che separa gruppi di cifre a sinistra della virgola decimale.  
  
 Se non esistono istanze di `fac.thousands_sep()` nel campo di input numerico, non viene imposto alcun vincolo di raggruppamento. In caso contrario, vengono applicati i vincoli di raggruppamento imposti da `fac.grouping()` e i separatori vengono rimossi prima che venga eseguita la conversione dell'analisi.  
  
 La quarta funzione membro virtuale protetta:  
  
```  
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `lu`. Se ha esito positivo, la funzione converte il campo di input numerico in un valore di tipo `unsigned long` e archivia tale valore in `val`.  
  
 La quinta funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long long& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `lld`. Se ha esito positivo, la funzione converte il campo di input numerico in un valore di tipo `long long` e archivia tale valore in `val`.  
  
 La sesta funzione membro virtuale protetta:  
  
```  
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long long& val) const;
```  

 si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `llu`. Se ha esito positivo, la funzione converte il campo di input numerico in un valore di tipo `unsigned long long` e archivia tale valore in `val`.  
  
 La settima funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    float& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input a virgola mobile non vuoto. `fac.`[numpunct::decimal_point](../standard-library/numpunct-class.md#decimal_point)`()` determina la sequenza che separa le cifre intere dalle cifre frazionarie. L'identificatore della conversione di analisi equivalente è `lf`.  
  
 L'ottava funzione membro virtuale protetta:  
  
```  
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    double& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input a virgola mobile non vuoto. `fac.`[numpunct::decimal_point](../standard-library/numpunct-class.md#decimal_point)`()` determina la sequenza che separa le cifre intere dalle cifre frazionarie. L'identificatore della conversione di analisi equivalente è `lf`.  
  
 La nona funzione membro virtuale protetta:  
  
```  
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;
```  
  
 si comporta come l'ottava, ad eccezione del fatto che l'identificatore della conversione di analisi equivalente è `Lf`.  
  
 La funzione membro protetto virtuale decima:  
  
```  
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    void *& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che l'identificatore della conversione di analisi equivalente è `p`.  
  
 L'undicesima e ultima funzione membro virtuale protetta:  
  
```  
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    bool& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input booleano, completo e non vuoto. Se ha esito positivo, la funzione converte il campo di input booleano in un valore di tipo `bool` e archivia tale valore in `val`.  
  
 Un campo di input booleano ha una delle due forme seguenti. Se `iosbase.flags() & ios_base::`[boolalpha](../standard-library/ios-functions.md#boolalpha) è false, è uguale al campo di input di tipo Integer, ad eccezione del fatto che il valore convertito deve essere 0 (per false) o 1 (per true). In caso contrario, la sequenza deve corrispondere a `fac.`[numpunct::falsename](../standard-library/numpunct-class.md#falsename)`()` (per false) o a `fac.`[numpunct::truename](../standard-library/numpunct-class.md#truename)`()` (per true).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [get](#get), in cui la funzione membro virtuale viene chiamata da `do_get`.  
  
##  <a name="get"></a>  num_get::get  
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
 [ios_base](../standard-library/ios-base-class.md) i cui flag vengono usati per la conversione.  
  
 `_State`  
 Lo stato a cui viene aggiunto failbit (vedere [ios_base:: iostate](../standard-library/ios-base-class.md#iostate)) in caso di errore.  
  
 `val`  
 Valore letto.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore dopo la lettura del valore.  
  
### <a name="remarks"></a>Note  
 Tutte le funzioni membro restituiscono [do_get](#do_get)( `first`, `last`, `_Iosbase`, `_State`, `val`).  
  
 La prima funzione membro virtuale protetta cerca la corrispondenza con elementi sequenziali a partire dall'inizio nella sequenza [ `first`, `last`) fino a quando non viene riconosciuto un campo di input di tipo Integer completo e non vuoto. Se ha esito positivo, la funzione converte questo campo nel valore equivalente come tipo **long** e archivia il risultato in `val`. Restituisce un iteratore che designa il primo elemento successivo al campo di input numerico. In caso contrario, la funzione non archivia niente in `val` e imposta `ios_base::failbit` in _ *State*. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo Integer valido. In entrambi i casi, se il valore restituito è uguale a **last**, la funzione imposta `ios_base::eofbit` in `_State`.  
  
 Il campo di input di tipo Integer viene convertito in base alle stesse regole usate dalle funzioni di analisi per la corrispondenza e la conversione di una serie di elementi `char` da un file. Si presuppone che ciascun elemento `char` esegua il mapping a un elemento equivalente di tipo **CharType** tramite un semplice mapping uno a uno. La specifica di conversione di analisi equivalente viene determinata nel modo seguente:  
  
-   Se **iosbase**. [flags](../standard-library/ios-base-class.md#flags) & `ios_base::basefield` == `ios_base::`[oct](../standard-library/ios-functions.md#oct), la specifica di conversione è **lo**.  
  
-   Se **iosbase.flags** & **ios_base::basefield** == `ios_base::`[hex](../standard-library/ios-functions.md#hex), la specifica di conversione è **lx**.  
  
-   Se **iosbase.flags** & **ios_base::basefield** == 0, la specifica di conversione è `li`.  
  
-   In caso contrario, la specifica di conversione è **ld**.  
  
 Il formato di un campo di input di tipo Integer è determinato inoltre dal valore [locale facet](../standard-library/locale-class.md#facet_class)**fac** restituito dalla chiamata [use_facet](../standard-library/locale-functions.md#use_facet) < [numpunct](../standard-library/numpunct-class.md)\< **Elem**>( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)). In particolare:  
  
- **fac**. [grouping](../standard-library/numpunct-class.md#grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
- **fac**. [thousands_sep](../standard-library/numpunct-class.md#thousands_sep) determina la sequenza che separa gruppi di cifre a sinistra della virgola decimale.  
  
 Se non esistono istanze di **fac**. `thousands_sep` nel campo di input numerico, non viene imposto alcun vincolo di raggruppamento. In caso contrario, vengono applicati i vincoli di raggruppamento imposti da **fac**. **grouping** e i separatori vengono rimossi prima che venga eseguita la conversione di analisi.  
  
 La seconda funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    unsigned long& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di **ld** con **lu**. Se ha esito positivo, la funzione converte il campo di input numerico in un valore di tipo `unsigned long` e archivia tale valore in `val`.  
  
 La terza funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    double& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input a virgola mobile non vuoto. **fac**. [decimal_point](../standard-library/numpunct-class.md#decimal_point) determina la sequenza che separa le cifre intere dalle cifre frazionarie. L'identificatore della conversione di analisi equivalente è **lf**.  
  
 La quarta funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    long double& val) const;
```  
  
 si comporta come la terza, ad eccezione del fatto che l'identificatore della conversione di analisi equivalente è **Lf**.  
  
 La quinta funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    void *& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che l'identificatore della conversione di analisi equivalente è **p**.  
  
 La sesta funzione membro virtuale protetta:  
  
```
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& _Iosbase,
    ios_base::iostate& _State,
    bool& val) const;
```  
  
 si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input booleano, completo e non vuoto. Se ha esito positivo, la funzione converte il campo di input booleano in un valore di tipo `bool` e archivia tale valore in `val`.  
  
 Un campo di input booleano ha una delle due forme seguenti. Se **iosbase**. **flags** & `ios_base::`[boolalpha](../standard-library/ios-functions.md#boolalpha) è **false**, è uguale al campo di input di tipo Integer, ad eccezione del fatto che il valore convertito deve essere 0 (per **false**) o 1 (per **true**). In caso contrario, la sequenza deve essere uguale a **fac**. [falsename](../standard-library/numpunct-class.md#falsename) (per **false**) o a **fac**. [truename](../standard-library/numpunct-class.md#truename) (per **true**).  
  
### <a name="example"></a>Esempio  
  
```cpp  
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
  
##  <a name="iter_type"></a>  num_get::iter_type  
 Tipo che descrive un iteratore di input.  
  
```
typedef InputIterator iter_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **InputIterator**.  
  
##  <a name="num_get"></a>  num_get::num_get  
 Costruttore per oggetti di tipo `num_get` utilizzati per estrarre i valori numerici dalle sequenze.  
  
```
explicit num_get(size_t _Refs = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `_Refs`  
 Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.  
  
### <a name="remarks"></a>Note  
 I valori possibili per il parametro `_Refs` e i relativi significati sono:  
  
-   0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.  
  
-   1: la durata dell'oggetto deve essere gestita manualmente.  
  
-   \>1: questi valori non definiti.  
  
 Non è possibile fornire esempi diretti, poiché il distruttore è protetto.  
  
 Il costruttore inizializza l'oggetto di base con **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).  
  
## <a name="see-also"></a>Vedere anche  
 [\<locale>](../standard-library/locale.md)   
 [Classe facet](../standard-library/locale-class.md#facet_class)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)



