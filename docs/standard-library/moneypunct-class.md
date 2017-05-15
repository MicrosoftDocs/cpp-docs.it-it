---
title: Classe moneypunct | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- moneypunct
- xlocmon/std::moneypunct
- locale/std::moneypunct::char_type
- locale/std::moneypunct::string_type
- locale/std::moneypunct::curr_symbol
- locale/std::moneypunct::decimal_point
- locale/std::moneypunct::do_curr_symbol
- locale/std::moneypunct::do_decimal_point
- locale/std::moneypunct::do_frac_digits
- locale/std::moneypunct::do_grouping
- locale/std::moneypunct::do_neg_format
- locale/std::moneypunct::do_negative_sign
- locale/std::moneypunct::do_pos_format
- locale/std::moneypunct::do_positive_sign
- locale/std::moneypunct::do_thousands_sep
- locale/std::moneypunct::frac_digits
- locale/std::moneypunct::grouping
- locale/std::moneypunct::neg_format
- locale/std::moneypunct::negative_sign
- locale/std::moneypunct::pos_format
- locale/std::moneypunct::positive_sign
- locale/std::moneypunct::thousands_sep
dev_langs:
- C++
helpviewer_keywords:
- moneypunct class
ms.assetid: cf2650da-3e6f-491c-95d5-23e57f582ee6
caps.latest.revision: 20
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 9567db1b823f373a5ea26e6d113cc9176901453d
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="moneypunct-class"></a>Classe moneypunct
La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per descrivere le sequenze `CharType` utilizzate per rappresentare un campo di input o output monetario. Se il parametro di modello `Intl` è `true`, vengono rispettate le convenzioni internazionali.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class CharType, bool Intl>  
class moneypunct;  
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
 `Intl`  
 Flag che specifica se devono essere rispettate le convenzioni internazionali.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id.**  
  
 L'oggetto statico const intl archivia il valore del parametro di modello **Intl**.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[moneypunct](#moneypunct)|Costruttore di oggetti di tipo `moneypunct`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[string_type](#string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[curr_symbol](#curr_symbol)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.|  
