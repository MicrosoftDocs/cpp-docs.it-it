---
title: Classe messages | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- messages
- xlocmes/std::messages
- locale/std::messages::char_type
- locale/std::messages::string_type
- locale/std::messages::close
- locale/std::messages::do_close
- locale/std::messages::do_get
- locale/std::messages::do_open
- locale/std::messages::get
- locale/std::messages::open
dev_langs:
- C++
helpviewer_keywords:
- messages class
ms.assetid: c4c71f40-4f24-48ab-9f7c-daccd8d5bd83
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.openlocfilehash: 8a3c647c9c64f2783bf2bc6d2eee86d7107af8d2
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="messages-class"></a>Classe messages
La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per recuperare i messaggi localizzati da un catalogo di messaggi internazionalizzati per le impostazioni locali specificate.  
  
 Attualmente, mentre viene implementata la classe dei messaggi, non esiste alcun messaggio.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class CharType>  
class messages : public messages_base;
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.  
  
## <a name="remarks"></a>Note  
 Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id.**  
  
 Questo facet apre fondamentalmente un catalogo di messaggi definiti in messages_base della classe base, recupera le informazioni richieste e chiude il catalogo.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[messages](#messages)|Funzione del costruttore del facet dei messaggi.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[char_type](#char_type)|Tipo di carattere utilizzato per visualizzare i messaggi.|  
|[string_type](#string_type)|Tipo che descrive una stringa di tipo `basic_string` contenente caratteri di tipo `CharType`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[close](#close)|Chiude il catalogo dei messaggi.|  
|[do_close](#do_close)|Funzione virtuale chiamata perché avvenga la perdita del catalogo dei messaggi.|  
|[do_get](#do_get)|Funzione virtuale chiamata per recuperare il catalogo dei messaggi.|  
|[do_open](#do_open)|Funzione virtuale chiamata per aprire il catalogo dei messaggi.|  
|[get](#get)|Recupera il catalogo dei messaggi.|  
|[open](#open)|Apre il catalogo dei messaggi.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
##  <a name="char_type"></a>  messages::char_type  
 Tipo di carattere utilizzato per visualizzare i messaggi.  
  
```
typedef CharType char_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="close"></a>  messages::close  
 Chiude il catalogo dei messaggi.  
  
```
void close(catalog _Catval) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Catval`  
 Catalogo da chiudere.  
  
### <a name="remarks"></a>Note  
 La funzione membro chiama [do_close](#do_close)(_ *Catval*).  
  
##  <a name="do_close"></a>  messages::do_close  
 Funzione virtuale chiamata perché avvenga la perdita del catalogo dei messaggi.  
  
```
virtual void do_close(catalog _Catval) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Catval`  
 Catalogo da chiudere.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetta chiude il catalogo dei messaggi `_Catval`. È necessario che tale catalogo sia stato aperto da una precedente chiamata a [do_open](#do_open).  
  
 È necessario ottenere *_Catval* da un catalogo aperto in precedenza e non chiuso.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [close](#close), che chiama `do_close`.  
  
##  <a name="do_get"></a>  messages::do_get  
 Funzione virtuale chiamata per recuperare il catalogo dei messaggi.  
  
```
virtual string_type do_get(
    catalog _Catval,
    int _Set,
    int _Message,
    const string_type& _Dfault) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Catval`  
 Valore di identificazione che specifica il catalogo dei messaggi in cui eseguire ricerche.  
  
 `_Set`  
 Primo valore identificato usato per individuare un messaggio in un catalogo dei messaggi.  
  
 `_Message`  
 Secondo valore identificato usato per individuare un messaggio in un catalogo dei messaggi.  
  
 `_Dfault`  
 Stringa da restituire in caso di esito negativo.  
  
### <a name="return-value"></a>Valore restituito  
 In caso di esito negativo, viene restituita una copia di `_Dfault`. In caso contrario, viene restituita una copia della sequenza di messaggi specificata.  
  
### <a name="remarks"></a>Note  
 La funzione membro protetta tenta di ottenere una sequenza di messaggi dal catalogo dei messaggi `_Catval`. A questo scopo, è possibile che usi `_Set`, `_Message` e `_Dfault`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [get](#get), che chiama `do_get`.  
  
##  <a name="do_open"></a>  messages::do_open  
 Funzione virtuale chiamata per aprire il catalogo dei messaggi.  
  
```
virtual catalog do_open(
    const string& _Catname,
    const locale& _Loc) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Catname`  
 Nome del catalogo in cui eseguire ricerche.  
  
 `_Loc`  
 Impostazioni locali da ricercare nel catalogo.  
  
### <a name="return-value"></a>Valore restituito  
 In caso di esito negativo, viene restituito un valore minore di zero. In caso contrario, il valore restituito può essere usato come primo argomento in una successiva chiamata a [get](#get).  
  
### <a name="remarks"></a>Note  
 La funzione membro protetta tenta di aprire un catalogo dei messaggi il cui nome è `_Catname`. A questo scopo, è possibile che usi le impostazioni locali `_Loc`.  
  
 Il valore restituito deve essere usato come argomento in una successiva chiamata a [close](#close).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo a [open](#open), che chiama `do_open`.  
  
##  <a name="get"></a>  messages::get  
 Recupera il catalogo dei messaggi.  
  
```
string_type get(
    catalog _CatVal,
    int _Set,
    int _Message,
    const string_type& _Dfault) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Catval`  
 Valore di identificazione che specifica il catalogo dei messaggi in cui eseguire ricerche.  
  
 `_Set`  
 Primo valore identificato usato per individuare un messaggio in un catalogo dei messaggi.  
  
 `_Message`  
 Secondo valore identificato usato per individuare un messaggio in un catalogo dei messaggi.  
  
 `_Dfault`  
 Stringa da restituire in caso di esito negativo.  
  
### <a name="return-value"></a>Valore restituito  
 In caso di esito negativo, viene restituita una copia di `_Dfault`. In caso contrario, viene restituita una copia della sequenza di messaggi specificata.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_get](#do_get)( `_Catval`, `_Set`, `_Message`, `_Dfault`).  
  
##  <a name="messages"></a>  messages::messages  
 Funzione del costruttore del facet dei messaggi.  
  
```
explicit messages(
    size_t _Refs = 0);

protected: messages(
    const char* _Locname,
    size_t _Refs = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `_Refs`  
 Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.  
  
 `_Locname`  
 Nome delle impostazioni locali.  
  
### <a name="remarks"></a>Note  
 I valori possibili per il parametro `_Refs` e i relativi significati sono:  
  
-   0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.  
  
-   1: la durata dell'oggetto deve essere gestita manualmente.  
  
-   \>1: questi valori non definiti.  
  
 Non è possibile offrire esempi diretti, poiché il distruttore è protetto.  
  
 Il costruttore inizializza l'oggetto di base con **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).  
  
##  <a name="open"></a>  messages::open  
 Apre il catalogo dei messaggi.  
  
```
catalog open(
    const string& _Catname,
    const locale& _Loc) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Catname`  
 Nome del catalogo in cui eseguire ricerche.  
  
 `_Loc`  
 Impostazioni locali da ricercare nel catalogo.  
  
### <a name="return-value"></a>Valore restituito  
 In caso di esito negativo, viene restituito un valore minore di zero. In caso contrario, il valore restituito può essere usato come primo argomento in una successiva chiamata a [get](#get).  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_open](#do_open)( `_Catname`, `_Loc`).  
  
##  <a name="string_type"></a>  messages::string_type  
 Tipo che descrive una stringa di tipo `basic_string` contenente caratteri di tipo **CharType**.  
  
```
typedef basic_string<CharType, Traits, Allocator> string_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare copie delle sequenze di messaggi.  
  
## <a name="see-also"></a>Vedere anche  
 [\<locale>](../standard-library/locale.md)   
 [Classe messages_base](../standard-library/messages-base-class.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)




