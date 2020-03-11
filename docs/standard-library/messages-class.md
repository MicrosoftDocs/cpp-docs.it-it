---
title: Classe messages
ms.date: 11/04/2016
f1_keywords:
- xlocmes/std::messages
- xlocmes/std::messages::char_type
- xlocmes/std::messages::string_type
- xlocmes/std::messages::close
- xlocmes/std::messages::do_close
- xlocmes/std::messages::do_get
- xlocmes/std::messages::do_open
- xlocmes/std::messages::get
- xlocmes/std::messages::open
helpviewer_keywords:
- std::messages [C++]
- std::messages [C++], char_type
- std::messages [C++], string_type
- std::messages [C++], close
- std::messages [C++], do_close
- std::messages [C++], do_get
- std::messages [C++], do_open
- std::messages [C++], get
- std::messages [C++], open
ms.assetid: c4c71f40-4f24-48ab-9f7c-daccd8d5bd83
ms.openlocfilehash: 704ee2ce40b4026cc066213181c96cf0f744d152
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78884023"
---
# <a name="messages-class"></a>Classe messages

Il modello di classe descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per recuperare i messaggi localizzati da un catalogo di messaggi internazionalizzati per le impostazioni locali specificate.

Attualmente, mentre viene implementata la classe dei messaggi, non esiste alcun messaggio.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
class messages : public messages_base;
```

### <a name="parameters"></a>Parametri

\ *CharType*
Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.

## <a name="remarks"></a>Osservazioni

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id**.

Questo facet apre fondamentalmente un catalogo di messaggi definiti in messages_base della classe base, recupera le informazioni richieste e chiude il catalogo.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[messages](#messages)|Funzione del costruttore del facet dei messaggi.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo di carattere utilizzato per visualizzare i messaggi.|
|[string_type](#string_type)|Tipo che descrive una stringa di tipo `basic_string` contenente caratteri di tipo `CharType`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[close](#close)|Chiude il catalogo dei messaggi.|
|[do_close](#do_close)|Funzione virtuale chiamata perché avvenga la perdita del catalogo dei messaggi.|
|[do_get](#do_get)|Funzione virtuale chiamata per recuperare il catalogo dei messaggi.|
|[do_open](#do_open)|Funzione virtuale chiamata per aprire il catalogo dei messaggi.|
|[get](#get)|Recupera il catalogo dei messaggi.|
|[open](#open)|Apre il catalogo dei messaggi.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<impostazioni locali >

**Spazio dei nomi:** std

## <a name="char_type"></a>  messages::char_type

Tipo di carattere utilizzato per visualizzare i messaggi.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello **CharType**.

## <a name="close"></a>  messages::close

Chiude il catalogo dei messaggi.

```cpp
void close(catalog _Catval) const;
```

### <a name="parameters"></a>Parametri

*_Catval*\
Catalogo da chiudere.

### <a name="remarks"></a>Osservazioni

La funzione membro chiama [do_close](#do_close)(_ *Catval*).

## <a name="do_close"></a>  messages::do_close

Funzione virtuale chiamata perché avvenga la perdita del catalogo dei messaggi.

```cpp
virtual void do_close(catalog _Catval) const;
```

### <a name="parameters"></a>Parametri

*_Catval*\
Catalogo da chiudere.

### <a name="remarks"></a>Osservazioni

La funzione membro protected chiude la *_Catval*del catalogo dei messaggi, che deve essere stata aperta da una chiamata precedente a [do_open](#do_open).

È necessario ottenere *_Catval* da un catalogo aperto in precedenza e non chiuso.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [close](#close), che chiama `do_close`.

## <a name="do_get"></a>  messages::do_get

Funzione virtuale chiamata per recuperare il catalogo dei messaggi.

```cpp
virtual string_type do_get(
    catalog _Catval,
    int _Set,
    int _Message,
    const string_type& _Dfault) const;
