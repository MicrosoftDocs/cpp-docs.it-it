---
title: Classe ctype | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- xlocale/std::ctype
- xlocale/std::ctype::char_type
- xlocale/std::ctype::do_is
- xlocale/std::ctype::do_narrow
- xlocale/std::ctype::do_scan_is
- xlocale/std::ctype::do_scan_not
- xlocale/std::ctype::do_tolower
- xlocale/std::ctype::do_toupper
- xlocale/std::ctype::do_widen
- xlocale/std::ctype::is
- xlocale/std::ctype::narrow
- xlocale/std::ctype::scan_is
- xlocale/std::ctype::scan_not
- xlocale/std::ctype::tolower
- xlocale/std::ctype::toupper
- xlocale/std::ctype::widen
dev_langs:
- C++
helpviewer_keywords:
- std::ctype [C++]
- std::ctype [C++], char_type
- std::ctype [C++], do_is
- std::ctype [C++], do_narrow
- std::ctype [C++], do_scan_is
- std::ctype [C++], do_scan_not
- std::ctype [C++], do_tolower
- std::ctype [C++], do_toupper
- std::ctype [C++], do_widen
- std::ctype [C++], is
- std::ctype [C++], narrow
- std::ctype [C++], scan_is
- std::ctype [C++], scan_not
- std::ctype [C++], tolower
- std::ctype [C++], toupper
- std::ctype [C++], widen
ms.assetid: 3627154c-49d9-47b5-b28f-5bbedee38e3b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d0403dd297d726f0d0ef1ab7794d37b05c46967b
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ctype-class"></a>Classe ctype
Classe che fornisce un facet utilizzato per classificare i caratteri, eseguire la conversione dalle lettere maiuscole e minuscole, nonché per eseguire la conversione tra il set di caratteri nativi e il set utilizzato dalle impostazioni locali.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class CharType>  
class ctype : public ctype_base;  
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id.** I criteri di classificazione vengono forniti come tipo di maschera di bit annidata nella classe base ctype_base.  
  
 Nella libreria standard di C++ vengono definite due specializzazioni esplicite di questa classe modello:  
  
- [ctype](../standard-library/ctype-char-class.md)< `char`>, specializzazione esplicita le cui differenze vengono descritte separatamente.  
  
- **ctype**< `wchar_t`>, specializzazione che considera gli elementi come caratteri wide.  
  
 Altre specializzazioni della classe modello **ctype**\< **CharType**>:  
  
-   Convertono un valore ***ch*** di tipo **CharType** in un valore di tipo `char` con l'espressione ( `char`) **ch**.  
  
