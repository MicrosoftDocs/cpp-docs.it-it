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
ms.openlocfilehash: bc9fe752898a5dfde2631352abd8c3cf5f8b378c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317886"
---
# <a name="cfiletime-class"></a>Classe CFileTime

Questa classe fornisce metodi per la gestione dei valori di data e ora associati a un file.

## <a name="syntax"></a>Sintassi

```
class CFileTime :  public FILETIME
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTime::CFileTime](#cfiletime)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTime::GetCurrentTime](#getcurrenttime)|Chiamare questa funzione statica per recuperare un `CFileTime` oggetto che rappresenta la data e l'ora di sistema correnti.|
|[CFileTime::GetTime](#gettime)|Chiamare questo metodo per recuperare `CFileTime` l'ora dall'oggetto.|
|[CFileTime::LocalToUTC](#localtoutc)|Chiamare questo metodo per convertire un'ora di file locale in un'ora di file basata sull'ora UTC (Coordinated Universal Time).|
|[CFileTime::SetTime](#settime)|Chiamare questo metodo per impostare la `CFileTime` data e l'ora archiviate dall'oggetto.|
|[CFileTime::UTCToLocal](#utctolocal)|Chiamare questo metodo per convertire l'ora in base all'ora UTC (Coordinated Universal Time) nell'ora del file locale.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTime::operatore -](#operator_-)|Questo operatore viene utilizzato per `CFileTime` `CFileTimeSpan` eseguire la sottrazione su un oggetto o .|
|[CFileTime::operatore !](#operator_neq)|Questo operatore `CFileTime` confronta due oggetti per la disuguaglianza.|
|[CFileTime::operatore](#operator_add)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan`.|
|[CFileTime::operatore](#operator_add_eq)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan` e per assegnare il risultato all'oggetto corrente.|
|[CFileTime::operatore&lt;](#operator_lt)|Questo operatore confronta due oggetti `CFileTime` per determinare il minore.|
|[CFileTime::operatore&lt;=](#operator_lt_eq)|Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il minore.|
|[CFileTime::operatore](#operator_eq)|Operatore di assegnazione.|
|[CFileTime::operatore](#operator_-_eq)|Questo operatore viene utilizzato per `CFileTimeSpan` eseguire la sottrazione su un oggetto e assegnare il risultato all'oggetto corrente.|
|[CFileTime::operatore](#operator_eq_eq)|Questo operatore confronta due oggetti `CFileTime` per stabilirne l'uguaglianza.|
|[CFileTime::operatore&gt;](#operator_gt)|Questo operatore confronta due oggetti `CFileTime` per determinare il più grande.|
|[CFileTime::operatore&gt;=](#operator_gt_eq)|Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il più grande.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[CFileTime::Day](#day)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un giorno.|
|[CFileTime::Ora](#hour)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un'ora.|
|[CFileTime::Millisecondo](#millisecond)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un millisecondo.|
|[CFileTime::Minuti](#minute)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un minuto.|
|[CFileTime::Secondo](#second)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un secondo.|
|[CFileTime::Settimana](#week)|Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono una settimana.|

## <a name="remarks"></a>Osservazioni

Questa classe fornisce metodi per la gestione dei valori di data e ora associati alla creazione, all'accesso e alla modifica dei file. I metodi e i dati di questa `CFileTimeSpan` classe vengono spesso utilizzati in combinazione con gli oggetti, che gestiscono valori di ora relativi.

Il valore di data e ora viene archiviato come valore a 64 bit che rappresenta il numero di intervalli di 100 nanosecondi dal 1 gennaio 1601. Si tratta del formato UTC (Coordinated Universal Time).

Per semplificare i calcoli, vengono fornite le seguenti variabili membro const statiche:

|Variabile membro|Numero di intervalli di 100 nanosecondi|
|---------------------|-----------------------------------------|
|Millisecond|10,000|
|Second|Millisecondo \* 1.000|
|Minuto|Secondo \* 60|
|Ora|Minuto \* 60|
|Giorno|Ora \* 24|
|Week|Giorno \* 7|

**Nota:** Non tutti i file system possono registrare la creazione e l'ora dell'ultimo accesso e non tutti i file system li registrano nello stesso modo. Ad esempio, nel file system FAT di Windows NT, il tempo di creazione ha una risoluzione di 10 millisecondi, il tempo di scrittura ha una risoluzione di 2 secondi e il tempo di accesso ha una risoluzione di 1 giorno (la data di accesso). In NTFS, il tempo di accesso ha una risoluzione di 1 ora. Inoltre, FAT registra gli orari su disco nell'ora locale, ma NTFS registra le volte sul disco in UTC. Per ulteriori informazioni, vedere [Tempi dei file](/windows/win32/SysInfo/file-times).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`FILETIME`

`CFileTime`

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime.h

## <a name="cfiletimecfiletime"></a><a name="cfiletime"></a>CFileTime::CFileTime

Costruttore.

```
CFileTime() throw();
CFileTime(const FILETIME& ft) throw();
CFileTime(ULONGLONG nTime) throw();
```

### <a name="parameters"></a>Parametri

*Ft*<br/>
Struttura [FILETIME.](/windows/win32/api/minwinbase/ns-minwinbase-filetime)

*nOra*<br/>
Data e ora espresse come valore a 64 bit.

### <a name="remarks"></a>Osservazioni

L'oggetto `CFileTime` può essere creato utilizzando una `FILETIME` data e un'ora esistenti da una struttura o espresso come valore a 64 bit (nei formati di ora UTC (Coordinated Universal Time). Il costruttore predefinito imposta l'ora su 0.The default constructor sets the time to 0.

## <a name="cfiletimeday"></a><a name="day"></a>CFileTime::Day

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un giorno.

```
static const ULONGLONG Day = Hour* 24;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime::Millisecond](#millisecond).

## <a name="cfiletimegetcurrenttime"></a><a name="getcurrenttime"></a>CFileTime::GetCurrentTime

Chiamare questa funzione statica per recuperare un `CFileTime` oggetto che rappresenta la data e l'ora di sistema correnti.

```
static CFileTime GetCurrentTime() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la data e l'ora di sistema correnti nel formato UTC (Coordinated Universal Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#41](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_1.cpp)]

## <a name="cfiletimegettime"></a><a name="gettime"></a>CFileTime::GetTime

Chiamare questo metodo per recuperare `CFileTime` l'ora dall'oggetto.

```
ULONGLONG GetTime() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la data e l'ora come numero a 64 bit, che può essere in formato locale o UTC (Coordinated Universal Time).

## <a name="cfiletimehour"></a><a name="hour"></a>CFileTime::Ora

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un'ora.

```
static const ULONGLONG Hour = Minute* 60;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime::Millisecond](#millisecond).

## <a name="cfiletimelocaltoutc"></a><a name="localtoutc"></a>CFileTime::LocalToUTC

Chiamare questo metodo per convertire un'ora di file locale in un'ora di file basata sull'ora UTC (Coordinated Universal Time).

```
CFileTime LocalToUTC() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTime` un oggetto contenente l'ora in formato UTC.

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime::UTCToLocal](#utctolocal).

## <a name="cfiletimemillisecond"></a><a name="millisecond"></a>CFileTime::Millisecondo

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un millisecondo.

```
static const ULONGLONG Millisecond = 10000;
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#44](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_2.cpp)]

## <a name="cfiletimeminute"></a><a name="minute"></a>CFileTime::Minuti

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un minuto.

```
static const ULONGLONG Minute = Second* 60;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime::Millisecond](#millisecond).

## <a name="cfiletimeoperator--"></a><a name="operator_-"></a>CFileTime::operatore -

Questo operatore viene utilizzato per `CFileTime` `CFileTimeSpan` eseguire la sottrazione su un oggetto o .

```
CFileTime operator-(CFileTimeSpan span) const throw();
CFileTimeSpan operator-(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*<br/>
Oggetto `CFileTimeSpan` .

*Ft*<br/>
Oggetto `CFileTime` .

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTime` un `CFileTimeSpan` oggetto o un oggetto che rappresenta il risultato della differenza di tempo tra i due oggetti.

## <a name="cfiletimeoperator-"></a><a name="operator_neq"></a>CFileTime::operatore !

Questo operatore `CFileTime` confronta due oggetti per la disuguaglianza.

```
bool operator!=(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*Ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento confrontato non è uguale all'oggetto, `CFileTime` in caso contrario FALSE.

## <a name="cfiletimeoperator-"></a><a name="operator_add"></a>CFileTime::operatore

Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan`.

```
CFileTime operator+(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*<br/>
Oggetto `CFileTimeSpan` .

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTime` un oggetto che rappresenta il risultato dell'ora originale più un'ora relativa.

## <a name="cfiletimeoperator-"></a><a name="operator_add_eq"></a>CFileTime::operatore

Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan` e per assegnare il risultato all'oggetto corrente.

```
CFileTime& operator+=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*<br/>
Oggetto `CFileTimeSpan` .

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTime` l'oggetto aggiornato, che rappresenta il risultato dell'ora originale più un'ora relativa.

## <a name="cfiletimeoperator-lt"></a><a name="operator_lt"></a>CFileTime::operatore&lt;

Questo operatore confronta due oggetti `CFileTime` per determinare il minore.

```
bool operator<(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*Ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore (precedente nel tempo) rispetto al secondo, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#43](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_3.cpp)]

## <a name="cfiletimeoperator-lt"></a><a name="operator_lt_eq"></a>CFileTime::operatore&lt;=

Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il minore.

```
bool operator<=(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*Ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore di (precedente nel tempo) o uguale al secondo, in caso contrario FALSO.

## <a name="cfiletimeoperator-"></a><a name="operator_eq"></a>CFileTime::operatore

Operatore di assegnazione.

```
CFileTime& operator=(const FILETIME& ft) throw();
```

### <a name="parameters"></a>Parametri

*Ft*<br/>
Oggetto `CFileTime` contenente la nuova data e ora.

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTime` l'oggetto aggiornato.

## <a name="cfiletimeoperator--"></a><a name="operator_-_eq"></a>CFileTime::operatore

Questo operatore viene utilizzato per `CFileTimeSpan` eseguire la sottrazione su un oggetto e assegnare il risultato all'oggetto corrente.

```
CFileTime& operator-=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*<br/>
Oggetto `CFileTimeSpan` contenente il tempo relativo da sottrarre.

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTime` l'oggetto aggiornato.

## <a name="cfiletimeoperator-"></a><a name="operator_eq_eq"></a>CFileTime::operatore

Questo operatore confronta due oggetti `CFileTime` per stabilirne l'uguaglianza.

```
bool operator==(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*Ft*<br/>
Oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali, in caso contrario FALSE.

## <a name="cfiletimeoperator-gt"></a><a name="operator_gt"></a>CFileTime::operatore&gt;

Questo operatore confronta due oggetti `CFileTime` per determinare il più grande.

```
bool operator>(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*Ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (più tardi nel tempo) rispetto al secondo, in caso contrario FALSE.

## <a name="cfiletimeoperator-gt"></a><a name="operator_gt_eq"></a>CFileTime::operatore&gt;=

Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il più grande.

```
bool operator>=(CFileTime ft) const throw();
```

### <a name="parameters"></a>Parametri

*Ft*<br/>
L'oggetto `CFileTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (più tardi nel tempo) o uguale al secondo, in caso contrario FALSO.

## <a name="cfiletimesecond"></a><a name="second"></a>CFileTime::Secondo

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono un giorno.

```
static const ULONGLONG Second = Millisecond* 1000;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime::Millisecond](#millisecond).

## <a name="cfiletimesettime"></a><a name="settime"></a>CFileTime::SetTime

Chiamare questo metodo per impostare la `CFileTime` data e l'ora archiviate dall'oggetto.

```
void SetTime(ULONGLONG nTime) throw();
```

### <a name="parameters"></a>Parametri

*nOra*<br/>
Valore a 64 bit che rappresenta la data e l'ora, in formato LOCALE o UTC (Coordinated Universal Time).

## <a name="cfiletimeutctolocal"></a><a name="utctolocal"></a>CFileTime::UTCToLocal

Chiamare questo metodo per convertire l'ora in base all'ora UTC (Coordinated Universal Time) nell'ora del file locale.

```
CFileTime UTCToLocal() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce `CFileTime` un oggetto contenente l'ora nel formato dell'ora del file locale.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#42](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_4.cpp)]

## <a name="cfiletimeweek"></a><a name="week"></a>CFileTime::Settimana

Membro dati statici che archivia il numero di intervalli di 100 nanosecondi che costituiscono una settimana.

```
static const ULONGLONG Week = Day* 7;
```

### <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime::Millisecond](#millisecond).

## <a name="see-also"></a>Vedere anche

[FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime)<br/>
[Classe CFileTimeSpan](../../atl-mfc-shared/reference/cfiletimespan-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
