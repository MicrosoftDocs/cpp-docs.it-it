---
title: "Classe locale | Microsoft Docs"
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
  - "xlocale/std::locale"
  - "std::locale"
  - "std.locale"
  - "locale"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "locale (classe)"
ms.assetid: 7dd6d271-472d-4750-8fb5-ea8f55fbef62
caps.latest.revision: 28
caps.handback.revision: 28
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe locale
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe che descrive un oggetto delle impostazioni locali che incapsula le informazioni specifiche delle impostazioni locali come set di facet che definiscono collettivamente un ambiente localizzato specifico.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class locale;  
```  
  
## <a name="remarks"></a>Note  
 Un facet è un puntatore a un oggetto di una classe derivata dalla classe [facet](#facet_class) con un oggetto pubblico nel formato:  
  
```  
static locale::id id;  
```  
  
 È possibile definire un set aperto di tali facet. È inoltre possibile costruire un oggetto delle impostazioni locali che indica un numero arbitrario di facet.  
  
 I gruppi predefiniti di questi facet rappresentano il [categorie di impostazioni locali](#locale__category) tradizionalmente gestite nella libreria C Standard dalla funzione `setlocale`.  
  
 La categoria collate (LC_COLLATE) include i facet:  
  
```  
collate<char>  
collate<wchar_t>  
```  
  
 La categoria ctype (LC_CTYPE) include i facet:  
  
```  
ctype<char>  
ctype<wchar_t>  
codecvt<char, char, mbstate_t>  
codecvt<wchar_t, char, mbstate_t>  
codecvt<char16_t, char, mbstate_t>  
codecvt<char32_t, char, mbstate_t>  
```  
  
 La categoria monetary (LC_MONETARY) include i facet:  
  
```  
moneypunct<char, false>  
moneypunct<wchar_t, false>  
moneypunct<char, true>  
moneypunct<wchar_t, true>  
money_get<char, istreambuf_iterator<char>>  
money_get<wchar_t, istreambuf_iterator<wchar_t>>  
money_put<char, ostreambuf_iterator<char>>  
money_put<wchar_t, ostreambuf_iterator<wchar_t>>  
```  
  
 La categoria collate numeric (LC_NUMERIC) include i facet:  
  
```  
num_get<char, istreambuf_iterator<char>>  
num_get<wchar_t, istreambuf_iterator<wchar_t>>  
num_put<char, ostreambuf_iterator<char>>  
num_put<wchar_t, ostreambuf_iterator<wchar_t>>  
numpunct<char>  
numpunct<wchar_t>  
```  
  
 La categoria time (LC_TIME) include i facet:  
  
```  
time_get<char, istreambuf_iterator<char>>  
time_get<wchar_t, istreambuf_iterator<wchar_t>>  
time_put<char, ostreambuf_iterator<char>>  
time_put<wchar_t, ostreambuf_iterator<wchar_t>>  
```  
  
 La categoria messages (LC_MESSAGES) include i facet:  
  
```  
messages<char>  
messages<wchar_t>  
```  
  
 L'ultima categoria viene richiesta da POSIX, ma non dallo standard C.  
  
 Alcuni di questi facet predefiniti vengono utilizzati dalle classi iostream per controllare la conversione dei valori numerici da e in sequenze di testo.  
  
 Un oggetto delle impostazioni locali di classe archivia anche un nome delle impostazioni locali di un oggetto della classe [stringa](../Topic/%3Cstring%3E%20typedefs.md#string). Utilizzo di un nome di impostazioni locali non valido per costruire un facet o un oggetto delle impostazioni locali genera un oggetto della classe [runtime_error](../standard-library/runtime-error-class.md). Il nome delle impostazioni locali archiviate è `"*"` se l'oggetto delle impostazioni locali non è in grado di determinare che le impostazioni locali di tipo C corrispondono esattamente a quelle rappresentate dall'oggetto. In caso contrario, è possibile stabilire le impostazioni locali corrispondenti all'interno della libreria C Standard, per l'oggetto delle impostazioni locali `_Loc`, chiamando `setlocale`(LC_ALL `,` `_Loc`. [nome](#locale__name)`().c_str()`).  
  
 In questa implementazione è inoltre possibile chiamare la funzione membro statica:  
  
```  
static locale empty();
```  
  
 per costruire un oggetto delle impostazioni locali privo di facet. È anche impostazioni locali trasparenti; Se le funzioni di modello [has_facet](../Topic/%3Clocale%3E%20functions.md#has_facet) e [use_facet](../Topic/%3Clocale%3E%20functions.md#use_facet) Impossibile trovare il facet richiesto nelle impostazioni locali trasparenti, consultano per prima cosa le impostazioni locali globali, quindi, se è trasparente, le impostazioni locali classiche. È pertanto possibile scrivere:  
  
```  
cout.imbue(locale::empty());
```  
  
 Gli inserimenti successivi a [cout](../Topic/%3Ciostream%3E%20functions.md#cout) sono mediati dallo stato corrente delle impostazioni locali globali. È anche possibile scrivere:  
  
```  
locale loc(locale::empty(),
    locale::classic(),  
    locale::numeric);