-   Convertono un valore ***byte*** di tipo `char` in un valore di tipo **CharType** con l'espressione **CharType** ( **byte**).  
  
 Tutte le altre operazioni vengono eseguite su valori `char` esattamente come per la specializzazione esplicita **ctype**< `char`>.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[ctype](#ctype)|Costruttore per gli oggetti della classe `ctype` utilizzati come facet delle impostazioni locali per i caratteri.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[char_type](#char_type)|Tipo che descrive un carattere utilizzato dalle impostazioni locali.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[do_is](#do_is)|Funzione virtuale chiamata per verificare se un singolo carattere presenta un attributo specifico oppure per classificare gli attributi di ogni carattere di un intervallo e archiviarli in una matrice.|  
|[do_narrow](#do_narrow)|Funzione virtuale chiamata per convertire un carattere di tipo `CharType` utilizzato dalle impostazioni locali nel carattere corrispondente di tipo `char` del set di caratteri nativo.|  
|[do_scan_is](#do_scan_is)|Funzione virtuale chiamata per individuare il primo carattere di un intervallo che corrisponde a una maschera specificata.|  
|[do_scan_not](#do_scan_not)|Funzione virtuale chiamata per individuare il primo carattere di un intervallo che non corrisponde a una maschera specificata.|  
|[do_tolower](#do_tolower)|Funzione virtuale chiamata per convertire un carattere o un intervallo di caratteri nelle rispettive lettere minuscole.|  
|[do_toupper](#do_toupper)|Funzione virtuale chiamata per convertire un carattere o un intervallo di caratteri in lettere maiuscole.|  
|[do_widen](#do_widen)|Funzione virtuale chiamata per convertire un carattere di tipo `char` del set di caratteri nativi nel carattere corrispondente di tipo `CharType` utilizzato dalle impostazioni locali.|  
|[is](#is)|Verifica se un singolo carattere presenta un attributo specifico oppure classifica gli attributi di ogni carattere di un intervallo e li archivia in una matrice.|  
|[narrow](#narrow)|Converte un carattere di tipo `CharType` utilizzato dalle impostazioni locali nel carattere corrispondente di tipo char del set di caratteri nativi.|  
|[scan_is](#scan_is)|Individua il primo carattere di un intervallo che corrisponde a una maschera specificata.|  
|[scan_not](#scan_not)|Individua il primo carattere di un intervallo che non corrisponde a una maschera specificata.|  
|[tolower](#tolower)|Converte un carattere o un intervallo di caratteri in lettere minuscole.|  
|[toupper](#toupper)|Converte un carattere o un intervallo di caratteri in lettere maiuscole.|  
|[widen](#widen)|Converte un carattere di tipo `char` del set di caratteri nativi nel carattere corrispondente di tipo `CharType` utilizzato dalle impostazioni locali.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
##  <a name="char_type"></a>  ctype::char_type  
 Tipo che descrive un carattere utilizzato dalle impostazioni locali.  
  
```  
typedef CharType char_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
### <a name="example"></a>Esempio  
  Vedere la funzione membro [widen](#widen) per un esempio che usa `char_type` come valore restituito.  
  
##  <a name="ctype"></a>  ctype::ctype  
 Costruttore per gli oggetti della classe ctype usati come facet delle impostazioni locali per i caratteri.  
  
```  
explicit ctype(size_t _Refs = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `_Refs`  
 Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.  
  
### <a name="remarks"></a>Note  
 I valori possibili per il parametro `_Refs` e i relativi significati sono:  
  
-   0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.  
  
-   1: la durata dell'oggetto deve essere gestita manualmente.  
  
-   \> 1: questi valori non definiti.  
  
 Non è possibile fornire esempi diretti, poiché il distruttore è protetto.  
  
 Il costruttore inizializza l'oggetto di base `locale::facet` con **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).  
  
##  <a name="do_is"></a>  ctype::do_is  
 Funzione virtuale chiamata per verificare se un singolo carattere presenta un attributo specifico oppure per classificare gli attributi di ogni carattere di un intervallo e archiviarli in una matrice.  
  
```  
virtual bool do_is(
    mask maskVal,   
    CharType ch) const;

 
virtual const CharType *do_is(
    const CharType* first,   
    const CharType* last,  
    mask* dest) const;
```  
  
### <a name="parameters"></a>Parametri  
 `maskVal`  
 Valore della maschera in base a cui il carattere deve essere sottoposto a test.  
  
 `ch`  
 Carattere i cui attributi devono essere sottoposti a test.  
  
 `first`  
 Puntatore al primo carattere dell'intervallo i cui attributi devono essere classificati.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo i cui attributi devono essere classificati.  
  
 `dest`  
 Puntatore all'inizio della matrice in cui sono archiviati i valori della maschera che caratterizzano gli attributi di ogni carattere.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce un valore booleano che è **true** se il carattere sottoposto a test contiene l'attributo descritto dal valore della maschera; **false** se non ha l'attributo.  
  
 La seconda funzione membro restituisce una matrice contenente i valori della maschera che caratterizza gli attributi di ogni caratteri dell'intervallo.  
  
### <a name="remarks"></a>Note  
 I valori della maschera che classificano gli attributi dei caratteri sono specificati dalla classe [ctype_base](../standard-library/ctype-base-class.md), da cui ctype deriva. La prima funzione membro può accettare espressioni per il primo parametro indicato come maschere di bit e formato dalla combinazione di valori della maschera dagli operatori logici bit per bit (&#124; , & , ^ , ~).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di [is](#is), che chiama `do_is`.  
  
##  <a name="do_narrow"></a>  ctype::do_narrow  
 Funzione virtuale chiamata per convertire un carattere di tipo `CharType` utilizzato dalle impostazioni locali nel carattere corrispondente di tipo `char` del set di caratteri nativo.  
  
```  
virtual char do_narrow(
    CharType ch,   
    char default = '\0') const;

 
virtual const CharType* do_narrow(
    const CharType* first,   
    const CharType* last,  
    char default,   
    char* dest) const;
```  
  
### <a name="parameters"></a>Parametri  
 `ch`  
 Carattere di tipo `Chartype` usato dalle impostazioni locali da convertire.  
  
 `default`  
 Valore predefinito che deve essere assegnato dalla funzione membro ai caratteri di tipo `CharType` che non dispongono di caratteri corrispondenti di tipo `char`.  
  
 `first`  
 Puntatore al primo carattere in un intervallo di caratteri da convertire.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo dei caratteri da convertire.  
  
 `dest`  
 Puntatore const al primo carattere di tipo `char` nell'intervallo di destinazione che archivia l'intervallo di caratteri convertito.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro protetto restituisce il carattere nativo di tipo char che corrisponde al carattere del parametro di tipo `CharType` o `default` se non è stato definito alcun equivalente.  
  
 La seconda funzione membro protetto restituisce un puntatore per l'intervallo di destinazione di caratteri nativi convertiti a partire da caratteri di tipo `CharType`.  
  
### <a name="remarks"></a>Note  
 Il secondo protetto funzione membro modello archivia in `dest`[ `I`] il valore `do_narrow`( `first` [ `I`], `default`), per `I` nell'intervallo [0, `last`  -  `first`).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di [narrow](#narrow), che chiama `do_narrow`.  
  
##  <a name="do_scan_is"></a>  ctype::do_scan_is  
 Funzione virtuale chiamata per individuare il primo carattere di un intervallo che corrisponde a una maschera specificata.  
  
```  
virtual const CharType *do_scan_is(
    mask maskVal,   
    const CharType* first,   
    const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `maskVal`  
 Valore della maschera da confrontare per carattere.  
  
 `first`  
 Puntatore al primo carattere nell'intervallo da analizzare.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo da analizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al primo carattere in un intervallo che corrisponde a una maschera specificata. Se tale valore non esiste, la funzione restituisce `last.`  
  
### <a name="remarks"></a>Note  
 La funzione membro protetto restituisce il più piccolo puntatore `ptr` nell'intervallo [ `first`, `last`) per il quale [do_is](#do_is)( `maskVal`, * `ptr`) è true.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di [scan_is](#scan_is), che chiama `do_scan_is`.  
  
##  <a name="do_scan_not"></a>  ctype::do_scan_not  
 Funzione virtuale chiamata per individuare il primo carattere di un intervallo che non corrisponde a una maschera specificata.  
  
```  
virtual const CharType *do_scan_not(
    mask maskVal,   
    const CharType* first,   
    const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `maskVal`  
 Valore della maschera che non deve essere confrontata per carattere.  
  
 `first`  
 Puntatore al primo carattere nell'intervallo da analizzare.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo da analizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al primo carattere in un intervallo che non corrisponde a una maschera specificata. Se tale valore non esiste, la funzione restituisce `last`.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetto restituisce il più piccolo puntatore `ptr` nell'intervallo [ `first`, `last`) per il quale [do_is](#do_is)( `maskVal`, * `ptr`) è false.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di [scan_not](#scan_not), che chiama `do_scan_not`.  
  
##  <a name="do_tolower"></a>  ctype::do_tolower  
 Funzione virtuale chiamata per convertire un carattere o un intervallo di caratteri in lettere minuscole.  
  
```  
virtual CharType do_tolower(CharType ch) const;

 
virtual const CharType *do_tolower(
    CharType* first,   
    const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `ch`  
 Carattere da convertire in lettere minuscole.  
  
 `first`  
 Puntatore al primo carattere in un intervallo di caratteri di cui deve essere convertita la combinazione di maiuscole/minuscole.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo dei caratteri di cui deve essere convertita la combinazione di maiuscole/minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro protetto restituisce il formato minuscolo del parametro `ch`. Se non esiste nessun formato minuscolo, restituisce `ch`. La seconda funzione membro protetto restituisce `last`.  
  
### <a name="remarks"></a>Note  
 La seconda funzione di modello di membro protetto sostituisce ogni elemento `first` [ `I`], per `I` nell'intervallo [0, `last`  -  `first`), con `do_tolower`( `first` [ `I`]).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di [tolower](#tolower) che chiama `do_tolower`.  
  
##  <a name="do_toupper"></a>  ctype::do_toupper  
 Funzione virtuale chiamata per convertire un carattere o un intervallo di caratteri in lettere maiuscole.  
  
```  
virtual CharType do_toupper(CharType ch) const;

 
virtual const CharType *do_toupper(
    CharType* first,   
    const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `ch`  
 Carattere da convertire in lettere maiuscole.  
  
 `first`  
 Puntatore al primo carattere in un intervallo di caratteri di cui deve essere convertita la combinazione di maiuscole/minuscole.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo dei caratteri di cui deve essere convertita la combinazione di maiuscole/minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro protetto restituisce il formato maiuscolo del parametro `ch`. Se non esiste nessun formato maiuscolo, restituisce `ch`. La seconda funzione membro protetto restituisce `last`.  
  
### <a name="remarks"></a>Note  
 La seconda funzione di modello di membro protetto sostituisce ogni elemento `first` [ `I`], per `I` nell'intervallo [0, `last`  -  `first`), con `do_toupper`( `first` [ `I`]).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di [toupper](#toupper) che chiama `do_toupper`.  
  
##  <a name="do_widen"></a>  ctype::do_widen  
 Funzione virtuale chiamata per convertire un carattere di tipo `char` del set di caratteri nativi nel carattere corrispondente di tipo `CharType` utilizzato dalle impostazioni locali.  
  
```  
virtual CharType do_widen(char byte) const;

 
virtual const char *do_widen(
    const char* first,   
    const char* last,   
    CharType* dest) const;
```  
  
### <a name="parameters"></a>Parametri  
 `byte`  
 Carattere di tipo `char` nel set di caratteri nativo da convertire.  
  
 `first`  
 Puntatore al primo carattere in un intervallo di caratteri da convertire.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo dei caratteri da convertire.  
  
 `dest`  
 Puntatore al primo carattere di tipo `CharType` nell'intervallo di destinazione che archivia l'intervallo di caratteri convertito.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro protetto restituisce il carattere di tipo `CharType` che corrisponde al carattere del parametro di tipo `char` nativo.  
  
 La seconda funzione membro protetto restituisce un puntatore per l'intervallo di destinazione di caratteri di tipo `CharType` usati dalle impostazioni locali convertiti da caratteri nativi di tipo `char`.  
  
### <a name="remarks"></a>Note  
 La seconda funzione del modello membro protetto archivia in `dest`[ `I`] il valore `do_widen`( `first` [ `I`]), per `I` nell'intervallo [0, `last` - `first`).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di [widen](#widen), che chiama `do_widen`.  
  
##  <a name="is"></a>  ctype::is  
 Verifica se un singolo carattere presenta un attributo specifico oppure classifica gli attributi di ogni carattere di un intervallo e li archivia in una matrice.  
  
```  
bool is(mask maskVal, CharType ch) const;

 
const CharType *is(
    const CharType* first,   
    const CharType* last,  
    mask* dest) const;
```  
  
### <a name="parameters"></a>Parametri  
 `maskVal`  
 Valore della maschera in base a cui il carattere deve essere sottoposto a test.  
  
 `ch`  
 Carattere i cui attributi devono essere sottoposti a test.  
  
 `first`  
 Puntatore al primo carattere dell'intervallo i cui attributi devono essere classificati.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo i cui attributi devono essere classificati.  
  
 `dest`  
 Puntatore all'inizio della matrice in cui sono archiviati i valori della maschera che caratterizzano gli attributi di ogni carattere.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce `true` se il carattere sottoposto a test ha l'attributo descritto dal valore della maschera; `false` se non ha l'attributo.  
  
 La seconda funzione membro restituisce un puntatore all'ultimo carattere dell'intervallo i cui attributi devono essere classificati.  
  
### <a name="remarks"></a>Note  
 I valori della maschera che classificano gli attributi dei caratteri sono specificati dalla classe [ctype_base](../standard-library/ctype-base-class.md), da cui deriva ctype. La prima funzione membro può accettare espressioni per il primo parametro indicato come maschere di bit e formato dalla combinazione di valori della maschera dagli operatori logici bit per bit (&#124; , & , ^ , ~).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ctype_is.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main() {  
   locale loc1 ( "German_Germany" ), loc2 ( "English_Australia" );  
  
   if (use_facet<ctype<char> > ( loc1 ).is( ctype_base::alpha, 'a' ))  
      cout << "The character 'a' in locale loc1 is alphabetic."   
           << endl;  
   else  
      cout << "The character 'a' in locale loc1 is not alphabetic."   
           << endl;  
  
   if (use_facet<ctype<char> > ( loc2 ).is( ctype_base::alpha, '!' ))  
      cout << "The character '!' in locale loc2 is alphabetic."   
           << endl;  
   else  
      cout << "The character '!' in locale loc2 is not alphabetic."   
           << endl;  
  
   char *string = "Hello, my name is John!";  
   ctype<char>::mask maskarray[30];  
   use_facet<ctype<char> > ( loc2 ).is(  
      string, string + strlen(string), maskarray );  
   for (unsigned int i = 0; i < strlen(string); i++) {  
      cout << string[i] << ": "  
           << (maskarray[i] & ctype_base::alpha  "alpha"  
                                                : "not alpha")  
           << endl;;  
   };  
}  
```  
  
##  <a name="narrow"></a>  ctype::narrow  
 Converte i caratteri di tipo `CharType` usati dalle impostazioni locali nei caratteri corrispondenti di tipo `char` usati nel set di caratteri nativo.  
  
```  
char narrow(CharType ch, char default = '\0') const;

 
const CharType* narrow(
    const CharType* first,   
    const CharType* last,  
    char default,   
    char* dest) const;
```  
  
### <a name="parameters"></a>Parametri  
 `ch`  
 Carattere di tipo `Chartype` usato dalle impostazioni locali da convertire.  
  
 `default`  
 Valore predefinito che deve essere assegnato dalla funzione membro ai caratteri di tipo `CharType` che non dispongono di caratteri corrispondenti di tipo `char`.  
  
 `first`  
 Puntatore al primo carattere in un intervallo di caratteri da convertire.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo dei caratteri da convertire.  
  
 `dest`  
 Puntatore const al primo carattere di tipo `char` nell'intervallo di destinazione che archivia l'intervallo di caratteri convertito.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce il carattere nativo di tipo `char` che corrisponde al carattere del parametro di tipo `CharType default` se non è stato definito alcun equivalente.  
  
 La seconda funzione membro restituisce un puntatore per l'intervallo di destinazione di caratteri nativi convertiti a partire da caratteri di tipo `CharType`.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce [do_narrow](#do_narrow)( `ch`, `default`). La seconda funzione membro restituisce [do_narrow](#do_narrow) ( `first`, `last`, `default`, `dest`). Solo i caratteri d'origine di base hanno definitivamente un'immagine inversa univoca `CharType` in `narrow`. Per questi caratteri d'origine di base, l'invariabile seguente include: `narrow` ( [widen](#widen) ( **c** ), 0 ) == **c**.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ctype_narrow.cpp  
// compile with: /EHsc /W3  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
   locale loc1 ( "english" );  
   wchar_t *str1 = L"\x0392fhello everyone";  
   char str2 [16];  
   bool result1 = (use_facet<ctype<wchar_t> > ( loc1 ).narrow  
      ( str1, str1 + wcslen(str1), 'X', &str2[0] ) != 0);  // C4996  
   str2[wcslen(str1)] = '\0';  
   wcout << str1 << endl;  
   cout << &str2[0] << endl;  
}  
```  
  
```Output  
Xhello everyone  
```  
  
##  <a name="scan_is"></a>  ctype::scan_is  
 Individua il primo carattere di un intervallo che corrisponde a una maschera specificata.  
  
```  
const CharType *scan_is(
    mask maskVal,   
    const CharType* first,   
    const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `maskVal`  
 Valore della maschera da confrontare per carattere.  
  
 `first`  
 Puntatore al primo carattere nell'intervallo da analizzare.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo da analizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al primo carattere in un intervallo che corrisponde a una maschera specificata. Se tale valore non esiste, la funzione restituisce `last.`  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_scan_is](#do_scan_is)( `maskVal`, `first`, `last`).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ctype_scan_is.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )     
{  
   locale loc1 ( "German_Germany" );  
  
   char *string = "Hello, my name is John!";  
  
   const char* i = use_facet<ctype<char> > ( loc1 ).scan_is  
      ( ctype_base::punct, string, string + strlen(string) );  
   cout << "The first punctuation is \"" << *i << "\" at position: "   
      << i - string << endl;  
}  
```  
  
```Output  
The first punctuation is "," at position: 5  
```  
  
##  <a name="scan_not"></a>  ctype::scan_not  
 Individua il primo carattere di un intervallo che non corrisponde a una maschera specificata.  
  
```  
const CharType *scan_not(
    mask maskVal,   
    const CharType* first,   
    const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `maskVal`  
 Valore della maschera che non deve essere confrontata per carattere.  
  
 `first`  
 Puntatore al primo carattere nell'intervallo da analizzare.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo da analizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al primo carattere in un intervallo che non corrisponde a una maschera specificata. Se tale valore non esiste, la funzione restituisce `last`.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_scan_not](#do_scan_not)( `maskVal`, `first`, `last`).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ctype_scan_not.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )     
{  
   locale loc1 ( "German_Germany" );  
  
   char *string = "Hello, my name is John!";  
  
   const char* i = use_facet<ctype<char> > ( loc1 ).scan_not  
      ( ctype_base::alpha, string, string + strlen(string) );  
   cout << "First nonalpha character is \"" << *i << "\" at position: "   
      << i - string << endl;  
}  
```  
  
```Output  
First nonalpha character is "," at position: 5  
```  
  
##  <a name="tolower"></a>  ctype::tolower  
 Converte un carattere o un intervallo di caratteri in lettere minuscole.  
  
```  
CharType tolower(CharType ch) const;

 
const CharType *tolower(CharType* first, const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `ch`  
 Carattere da convertire in lettere minuscole.  
  
 `first`  
 Puntatore al primo carattere in un intervallo di caratteri di cui deve essere convertita la combinazione di maiuscole/minuscole.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo dei caratteri di cui deve essere convertita la combinazione di maiuscole/minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce il formato minuscolo del parametro `ch`. Se non esiste nessun formato minuscolo, restituisce `ch`.  
  
 La seconda funzione membro restituisce `last`.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce [do_tolower](#do_tolower)( `ch`). La seconda funzione membro restituisce [do_tolower](#do_tolower)( `first`, `last`).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ctype_tolower.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
   locale loc1 ( "German_Germany" );  
  
   char string[] = "HELLO, MY NAME IS JOHN";  
  
   use_facet<ctype<char> > ( loc1 ).tolower  
      ( string, string + strlen(string) );  
   cout << "The lowercase string is: " << string << endl;  
}  
```  
  
```Output  
The lowercase string is: hello, my name is john  
```  
  
##  <a name="toupper"></a>  ctype::toupper  
 Converte un carattere o un intervallo di caratteri in lettere maiuscole.  
  
```  
CharType toupper(CharType ch) const; 
const CharType *toupper(CharType* first, const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `ch`  
 Carattere da convertire in lettere maiuscole.  
  
 `first`  
 Puntatore al primo carattere in un intervallo di caratteri di cui deve essere convertita la combinazione di maiuscole/minuscole.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo dei caratteri di cui deve essere convertita la combinazione di maiuscole/minuscole.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce il formato maiuscolo del parametro `ch`. Se non esiste nessun formato maiuscolo, restituisce `ch`.  
  
 La seconda funzione membro restituisce `last`.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce [do_toupper](#do_toupper)( `ch`). La seconda funzione membro restituisce [do_toupper](#do_toupper)( `first`, `last`).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ctype_toupper.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )     
{  
   locale loc1 ( "German_Germany" );  
  
   char string[] = "Hello, my name is John";  
  
   use_facet<ctype<char> > ( loc1 ).toupper  
      ( string, string + strlen(string) );  
   cout << "The uppercase string is: " << string << endl;  
}  
```  
  
```Output  
The uppercase string is: HELLO, MY NAME IS JOHN  
```  
  
##  <a name="widen"></a>  ctype::widen  
 Converte un carattere di tipo `char` del set di caratteri nativi nel carattere corrispondente di tipo `CharType` utilizzato dalle impostazioni locali.  
  
```  
CharType widen(char byte) const; 
const char *widen(const char* first, const char* last, CharType* dest) const;
```  
  
### <a name="parameters"></a>Parametri  
 `byte`  
 Carattere di tipo char nel set di caratteri nativo da convertire.  
  
 `first`  
 Puntatore al primo carattere in un intervallo di caratteri da convertire.  
  
 `last`  
 Puntatore al carattere immediatamente successivo all'ultimo carattere dell'intervallo dei caratteri da convertire.  
  
 `dest`  
 Puntatore al primo carattere di tipo `CharType` nell'intervallo di destinazione che archivia l'intervallo di caratteri convertito.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione membro restituisce il carattere di tipo `CharType` che corrisponde al carattere del parametro di tipo `char` nativo.  
  
 La seconda funzione membro restituisce un puntatore per l'intervallo di destinazione di caratteri di tipo `CharType` usati dalle impostazioni locali convertiti da caratteri nativi di tipo `char`.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce [do_widen](#do_widen)( `byte`). La seconda funzione membro restituisce [do_widen](#do_widen)( `first`, `last`, `dest`).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// ctype_widen.cpp  
// compile with: /EHsc /W3  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )  
{  
   locale loc1 ( "English" );  
   char *str1 = "Hello everyone!";  
   wchar_t str2 [16];  
   bool result1 = (use_facet<ctype<wchar_t> > ( loc1 ).widen  
      ( str1, str1 + strlen(str1), &str2[0] ) != 0);  // C4996  
   str2[strlen(str1)] = '\0';  
   cout << str1 << endl;  
   wcout << &str2[0] << endl;  
  
   ctype<wchar_t>::char_type charT;  
   charT = use_facet<ctype<char> > ( loc1 ).widen( 'a' );  
}  
```  
  
```Output  
Hello everyone!  
Hello everyone!  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<locale>](../standard-library/locale.md)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

