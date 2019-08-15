---
title: Classe CFileTime
ms.date: 10/18/2018
f1_keywords:
- CFileTime
- ATLTIME/ATL::CFileTime
- ATLTIME/ATL::CFileTime::CFileTime
- ATLTIME/ATL::CFileTime::GetCurrentTime
- ATLTIME/ATL::CFileTime::GetTime
- ATLTIME/ATL::CFileTime::LocalToUTC
- ATLTIME/ATL::CFileTime::SetTime
- ATLTIME/ATL::CFileTime::UTCToLocal
- ATLTIME/ATL::CFileTime::Day
- ATLTIME/ATL::CFileTime::Hour
- ATLTIME/ATL::CFileTime::Millisecond
- ATLTIME/ATL::CFileTime::Minute
- ATLTIME/ATL::CFileTime::Second
- ATLTIME/ATL::CFileTime::Week
helpviewer_keywords:
- CFileTime class
- shared classes, CFileTime
ms.assetid: 1a358a65-1383-4124-b0d4-59b026e6860f
ms.openlocfilehash: b24d1e4d3e670a820c41735617b7db6780ff137c
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491489"
---
# <a name="cfiletime-class"></a>Classe CFileTime

Questa classe fornisce metodi per la gestione dei valori di data e ora associati a un file.

## <a name="syntax"></a>Sintassi

