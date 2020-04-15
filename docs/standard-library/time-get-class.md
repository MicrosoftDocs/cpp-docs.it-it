---
title: Classe time_get
ms.date: 11/04/2016
f1_keywords:
- xloctime/std::time_get
- locale/std::time_get::char_type
- locale/std::time_get::iter_type
- locale/std::time_get::date_order
- locale/std::time_get::do_date_order
- locale/std::time_get::do_get
- locale/std::time_get::do_get_date
- locale/std::time_get::do_get_monthname
- locale/std::time_get::do_get_time
- locale/std::time_get::do_get_weekday
- locale/std::time_get::do_get_year
- locale/std::time_get::get
- locale/std::time_get::get_date
- locale/std::time_get::get_monthname
- locale/std::time_get::get_time
- locale/std::time_get::get_weekday
- locale/std::time_get::get_year
helpviewer_keywords:
- std::time_get [C++]
- std::time_get [C++], char_type
- std::time_get [C++], iter_type
- std::time_get [C++], date_order
- std::time_get [C++], do_date_order
- std::time_get [C++], do_get
- std::time_get [C++], do_get_date
- std::time_get [C++], do_get_monthname
- std::time_get [C++], do_get_time
- std::time_get [C++], do_get_weekday
- std::time_get [C++], do_get_year
- std::time_get [C++], get
- std::time_get [C++], get_date
- std::time_get [C++], get_monthname
- std::time_get [C++], get_time
- std::time_get [C++], get_weekday
- std::time_get [C++], get_year
ms.assetid: 869d5f5b-dbab-4628-8333-bdea7e272023
ms.openlocfilehash: 9aebdaffc8bf3754bdbda08247f72ae08475711f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368042"
---
# <a name="time_get-class"></a>Classe time_get

Il modello di classe descrive un oggetto che può essere utilizzato come `CharType` facet delle impostazioni locali per controllare le conversioni di sequenze di tipo in valori di ora.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType,
    class InputIterator = istreambuf_iterator<CharType>>
class time_get : public time_base;
```

### <a name="parameters"></a>Parametri

*Chartype*\
Tipo utilizzato all'interno di un programma per codificare i caratteri.

*InputIterator*\
Iteratore da cui vengono letti i valori temporali.

## <a name="remarks"></a>Osservazioni

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id**.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[time_get](#time_get)|Costruttore per oggetti di tipo `time_get`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|
|[iter_type](#iter_type)|Tipo che descrive un iteratore di input.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[date_order](#date_order)|Restituisce l'ordine della data utilizzato da un facet.|
|[do_date_order](#do_date_order)|Funzione membro virtuale protetta chiamata per restituire l'ordine della data utilizzato da un facet.|
|[do_get](#do_get)|Legge e converte i dati di tipo carattere in un valore di ora.|
|[do_get_date](#do_get_date)|Funzione membro virtuale protetta chiamata per analizzare una stringa come la data generata dall'identificatore `x` per `strftime`.|
|[do_get_monthname](#do_get_monthname)|Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome del mese.|
|[do_get_time](#do_get_time)|Funzione membro virtuale protetta chiamata per analizzare una stringa come la data generata dall'identificatore `X` per `strftime`.|
|[do_get_weekday](#do_get_weekday)|Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome del giorno della settimana.|
|[do_get_year](#do_get_year)|Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome dell'anno.|
|[get](#get)|Legge da un'origine di dati di tipo carattere e converte tali dati in un'ora archiviata in una struct temporale.|
|[get_date](#get_date)|Analizza una stringa come la data generata dall'identificatore `x` per `strftime`.|
|[get_monthname](#get_monthname)|Analizza una stringa come il nome del mese.|
|[get_time](#get_time)|Analizza una stringa come la data generata dall'identificatore `X` per `strftime`.|
|[get_weekday](#get_weekday)|Analizza una stringa come il nome del giorno della settimana.|
|[get_year](#get_year)|Analizza una stringa come il nome dell'anno.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="time_getchar_type"></a><a name="char_type"></a>time_get::char_type

Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello **CharType**.

## <a name="time_getdate_order"></a><a name="date_order"></a>time_get::dordine

Restituisce l'ordine della data utilizzato da un facet.

```cpp
dateorder date_order() const;
```

### <a name="return-value"></a>Valore restituito

Ordine della data usato da un facet.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [do_date_order](#do_date_order).

### <a name="example"></a>Esempio

```cpp
// time_get_date_order.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;
void po( char *p )
{
   locale loc( p );

   time_get <char>::dateorder order = use_facet <time_get <char> >( loc ).date_order ( );
   cout << loc.name( );
   switch (order){
      case time_base::dmy: cout << "(day, month, year)" << endl;
      break;
      case time_base::mdy: cout << "(month, day, year)" << endl;
      break;
      case time_base::ydm: cout << "(year, day, month)" << endl;
      break;
      case time_base::ymd: cout << "(year, month, day)"<< endl;
      break;
      case time_base::no_order: cout << "(no_order)"<< endl;
      break;
   }
}