cout.imbue(loc);
```   
  
 Le regole di formattazione numerica per gli inserimenti successivi a `cout` rimangono uguali a quelle delle impostazione locali C, anche quando le impostazioni locali globali forniscono regole mutevoli per l'inserimento di date e importi monetari.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[impostazioni locali](#locale__locale)|Crea le impostazioni locali o una copia delle impostazioni locali oppure una copia delle impostazioni locali in cui un facet o una categoria è stata sostituita da un facet o da una categoria di altre impostazioni locali.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[categoria](#locale__category)|Tipo Integer che fornisce i valori della maschera di bit per indicare le famiglie di facet standard.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[combinare](#locale__combine)|Inserisce un facet delle impostazioni locali specificate nelle impostazioni locali di destinazione.|  
|[nome](#locale__name)|Restituisce il nome delle impostazioni locali archiviate.|  
  
### <a name="static-functions"></a>Funzioni statiche  
  
|||  
|-|-|  
|[classica](#locale__classic)|La funzione membro statica restituisce un oggetto delle impostazioni locali che rappresenta le impostazioni locali C classiche.|  
|[globale](#locale__global)|Reimposta le impostazioni locali predefinite per il programma.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore! =](#locale__operator_neq)|Verifica l'ineguaglianza di due impostazioni locali.|  
|[operator)](#locale__operator__)|Confronta due oggetti `basic_string`.|  
|[operatore = =](#locale__operator_eq_eq)|Verifica l'uguaglianza di due impostazioni locali.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[facet](#facet_class)|Classe utilizzata come classe base per tutti i facet delle impostazioni locali.|  
|[ID](#id_class)|La classe di membro fornisce un'identificazione dei facet univoca utilizzata come indice per cercare i facet nelle impostazioni locali.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namelocalecategorya-localecategory"></a><a name="locale__category"></a>  locale:: Category  
 Tipo Integer che fornisce i valori della maschera di bit per indicare le famiglie di facet standard.  
  
```  
typedef int category;  
static const int collate = LC_COLLATE;  
static const int ctype = LC_CTYPE;  
static const int monetary = LC_MONETARY;  
static const int numeric = LC_NUMERIC;  
static const int time = LC_TIME;  
static const int messages = LC_MESSAGES;  
static const int all = LC_ALL;  
static const int none = 0;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo per un `int` tipo che rappresenta un gruppo di elementi distinti di una maschera di bit digitare locale alle impostazioni locali di classe o può essere utilizzato per rappresentare una delle categorie di impostazioni locali C corrispondente. Gli elementi sono:  
  
- **COLLATE**, che corrisponde alla categoria C LC_COLLATE  
  
- **CType**, che corrisponde alla categoria C LC_CTYPE  
  
- **valuta**, che corrisponde alla categoria C LC_MONETARY  
  
- **numerico**, che corrisponde alla categoria C LC_NUMERIC  
  
- **tempo**, che corrisponde alla categoria C LC_TIME  
  
- **messaggi**, che corrisponde alla categoria Posix LC_MESSAGES  
  
 Inoltre, due valori utili sono:  
  
- **Nessuno**, che corrisponde a nessuna delle categorie C  
  
- **tutti**, che corrisponde all'unione di tutte le categorie LC_ALL C  
  
 È possibile rappresentare un gruppo di categorie arbitrario utilizzando `OR` con queste costanti, come in **monetari** &#124; **tempo**.  
  
