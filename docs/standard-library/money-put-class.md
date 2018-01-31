---
title: Classe money_put | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xlocmon/std::money_put
- xlocmon/std::money_put::char_type
- xlocmon/std::money_put::iter_type
- xlocmon/std::money_put::string_type
- xlocmon/std::money_put::do_put
- xlocmon/std::money_put::put
dev_langs: C++
helpviewer_keywords:
- std::money_put [C++]
- std::money_put [C++], char_type
- std::money_put [C++], iter_type
- std::money_put [C++], string_type
- std::money_put [C++], do_put
- std::money_put [C++], put
ms.assetid: f439fd56-c9b1-414c-95e1-66c918c6eee6
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bd47afe55f1e2625dfe216afd6ef98cbcba7b21f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="moneyput-class"></a>Classe money_put
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
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id.**  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[money_put](#money_put)|Costruttore per oggetti di tipo `money_put`.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter_type](#iter_type)|Tipo che descrive un iteratore di output.|  
|[string_type](#string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[do_put](#do_put)|Funzione virtuale chiamata per convertire un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.|  
|[put](#put)|Converte un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
##  <a name="char_type"></a>  money_put::char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```  
typedef CharType char_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="do_put"></a>  money_put::do_put  
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
 `next`  
 Iteratore che punta al primo elemento della stringa inserita.  
  
 `_Intl`  
 Valore booleano che indica il tipo del simbolo di valuta previsto nella sequenza: **true** se internazionale, **false** se nazionale.  
  
 `_Iosbase`  
 Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario  
  
 `_Fill`  
 Carattere usato per la spaziatura.  
  
 `val`  
 Oggetto stringa da convertire.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore di output che punta alla posizione successiva all'ultimo elemento prodotto.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro virtuale protetta genera elementi sequenziali a partire da `next` per produrre un campo di input di tipo valuta dal valore di [string_type](#string_type) dell'oggetto `val`. La sequenza controllata da `val` deve iniziare con uno o più cifre decimali, preceduti facoltativamente da un segno meno (-), che rappresenta la quantità. La funzione restituisce un iteratore che designa il primo elemento dopo il campo di output di tipo valuta generato.  
  
 La seconda funzione membro virtuale protetta si comporta come la prima, ad eccezione del fatto che converte innanzitutto `val` in una sequenza di cifre decimali, preceduta in modo facoltativo da un segno meno, e quindi converte tale sequenza nel modo descritto in precedenza.  
  
 Il formato di un campo di output di tipo valuta è determinato dal valore fac [locale facet](../standard-library/locale-class.md#facet_class) restituito dalla chiamata effettiva [use_facet](../standard-library/locale-functions.md#use_facet) < [moneypunct](../standard-library/moneypunct-class.md)\< **CharType**, **intl**> >( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)).  
  
 In particolare:  
  
- **fac**. [pos_format](../standard-library/moneypunct-class.md#pos_format) determina l'ordine in cui i componenti del campo vengono generati per un valore non negativo.  
  
- **fac**. [neg_format](../standard-library/moneypunct-class.md#neg_format) determina l'ordine in cui i componenti del campo vengono generati per un valore negativo.  
  
- **fac**. [curr_symbol](../standard-library/moneypunct-class.md#curr_symbol) determina la sequenza di elementi da generare per un simbolo di valuta.  
  
- **fac**. [positive_sign](../standard-library/moneypunct-class.md#positive_sign) determina la sequenza di elementi da generare per un segno positivo.  
  
- **fac**. [negative_sign](../standard-library/moneypunct-class.md#negative_sign) determina la sequenza di elementi da generare per un segno negativo.  
  
- **fac**. [grouping](../standard-library/moneypunct-class.md#grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
- **fac**. [thousands_sep](../standard-library/moneypunct-class.md#thousands_sep) determina l'elemento che separa gruppi di cifre a sinistra della virgola decimale.  
  
- **fac**. [decimal_point](../standard-library/moneypunct-class.md#decimal_point) determina l'elemento che separa le cifre intere dalle cifre frazionarie.  
  
- **fac**. [frac_digits](../standard-library/moneypunct-class.md#frac_digits) determina il numero di cifre frazionarie significative a destra della virgola decimale.  
  
 Se la stringa segno ( **fac**. `negative_sign` o **fac**. `positive_sign`) contiene più di un elemento, viene generato solo il primo elemento, nel punto in cui l'elemento uguale a **money_base::sign** compare nel modello di formato ( **fac**. `neg_format` o **fac**. `pos_format`). Gli eventuali elementi restanti vengono generati alla fine del campo di output di tipo valuta.  
  
 Se **iosbase**. [flags](../standard-library/ios-base-class.md#flags) & [showbase](../standard-library/ios-functions.md#showbase) è diverso da zero, la stringa **fac**. `curr_symbol` viene generata nel punto in cui l'elemento uguale a **money_base::symbol** compare nel modello di formato. In caso contrario, non viene generato alcun simbolo di valuta.  
  
 Se **fac**. **grouping** (il primo elemento ha il valore CHAR_MAX) non impone alcun vincolo di raggruppamento, non verranno generate istanze di **fac**. `thousands_sep` nella parte valore del campo di output di tipo valuta, dove l'elemento uguale a **money_base::value** compare nel modello di formato. Se **fac**. `frac_digits` è zero, dopo le cifre decimali non viene generata alcuna istanza di **fac**. `decimal_point`. In caso contrario, il risultante campo di output di tipo valuta inserisce le cifre decimali **fac**. `frac_digits` di ordine inferiore a destra della virgola decimale.  
  
 Viene inserita la spaziatura interna per i campi di output numerici, tranne nel caso in cui **iosbase**. **flags** & **iosbase**. [internal](../standard-library/ios-functions.md#internal) è diverso da zero. In questo caso, l'eventuale spaziatura interna viene inserita nel punto in cui l'elemento uguale a **money_base::space** compare, se compare, nel modello di formato. In caso contrario, la spaziatura interna viene inserita prima della sequenza generata. Il carattere della spaziatura interna è **fill**.  
  
 La funzione chiama **iosbase**. **width**(0) per reimpostare la larghezza del campo su zero.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [put](#put), in cui la funzione membro virtuale viene chiamata da **put**.  
  
##  <a name="iter_type"></a>  money_put::iter_type  
 Tipo che descrive un iteratore di output.  
  
```  
typedef OutputIterator iter_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **OutputIterator.**  
  
##  <a name="money_put"></a>  money_put::money_put  
 Costruttore per oggetti di tipo `money_put`.  
  
```  
explicit money_put(size_t _Refs = 0);
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
  
##  <a name="put"></a>  money_put::put  
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
 `next`  
 Iteratore che punta al primo elemento della stringa inserita.  
  
 `_Intl`  
 Valore booleano che indica il tipo del simbolo di valuta previsto nella sequenza: **true** se internazionale, **false** se nazionale.  
  
 `_Iosbase`  
 Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario  
  
 `_Fill`  
 Carattere usato per la spaziatura.  
  
 `val`  
 Oggetto stringa da convertire.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore di output che punta alla posizione successiva all'ultimo elemento prodotto.  
  
### <a name="remarks"></a>Note  
 Entrambe le funzioni membro restituiscono [do_put](#do_put)( `next`, `_Intl`, `_Iosbase`, `_Fill`, `val`).  
  
### <a name="example"></a>Esempio  
  
```cpp  
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
  
##  <a name="string_type"></a>  money_put::string_type  
 Tipo che descrive una stringa contenente caratteri di tipo **CharType**.  
  
```  
typedef basic_string<CharType, Traits, Allocator> string_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare sequenze di elementi dalla sequenza di origine.  
  
## <a name="see-also"></a>Vedere anche  
 [\<locale>](../standard-library/locale.md)   
 [Classe facet](../standard-library/locale-class.md#facet_class)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
