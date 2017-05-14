---
title: Classe time_put | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- time_put
- xloctime/std::time_put
- locale/std::time_put::char_type
- locale/std::time_put::iter_type
- locale/std::time_put::do_put
- locale/std::time_put::put
dev_langs:
- C++
helpviewer_keywords:
- time_put class
ms.assetid: df79493e-3331-48d2-97c3-ac3a745f0791
caps.latest.revision: 22
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
ms.openlocfilehash: 0331580941a30b8d6ab9468ce95182950478ddcb
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="timeput-class"></a>Classe time_put
La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori temporali in sequenze di tipo `CharType`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class CharType,  
    class OutputIterator = ostreambuf_iterator<CharType>>  
class time_put : public locale::facet;  
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
 `OutputIterator`  
 Tipo di iteratore in cui le funzioni temporali put scrivono il proprio output.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id.**  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[time_put](#time_put)|Costruttore per oggetti di tipo `time_put`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|  
|[iter_type](#iter_type)|Tipo che descrive un iteratore di output.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[do_put](#do_put)|Funzione virtuale che restituisce informazioni sulla data e l'ora come sequenza di `CharType`.|  
|[put](#put)|Restituisce informazioni sulla data e l'ora come sequenza di `CharType`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
##  <a name="char_type"></a>  time_put::char_type  
 Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.  
  
```  
typedef CharType char_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="do_put"></a>  time_put::do_put  
 Funzione virtuale che restituisce informazioni sulla data e l'ora come sequenza di **CharType**.  
  
```  
virtual iter_type do_put(
    iter_type next,   
    ios_base& _Iosbase,  
    const tm* _Pt,   
    char _Fmt,   
    char _Mod = 0) const;
```  
  
### <a name="parameters"></a>Parametri  
 `next`  
 Iteratore di output in cui deve essere inserita la sequenza di caratteri che rappresenta la data e l'ora.  
  
 `_Iosbase`  
 Non usato.  
  
 `_Pt`  
 Informazioni di tipo data e ora da visualizzare in output.  
  
 `_Fmt`  
 Formato dell'output. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.  
  
 `_Mod`  
 Modificatore del formato. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore alla prima posizione dopo l'ultimo elemento inserito.  
  
### <a name="remarks"></a>Note  
 La funzione membro virtuale protetta genera elementi sequenziali a partire da `next` dai valori di tipo ora archiviati nell'oggetto \* `_Pt` e di tipo **tm**. La funzione restituisce un iteratore che designa la posizione in cui inserire un elemento immediatamente successiva all'output generato.  
  
 L'output viene generato in base alle stesse regole usate da `strftime`, con un ultimo argomento di `_Pt`, per la generazione di una serie di elementi `char` in una matrice. Si presuppone che ciascun elemento `char` esegua il mapping a un elemento equivalente di tipo **CharType** tramite un semplice mapping uno a uno. Se `_Mod` è uguale a zero, il formato effettivo è "%F", dove F è sostituito da `_Fmt`. In caso contrario, il formato effettivo è "%MF", dove M è sostituito da `_Mod`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [put](#put), che chiama `do_put`.  
  
##  <a name="iter_type"></a>  time_put::iter_type  
 Tipo che descrive un iteratore di output.  
  
```  
typedef OutputIterator iter_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **OutputIterator**.  
  
##  <a name="put"></a>  time_put::put  
 Restituisce informazioni sulla data e l'ora come sequenza di **CharType**.  
  
```  
iter_type put(iter_type next,
    ios_base& _Iosbase,
    char_type _Fill,
    const tm* _Pt,
    char _Fmt,
    char _Mod = 0) const;

iter_type put(iter_type next,
    ios_base& _Iosbase,
    char_type _Fill,
    const tm* _Pt,
    const CharType* first,
    const CharType* last) const;
```  
  
### <a name="parameters"></a>Parametri  
 `next`  
 Iteratore di output in cui deve essere inserita la sequenza di caratteri che rappresenta la data e l'ora.  
  
 `_Iosbase`  
 Non usato.  
  
 `_Fill`  
 Carattere di tipo **CharType** usato per la spaziatura.  
  
 `_Pt`  
 Informazioni di tipo data e ora da visualizzare in output.  
  
 `_Fmt`  
 Formato dell'output. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.  
  
 `_Mod`  
 Modificatore del formato. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.  
  
 `first`  
 Inizio della stringa di formattazione per l'output. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.  
  
 `last`  
 Fine della stringa di formattazione per l'output. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore alla prima posizione dopo l'ultimo elemento inserito.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce [do_put](#do_put)( `next`, `_Iosbase`, `_Fill`, `_Pt`, `_Fmt`, `_Mod`). La seconda funzione membro copia in \* `next` ++ qualsiasi elemento compreso nell'intervallo [ `first`, `last`) diverso da una percentuale (%). Per una percentuale seguita da un carattere *C* nell'intervallo [ `first`, `last`), la funzione restituisce invece `next`  =  `do_put`( `next`, `_Iosbase`, `_Fill`, `_Pt`, *C*, 0) e ignora quanto segue *C*. Se, tuttavia, *C* è un carattere qualificatore del set EOQ#, seguito da un carattere `C2` nell'intervallo [ `first`, `last`), la funzione restituisce invece `next` = `do_put`( `next`, `_Iosbase`, `_Fill`, `_Pt`, `C2`, *C*) e ignora quanto segue `C2`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// time_put_put.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
#include <sstream>  
#include <time.h>  
using namespace std;  
int main( )  
{  
   locale loc;  
   basic_stringstream<char> pszPutI;  
   ios_base::iostate st = 0;  
   struct tm t;  
   memset( &t, 0, sizeof( struct tm ) );  
  
   t.tm_hour = 5;  
   t.tm_min = 30;  
   t.tm_sec = 40;  
   t.tm_year = 00;  
   t.tm_mday = 4;  
   t.tm_mon = 6;  
  
   pszPutI.imbue( loc );  
   char *pattern = "x: %X %x";  
   use_facet <time_put <char> >  
   (loc).put(basic_ostream<char>::_Iter(pszPutI.rdbuf( )),  
          pszPutI, ' ', &t, pattern, pattern+strlen(pattern));  
  
      cout << "num_put( ) = " << pszPutI.rdbuf( )->str( ) << endl;  
  
      char strftimebuf[255];  
      strftime(&strftimebuf[0], 255, pattern, &t);  
      cout << "strftime( ) = " << &strftimebuf[0] << endl;  
}  
```  
  
```Output  
num_put( ) = x: 05:30:40 07/04/00  
strftime( ) = x: 05:30:40 07/04/00  
```  
  
##  <a name="time_put"></a>  time_put::time_put  
 Costruttore per oggetti di tipo `time_put`.  
  
```  
explicit time_put(size_t _Refs = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `_Refs`  
 Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.  
  
### <a name="remarks"></a>Note  
 I valori possibili per il parametro `_Refs` e i relativi significati sono:  
  
-   0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.  
  
-   1: la durata dell'oggetto deve essere gestita manualmente.  
  
-   \>1: questi valori non definiti.  
  
 Il costruttore inizializza il relativo oggetto di base con [locale::facet](../standard-library/locale-class.md#facet_class)(*_Refs*).  
  
## <a name="see-also"></a>Vedere anche  
 [\<locale>](../standard-library/locale.md)   
 [Classe time_base](../standard-library/time-base-class.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)