##  <a name="a-namelocaleclassica-localeclassic"></a><a name="locale__classic"></a>  locale:: Classic  
 La funzione membro statica restituisce un oggetto delle impostazioni locali che rappresenta le impostazioni locali C classiche.  
  
```  
static const locale& classic();
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento per le impostazioni locali C.  
  
### <a name="remarks"></a>Note  
 Le impostazioni locali C classiche sono negli Stati Uniti Impostazioni locali inglese ASCII all'interno della libreria C Standard che viene utilizzata in modo implicito in programmi che non è internazionalizzati.  
  
### <a name="example"></a>Esempio  
  
```  
// locale_classic.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string>  
#include <locale>  
  
using namespace std;  
  
int main( )   
{  
   locale loc1( "german" );  
   locale loc2 = locale::global( loc1 );  
   cout << "The name of the previous locale is: " << loc2.name( )  
        << "." << endl;  
   cout << "The name of the current locale is: " << loc1.name( )   
        << "." << endl;  
  
   if (loc2 == locale::classic( ) )  
      cout << "The previous locale was classic." << endl;  
   else  
      cout << "The previous locale was not classic." << endl;  
  
   if (loc1 == locale::classic( ) )  
      cout << "The current locale is classic." << endl;  
   else  
      cout << "The current locale is not classic." << endl;  
}  
```  
  
```Output  
The name of the previous locale is: C.  
The name of the current locale is: German_Germany.1252.  
The previous locale was classic.  
The current locale is not classic.  
```  
  
##  <a name="a-namelocalecombinea-localecombine"></a><a name="locale__combine"></a>  locale:: Combine  
 Inserisce un facet delle impostazioni locali specificate nelle impostazioni locali di destinazione.  
  
```  
template <class Facet>  
locale combine(const locale& _Loc) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Loc`  
 Le impostazioni locali che contiene il facet da inserire nelle impostazioni locali di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro restituisce un oggetto locale che sostituisce o aggiunge alla **\*questo** il facet `Facet` elencato `_Loc`.  
  
### <a name="example"></a>Esempio  
  
```  
// locale_combine.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <tchar.h>  
using namespace std;  
  
int main() {  
   locale loc ( "German_germany" );  
   _TCHAR * s1 = _T("Das ist wei\x00dfzz."); // \x00df is the German sharp-s; it comes before z in the German alphabet  
   _TCHAR * s2 = _T("Das ist weizzz.");  
   int result1 = use_facet<collate<_TCHAR> > ( loc ).  
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );  
   cout << isalpha (_T ( '\x00df' ), loc ) << result1 << endl;  
  
   locale loc2 ( "C" );  
   int result2 = use_facet<collate<_TCHAR> > ( loc2 ).  
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );  
   cout << isalpha (_T ( '\x00df' ), loc2 )  << result2 << endl;  
  
   locale loc3 = loc2.combine<collate<_TCHAR> > (loc);  
   int result3 = use_facet<collate<_TCHAR> > ( loc3 ).  
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );  
   cout << isalpha (_T ( '\x00df' ), loc3 ) << result3 << endl;  
}  
```  
  
##  <a name="a-namefacetclassa-facet-class"></a><a name="facet_class"></a>  Classe facet  
 Classe utilizzata come classe base per tutti i facet delle impostazioni locali.  
  
facet classe {protetti: facet esplicita (size_t _Refs = 0); virtuale ~ facet(); privato: facet(const facet&) / / non è definito operatore void =(const facet&) / / non definito};  
  
### <a name="remarks"></a>Note  
 Si noti che non è possibile copiare o assegnare un oggetto di facet della classe. È possibile creare e distruggere oggetti derivati dalla classe `locale::facet` ma non gli oggetti della classe di base appropriato. In genere, si crea un oggetto `_Myfac` derivato da facet durante la creazione delle impostazioni locali, come in **localeloc**( `locale::classic`(), **nuova**`_Myfac`);  
  
 In questi casi, il costruttore per il facet di classe di base deve avere uno zero `_Refs` argomento. Quando l'oggetto non è più necessario, questa viene eliminata. Pertanto, si fornisce un diverso da zero _ *Refs* argomento solo in rari casi in cui si assumerà la responsabilità per la durata dell'oggetto.  
  
##  <a name="a-namelocaleglobala-localeglobal"></a><a name="locale__global"></a>  locale:: Global  
 Reimposta le impostazioni locali predefinite per il programma. Questo problema riguarda le impostazioni locali globali per C e C++.  
  
```  
static locale global(const locale& _Loc);
```  
  
### <a name="parameters"></a>Parametri  
 `_Loc`  
 Le impostazioni locali da utilizzare come le impostazioni locali predefinite dal programma.  
  
### <a name="return-value"></a>Valore restituito  
 Le impostazioni locali precedenti prima che le impostazioni locali predefinite è stata reimpostata.  
  
### <a name="remarks"></a>Note  
 All'avvio del programma, le impostazioni locali globali sono quello utilizzato per le impostazioni locali classiche. Il `global()` chiamate di funzione `setlocale( LC_ALL, loc.name. c_str())` per stabilire una corrispondenza delle impostazioni locali della libreria C Standard.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// locale_global.cpp  
// compile by using: /EHsc  
#include <locale>  
#include <iostream>  
#include <tchar.h>  
using namespace std;  
  
int main( )  
{  
   locale loc ( "German_germany" );  
   locale loc1;  
   cout << "The initial locale is: " << loc1.name( ) << endl;  
   locale loc2 = locale::global ( loc );  
   locale loc3;  
   cout << "The current locale is: " << loc3.name( ) << endl;  
   cout << "The previous locale was: " << loc2.name( ) << endl;  
}  
```  
  
