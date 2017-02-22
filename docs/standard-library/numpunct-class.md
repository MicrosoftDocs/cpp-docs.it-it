---
title: "Classe numpunct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "xlocnum/std::numpunct"
  - "std::numpunct"
  - "numpunct"
  - "std.numpunct"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numpunct (classe)"
ms.assetid: 73fb93cc-ac11-4c98-987c-bfa6267df596
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe numpunct
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe modello che descrive un oggetto che può essere utilizzato come facet locale per descrivere le sequenze di tipo `CharType` utilizzate per rappresentare le informazioni sulla formattazione e la punteggiatura delle espressioni numeriche e booleane.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class CharType>  
class numpunct : public locale::facet;  
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato archivia un valore positivo univoco in **id.**  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[numpunct](#numpunct__numpunct)|Costruttore per oggetti di tipo `numpunct`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#numpunct__char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[STRING_TYPE](#numpunct__string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[decimal_point](#numpunct__decimal_point)|Restituisce un elemento specifico delle impostazioni locali da utilizzare come virgola decimale.|  
|[do_decimal_point](#numpunct__do_decimal_point)|Funzione membro virtuale protetta chiamata per restituire un elemento specifico delle impostazioni locali da utilizzare come virgola decimale.|  
|[do_falsename](#numpunct__do_falsename)|Funzione membro virtuale protetta chiamata per restituire una stringa da utilizzare come rappresentazione testo del valore `false`.|  
|[do_grouping](#numpunct__do_grouping)|Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di una virgola decimale.|  
|[do_thousands_sep](#numpunct__do_thousands_sep)|Funzione membro virtuale protetta chiamata per restituire un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.|  
|[do_truename](#numpunct__do_truename)|Funzione membro virtuale protetta chiamata per restituire una stringa da utilizzare come rappresentazione testo del valore `true`.|  
|[falsename](#numpunct__falsename)|Restituisce una stringa da utilizzare come rappresentazione testo del valore `false`.|  
|[raggruppamento](#numpunct__grouping)|Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.|  
|[thousands_sep](#numpunct__thousands_sep)|Restituisce un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.|  
|[truename](#numpunct__truename)|Restituisce una stringa da utilizzare come rappresentazione testo del valore `true`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namenumpunctchartypea-numpunctchartype"></a><a name="numpunct__char_type"></a>  numpunct:: char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```  
typedef CharType char_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType.**  
  
##  <a name="a-namenumpunctdecimalpointa-numpunctdecimalpoint"></a><a name="numpunct__decimal_point"></a>  numpunct:: decimal_point  
 Restituisce un elemento specifico delle impostazioni locali da utilizzare come virgola decimale.  
  
```  
CharType decimal_point() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un elemento specifico delle impostazioni locali da utilizzare come separatore decimale.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_decimal_point](#numpunct__do_decimal_point).  
  
### <a name="example"></a>Esempio  
  
```  
// numpunct_decimal_point.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const numpunct <char> &npunct =   
   use_facet <numpunct <char> >( loc);  
   cout << loc.name( ) << " decimal point "<<   
   npunct.decimal_point( ) << endl;  
   cout << loc.name( ) << " thousands separator "   
   << npunct.thousands_sep( ) << endl;  
};  
```  
  
```Output  
German_Germany.1252 decimal point ,  
German_Germany.1252 thousands separator .  
```  
  
##  <a name="a-namenumpunctdodecimalpointa-numpunctdodecimalpoint"></a><a name="numpunct__do_decimal_point"></a>  numpunct:: do_decimal_point  
 Funzione membro virtuale protetta chiamata per restituire un elemento specifico delle impostazioni locali da utilizzare come virgola decimale.  
  
```  
virtual CharType do_decimal_point() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un elemento specifico delle impostazioni locali da utilizzare come separatore decimale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [decimal_point](#numpunct__decimal_point), in cui la funzione membro virtuale viene chiamata da `decimal_point`.  
  
##  <a name="a-namenumpunctdofalsenamea-numpunctdofalsename"></a><a name="numpunct__do_falsename"></a>  numpunct:: do_falsename  
 La funzione membro virtuale protetta restituisce una sequenza da utilizzare come rappresentazione testo del valore **false**.  
  
```  
virtual string_type do_falsename() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa contenente una sequenza da utilizzare come rappresentazione testo del valore **false**.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la stringa "false" per rappresentare il valore **false** tutte le impostazioni locali.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [falsename](#numpunct__falsename), in cui la funzione membro virtuale viene chiamata da `falsename`.  
  
##  <a name="a-namenumpunctdogroupinga-numpunctdogrouping"></a><a name="numpunct__do_grouping"></a>  numpunct:: do_grouping  
 Funzione membro virtuale protetta chiamata per restituire una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di una virgola decimale.  
  
```  
virtual string do_grouping() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
### <a name="remarks"></a>Note  
 La funzione membro virtuale protetta restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra di un separatore decimale. La codifica è lo stesso del **lconv::grouping**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [raggruppamento](#numpunct__grouping), in cui viene chiamata la funzione membro virtuale **raggruppamento**.  
  
##  <a name="a-namenumpunctdothousandssepa-numpunctdothousandssep"></a><a name="numpunct__do_thousands_sep"></a>  numpunct:: do_thousands_sep  
 Funzione membro virtuale protetta chiamata per restituire un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.  
  
```  
virtual CharType do_thousands_sep() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.  
  
### <a name="remarks"></a>Note  
 La funzione membro virtuale protetta restituisce un elemento specifico delle impostazioni locali di tipo **CharType** da utilizzare come separatore di gruppi a sinistra della virgola decimale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [thousands_sep](#numpunct__thousands_sep), in cui la funzione membro virtuale viene chiamata da `thousands_sep`.  
  
##  <a name="a-namenumpunctdotruenamea-numpunctdotruename"></a><a name="numpunct__do_truename"></a>  numpunct:: do_truename  
 Funzione membro virtuale chiamata per restituire una stringa da utilizzare come rappresentazione testo del valore protetta **true**.  
  
```  
virtual string_type do_truename() const;
```  
  
### <a name="remarks"></a>Note  
 Una stringa da utilizzare come rappresentazione testo del valore **true**.  
  
 Tutte le impostazioni locali restituiscono una stringa "true" per rappresentare il valore **true**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [truename](#numpunct__truename), in cui la funzione membro virtuale viene chiamata da `truename`.  
  
##  <a name="a-namenumpunctfalsenamea-numpunctfalsename"></a><a name="numpunct__falsename"></a>  numpunct:: falsename  
 Restituisce una stringa da utilizzare come rappresentazione testo del valore **false**.  
  
```  
string_type falsename() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa contenente una sequenza di **CharType**s da utilizzare come rappresentazione testo del valore **false**.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce la stringa "false" per rappresentare il valore **false** tutte le impostazioni locali.  
  
 La funzione membro restituisce [do_falsename](#numpunct__do_falsename).  
  
### <a name="example"></a>Esempio  
  
```  
// numpunct_falsename.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "English" );  
  
   const numpunct <char> &npunct = use_facet <numpunct <char> >( loc );  
   cout << loc.name( ) << " truename "<< npunct.truename( ) << endl;  
   cout << loc.name( ) << " falsename "<< npunct.falsename( ) << endl;  
  
   locale loc2( "French" );  
   const numpunct <char> &npunct2 = use_facet <numpunct <char> >(loc2);  
   cout << loc2.name( ) << " truename "<< npunct2.truename( ) << endl;  
   cout << loc2.name( ) << " falsename "<< npunct2.falsename( ) << endl;  
}  
```  
  
```Output  
English_United States.1252 truename true  
English_United States.1252 falsename false  
French_France.1252 truename true  
French_France.1252 falsename false  
```  
  
##  <a name="a-namenumpunctgroupinga-numpunctgrouping"></a><a name="numpunct__grouping"></a>  numpunct:: Grouping  
 Restituisce una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
```  
string grouping() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una regola specifica delle impostazioni locali per determinare la modalità di raggruppamento delle cifre a sinistra della virgola decimale.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_grouping](#numpunct__do_grouping).  
  
### <a name="example"></a>Esempio  
  
```  
// numpunct_grouping.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany");  
  
   const numpunct <char> &npunct =   
       use_facet < numpunct <char> >( loc );  
   for (unsigned int i = 0; i < npunct.grouping( ).length( ); i++)  
   {  
      cout << loc.name( ) << " international grouping:\n the "  
           << i <<"th group to the left of the radix character "  
           << "is of size " << (int)(npunct.grouping ( )[i])   
           << endl;  
   }  
}  
```  
  
```Output  
German_Germany.1252 international grouping:  
 the 0th group to the left of the radix character is of size 3  
```  
  
##  <a name="a-namenumpunctnumpuncta-numpunctnumpunct"></a><a name="numpunct__numpunct"></a>  numpunct:: numpunct  
 Costruttore per oggetti di tipo `numpunct`.  
  
```  
explicit numpunct(size_t _Refs = 0);
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
  
##  <a name="a-namenumpunctstringtypea-numpunctstringtype"></a><a name="numpunct__string_type"></a>  numpunct:: STRING_TYPE  
 Un tipo che descrive una stringa contenente caratteri di tipo **CharType**.  
  
```  
typedef basic_string<CharType, Traits, Allocator> string_type;  
```  
  
### <a name="remarks"></a>Note  
 Tipo che descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare le copie delle sequenze di punteggiatura.  
  
##  <a name="a-namenumpunctthousandssepa-numpunctthousandssep"></a><a name="numpunct__thousands_sep"></a>  numpunct:: thousands_sep  
 Restituisce un elemento specifico delle impostazioni locali da utilizzare come separatore delle migliaia.  
  
```  
CharType thousands_sep() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un elemento specifico delle impostazioni locali da utilizzare come migliaia separatore.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_thousands_sep](#numpunct__do_thousands_sep).  
  
### <a name="example"></a>Esempio  
  
```  
// numpunct_thou_sep.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "german_germany" );  
  
   const numpunct <char> &npunct =   
   use_facet < numpunct < char > >( loc );  
   cout << loc.name( ) << " decimal point "<<   
   npunct.decimal_point( ) << endl;  
   cout << loc.name( ) << " thousands separator "   
   << npunct.thousands_sep( ) << endl;  
};  
```  
  
```Output  
German_Germany.1252 decimal point ,  
German_Germany.1252 thousands separator .  
```  
  
##  <a name="a-namenumpuncttruenamea-numpuncttruename"></a><a name="numpunct__truename"></a>  numpunct:: truename  
 Restituisce una stringa da utilizzare come rappresentazione testo del valore **true**.  
  
```  
string_type falsename() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una stringa da utilizzare come rappresentazione testo del valore **true**.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_truename](#numpunct__do_truename).  
  
 Tutte le impostazioni locali restituiscono una stringa "true" per rappresentare il valore **true**.  
  
### <a name="example"></a>Esempio  
  
```  
// numpunct_truename.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
using namespace std;  
int main( )  
{  
   locale loc( "English" );  
  
   const numpunct < char> &npunct = use_facet <numpunct <char> >( loc );  
   cout << loc.name( ) << " truename "<< npunct.truename( ) << endl;  
   cout << loc.name( ) << " falsename "<< npunct.falsename( ) << endl;  
  
   locale loc2("French");  
   const numpunct <char> &npunct2 = use_facet <numpunct <char> >( loc2 );  
   cout << loc2.name( ) << " truename "<< npunct2.truename( ) << endl;  
   cout << loc2.name( ) << " falsename "<< npunct2.falsename( ) << endl;  
}  
```  
  
```Output  
English_United States.1252 truename true  
English_United States.1252 falsename false  
French_France.1252 truename true  
French_France.1252 falsename false  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\< impostazioni locali>](../standard-library/locale.md)   
 [Classe facet](../standard-library/locale-class.md#facet_class)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

