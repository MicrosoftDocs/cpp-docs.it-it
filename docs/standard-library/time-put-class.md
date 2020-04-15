---
title: Classe time_put
ms.date: 11/04/2016
f1_keywords:
- xloctime/std::time_put
- locale/std::time_put::char_type
- locale/std::time_put::iter_type
- locale/std::time_put::do_put
- locale/std::time_put::put
helpviewer_keywords:
- std::time_put [C++]
- std::time_put [C++], char_type
- std::time_put [C++], iter_type
- std::time_put [C++], do_put
- std::time_put [C++], put
ms.assetid: df79493e-3331-48d2-97c3-ac3a745f0791
ms.openlocfilehash: 10691de0a583dc7d5a66c319968d90978bf59480
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368006"
---
# <a name="time_put-class"></a>Classe time_put

Il modello di classe descrive un oggetto che può essere utilizzato come facet `CharType`delle impostazioni locali per controllare le conversioni di valori di ora in sequenze di tipo .

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType,
    class OutputIterator = ostreambuf_iterator<CharType>>
class time_put : public locale::facet;
```

### <a name="parameters"></a>Parametri

*Chartype*\
Tipo utilizzato all'interno di un programma per codificare i caratteri.

*OutputIterator*\
Tipo di iteratore in cui le funzioni temporali put scrivono il proprio output.

## <a name="remarks"></a>Osservazioni

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id**.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[time_put](#time_put)|Costruttore per oggetti di tipo `time_put`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|
|[iter_type](#iter_type)|Tipo che descrive un iteratore di output.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[do_put](#do_put)|Funzione virtuale che restituisce informazioni sulla data e l'ora come sequenza di `CharType`.|
|[Mettere](#put)|Restituisce informazioni sulla data e l'ora come sequenza di `CharType`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="time_putchar_type"></a><a name="char_type"></a>time_put::char_type

Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `CharType`.

## <a name="time_putdo_put"></a><a name="do_put"></a>time_put::do_put

Funzione virtuale che restituisce informazioni sulla data e l'ora come sequenza di `CharType`.

```cpp
virtual iter_type do_put(
    iter_type next,
    ios_base& _Iosbase,
    const tm* _Pt,
    char _Fmt,
    char _Mod = 0) const;
```

### <a name="parameters"></a>Parametri

*prossimo*\
Iteratore di output in cui deve essere inserita la sequenza di caratteri che rappresenta la data e l'ora.

*_Iosbase*\
Non utilizzato.

*_Pt*\
Informazioni di tipo data e ora da visualizzare in output.

*_Fmt*\
Formato dell'output. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.

*_Mod*\
Modificatore del formato. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.

### <a name="return-value"></a>Valore restituito

Iteratore alla prima posizione dopo l'ultimo elemento inserito.

### <a name="remarks"></a>Osservazioni

La funzione membro virtual protected `next` genera elementi sequenziali \* `_Pt`a partire `tm`dal tempo in cui i valori memorizzati nell'oggetto , di tipo . La funzione restituisce un iteratore che designa la posizione in cui inserire un elemento immediatamente successiva all'output generato.

L'output viene generato dalle `strftime`stesse regole utilizzate da , con un ultimo argomento di *_Pt*, per generare una serie di elementi **char** in una matrice. Si presuppone che ogni elemento **char** di `CharType` questo tipo eserisca a un elemento equivalente di tipo mediante un semplice mapping uno a uno. Se *_Mod* è uguale a zero, il formato effettivo è "%F", dove F viene sostituito da *_Fmt*. In caso contrario, il formato effettivo è "%MF", dove M viene sostituito da *_Mod*.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [put](#put), che chiama `do_put`.

## <a name="time_putiter_type"></a><a name="iter_type"></a>time_put::iter_type

Tipo che descrive un iteratore di output.

```cpp
typedef OutputIterator iter_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `OutputIterator`.

## <a name="time_putput"></a><a name="put"></a>time_put::put

Restituisce informazioni sulla data e l'ora come sequenza di `CharType`.

```cpp
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

*prossimo*\
Iteratore di output in cui deve essere inserita la sequenza di caratteri che rappresenta la data e l'ora.

*_Iosbase*\
Non utilizzato.

*_Fill*\
Carattere di `CharType` tipo utilizzato per la spaziatura.

*_Pt*\
Informazioni di tipo data e ora da visualizzare in output.

*_Fmt*\
Formato dell'output. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.

*_Mod*\
Modificatore del formato. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.

*Prima*\
Inizio della stringa di formattazione per l'output. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.

*Ultima*\
Fine della stringa di formattazione per l'output. Vedere [strftime, wcsftime, strftime_l, wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i valori validi.

### <a name="return-value"></a>Valore restituito

Iteratore alla prima posizione dopo l'ultimo elemento inserito.

### <a name="remarks"></a>Osservazioni

La prima funzione membro`next` `_Iosbase`restituisce `_Pt` `_Fmt` [do_put](#do_put)( , , `_Fill`, , , ). `_Mod` La seconda funzione membro \* `next` esegue la copia in `first` `last`qualsiasi elemento dell'intervallo [ , ) diverso da una percentuale (%). Per una percentuale seguita da un `first` `last`carattere *C* nell'intervallo `_Fill` `_Pt`[ , ), la funzione restituisce `next`  =  `do_put`invece ( `next`, `_Iosbase`, , , *, C*, 0) e ignora *C*. Se, tuttavia, *C* è un carattere qualificatore del `C2` set EOQ, seguito da un carattere nell'intervallo `first`[ , `last`), `next`  =  `do_put`la funzione restituisce invece ( , `next` `_Iosbase`, `_Fill`, `_Pt`, `C2`, *C*) e ignora l'intervallo . `C2`

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

## <a name="time_puttime_put"></a><a name="time_put"></a>time_put::time_put

Costruttore per oggetti di tipo `time_put`.

```cpp
explicit time_put(size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

*_Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Osservazioni

I valori possibili per il parametro *_Refs* e il loro significato sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \>1: Questi valori non sono definiti.

Il costruttore inizializza il relativo oggetto di base con [locale::facet](../standard-library/locale-class.md#facet_class)(*_Refs*).

## <a name="see-also"></a>Vedere anche

[\<>delle impostazioni locali](../standard-library/locale.md)\
[Classe time_base](../standard-library/time-base-class.md)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)