```Output  
The initial locale is: C  
The current locale is: German_Germany.1252  
The previous locale was: C  
```  
  
##  <a name="a-nameidclassa-id-class"></a><a name="id_class"></a>  Classe ID  
 La classe di membro fornisce un'identificazione dei facet univoca utilizzata come indice per cercare i facet nelle impostazioni locali.  
  
id classe {protetti: ID (); privato: id(const id&) / / non è definito operatore void =(const id&) / / non definito};  
  
### <a name="remarks"></a>Note  
 La classe di membro descrive l'oggetto membro statico richiesto da ogni facet delle impostazioni locali univoci. Si noti che non è possibile copiare o assegnare un oggetto della classe **id**.  
  
##  <a name="a-namelocalelocalea-localelocale"></a><a name="locale__locale"></a>  locale:: locale  
 Crea le impostazioni locali o una copia delle impostazioni locali oppure una copia delle impostazioni locali in cui un facet o una categoria è stata sostituita da un facet o da una categoria di altre impostazioni locali.  
  
```  
locale();

explicit locale(
    const char* _Locname,  
    category _Cat = all);

explicit locale(
    const string& _Locname);

locale(
    const locale& _Loc);

locale(
    const locale& _Loc,   
    const locale& _Other,  
    category _Cat);

locale(
    const locale& _Loc,   
    const char* _Locname,  
    category _Cat);

template <class Facet>  
locale(
 const locale& _Loc,   
    const Facet* _Fac);
```  
  
### <a name="parameters"></a>Parametri  
 `_Locname`  
 Nome delle impostazioni locali.  
  
 `_Loc`  
 Impostazioni locali che devono essere copiati nella costruzione le nuove impostazioni locali.  
  
 `_Other`  
 Impostazioni locali che consente di selezionare una categoria.  
  
 `_Cat`  
 La categoria deve essere sostituito nelle impostazioni locali costruita.  
  
 `_Fac`  
 Il facet deve essere sostituito nelle impostazioni locali costruita.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore inizializza l'oggetto in base a impostazioni locali globali. Il secondo e terzo costruttore inizializzano tutte le categorie di impostazioni locali per avere un comportamento coerenza con il nome delle impostazioni locali `_Locname`. Copiano i costruttori rimanenti `_Loc`, con le eccezioni riportate:  
  
 `locale(const locale& _Loc, const locale& _Other, category _Cat);`  
  
 sostituisce da `_Other` tali facet corrispondente a una categoria C per il C & `_Cat` è diverso da zero.  
  
 `locale(const locale& _Loc, const char* _Locname, category _Cat);`  
  
 `locale(const locale& _Loc, const string& _Locname, category _Cat);`  
  
 sostituisce da `locale(_Locname, _All)` tali facet corrispondente a una categoria C per il C & `_Cat`è diverso da zero.  
  
 `template<class Facet> locale(const locale& _Loc, Facet* _Fac);`  
  
 sostituisce (o aggiunge) `_Loc` il facet `_Fac`, se `_Fac` non è un puntatore null.  
  
 Se un nome delle impostazioni locali `_Locname` è un puntatore null o non è valida, la funzione genera [runtime_error](../standard-library/runtime-error-class.md).  
  