```
class CFileTime :  public FILETIME
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTime::CFileTime](#cfiletime)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CFileTime::GetCurrentTime](#getcurrenttime)|Chiamare questa funzione statica per recuperare un `CFileTime` oggetto che rappresenta la data e l'ora di sistema correnti.|
|[CFileTime::GetTime](#gettime)|Chiamare questo metodo per recuperare l'ora dall' `CFileTime` oggetto.|
|[CFileTime::LocalToUTC](#localtoutc)|Chiamare questo metodo per convertire l'ora di un file locale in un file in base all'ora UTC (Coordinated Universal Time).|
|[CFileTime::SetTime](#settime)|Chiamare questo metodo per impostare la data e l'ora archiviate `CFileTime` dall'oggetto.|
|[CFileTime::UTCToLocal](#utctolocal)|Chiamare questo metodo per convertire l'ora in base all'ora UTC (Coordinated Universal Time) in un file locale.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[Operatore CFileTime:: operator-](#operator_-)|Questo operatore viene usato per eseguire la sottrazione su `CFileTime` un `CFileTimeSpan` oggetto o.|
|[CFileTime:: operator! =](#operator_neq)|Questo operatore confronta due `CFileTime` oggetti per verificarne la disuguaglianza.|
|[CFileTime:: operator +](#operator_add)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan`.|
|[CFileTime:: operator + =](#operator_add_eq)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan` e per assegnare il risultato all'oggetto corrente.|
|[Operatore CFileTime::&lt;](#operator_lt)|Questo operatore confronta due oggetti `CFileTime` per determinare il minore.|
|[Operatore CFileTime::&lt;=](#operator_lt_eq)|Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il minore.|
|[CFileTime:: operator =](#operator_eq)|Operatore di assegnazione.|
|[CFileTime:: operator-=](#operator_-_eq)|Questo operatore viene usato per eseguire la sottrazione su `CFileTimeSpan` un oggetto e assegnare il risultato all'oggetto corrente.|
|[CFileTime:: operator = =](#operator_eq_eq)|Questo operatore confronta due oggetti `CFileTime` per stabilirne l'uguaglianza.|
|[Operatore CFileTime::&gt;](#operator_gt)|Questo operatore confronta due oggetti `CFileTime` per determinare il più grande.|
|[Operatore CFileTime::&gt;=](#operator_gt_eq)|Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il più grande.|

### <a name="public-constants"></a>Costanti pubbliche

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CFileTime::D ay](#day)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un giorno.|
|[CFileTime:: hour](#hour)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un'ora.|
|[CFileTime:: millisecondo](#millisecond)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che compongono un millisecondo.|
|[CFileTime:: minute](#minute)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un minuto.|
|[CFileTime:: Second](#second)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un secondo.|
|[CFileTime:: settimana](#week)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono una settimana.|

## <a name="remarks"></a>Note

Questa classe fornisce metodi per la gestione dei valori di data e ora associati alla creazione, all'accesso e alla modifica dei file. I metodi e i dati di questa classe vengono spesso usati insieme agli `CFileTimeSpan` oggetti, che gestiscono i valori temporali relativi.

Il valore di data e ora viene archiviato come valore a 64 bit che rappresenta il numero di intervalli di 100-nanosecondi a partire dal 1 ° gennaio 1601. Si tratta del formato UTC (Coordinated Universal Time).

Per semplificare i calcoli vengono fornite le variabili membro const statiche seguenti:

|Variabile membro|Numero di intervalli di 100-nanosecondi|
|---------------------|-----------------------------------------|
|Millisecond|10,000|
|Secondo|Millisecondo \* 1.000|
|Minuto|Secondo \* 60|
|Ora|Minuto \* 60|
|Giorno|Ora \* 24|
|Settimana|Giorno \* 7|

**Nota** Non tutti i file System possono registrare la creazione e l'ora dell'ultimo accesso e non tutti i file System li registrano nello stesso modo. Ad esempio, nel file system FAT Windows NT, l'ora di creazione ha una risoluzione di 10 millisecondi, l'ora di scrittura ha una risoluzione di 2 secondi e l'ora di accesso ha una risoluzione di 1 giorno (la data di accesso). In NTFS, l'ora di accesso ha una risoluzione di 1 ora. Inoltre, i record FAT si moltiplicano per il disco nell'ora locale, ma NTFS registra le ore su disco in formato UTC. Per ulteriori informazioni, vedere [file Times](/windows/win32/SysInfo/file-times).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FILETIME`

`CFileTime`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime. h

##  <a name="cfiletime"></a>CFileTime:: CFileTime

Costruttore.

```
CFileTime() throw();
CFileTime(const FILETIME& ft) throw();
CFileTime(ULONGLONG nTime) throw();
```

### <a name="parameters"></a>Parametri

*ft*<br/>
Struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) .

*nTime*<br/>
Data e ora espresse come valore a 64 bit.

### <a name="remarks"></a>Note

L' `CFileTime` oggetto può essere creato usando una data e un'ora esistenti da `FILETIME` una struttura o espressa come valore a 64 bit (nei formati di ora UTC (locale o Coordinated Universal Time). Il costruttore predefinito imposta l'ora su 0.

##  <a name="day"></a>CFileTime::D ay

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un giorno.

```
static const ULONGLONG Day = Hour* 24;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime:: Millisecond](#millisecond).

##  <a name="getcurrenttime"></a>  CFileTime::GetCurrentTime

Chiamare questa funzione statica per recuperare un `CFileTime` oggetto che rappresenta la data e l'ora di sistema correnti.

```
static CFileTime GetCurrentTime() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la data e l'ora di sistema correnti nel formato UTC (Coordinated Universal Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#41](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_1.cpp)]

##  <a name="gettime"></a>CFileTime:: getTime

Chiamare questo metodo per recuperare l'ora dall' `CFileTime` oggetto.

```
ULONGLONG GetTime() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la data e l'ora come numero a 64 bit, che può essere in formato UTC (locale o Coordinated Universal Time).

##  <a name="hour"></a>CFileTime:: hour

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un'ora.

```
static const ULONGLONG Hour = Minute* 60;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime:: Millisecond](#millisecond).

##  <a name="localtoutc"></a>CFileTime:: LocalToUTC

Chiamare questo metodo per convertire l'ora di un file locale in un file in base all'ora UTC (Coordinated Universal Time).

```
CFileTime LocalToUTC() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `CFileTime` oggetto contenente l'ora in formato UTC.

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime:: UTCToLocal](#utctolocal).

##  <a name="millisecond"></a>CFileTime:: millisecondo

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che compongono un millisecondo.

```
static const ULONGLONG Millisecond = 10000;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#44](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_2.cpp)]

##  <a name="minute"></a>CFileTime:: minute

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un minuto.

```
static const ULONGLONG Minute = Second* 60;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime:: Millisecond](#millisecond).

##  <a name="operator_-"></a>Operatore CFileTime:: operator-

Questo operatore viene usato per eseguire la sottrazione su `CFileTime` un `CFileTimeSpan` oggetto o.

```
CFileTime operator-(CFileTimeSpan span) const throw();
CFileTimeSpan operator-(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

*ft*<br/>
Oggetto `CFileTime`.

### <a name="return-value"></a>Valore restituito

Restituisce un `CFileTime` oggetto o un `CFileTimeSpan` oggetto che rappresenta il risultato della differenza di tempo tra i due oggetti.

##  <a name="operator_neq"></a>CFileTime:: operator! =

Questo operatore confronta due `CFileTime` oggetti per verificarne la disuguaglianza.

```
bool operator!=(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elemento da confrontare non è uguale all' `CFileTime` oggetto; in caso contrario, false.

##  <a name="operator_add"></a>CFileTime:: operator +

Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan`.

```
CFileTime operator+(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce un `CFileTime` oggetto che rappresenta il risultato dell'ora originale più un'ora relativa.

##  <a name="operator_add_eq"></a>CFileTime:: operator + =

Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan` e per assegnare il risultato all'oggetto corrente.

```
CFileTime& operator+=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTime` aggiornato, che rappresenta il risultato dell'ora originale più un'ora relativa.

##  <a name="operator_lt"></a>Operatore CFileTime::&lt;

Questo operatore confronta due oggetti `CFileTime` per determinare il minore.

```
bool operator<(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore (precedente all'ora) rispetto al secondo; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#43](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_3.cpp)]

##  <a name="operator_lt_eq"></a>Operatore CFileTime::&lt;=

Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il minore.

```
bool operator<=(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore di (precedente all'ora) o uguale al secondo; in caso contrario, FALSE.

##  <a name="operator_eq"></a>CFileTime:: operator =

Operatore di assegnazione.

```
CFileTime& operator=(const FILETIME& ft) throw();
```

### <a name="parameters"></a>Parametri

*ft*<br/>
`CFileTime` Oggetto contenente la nuova data e ora.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTime` aggiornato.

##  <a name="operator_-_eq"></a>CFileTime:: operator-=

Questo operatore viene usato per eseguire la sottrazione su `CFileTimeSpan` un oggetto e assegnare il risultato all'oggetto corrente.

```
CFileTime& operator-=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
`CFileTimeSpan` Oggetto contenente il tempo relativo da sottrarre.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTime` aggiornato.

##  <a name="operator_eq_eq"></a>CFileTime:: operator = =

Questo operatore confronta due oggetti `CFileTime` per stabilirne l'uguaglianza.

```
bool operator==(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*ft*<br/>
`CFileTime` Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali; in caso contrario, FALSE.

##  <a name="operator_gt"></a>Operatore CFileTime::&gt;

Questo operatore confronta due oggetti `CFileTime` per determinare il più grande.

```
bool operator>(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (più avanti nel tempo) rispetto al secondo; in caso contrario, FALSE.

##  <a name="operator_gt_eq"></a>Operatore CFileTime::&gt;=

Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il più grande.

```
bool operator>=(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (in un secondo momento) o uguale al secondo; in caso contrario, FALSE.

##  <a name="second"></a>CFileTime:: Second

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un giorno.

```
static const ULONGLONG Second = Millisecond* 1000;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime:: Millisecond](#millisecond).

##  <a name="settime"></a>  CFileTime::SetTime

Chiamare questo metodo per impostare la data e l'ora archiviate `CFileTime` dall'oggetto.

```
void SetTime(ULONGLONG nTime) throw();
```

### <a name="parameters"></a>Parametri

*nTime*<br/>
Valore a 64 bit che rappresenta la data e l'ora, nel formato locale o UTC (Coordinated Universal Time).

##  <a name="utctolocal"></a>CFileTime:: UTCToLocal

Chiamare questo metodo per convertire l'ora in base all'ora UTC (Coordinated Universal Time) in un file locale.

```
CFileTime UTCToLocal() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un `CFileTime` oggetto contenente l'ora nel formato di ora del file locale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#42](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_4.cpp)]

##  <a name="week"></a>CFileTime:: settimana

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono una settimana.

```
static const ULONGLONG Week = Day* 7;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime:: Millisecond](#millisecond).

## <a name="see-also"></a>Vedere anche

[FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime)<br/>
[Classe CFileTimeSpan](../../atl-mfc-shared/reference/cfiletimespan-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