```

### <a name="parameters"></a>Parametri

*_Catval*\
Valore di identificazione che specifica il catalogo dei messaggi in cui eseguire ricerche.

*_Set*\
Primo valore identificato usato per individuare un messaggio in un catalogo dei messaggi.

*_Message*\
Secondo valore identificato usato per individuare un messaggio in un catalogo dei messaggi.

*_Dfault*\
Stringa da restituire in caso di esito negativo.

### <a name="return-value"></a>Valore restituito

Restituisce una copia di *_Dfault* in caso di errore. In caso contrario, viene restituita una copia della sequenza di messaggi specificata.

### <a name="remarks"></a>Osservazioni

La funzione membro protetto tenta di ottenere una sequenza di messaggi dal *_Catval*del catalogo dei messaggi. Questa operazione può essere utilizzata da *_Set*, *_Message*e *_Dfault* .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get](#get), che chiama `do_get`.

## <a name="do_open"></a>  messages::do_open

Funzione virtuale chiamata per aprire il catalogo dei messaggi.

```cpp
virtual catalog do_open(
    const string& _Catname,
    const locale& _Loc) const;
```

### <a name="parameters"></a>Parametri

*_Catname*\
Nome del catalogo in cui eseguire ricerche.

*_Loc*\
Impostazioni locali da ricercare nel catalogo.

### <a name="return-value"></a>Valore restituito

In caso di esito negativo, viene restituito un valore minore di zero. In caso contrario, il valore restituito può essere usato come primo argomento in una successiva chiamata a [get](#get).

### <a name="remarks"></a>Osservazioni

La funzione membro protetto tenta di aprire un catalogo dei messaggi il cui nome è *_Catname*. Il Licenziatario può utilizzare le impostazioni locali *_Loc*

Il valore restituito deve essere usato come argomento in una successiva chiamata a [close](#close).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [open](#open), che chiama `do_open`.

## <a name="get"></a>  messages::get

Recupera il catalogo dei messaggi.

```cpp
string_type get(
    catalog _CatVal,
    int _Set,
    int _Message,
    const string_type& _Dfault) const;
```

### <a name="parameters"></a>Parametri

*_Catval*\
Valore di identificazione che specifica il catalogo dei messaggi in cui eseguire ricerche.

*_Set*\
Primo valore identificato usato per individuare un messaggio in un catalogo dei messaggi.

*_Message*\
Secondo valore identificato usato per individuare un messaggio in un catalogo dei messaggi.

*_Dfault*\
Stringa da restituire in caso di esito negativo.

### <a name="return-value"></a>Valore restituito

Restituisce una copia di *_Dfault* in caso di errore. In caso contrario, viene restituita una copia della sequenza di messaggi specificata.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_get](#do_get)( `_Catval`, `_Set`, `_Message`, `_Dfault`).

## <a name="messages"></a>  messages::messages

Funzione del costruttore del facet dei messaggi.

```cpp
explicit messages(
    size_t _Refs = 0);

protected: messages(
    const char* _Locname,
    size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

*_Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

*_Locname*\
Nome delle impostazioni locali.

### <a name="remarks"></a>Osservazioni

I valori possibili per il parametro *_Refs* e i relativi significati sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \> 1: questi valori non sono definiti.

Non è possibile offrire esempi diretti, poiché il distruttore è protetto.

Il costruttore inizializza l'oggetto di base con **locale::** [facet](../standard-library/locale-class.md#facet_class)( `_Refs`).

## <a name="open"></a>  messages::open

Apre il catalogo dei messaggi.

```cpp
catalog open(
    const string& _Catname,
    const locale& _Loc) const;
```

### <a name="parameters"></a>Parametri

*_Catname*\
Nome del catalogo in cui eseguire ricerche.

*_Loc*\
Impostazioni locali da ricercare nel catalogo.

### <a name="return-value"></a>Valore restituito

In caso di esito negativo, viene restituito un valore minore di zero. In caso contrario, il valore restituito può essere usato come primo argomento in una successiva chiamata a [get](#get).

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_open](#do_open)( `_Catname`, `_Loc`).

## <a name="string_type"></a>  messages::string_type

Tipo che descrive una stringa di tipo `basic_string` contenente caratteri di tipo `CharType`.

```cpp
typedef basic_string<CharType, Traits, Allocator> string_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare copie delle sequenze di messaggi.

## <a name="see-also"></a>Vedere anche

[\<locale>](../standard-library/locale.md)\
[Classe messages_base](../standard-library/messages-base-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Sicurezza dei thread nella libreria standard C++)