### <a name="example"></a>Esempio  
  
```  
// locale_locale.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <tchar.h>  
using namespace std;  
  
int main( ) {  
  
   // Second constructor  
   locale loc ( "German_germany" );  
   _TCHAR * s1 = _T("Das ist wei\x00dfzz."); // \x00df is the German sharp-s, it comes before z in the German alphabet  
   _TCHAR * s2 = _T("Das ist weizzz.");  
   int result1 = use_facet<collate<_TCHAR> > ( loc ).  
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );  
   cout << isalpha (_T ( '\x00df' ), loc ) << result1 << endl;  
  
   // The first (default) constructor  
   locale loc2;  
   int result2 = use_facet<collate<_TCHAR> > ( loc2 ).  
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );  
   cout << isalpha (_T ( '\x00df' ), loc2 )  << result2 << endl;  
  
   // Third constructor  
   locale loc3 (loc2,loc, _M_COLLATE );  
   int result3 = use_facet<collate<_TCHAR> > ( loc3 ).  
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );  
   cout << isalpha (_T ( '\x00df' ), loc3 ) << result3 << endl;  
  
   // Fourth constructor  
   locale loc4 (loc2, "German_Germany", _M_COLLATE );  
   int result4 = use_facet<collate<_TCHAR> > ( loc4 ).  
      compare (s1, &s1[_tcslen( s1 )-1 ],  s2, &s2[_tcslen( s2 )-1 ] );  
   cout << isalpha (_T ( '\x00df' ), loc4 ) << result4 << endl;  
}  
```  
  
##  <a name="a-namelocalenamea-localename"></a><a name="locale__name"></a>  locale:: Name  
 Restituisce il nome delle impostazioni locali archiviate.  
  
```  
string name() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa che fornisce il nome delle impostazioni locali.  
  
### <a name="example"></a>Esempio  
  
```  
// locale_name.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string>  
#include <locale>  
  
using namespace std;  
  
int main( )   
{  
   locale loc1( "german" );  
   locale loc2 = locale::global( loc1 );  
   cout << "The name of the previous locale is: "   
        << loc2.name( ) << "." << endl;  
   cout << "The name of the current locale is: "   
        << loc1.name( ) << "." << endl;  
}  
```  
  
```Output  
The name of the previous locale is: C.  
The name of the current locale is: German_Germany.1252.  
```  
  
##  <a name="a-namelocaleoperatorneqa-localeoperator"></a><a name="locale__operator_neq"></a>  locale:: operator! =  
 Verifica l'ineguaglianza di due impostazioni locali.  
  
```  
bool operator!=(const locale& right) const;
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Una delle impostazioni locali per verificare la disuguaglianza.  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che è **true** se le impostazioni locali non sono copie delle stesse impostazioni locali; **false** se le impostazioni locali sono copie delle stesse impostazioni locali.  
  
### <a name="remarks"></a>Note  
 Due impostazioni locali sono uguali se sono le stesse impostazioni locali, se uno è una copia di altro, o se hanno nomi identici.  
  
### <a name="example"></a>Esempio  
  
```  
// locale_op_ne.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string>  
#include <locale>  
  
using namespace std;  
  
int main( )   
{  
   locale loc1( "German_Germany" );  
   locale loc2( "German_Germany" );  
   locale loc3( "English" );  
  
   if ( loc1 != loc2 )  
      cout << "locales loc1 (" << loc1.name( )  
      << ") and\n loc2 (" << loc2.name( ) << ") are not equal." << endl;  
   else  
      cout << "locales loc1 (" << loc1.name( )  
      << ") and\n loc2 (" << loc2.name( ) << ") are equal." << endl;  
  
   if ( loc1 != loc3 )  
      cout << "locales loc1 (" << loc1.name( )  
      << ") and\n loc3 (" << loc3.name( ) << ") are not equal." << endl;  
   else  
      cout << "locales loc1 (" << loc1.name( )  
      << ") and\n loc3 (" << loc3.name( ) << ") are equal." << endl;  
}  
```  
  