|[decimal_point](#decimal_point)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore decimale.|  
|[do_curr_symbol](#do_curr_symbol)|Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.|  
|[do_decimal_point](#do_decimal_point)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore decimale.|  
|[do_frac_digits](#do_frac_digits)|La funzione membro virtuale protetta restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.|  
|[do_grouping](#do_grouping)|La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di un separatore decimale.|  
|[do_neg_format](#do_neg_format)|Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.|  
|[do_negative_sign](#do_negative_sign)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.|  
|[do_pos_format](#do_pos_format)|Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.|  
|[do_positive_sign](#do_positive_sign)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno positivo.|  
|[do_thousands_sep](#do_thousands_sep)|Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore delle migliaia.|  
|[frac_digits](#frac_digits)|Restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.|  
|[grouping](#grouping)|Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.|  
|[neg_format](#neg_format)|Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.|  
|[negative_sign](#negative_sign)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.|  
|[pos_format](#pos_format)|Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.|  
|[positive_sign](#positive_sign)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno positivo.|  
|[thousands_sep](#thousands_sep)|Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore delle migliaia.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
##  <a name="char_type"></a>  moneypunct::char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```  
typedef CharType char_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="curr_symbol"></a>  moneypunct::curr_symbol  
 Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.  
  
```  
string_type curr_symbol() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa contenente il simbolo di valuta.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_curr_symbol](#do_curr_symbol).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_curr_symbol.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const moneypunct < char, true > &mpunct = use_facet < moneypunct < char, true > >(loc);  
   cout << loc.name( ) << " international currency symbol "<<  mpunct.curr_symbol( ) << endl;  
  
   const moneypunct < char, false> &mpunct2 = use_facet < moneypunct < char, false> >(loc);  
   cout << loc.name( ) << " domestic currency symbol "<<  mpunct2.curr_symbol( ) << endl;  
};  
```  
  
##  <a name="decimal_point"></a>  moneypunct::decimal_point  
 Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore decimale.  
  
```  
CharType decimal_point() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Sequenza di elementi specifica delle impostazioni locali da usare come simbolo di separatore decimale.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_decimal_point](#do_decimal_point).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_decimal_pt.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc("german_germany");  
  
   const moneypunct < char, true > &mpunct = use_facet   
      < moneypunct < char, true > >(loc);  
   cout << loc.name( ) << " international decimal point "  
        << mpunct.decimal_point( ) << endl;  
  
   const moneypunct < char, false> &mpunct2 = use_facet   
      < moneypunct < char, false> >(loc);  
   cout << loc.name( ) << " domestic decimal point "  
        << mpunct2.decimal_point( ) << endl;  
}  
```  
  
```Output  
German_Germany.1252 international decimal point ,  
German_Germany.1252 domestic decimal point ,  
```  
  
##  <a name="do_curr_symbol"></a>  moneypunct::do_curr_symbol  
 Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di valuta.  
  
```  
virtual string_type do_curr_symbol() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Sequenza di elementi specifica delle impostazioni locali da usare come simbolo di separatore decimale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [curr_symbol](#curr_symbol), in cui la funzione membro virtuale viene chiamata da `curr_symbol`.  
  
##  <a name="do_decimal_point"></a>  moneypunct::do_decimal_point  
 Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da usare come simbolo di separatore decimale.  
  
```  
virtual CharType do_decimal_point() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Sequenza di elementi specifica delle impostazioni locali da usare come simbolo di separatore decimale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [decimal_point](#decimal_point), in cui la funzione membro virtuale viene chiamata da `decimal_point`.  
  
##  <a name="do_frac_digits"></a>  moneypunct::do_frac_digits  
 Funzione membro virtuale protetta che restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.  
  
```  
virtual int do_frac_digits() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [frac_digits](#frac_digits), in cui la funzione membro virtuale viene chiamata da `frac_digits`.  
  
##  <a name="do_grouping"></a>  moneypunct::do_grouping  
 Funzione membro virtuale protetta che restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di un separatore decimale.  
  
```  
virtual string do_grouping() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [grouping](#grouping), in cui la funzione membro virtuale viene chiamata da **grouping**.  
  
##  <a name="do_neg_format"></a>  moneypunct::do_neg_format  
 Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.  
  
```  
virtual pattern do_neg_format() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di generazione di un campo di output di tipo valuta per un importo negativo. Ciascuno dei quatto elementi di **pattern::field** può avere i valori seguenti:  
  
- **none** per trovare la corrispondenza con zero o più spazi o per non generare nulla.  
  
- **sign** per trovare la corrispondenza con un segno positivo o negativo o per generare tale segno.  
  
- **space** per trovare la corrispondenza con zero o più spazi o per generare uno spazio.  
  
- **symbol** per trovare la corrispondenza con un simbolo di valuta o per generare tale simbolo.  
  
- **value** per trovare la corrispondenza con un valore monetario o per generare tale valore.  
  
 I componenti di un campo di output di tipo valuta vengono generati e i componenti di un campo di input di tipo valuta vengono messi in corrispondenza nell'ordine in cui questi elementi compaiono in **pattern::field**. Ciascuno dei valori **sign**, **symbol**, **value** e **none** o **space** deve comparire solamente una volta. Il valore **none** non deve comparire per primo. Il valore **space** non deve comparire come primo o ultimo. Se **Intl** è true, l'ordine è **symbol**, **sign**, **none** e **value**.  
  
 La versione del modello di `moneypunct`\< **CharType**, **Intl**> restituisce `{`**money_base::symbol**, **money_base::sign**, **money_base::value**, **money_base::none**`}`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [neg_format](#neg_format), in cui la funzione membro virtuale viene chiamata da `neg_format`.  
  
##  <a name="do_negative_sign"></a>  moneypunct::do_negative_sign  
 Funzione membro virtuale protetta chiamata per restituire una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.  
  
```  
virtual string_type do_negative_sign() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Sequenza di elementi specifica delle impostazioni locali da usare come segno negativo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [negative_sign](#negative_sign), in cui la funzione membro virtuale viene chiamata da `negative_sign`.  
  
##  <a name="do_pos_format"></a>  moneypunct::do_pos_format  
 Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.  
  
```  
virtual pattern do_pos_format() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di generazione di un campo di output di tipo valuta per un importo positivo. Determina inoltre la modalità di messa in corrispondenza dei componenti di un campo di input di tipo valuta. La codifica è uguale a quella per [do_neg_format](#do_neg_format).  
  
 La versione del modello di moneypunct\< **CharType**, **Inputlterator**> restituisce `{`**money_base::symbol**, **money_base::sign**, **money_base::value**, **money_base::none**`}`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [pos_format](#pos_format), in cui la funzione membro virtuale viene chiamata da `pos_format`.  
  
##  <a name="do_positive_sign"></a>  moneypunct::do_positive_sign  
 Funzione membro virtuale protetta che restituisce una sequenza di elementi specifica delle impostazioni locali da usare come segno positivo.  
  
```  
virtual string_type do_positive_sign() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Sequenza di elementi specifica delle impostazioni locali da usare come segno positivo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [positive_sign](#positive_sign), in cui la funzione membro virtuale viene chiamata da `positive_sign`.  
  
##  <a name="do_thousands_sep"></a>  moneypunct::do_thousands_sep  
 Funzione membro virtuale protetta che restituisce un elemento specifico delle impostazioni locali da usare come separatore dei gruppi a sinistra della virgola decimale.  
  
```  
virtual CharType do_thousands_sep() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Elemento specifico delle impostazioni locali da usare come separatore dei gruppi a sinistra della virgola decimale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [thousands_sep](#thousands_sep), in cui la funzione membro virtuale viene chiamata da `thousands_sep`.  
  
##  <a name="frac_digits"></a>  moneypunct::frac_digits  
 Restituisce un conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.  
  
```  
int frac_digits() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Conteggio del numero di cifre specifico delle impostazioni locali da visualizzare a destra di un separatore decimale.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_frac_digits](#do_frac_digits).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_frac_digits.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const moneypunct <char, true> &mpunct =   
       use_facet <moneypunct <char, true> >(loc);  
   for (unsigned int i = 0; i <mpunct.grouping( ).length( ); i++ )  
   {  
      cout << loc.name( ) << " international grouping:\n the "  
           << i <<"th group to the left of the radix character "  
           << "is of size " << (int)(mpunct.grouping ( )[i])   
           << endl;  
   }  
   cout << loc.name( ) << " international frac_digits\n to the right"  
        << " of the radix character: "  
        << mpunct.frac_digits ( ) << endl << endl;  
  
   const moneypunct <char, false> &mpunct2 =   
       use_facet <moneypunct <char, false> >(loc);  
   for (unsigned int i = 0; i <mpunct2.grouping( ).length( ); i++ )  
   {  
      cout << loc.name( ) << " domestic grouping:\n the "  
           << i <<"th group to the left of the radix character "  
           << "is of size " << (int)(mpunct2.grouping ( )[i])   
           << endl;  
   }  
   cout << loc.name( ) << " domestic frac_digits\n to the right"  
        << " of the radix character: "  
        << mpunct2.frac_digits ( ) << endl << endl;  
}  
```  
  
```Output  
German_Germany.1252 international grouping:  
 the 0th group to the left of the radix character is of size 3  
German_Germany.1252 international frac_digits  
 to the right of the radix character: 2  
  
German_Germany.1252 domestic grouping:  
 the 0th group to the left of the radix character is of size 3  
German_Germany.1252 domestic frac_digits  
 to the right of the radix character: 2  
```  
  
##  <a name="grouping"></a>  moneypunct::grouping  
 Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
```  
string grouping() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_grouping](#do_grouping).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_grouping.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const moneypunct <char, true> &mpunct =   
       use_facet <moneypunct <char, true> >( loc );  
   for (unsigned int i = 0; i <mpunct.grouping( ).length( ); i++ )  
   {  
      cout << loc.name( ) << " international grouping:\n the "  
           << i <<"th group to the left of the radix character "  
           << "is of size " << (int)(mpunct.grouping ( )[i])   
           << endl;  
   }  
   cout << loc.name( ) << " international frac_digits\n to the right"  
        << " of the radix character: "  
        << mpunct.frac_digits ( ) << endl << endl;  
  
   const moneypunct <char, false> &mpunct2 =   
       use_facet <moneypunct <char, false> >( loc );  
   for (unsigned int i = 0; i <mpunct2.grouping( ).length( ); i++ )  
   {  
      cout << loc.name( ) << " domestic grouping:\n the "  
           << i <<"th group to the left of the radix character "  
           << "is of size " << (int)(mpunct2.grouping ( )[i])   
           << endl;  
   }  
   cout << loc.name( ) << " domestic frac_digits\n to the right"  
        << " of the radix character: "  
        << mpunct2.frac_digits ( ) << endl << endl;  
}  
```  
  
```Output  
German_Germany.1252 international grouping:  
 the 0th group to the left of the radix character is of size 3  
German_Germany.1252 international frac_digits  
 to the right of the radix character: 2  
  
German_Germany.1252 domestic grouping:  
 the 0th group to the left of the radix character is of size 3  
German_Germany.1252 domestic frac_digits  
 to the right of the radix character: 2  
```  
  
##  <a name="moneypunct"></a>  moneypunct::moneypunct  
 Costruttore di oggetti di tipo `moneypunct`.  
  
```  
explicit moneypunct(size_t _Refs = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `_Refs`  
 Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.  
  
### <a name="remarks"></a>Note  
 I valori possibili per il parametro `_Refs` e i relativi significati sono:  
  
-   0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.  
  
-   1: la durata dell'oggetto deve essere gestita manualmente.  
  
-   \>1: questi valori non definiti.  
  
 Non è possibile offrire esempi diretti, poiché il distruttore è protetto.  
  
 Il costruttore inizializza l'oggetto di base con [locale::facet](../standard-library/locale-class.md#facet_class)(_ *Refs*).  
  
##  <a name="neg_format"></a>  moneypunct::neg_format  
 Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.  
  
```  
pattern neg_format() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Regola specifica delle impostazioni locali per la formattazione degli output con importi negativi.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_neg_format](#do_neg_format).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_neg_format.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
  
using namespace std;  
  
int main( ) {  
   locale loc( "german_germany" );  
  
   const moneypunct <char, true> &mpunct =   
      use_facet <moneypunct <char, true > >(loc);  
   cout << loc.name( ) << " international negative number format: "  
        << mpunct.neg_format( ).field[0]   
        << mpunct.neg_format( ).field[1]   
        << mpunct.neg_format( ).field[2]   
        << mpunct.neg_format( ).field[3] << endl;  
  
   const moneypunct <char, false> &mpunct2 =   
      use_facet <moneypunct <char, false> >(loc);  
   cout << loc.name( ) << " domestic negative number format: "  
        << mpunct2.neg_format( ).field[0]   
        << mpunct2.neg_format( ).field[1]   
        << mpunct2.neg_format( ).field[2]   
        << mpunct2.neg_format( ).field[3] << endl;  
}  
```  
  
##  <a name="negative_sign"></a>  moneypunct::negative_sign  
 Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.  
  
```  
string_type negative_sign() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno negativo.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_negative_sign](#do_negative_sign).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_neg_sign.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
  
using namespace std;  
  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const moneypunct <char, true> &mpunct =   
      use_facet <moneypunct <char, true> >(loc);  
   cout << loc.name( ) << " international negative sign: "  
        << mpunct.negative_sign( ) << endl;  
  
   const moneypunct <char, false> &mpunct2 =   
      use_facet <moneypunct <char, false> >(loc);  
   cout << loc.name( ) << " domestic negative sign: "  
        << mpunct2.negative_sign( ) << endl;  
  
   locale loc2( "French" );  
  
   const moneypunct <char, true> &mpunct3 =   
      use_facet <moneypunct <char, true> >(loc2);  
   cout << loc2.name( ) << " international negative sign: "  
        << mpunct3.negative_sign( ) << endl;  
  
   const moneypunct <char, false> &mpunct4 =   
      use_facet <moneypunct <char, false> >(loc2);  
   cout << loc2.name( ) << " domestic negative sign: "  
        << mpunct4.negative_sign( ) << endl;  
};  
```  
  
```Output  
German_Germany.1252 international negative sign: -  
German_Germany.1252 domestic negative sign: -  
French_France.1252 international negative sign: -  
French_France.1252 domestic negative sign: -  
```  
  
##  <a name="pos_format"></a>  moneypunct::pos_format  
 Restituisce una regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.  
  
```  
pattern pos_format() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Regola specifica delle impostazioni locali per la formattazione degli output con importi positivi.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_pos_format](#do_pos_format).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_pos_format.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
  
using namespace std;  
  
int main() {  
   locale loc( "german_germany" );  
  
   const moneypunct <char, true> &mpunct =   
      use_facet <moneypunct <char, true> >(loc);  
   cout << loc.name( ) << " international positive number format: "  
        << mpunct.pos_format( ).field[0]   
        << mpunct.pos_format( ).field[1]   
        << mpunct.pos_format( ).field[2]   
        << mpunct.pos_format( ).field[3] << endl;  
  
   const moneypunct <char, false> &mpunct2 =   
      use_facet <moneypunct <char, false> >(loc);  
   cout << loc.name( ) << " domestic positive number format: "  
        << mpunct2.pos_format( ).field[0]   
        << mpunct2.pos_format( ).field[1]   
        << mpunct2.pos_format( ).field[2]   
        << mpunct2.pos_format( ).field[3] << endl;  
}  
```  
  
##  <a name="positive_sign"></a>  moneypunct::positive_sign  
 Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di segno positivo.  
  
```  
string_type positive_sign() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Sequenza di elementi specifica delle impostazioni locali da usare come simbolo di segno positivo.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_positive_sign](#do_positive_sign).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_pos_sign.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
  
using namespace std;  
  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const moneypunct <char, true> &mpunct =   
      use_facet <moneypunct <char, true > >(loc);  
   cout << loc.name( ) << " international positive sign:"  
        << mpunct.positive_sign( ) << endl;  
  
   const moneypunct <char, false> &mpunct2 =   
      use_facet <moneypunct <char, false> >(loc);  
   cout << loc.name( ) << " domestic positive sign:"  
        << mpunct2.positive_sign( ) << endl;  
  
   locale loc2( "French" );  
  
   const moneypunct <char, true> &mpunct3 =   
      use_facet <moneypunct <char, true> >(loc2);  
   cout << loc2.name( ) << " international positive sign:"  
        << mpunct3.positive_sign( ) << endl;  
  
   const moneypunct <char, false> &mpunct4 =   
      use_facet <moneypunct <char, false> >(loc2);  
   cout << loc2.name( ) << " domestic positive sign:"  
        << mpunct4.positive_sign( ) << endl;  
};  
```  
  
```Output  
German_Germany.1252 international positive sign:  
German_Germany.1252 domestic positive sign:  
French_France.1252 international positive sign:  
French_France.1252 domestic positive sign:  
```  
  
##  <a name="string_type"></a>  moneypunct::string_type  
 Tipo che descrive una stringa contenente caratteri di tipo **CharType**.  
  
```  
typedef basic_string<CharType, Traits, Allocator> string_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare copie delle sequenze di punteggiatura.  
  
##  <a name="thousands_sep"></a>  moneypunct::thousands_sep  
 Restituisce una sequenza di elementi specifica delle impostazioni locali da utilizzare come simbolo di separatore delle migliaia.  
  
```  
CharType thousands_sep() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Sequenza di elementi specifica delle impostazioni locali da usare come separatore delle migliaia.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_thousands_sep](#do_thousands_sep).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// moneypunct_thou_sep.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const moneypunct <char, true> &mpunct =   
       use_facet <moneypunct <char, true > >(loc);  
   cout << loc.name( ) << " international thousands separator: "  
        << mpunct.thousands_sep( ) << endl;  
  
   const moneypunct <char, false> &mpunct2 =   
      use_facet <moneypunct <char, false> >(loc);  
   cout << loc.name( ) << " domestic thousands separator: "  
        << mpunct2.thousands_sep( ) << endl << endl;  
  
   locale loc2( "english_canada" );  
  
   const moneypunct <char, true> &mpunct3 =   
       use_facet <moneypunct <char, true> >(loc2);  
   cout << loc2.name( ) << " international thousands separator: "  
        << mpunct3.thousands_sep( ) << endl;  
  
   const moneypunct <char, false> &mpunct4 =   
      use_facet <moneypunct <char, false> >(loc2);  
   cout << loc2.name( ) << " domestic thousands separator: "  
        << mpunct4.thousands_sep( ) << endl;  
}  
```  
  
```Output  
German_Germany.1252 international thousands separator: .  
German_Germany.1252 domestic thousands separator: .  
  
English_Canada.1252 international thousands separator: ,  
English_Canada.1252 domestic thousands separator: ,  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<locale>](../standard-library/locale.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)