int main( )
{
   po( "C" );
   po( "german" );
   po( "English_Britain" );
}
```

```Output
C(month, day, year)
German_Germany.1252(day, month, year)
English_United Kingdom.1252(day, month, year)
```

## <a name="time_getdo_date_order"></a><a name="do_date_order"></a>time_get::d_date_order

Funzione membro virtuale protetta chiamata per restituire l'ordine della data utilizzato da un facet.

```cpp
virtual dateorder do_date_order() const;
```

### <a name="return-value"></a>Valore restituito

Ordine della data usato da un facet.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta restituisce un valore di tipo **time_base::dateorder**, che descrive l'ordine in cui i componenti data vengono messi in corrispondenza da [do_get_date](#do_get_date). In questa implementazione, il valore è **time_base::mdy**, corrispondente a date nel formato Dicembre 2, 1979.

### <a name="example"></a>Esempio

Vedere l'esempio di [date_order](#date_order) che chiama `do_date_order`.

## <a name="time_getdo_get"></a><a name="do_get"></a>time_get::do_get

Legge e converte i dati di tipo carattere in un valore di ora. Accetta un unico identificatore di conversione e modificatore.

```cpp
virtual iter_type
    do_get(
iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm,
    char fmt,
    char mod) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza.

*iosbase*\
Oggetto di flusso.

*Stato*\
Un campo in iosbase in cui gli elementi maschera di bit appropriati sono impostati per indicare gli errori.

*Ptm*\
Puntatore alla struttura temporale in cui deve essere memorizzata l'ora.

*Fmt*\
Carattere dell'identificatore di conversione.

*Mod*\
Carattere facoltativo del modificatore.

### <a name="return-value"></a>Valore restituito

Restituisce un iteratore che definisce il primo elemento non convertito. Un errore `ios_base::failbit` di `state` conversione imposta e restituisce *per primo*.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale converte e ignora uno o`first` `last`più elementi di input nell'intervallo `*pt`[ , ) per determinare i valori archiviati in uno o più membri di . Un errore `ios_base::failbit` di `state` conversione imposta e restituisce *per primo*. In caso contrario, la funzione restituisce un iteratore che definisce il primo elemento non convertito.

Gli identificatori di conversione sono:

`'a'` o `'A'` -- si comporta allo stesso modo di [time_get::get_weekday](#get_weekday).

`'b'`, `'B'` o `'h'` -- si comporta allo stesso modo di [time_get::get_monthname](#get_monthname).

`'c'` -- si comporta allo stesso modo di `"%b %d %H : %M : %S %Y"`.

`'C'`-converte il valore di un campo di input decimale compreso nell'intervallo [0, 99] nel valore `val` e archivia `val * 100 - 1900` in `pt-&tm_year`.

`'d'` o `'e'` -- converte il valore di un campo di input decimale compreso nell'intervallo [1, 31] e lo archivia in `pt-&tm_mday`.

`'D'` -- si comporta allo stesso modo di `"%m / %d / %y"`.

`'H'` -- converte il valore di un campo di input decimale compreso nell'intervallo [0, 23] e lo archivia in `pt-&tm_hour`.

`'I'` -- converte il valore di un campo di input decimale compreso nell'intervallo [0, 11] e lo archivia in `pt-&tm_hour`.

`'j'` -- converte il valore di un campo di input decimale compreso nell'intervallo [1, 366] e lo archivia in `pt-&tm_yday`.

`'m'` -- converte il valore di un campo di input decimale compreso nell'intervallo [1, 12] nel valore `val` e archivia `val - 1` in `pt-&tm_mon`.

`'M'` -- converte il valore di un campo di input decimale compreso nell'intervallo [0, 59] e lo archivia in `pt-&tm_min`.

`'n'` o `'t'` -- si comporta allo stesso modo di `" "`.

`'p'` -- converte "AM" o "am" in zero e "PM" o "PM" in 12 e aggiunge questo valore a `pt-&tm_hour`.

`'r'` -- si comporta allo stesso modo di `"%I : %M : %S %p"`.

`'R'` -- si comporta allo stesso modo di `"%H %M"`.

`'S'` -- converte il valore di un campo di input decimale compreso nell'intervallo [0, 59] e lo archivia in `pt-&tm_sec`.

`'T'` o `'X'` -- si comporta allo stesso modo di `"%H : %M : S"`.

`'U'` -- converte il valore di un campo di input decimale compreso nell'intervallo [0, 53] e lo archivia in `pt-&tm_yday`.

`'w'` -- converte il valore di un campo di input decimale compreso nell'intervallo [0, 6] e lo archivia in `pt-&tm_wday`.

`'W'` -- converte il valore di un campo di input decimale compreso nell'intervallo [0, 53] e lo archivia in `pt-&tm_yday`.

`'x'` -- si comporta allo stesso modo di `"%d / %m / %y"`.

`'y'`-converte il valore di un campo di input decimale compreso nell'intervallo [0, 99] nel valore `val` e archivia `val < 69  val + 100 : val` in `pt-&tm_year`.

`'Y'` -- si comporta allo stesso modo di [time_get::get_year](#get_year).

Qualsiasi altro identificatore di conversione imposta `ios_base::failbit` in `state` e viene restituito. In questa implementazione, nessun modificatore ha alcun effetto.

## <a name="time_getdo_get_date"></a><a name="do_get_date"></a>time_get::do_get_date

Funzione membro virtuale protetta chiamata per analizzare una stringa come la data generata dall'identificatore *x* per `strftime`.

```cpp
virtual iter_type do_get_date(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario.

*Stato*\
Imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sulla data.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta cerca la corrispondenza con elementi sequenziali a partire da first nella sequenza [ `first`, `last`) fino a quando non viene riconosciuto un campo di input di tipo data completo e non vuoto. Se ha esito positivo, questo campo viene convertito nel valore equivalente dei componenti **tm::tm\_mon**, **tm::tm\_day**e **tm::tm\_anno**e memorizza i risultati rispettivamente in `ptm->tm_mon`, `ptm->tm_day`e `ptm->tm_year`, . Restituisce un iteratore che designa il primo elemento successivo al campo di input di tipo data. In caso contrario, la funzione viene impostata `iosbase::failbit` sullo *stato*. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo data valido. In entrambi i casi, se *last*il valore `ios_base::eofbit` restituito è uguale a last , la funzione imposta *lo stato*.

Il formato del campo di input di tipo data dipende dalle impostazioni locali. Per le impostazioni locali predefinite, il campo di input di tipo data ha il formato MMM GG, AAAA, dove:

- MMM viene messo in corrispondenza chiamando [get_monthname](#get_monthname) e specificando il mese.

- GG è una sequenza di cifre decimali il cui valore numerico corrispondente deve essere compreso nell'intervallo [1, 31], specificando il giorno del mese.

- YYYY viene messo in corrispondenza chiamando [get_year](#get_year) e specificando l'anno.

Gli spazi e le virgole devono corrispondere a quelli della sequenza di input.

### <a name="example"></a>Esempio

Vedere l'esempio di [get_date](#get_date), che chiama `do_get_date`.

## <a name="time_getdo_get_monthname"></a><a name="do_get_monthname"></a>time_get::do_get_monthname

Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome del mese.

```cpp
virtual iter_type do_get_monthname(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Non utilizzato.

*Stato*\
Parametro di output che imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sul mese.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta cerca la corrispondenza con elementi sequenziali a partire da first nella sequenza [ `first`, `last`) fino a quando non viene riconosciuto un campo di input di tipo mese completo e non vuoto. Se ha esito positivo, converte questo campo nel valore equivalente come componente `ptm->tm_mon` **tm::tm\_mon**e archivia il risultato in . Restituisce un iteratore che designa il primo elemento successivo al campo di input di tipo mese. In caso contrario, la funzione viene impostata `ios_base::failbit` sullo *stato*. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo mese valido. In entrambi i casi, se *last*il valore `ios_base::eofbit` restituito è uguale a last , la funzione imposta *lo stato*.

Il campo di input di tipo mese è una sequenza corrispondente alla sequenza più lunga di un set di sequenze specifiche delle impostazioni locali, ad esempio Gen, Gennaio, Feb, Febbraio e così via. Il valore convertito è il numero di mesi a partire da Gennaio.

### <a name="example"></a>Esempio

Vedere l'esempio di [get_monthname](#get_monthname), che chiama `do_get_monthname`.

## <a name="time_getdo_get_time"></a><a name="do_get_time"></a>time_get::do_get_time

Funzione membro virtuale protetta chiamata per analizzare una *X* stringa come `strftime`data prodotta dall'identificatore X per .

```cpp
virtual iter_type do_get_time(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Non utilizzato.

*Stato*\
Imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sulla data.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta cerca la corrispondenza con elementi sequenziali a partire da first nella sequenza [ `first`, `last`) fino a quando non viene riconosciuto un campo di input di tipo ora completo e non vuoto. Se ha esito positivo, questo campo viene `tm::tm_hour` `tm::tm_min`convertito `tm::tm_sec`nel valore equivalente `ptm->tm_hour`come `ptm->tm_min`componenti `ptm->tm_sec`, , e , e archivia i risultati rispettivamente in , e , . Restituisce un iteratore che designa il primo elemento successivo al campo di input di tipo ora. In caso contrario, la funzione viene impostata `ios_base::failbit` sullo *stato*. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo ora valido. In entrambi i casi, se *last*il valore `ios_base::eofbit` restituito è uguale a last , la funzione imposta *lo stato*.

In questa implementazione, il campo di input di tipo ora ha il formato HH:MM:SS, dove:

- HH è una sequenza di cifre decimali il cui valore numerico corrispondente deve essere compreso nell'intervallo [0, 24), specificando l'ora del giorno.

- MM è una sequenza di cifre decimali il cui valore numerico corrispondente deve essere compreso nell'intervallo [0, 60), specificando i minuti successivi all'ora.

- SS è una sequenza di cifre decimali il cui valore numerico corrispondente deve essere compreso nell'intervallo [0, 60), specificando i secondi successivi al minuto.

I due punti devono corrispondere a quelli della sequenza di input.

### <a name="example"></a>Esempio

Vedere l'esempio di [get_time](#get_time), che chiama `do_get_time`.

## <a name="time_getdo_get_weekday"></a><a name="do_get_weekday"></a>time_get::do_get_weekday

Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome del giorno della settimana.

```cpp
virtual iter_type do_get_weekday(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario.

*Stato*\
Imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sul giorno della settimana.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro virtual protected tenta di trovare una `first` `last`corrispondenza con gli elementi sequenziali a partire *dall'inizio* nella sequenza [ , ) finché non viene riconosciuto un campo di input completo e non vuoto del giorno della settimana. Se ha esito positivo, questo campo viene convertito nel valore equivalente come componente `ptm->tm_wday` **\_tm::tm wday**e archivia il risultato in . Restituisce un iteratore che designa il primo elemento successivo al campo di input di tipo giorno della settimana. In caso contrario, la funzione viene impostata `ios_base::failbit` sullo *stato*. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo giorno della settimana valido. In entrambi i casi, se *last*il valore `ios_base::eofbit` restituito è uguale a last , la funzione imposta *lo stato*.

Il campo di input di tipo giorno della settimana è una sequenza corrispondente alla sequenza più lunga di un set di sequenze specifiche delle impostazioni locali, ad esempio Dom, Domenica, Lun, Lunedì e così via. Il valore convertito è il numero di giorni a partire da Domenica.

### <a name="example"></a>Esempio

Vedere l'esempio di [get_weekday](#get_weekday), che chiama `do_get_weekday`.

## <a name="time_getdo_get_year"></a><a name="do_get_year"></a>time_get::d anno_get_anno

Funzione membro virtuale protetta chiamata per analizzare una stringa come il nome dell'anno.

```cpp
virtual iter_type do_get_year(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario.

*Stato*\
Imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sull'anno.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro virtual protected tenta di trovare una `first` `last`corrispondenza con gli elementi sequenziali a partire *dall'inizio* nella sequenza [ , ) finché non viene riconosciuto un campo di input dell'anno completo e non vuoto. Se ha esito positivo, questo campo viene convertito nel valore equivalente come `ptm->tm_year`componente **tm::tm\_anno**e il risultato viene memorizzato in . Restituisce un iteratore che designa il primo elemento successivo al campo di input di tipo anno. In caso contrario, la funzione viene impostata `ios_base::failbit` sullo *stato*. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo anno valido. In entrambi i casi, se *last*il valore `ios_base::eofbit` restituito è uguale a last , la funzione imposta *lo stato*.

Il campo di input di tipo anno è una sequenza di cifre decimali il cui valore numerico corrispondente deve essere compreso nell'intervallo [1900, 2036). Il valore archiviato è questo valore meno 1900. In questa implementazione i valori compresi nell'intervallo [69, 136) rappresentano l'intervallo di anni [1969, 2036). Sono consentiti anche i valori compresi nell'intervallo [0, 69). Tali valori, tuttavia, possono rappresentare l'intervallo di anni [1900, 1969) o l'intervallo di anni [2000, 2069), a seconda dell'ambiente di conversione specifico.

### <a name="example"></a>Esempio

Vedere l'esempio di [get_year](#get_year), che chiama `do_get_year`.

## <a name="time_getget"></a><a name="get"></a>time_get::ottenere

Legge da un'origine di dati di tipo carattere e converte tali dati in un'ora archiviata in una struct temporale. La prima funzione accetta un identificatore di conversione e il modificatore, la seconda ne accetta diversi.

```cpp
iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm,
    char fmt,
    char mod) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm,
    char_type* fmt_first,
    char_type* fmt_last) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica il punto di inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Flusso.

*Stato*\
Gli elementi della maschera di bit appropriati sono impostati in modo che lo stato del flusso indichi gli errori.

*Ptm*\
Puntatore alla struttura temporale in cui deve essere memorizzata l'ora.

*Fmt*\
Carattere dell'identificatore di conversione.

*Mod*\
Carattere facoltativo del modificatore.

*fmt_first*\
Punta alla posizione iniziale delle direttive di formato.

*fmt_last*\
Punta alla posizione finale delle direttive di formato.

### <a name="return-value"></a>Valore restituito

Restituisce un iteratore al primo carattere dopo i `*ptm`dati utilizzati per assegnare la struttura temporale.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce `do_get(first, last, iosbase, state, ptm, fmt, mod)`.

La seconda funzione membro chiama `do_get` sotto il controllo del formato delimitato da `[fmt_first, fmt_last)`. Considera il formato come una sequenza di campi, ciascuno dei quali determina la conversione di zero o più elementi di input delimitati da `[first, last)`. Restituisce un iteratore che definisce il primo elemento non convertito. Esistono tre tipi di campi:

A per cento (%) nel formato, seguito da un *modificatore* opzionale mod nel set [EOQ], seguito *first* da un identificatore `do_get(first, last, iosbase, state, ptm, fmt, mod)`di conversione *fmt*, sostituisce prima il valore restituito da . Un errore `ios_base::failbit` di conversione viene impostato nello *stato* e restituisce.

Un elemento dello spazio vuoto nel formato ignora dopo lo zero o più elementi di input dello spazio vuoto.

Qualsiasi altro elemento nel formato deve corrispondere all'elemento di input successivo, che verrà ignorato. Un errore `ios_base::failbit` di corrispondenza viene impostato nello *stato* e restituisce.

## <a name="time_getget_date"></a><a name="get_date"></a>time_get::get_date

Analizza una stringa come la data generata dall'identificatore *x* per `strftime`.

```cpp
iter_type get_date(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario.

*Stato*\
Imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sulla data.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro`first`restituisce `iosbase` `state` [do_get_date](#do_get_date)( , `last`, , , ). `ptm`

Si noti che i mesi vengono conteggiati da 0 a 11.

### <a name="example"></a>Esempio

```cpp
// time_get_get_date.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;
int main( )
{
   locale loc;
   basic_stringstream< char > pszGetF, pszPutF, pszGetI, pszPutI;
   ios_base::iostate st = 0;
   struct tm t;
   memset(&t, 0, sizeof(struct tm));

   pszGetF << "July 4, 2000";
   pszGetF.imbue( loc );
   basic_istream<char>::_Iter i = use_facet <time_get<char> >
   (loc).get_date(basic_istream<char>::_Iter(pszGetF.rdbuf( ) ),
            basic_istream<char>::_Iter(0), pszGetF, st, &t);

   if ( st & ios_base::failbit )
      cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
   else

      cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") ="
      << "\ntm_sec: " << t.tm_sec
      << "\ntm_min: " << t.tm_min
      << "\ntm_hour: " << t.tm_hour
      << "\ntm_mday: " << t.tm_mday
      << "\ntm_mon: " << t.tm_mon
      << "\ntm_year: " << t.tm_year
      << "\ntm_wday: " << t.tm_wday
      << "\ntm_yday: " << t.tm_yday
      << "\ntm_isdst: " << t.tm_isdst
      << endl;
}
```

```Output
time_get(July 4, 2000) =
tm_sec: 0
tm_min: 0
tm_hour: 0
tm_mday: 4
tm_mon: 6
tm_year: 100
tm_wday: 0
tm_yday: 0
tm_isdst: 0
```

## <a name="time_getget_monthname"></a><a name="get_monthname"></a>time_get::get_monthname

Analizza una stringa come il nome del mese.

```cpp
iter_type get_monthname(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Non utilizzato.

*Stato*\
Parametro di output che imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sul mese.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro`first`restituisce `iosbase` `state` [do_get_monthname](#do_get_monthname)( , `last`, , , ). `ptm`

### <a name="example"></a>Esempio

```cpp
// time_get_get_monthname.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;
int main( )
{
   locale loc ( "French" );
   basic_stringstream<char> pszGetF, pszPutF, pszGetI, pszPutI;
   ios_base::iostate st = 0;
   struct tm t;
   memset( &t, 0, sizeof( struct tm ) );

   pszGetF << "juillet";
   pszGetF.imbue( loc );
   basic_istream<char>::_Iter i = use_facet <time_get <char> >
   (loc).get_monthname(basic_istream<char>::_Iter(pszGetF.rdbuf( )),
              basic_istream<char>::_Iter(0), pszGetF, st, &t);

   if (st & ios_base::failbit)
      cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
   else

      cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") ="
      << "\ntm_sec: " << t.tm_sec
      << "\ntm_min: " << t.tm_min
      << "\ntm_hour: " << t.tm_hour
      << "\ntm_mday: " << t.tm_mday
      << "\ntm_mon: " << t.tm_mon
      << "\ntm_year: " << t.tm_year
      << "\ntm_wday: " << t.tm_wday
      << "\ntm_yday: " << t.tm_yday
      << "\ntm_isdst: " << t.tm_isdst
      << endl;
}
```

```Output
time_get(juillet) =
tm_sec: 0
tm_min: 0
tm_hour: 0
tm_mday: 0
tm_mon: 6
tm_year: 0
tm_wday: 0
tm_yday: 0
tm_isdst: 0
```

## <a name="time_getget_time"></a><a name="get_time"></a>time_get::get_time

Analizza una stringa come data prodotta dall'identificatore *X* per `strftime`.

```cpp
iter_type get_time(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Non utilizzato.

*Stato*\
Imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sulla data.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro`first`restituisce `iosbase` `state` [do_get_time](#do_get_time)( , `last`, , , ). `ptm`

### <a name="example"></a>Esempio

```cpp
// time_get_get_time.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;
int main( )
{
   locale loc;
   basic_stringstream<char> pszGetF, pszPutF, pszGetI, pszPutI;
   ios_base::iostate st = 0;
   struct tm t;
   memset( &t, 0, sizeof( struct tm ) );

   pszGetF << "11:13:20";
   pszGetF.imbue( loc );
   basic_istream<char>::_Iter i = use_facet
      <time_get <char> >
      (loc).get_time(basic_istream<char>::_Iter(pszGetF.rdbuf( )),
               basic_istream<char>::_Iter(0), pszGetF, st, &t);

   if (st & ios_base::failbit)
      cout << "time_get::get_time("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
   else

      cout << "time_get::get_time("<< pszGetF.rdbuf( )->str( )<< ") ="
      << "\ntm_sec: " << t.tm_sec
      << "\ntm_min: " << t.tm_min
      << "\ntm_hour: " << t.tm_hour
      << endl;
}
```

```Output
time_get::get_time(11:13:20) =
tm_sec: 20
tm_min: 13
tm_hour: 11
```

## <a name="time_getget_weekday"></a><a name="get_weekday"></a>time_get::get_weekday

Analizza una stringa come il nome del giorno della settimana.

```cpp
iter_type get_weekday(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario.

*Stato*\
Imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sul giorno della settimana.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro`first`restituisce `iosbase` `state` [do_get_weekday](#do_get_weekday)( , `last`, , , ). `ptm`

### <a name="example"></a>Esempio

```cpp
// time_get_get_weekday.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;
int main( )
{
   locale loc ( "French" );
   basic_stringstream< char > pszGetF, pszPutF, pszGetI, pszPutI;
   ios_base::iostate st = 0;
   struct tm t;
   memset( &t, 0, sizeof( struct tm ) );

   pszGetF << "mercredi";
   pszGetF.imbue(loc);
   basic_istream<char>::_Iter i = use_facet
      <time_get<char> >
      (loc).get_weekday(basic_istream<char>::_Iter(pszGetF.rdbuf( )),
               basic_istream<char>::_Iter(0), pszGetF, st, &t);

   if (st & ios_base::failbit)
      cout << "time_get::get_time("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
   else

      cout << "time_get::get_time("<< pszGetF.rdbuf( )->str( )<< ") ="
      << "\ntm_wday: " << t.tm_wday
      << endl;
}
```

```Output
time_get::get_time(mercredi) =
tm_wday: 3
```

## <a name="time_getget_year"></a><a name="get_year"></a>time_get::get_year

Analizza una stringa come il nome dell'anno.

```cpp
iter_type get_year(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Prima*\
Iteratore di input che indica l'inizio della sequenza da convertire.

*Ultima*\
Iteratore di input che indica la fine della sequenza da convertire.

*iosbase*\
Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario.

*Stato*\
Imposta elementi della maschera di bit appropriati per lo stato del flusso in base all'esito positivo o negativo delle operazioni.

*Ptm*\
Puntatore alla posizione in cui vengono archiviate le informazioni sull'anno.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input.

### <a name="remarks"></a>Osservazioni

La funzione membro`first`restituisce `iosbase` `state` [do_get_year](#do_get_year)( , `last`, , , ). `ptm`

### <a name="example"></a>Esempio

```cpp
// time_get_get_year.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;
int main( )
{
   locale loc;
   basic_stringstream<char> pszGetF, pszPutF, pszGetI, pszPutI;
   ios_base::iostate st = 0;
   struct tm t;
   memset( &t, 0, sizeof( struct tm ) );

   pszGetF << "1928";

   pszGetF.imbue( loc );
   basic_istream<char>::_Iter i = use_facet
      <time_get<char> >
      (loc).get_year(basic_istream<char>::_Iter(pszGetF.rdbuf( )),
               basic_istream<char>::_Iter(0), pszGetF, st, &t);

   if (st & ios_base::failbit)
      cout << "time_get::get_year("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
   else

      cout << "time_get::get_year("<< pszGetF.rdbuf( )->str( )<< ") ="
      << "\ntm_year: " << t.tm_year
      << endl;
}
```

```Output
time_get::get_year(1928) =
tm_year: 28
```

## <a name="time_getiter_type"></a><a name="iter_type"></a>time_get::iter_type

Tipo che descrive un iteratore di input.

```cpp
typedef InputIterator iter_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello **InputIterator**.

## <a name="time_gettime_get"></a><a name="time_get"></a>time_get::time_get

Costruttore per oggetti di tipo `time_get`.

```cpp
explicit time_get(size_t refs = 0);
```

### <a name="parameters"></a>Parametri

*Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Osservazioni

I valori possibili per il parametro *refs* e il loro significato sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \>1: Questi valori non sono definiti.

Non è possibile fornire esempi diretti, poiché il distruttore è protetto.

Il costruttore inizializza il relativo oggetto`refs`di base con **locale::**[facet](../standard-library/locale-class.md#facet_class)( ).

## <a name="see-also"></a>Vedere anche

[\<>delle impostazioni locali](../standard-library/locale.md)\
[Classe time_base](../standard-library/time-base-class.md)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)