```Output  
locales loc1 (German_Germany.1252) and  
 loc2 (German_Germany.1252) are equal.  
locales loc1 (German_Germany.1252) and  
 loc3 (English_United States.1252) are not equal.  
```  
  
##  <a name="a-namelocaleoperatora-localeoperator"></a><a name="locale__operator__"></a>  locale:: operator)  
 Confronta due oggetti `basic_string`.  
  
```  
template <class CharType, class Traits, class Allocator>  
bool operator()(
    const basic_string<CharType, Traits, Allocator>& left,  
    const basic_string<CharType, Traits, Allocator>& right) const;
```  
  
### <a name="parameters"></a>Parametri  
 ` left`  
 La stringa a sinistra.  
  
 ` right`  
 Stringa di destra.  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro restituisce:  
  
-   – 1 se la prima sequenza Confronta minore della seconda sequenza.  
  
-   + 1 se la seconda sequenza di confronto minore prima sequenza.  
  
-   0 se le sequenze sono equivalenti.  
  
### <a name="remarks"></a>Note  
 La funzione membro viene eseguita in modo efficace:  
  
```  
const collate<CharType>& fac = use_fac<collate<CharType>>(*this);

return (fac.compare(left.begin(), left.end(), right.begin(), right.end()) <0);
```  
  
 Pertanto, è possibile utilizzare un oggetto delle impostazioni locali come oggetto funzione.  
  
### <a name="example"></a>Esempio  
  
```  
// locale_op_compare.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string>  
#include <locale>  
  
int main( )   
{  
   using namespace std;  
   wchar_t *sa = L"ztesting";  
   wchar_t *sb = L"\0x00DFtesting";  
   basic_string<wchar_t> a( sa );  
   basic_string<wchar_t> b( sb );  
  
   locale loc( "German_Germany" );  
   cout << loc( a,b ) << endl;  
  
   const collate<wchar_t>& fac = use_facet<collate<wchar_t> >( loc );  
   cout << ( fac.compare( sa, sa + a.length( ),  
       sb, sb + b.length( ) ) < 0) << endl;  
}  
```  
  
```Output  
0  
0  
```  
  
##  <a name="a-namelocaleoperatoreqeqa-localeoperator"></a><a name="locale__operator_eq_eq"></a>  locale:: operator = =  
 Verifica l'uguaglianza di due impostazioni locali.  
  
```  
bool operator==(const locale& right) const;
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Una delle impostazioni locali per verificare l'uguaglianza.  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che è **true** se le impostazioni locali sono copie delle stesse impostazioni locali; **false** se le impostazioni locali non sono copie delle stesse impostazioni locali.  
  
### <a name="remarks"></a>Note  
 Due impostazioni locali sono uguali se sono le stesse impostazioni locali, se uno è una copia di altro, o se hanno nomi identici.  
  
### <a name="example"></a>Esempio  
  
```  
// locale_op_eq.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string>  
#include <locale>  
  
using namespace std;  
  
int main( )   
{  
   locale loc1( "German_Germany" );  
   locale loc2( "German_Germany" );  
   locale loc3( "English" );  
  
   if ( loc1 == loc2 )  
      cout << "locales loc1 (" << loc1.name( )  
      << ")\n and loc2 (" << loc2.name( ) << ") are equal."   
      << endl;  
   else  
      cout << "locales loc1 (" << loc1.name( )  
      << ")\n and loc2 (" << loc2.name( ) << ") are not equal."   
      << endl;  
  
   if ( loc1 == loc3 )  
      cout << "locales loc1 (" << loc1.name( )  
      << ")\n and loc3 (" << loc3.name( ) << ") are equal."   
      << endl;  
   else  
      cout << "locales loc1 (" << loc1.name( )  
      << ")\n and loc3 (" << loc3.name( ) << ") are not equal."   
      << endl;  
}  
```  
  
```Output  
locales loc1 (German_Germany.1252)  
 and loc2 (German_Germany.1252) are equal.  
locales loc1 (German_Germany.1252)  
 and loc3 (English_United States.1252) are not equal.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\< impostazioni locali>](../standard-library/locale.md)   
 [Tabelle codici](../c-runtime-library/code-pages.md)   
 [Nomi delle impostazioni locali, lingue e stringhe paese/area geografica](../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

