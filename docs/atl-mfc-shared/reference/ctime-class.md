---
title: Classe CTime
ms.date: 10/18/2018
f1_keywords:
- CTime
- ATLTIME/ATL::CTime
- ATLTIME/ATL::CTime::CTime
- ATLTIME/ATL::CTime::Format
- ATLTIME/ATL::CTime::FormatGmt
- ATLTIME/ATL::CTime::GetAsDBTIMESTAMP
- ATLTIME/ATL::CTime::GetAsSystemTime
- ATLTIME/ATL::CTime::GetCurrentTime
- ATLTIME/ATL::CTime::GetDay
- ATLTIME/ATL::CTime::GetDayOfWeek
- ATLTIME/ATL::CTime::GetGmtTm
- ATLTIME/ATL::CTime::GetHour
- ATLTIME/ATL::CTime::GetLocalTm
- ATLTIME/ATL::CTime::GetMinute
- ATLTIME/ATL::CTime::GetMonth
- ATLTIME/ATL::CTime::GetSecond
- ATLTIME/ATL::CTime::GetTime
- ATLTIME/ATL::CTime::GetYear
- ATLTIME/ATL::CTime::Serialize64
helpviewer_keywords:
- CTime class
- shared classes, CTime
ms.assetid: 0a299544-485b-48dc-9d3c-fdc30f57d612
ms.openlocfilehash: a73baab3e43467b76c1b4e3592314a4323d22ffb
ms.sourcegitcommit: c85c8a1226d8fbbaa29f4691ed719f8e6cc6575c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/24/2019
ms.locfileid: "54893977"
---
# <a name="ctime-class"></a>Classe CTime

Rappresenta una data e ora assoluto.

## <a name="syntax"></a>Sintassi

```
class CTime
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTime::CTime](#ctime)|Costruisce `CTime` oggetti in vari modi.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTime::Format](#format)|Converte un `CTime` oggetto in una stringa formattata, in base al fuso orario locale.|
|[CTime::FormatGmt](#formatgmt)|Converte un `CTime` oggetto in una stringa formattata, basate su UTC.|
|[CTime::GetAsDBTIMESTAMP](#getasdbtimestamp)|Converte le informazioni sull'ora archiviate nel `CTime` oggetto a una struttura DBTIMESTAMP compatibile con Win32.|
|[CTime::GetAsSystemTime](#getassystemtime)|Converte le informazioni sull'ora archiviate nel `CTime` oggetto per uno schermo compatibile con Win32 [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura.|
|[CTime::GetCurrentTime](#getcurrenttime)|Crea un `CTime` oggetto che rappresenta l'ora corrente (funzione membro statica).|
|[CTime::GetDay](#getday)|Restituisce il giorno rappresentato dal `CTime` oggetto.|
|[CTime::GetDayOfWeek](#getdayofweek)|Restituisce il giorno della settimana rappresentato dal `CTime` oggetto.|
|[CTime::GetGmtTm](#getgmttm)|Suddivide un `CTime` oggetto nei componenti, ovvero basate su UTC.|
|[CTime::GetHour](#gethour)|Restituisce l'ora rappresentata dal `CTime` oggetto.|
|[CTime::GetLocalTm](#getlocaltm)|Suddivide un `CTime` oggetto nei componenti, ovvero in base al fuso orario locale.|
|[CTime::GetMinute](#getminute)|Vengono restituiti i minuti rappresentato dal `CTime` oggetto.|
|[CTime::GetMonth](#getmonth)|Restituisce il mese rappresentato dal `CTime` oggetto.|
|[CTime::GetSecond](#getsecond)|Restituisce il secondo rappresentato dal `CTime` oggetto.|
|[CTime::GetTime](#gettime)|Restituisce un **__time64_t** valore per il dato `CTime` oggetto.|
|[CTime::GetYear](#getyear)|Restituisce l'anno rappresentata dal `CTime` oggetto.|
|[CTime::Serialize64](#serialize64)|Serializza i dati da o verso un archivio.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator + -](#operator_add_-)|Questi operatori di addizione e sottrazione `CTimeSpan` e `CTime` oggetti.|
|[operatore + =, =](#operator_add_eq_-_eq)|Questi operatori di addizione e sottrazione una `CTimeSpan` oggetti da e verso questo `CTime` oggetto.|
|[operator =](#operator_eq)|L'operatore di assegnazione.|
|[operator ==, < , etc.](#ctime_comparison_operators)|Operatori di confronto.|

## <a name="remarks"></a>Note

`CTime` non è una classe di base.

`CTime` i valori sono basati sul tempo universale coordinato (UTC), che equivale a Coordinated Universal time (Greenwich Mean Time, GMT). Visualizzare [gestione del tempo](../../c-runtime-library/time-management.md) per informazioni su come viene determinato il fuso orario.

Quando si crea una `CTime` dell'oggetto, impostare il `nDST` parametro su 0 per indicare che è attiva l'ora solare o su un valore maggiore di 0 per indicare che l'ora legale è attiva, o un valore minore di zero per fare il riavvio del comput codice della libreria di runtime C e indica se ora solare o ora legale è attiva. `tm_isdst` è un campo obbligatorio. Se non impostato, il relativo valore non è definito e il valore restituito da [mktime](../../c-runtime-library/reference/mktime-mktime32-mktime64.md) è imprevedibile. Se `timeptr` punta a una struttura tm restituita da una precedente chiamata a [asctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md), [gmtime_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md), oppure [localtime_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), la `tm_isdst` campo contiene il valore corretto.

Una classe complementare [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md), rappresenta un intervallo di tempo.

Il `CTime` e `CTimeSpan` classi non sono progettate per la derivazione. Perché non sono presenti funzioni virtuali, le dimensioni di `CTime` e `CTimeSpan` oggetti corrisponde esattamente a 8 byte. La maggior parte delle funzioni membro sono inline.

> [!NOTE]
>  Il limite superiore della data è 12/31/3000. Il limite minimo è 1, 1 gennaio 1970 12: 12:00:00 AM GMT.

Per altre informazioni sull'uso `CTime`, vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md), e [lingue straniere](../../c-runtime-library/time-management.md) nel riferimento alla libreria Run-Time.

> [!NOTE]
>  Il `CTime` struttura è stata modificata da MFC 7.1 a 8.0 MFC. Se si serializzano un `CTime` struttura usando la **operatore <<** utilizza MFC 8.0 o versione successiva, il file risultante non sarà possibile leggere in versioni precedenti di MFC.

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime. h

##  <a name="ctime_comparison_operators"></a>  Operatori di confronto CTime

Operatori di confronto.

```
bool operator==(CTime time) const throw();
bool operator!=(CTime time) const throw();
bool operator<(CTime time) const throw();
bool operator>(CTime time) const throw();
bool operator<=(CTime time) const throw();
bool operator>=(CTime time) const throw();
```

### <a name="parameters"></a>Parametri

*time*<br/>
L'oggetto `CTime` da confrontare.

### <a name="return-value"></a>Valore restituito

Questi operatori confrontano due volte assolute e restituisce TRUE se la condizione è true. in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#161](../../atl-mfc-shared/codesnippet/cpp/ctime-class_1.cpp)]

##  <a name="ctime"></a>  Costruttori CTime::

Crea un nuovo `CTime` oggetto inizializzato con il tempo specificato.

```
CTime() throw();
CTime(__time64_t time) throw();
CTime(int nYear, int nMonth, int nDay,
      int nHour, int nMin, int nSec, int nDST = -1);
CTime(WORD wDosDate, WORD wDosTime, int nDST = -1);
CTime(const SYSTEMTIME& st, int nDST = - 1) throw();
CTime(const FILETIME& ft, int nDST = - 1);
CTime(const DBTIMESTAMP& dbts, int nDST = -1) throw();
```

### <a name="parameters"></a>Parametri

*timeSrc*<br/>
Indica un `CTime` oggetto già esistente.

*time*<br/>
Oggetto `__time64_t` valore di ora, ovvero il numero di secondi dopo il 1 ° gennaio 1970 UTC. Si noti che questa verrà regolata l'ora locale. Ad esempio, se si è a New York e creare un `CTime` passando un parametro pari a 0, [CTime::GetMonth](#getmonth) restituirà 12.

*nYear*, *nMonth*, *nDay*, *nHour*, *nMin*, *nSec*<br/>
Indica i valori di data e ora da copiare nel nuovo `CTime` oggetto.

*nDST*<br/>
Indica se è in vigore l'ora legale. Può avere uno dei tre valori:

- *nDST* set 0Standard ora è in vigore.

- *nDST* impostata su un valore superiore a 0Daylight è in vigore l'ora.

- *nDST* impostata su un valore minore di 0The predefinito. Viene calcolato automaticamente se ora solare o ora legale è in vigore.

*wDosDate*, *wDosTime*<br/>
Valori di data e ora di MS-DOS per essere convertito in un valore data/ora e copiare nel nuovo `CTime` oggetto.

*st*<br/>
Oggetto [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura venga convertito in un valore data/ora e copiare nel nuovo `CTime` oggetto.

*ft*<br/>
Oggetto [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) struttura venga convertito in un valore data/ora e copiare nel nuovo `CTime` oggetto.

*dbts*<br/>
Un riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.

### <a name="remarks"></a>Note

Ogni costruttore è descritta di seguito:

- `CTime();` Costruisce un valore non inizializzato `CTime` oggetto. Questo costruttore consente di definire `CTime` matrici dell'oggetto. È necessario inizializzare tali matrici con tempi validi prima di usare.

- `CTime( const CTime& );` Costruisce un `CTime` da un altro oggetto `CTime` valore.

- `CTime( __time64_t );` Costruisce un `CTime` dell'oggetto da un **__time64_t** tipo. Questo costruttore prevede un'ora UTC e converte il risultato di un'ora locale prima di archiviare il risultato.

- `CTime( int, int, ...);` Costruisce un `CTime` vincolata oggetto dai componenti di ora locale in cui ogni componente per gli intervalli seguenti:

   |Componente|Intervallo|
   |---------------|-----------|
   |*nYear*|1970-3000|
   |*nMonth*|1-12|
   |*nDay*|1-31|
   |*nHour*|0-23|
   |*nMin*|0-59|
   |*nSec*|0-59|

   Questo costruttore esegue la conversione appropriata in formato UTC. La versione di Debug della libreria di classi Microsoft Foundation asserzioni se uno o più dei componenti di ora sono comprese nell'intervallo. È necessario convalidare gli argomenti prima della chiamata. Questo costruttore richiede un'ora locale.

- `CTime( WORD, WORD );` Costruisce un `CTime` oggetto dai valori di data e ora MS-DOS specificati. Questo costruttore richiede un'ora locale.

- `CTime( const SYSTEMTIME& );` Costruisce un `CTime` dell'oggetto da un `SYSTEMTIME` struttura. Questo costruttore richiede un'ora locale.

- `CTime( const FILETIME& );` Costruisce un `CTime` dell'oggetto da un `FILETIME` struttura. Non è molto probabile che userà `CTime FILETIME` direttamente l'inizializzazione. Se si usa un' `CFile` oggetto per modificare un file, `CFile::GetStatus` recupera il timestamp di file per l'utente attraverso una `CTime` oggetto inizializzato con un `FILETIME` struttura. Questo costruttore utilizza un tempo basato su UTC e converte automaticamente il valore nell'ora locale prima di archiviare il risultato.

   > [!NOTE]
   > Il costruttore usando `DBTIMESTAMP` parametro è disponibile solo quando viene incluso OleDb.

Per altre informazioni, vedere la [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) e [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) struttura nel SDK di Windows. Vedere anche il [MS-DOS data e ora](/windows/desktop/SysInfo/ms-dos-date-and-time) voce nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#148](../../atl-mfc-shared/codesnippet/cpp/ctime-class_2.cpp)]

##  <a name="format"></a>  CTime::Format

Chiamare questa funzione membro per creare una rappresentazione formattata del valore data / ora.

```
CString Format(LPCTSTR pszFormat) const;
CString Format(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*pszFormat*<br/>
Formattazione di un stringa simile al `printf` stringa di formattazione. Codici, preceduti da una percentuale di formattazione (`%`) accesso, viene sostituito dal corrispondente `CTime` componente. Altri caratteri nella stringa di formattazione vengono copiati senza modifiche alla stringa restituita. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per un elenco di codici di formattazione.

*nFormatID*<br/>
L'ID della stringa che identifica questo formato.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene l'ora formattata.

### <a name="remarks"></a>Note

Se lo stato di questo `CTime` oggetto è null, il valore restituito è una stringa vuota.

Questo metodo genera un'eccezione se il valore di data e ora da formattare non è compresa dalla mezzanotte del 1 gennaio 1970 31 dicembre 3000 ora UTC (Universal Coordinated Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#149](../../atl-mfc-shared/codesnippet/cpp/ctime-class_3.cpp)]

##  <a name="formatgmt"></a>  CTime::FormatGmt

Genera una stringa formattata che corrisponde a questo `CTime` oggetto.

```
CString FormatGmt(LPCTSTR pszFormat) const;
CString FormatGmt(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*pszFormat*<br/>
Specifica una stringa di formattazione simile al `printf` stringa di formattazione. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per informazioni dettagliate.

*nFormatID*<br/>
L'ID della stringa che identifica questo formato.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene l'ora formattata.

### <a name="remarks"></a>Note

Il valore di ora non viene convertito e pertanto rifletterà UTC.

Questo metodo genera un'eccezione se il valore di data e ora da formattare non è compresa dalla mezzanotte del 1 gennaio 1970 31 dicembre 3000 ora UTC (Universal Coordinated Time).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CTime::Format](#format).

##  <a name="getasdbtimestamp"></a>  CTime::GetAsDBTIMESTAMP

Chiamare questa funzione membro per convertire le informazioni sull'ora archiviate nel `CTime` oggetto a una struttura DBTIMESTAMP compatibile con Win32.

```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```

### <a name="parameters"></a>Parametri

*dbts*<br/>
Un riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Archivia l'ora risultante in di riferimento *dbts* struttura. Il `DBTIMESTAMP` struttura di dati inizializzato da questa funzione avrà relativo `fraction` membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#150](../../atl-mfc-shared/codesnippet/cpp/ctime-class_4.cpp)]

##  <a name="getassystemtime"></a>  CTime::GetAsSystemTime

Chiamare questa funzione membro per convertire le informazioni sull'ora archiviate nel `CTime` oggetto per uno schermo compatibile con Win32 [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura.

```
bool GetAsSystemTime(SYSTEMTIME& st) const throw();
```

### <a name="parameters"></a>Parametri

*timeDest*<br/>
Un riferimento a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura che conterrà il valore di data/ora convertita del `CTime` oggetto.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Note

`GetAsSystemTime` Archivia l'ora risultante in di riferimento *timeDest* struttura. Il `SYSTEMTIME` struttura di dati inizializzato da questa funzione avrà relativo `wMilliseconds` membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#151](../../atl-mfc-shared/codesnippet/cpp/ctime-class_5.cpp)]

##  <a name="getcurrenttime"></a>  CTime::GetCurrentTime

Restituisce un `CTime` oggetto che rappresenta l'ora corrente.

```
static CTime WINAPI GetCurrentTime() throw();
```

### <a name="remarks"></a>Note

Restituisce la data corrente del sistema e l'ora in Coordinated Universal Time (UTC).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#152](../../atl-mfc-shared/codesnippet/cpp/ctime-class_6.cpp)]

##  <a name="getday"></a>  CTime::GetDay

Restituisce il giorno rappresentato dal `CTime` oggetto.

```
int GetDay() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il giorno del mese, basato sull'ora locale, compreso tra 1 e 31.

### <a name="remarks"></a>Note

Questa funzione chiama `GetLocalTm`, che usa un buffer allocato in modo statico, interno. I dati in questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#153](../../atl-mfc-shared/codesnippet/cpp/ctime-class_7.cpp)]

##  <a name="getdayofweek"></a>  CTime::GetDayOfWeek

Restituisce il giorno della settimana rappresentato dal `CTime` oggetto.

```
int GetDayOfWeek() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il giorno della settimana basato sull'ora locale. 1 = domenica, 2 = lunedì, a 7 = sabato.

### <a name="remarks"></a>Note

Questa funzione chiama `GetLocalTm`, che usa interna in modo statico allocato del buffer. I dati in questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#154](../../atl-mfc-shared/codesnippet/cpp/ctime-class_8.cpp)]

##  <a name="getgmttm"></a>  CTime::GetGmtTm

Ottiene un **struct tm** che contiene una scomposizione del tempo contenuto in questo `CTime` oggetto.

```
struct tm* GetGmtTm(struct tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*ptm*<br/>
Punta a un buffer che riceverà i dati temporali. Se questo puntatore è NULL, viene generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Un puntatore a un compilato in **struct tm** come definito nel file di inclusione ora. H. Visualizzare [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) per il layout della struttura.

### <a name="remarks"></a>Note

`GetGmtTm` Restituisce l'ora UTC.

*ptm* non può essere NULL. Se si vuole ripristinare il comportamento precedente, in cui *ptm* può essere NULL per indicare che un interno, deve essere usato un buffer allocato in modo statico, quindi rimuovere la definizione _SECURE_ATL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#155](../../atl-mfc-shared/codesnippet/cpp/ctime-class_9.cpp)]

##  <a name="gethour"></a>  CTime::GetHour

Restituisce l'ora rappresentata dal `CTime` oggetto.

```
int GetHour() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ora, basata sull'ora locale, nell'intervallo compreso tra 0 e 23.

### <a name="remarks"></a>Note

Questa funzione chiama `GetLocalTm`, che usa interna in modo statico allocato del buffer. I dati in questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#156](../../atl-mfc-shared/codesnippet/cpp/ctime-class_10.cpp)]

##  <a name="getlocaltm"></a>  CTime::GetLocalTm

Ottiene un **struct tm** che contiene una scomposizione del tempo contenuto in questo `CTime` oggetto.

```
struct tm* GetLocalTm(struct tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*ptm*<br/>
Punta a un buffer che riceverà i dati temporali. Se questo puntatore è NULL, viene generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Un puntatore a un compilato in **struct tm** come definito nel file di inclusione ora. H. Visualizzare [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) per il layout della struttura.

### <a name="remarks"></a>Note

`GetLocalTm` Restituisce l'ora locale.

*ptm* non può essere NULL. Se si vuole ripristinare il comportamento precedente, in cui *ptm* può essere NULL per indicare che un interno, deve essere usato un buffer allocato in modo statico, quindi rimuovere la definizione _SECURE_ATL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#157](../../atl-mfc-shared/codesnippet/cpp/ctime-class_11.cpp)]

##  <a name="getminute"></a>  CTime::GetMinute

Vengono restituiti i minuti rappresentato dal `CTime` oggetto.

```
int GetMinute() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il minuto, basato sull'ora locale, nell'intervallo da 0 a 59.

### <a name="remarks"></a>Note

Questa funzione chiama `GetLocalTm`, che usa interna in modo statico allocato del buffer. I dati in questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetHour](#gethour).

##  <a name="getmonth"></a>  CTime::GetMonth

Restituisce il mese rappresentato dal `CTime` oggetto.

```
int GetMonth() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il mese, basato sull'ora locale, compreso tra 1 e 12 (1 = gennaio).

### <a name="remarks"></a>Note

Questa funzione chiama `GetLocalTm`, che usa interna in modo statico allocato del buffer. I dati in questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetDay](#getday).

##  <a name="getsecond"></a>  CTime::GetSecond

Restituisce il secondo rappresentato dal `CTime` oggetto.

```
int GetSecond() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il secondo, basata sull'ora locale, nell'intervallo da 0 a 59.

### <a name="remarks"></a>Note

Questa funzione chiama `GetLocalTm`, che usa interna in modo statico allocato del buffer. I dati in questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetHour](#gethour).

##  <a name="gettime"></a>  CTime::GetTime

Restituisce un **__time64_t** valore per il dato `CTime` oggetto.

```
__time64_t GetTime() const throw();
```

### <a name="return-value"></a>Valore restituito

`GetTime` Restituisce il numero di secondi tra l'oggetto corrente `CTime` oggetto e il 1 gennaio 1970.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#158](../../atl-mfc-shared/codesnippet/cpp/ctime-class_12.cpp)]

##  <a name="getyear"></a>  CTime::GetYear

Restituisce l'anno rappresentata dal `CTime` oggetto.

```
int GetYear();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'anno, basata sull'ora locale, nell'intervallo di gennaio 1,1970, per il 18 gennaio 2038 (inclusivo).

### <a name="remarks"></a>Note

Questa funzione chiama `GetLocalTm`, che usa interna in modo statico allocato del buffer. I dati in questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetDay](#getday).

##  <a name="operator_eq"></a>  CTime::operator =

L'operatore di assegnazione.

```
CTime& operator=(__time64_t time) throw();
```

### <a name="parameters"></a>Parametri

*time*<br/>
Il valore di data/ora nuove.

### <a name="return-value"></a>Valore restituito

Aggiornato `CTime` oggetto.

### <a name="remarks"></a>Note

Questo operatore di assegnazione di overload copia l'ora di origine in questa `CTime` oggetto. Lo spazio di archiviazione a tempo interno un `CTime` oggetto è indipendente dal fuso orario. Conversione del fuso orario non è necessaria durante l'assegnazione.

##  <a name="operator_add_-"></a>  CTime::operator +, -

Questi operatori di addizione e sottrazione `CTimeSpan` e `CTime` oggetti.

```
CTime operator+(CTimeSpan timeSpan) const throw();
CTime operator-(CTimeSpan timeSpan) const throw();
CTimeSpan operator-(CTime time) const throw();
```

### <a name="parameters"></a>Parametri

*timeSpan*<br/>
Il `CTimeSpan` oggetto da aggiungere o sottrarre.

*time*<br/>
Il `CTime` oggetti da sottrarre.

### <a name="return-value"></a>Valore restituito

Oggetto `CTime` o `CTimeSpan` oggetto che rappresenta il risultato dell'operazione.

### <a name="remarks"></a>Note

`CTime` gli oggetti rappresentano il tempo assoluto, `CTimeSpan` oggetti rappresentano tempo relativo. I primi due operatori consentono di addizione e sottrazione `CTimeSpan` gli oggetti da e verso `CTime` oggetti. Il terzo operatore consente di sottrarre uno `CTime` oggetto da un altro per produrre un `CTimeSpan` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#159](../../atl-mfc-shared/codesnippet/cpp/ctime-class_13.cpp)]

##  <a name="operator_add_eq_-_eq"></a>  CTime::operator + =, =

Questi operatori di addizione e sottrazione una `CTimeSpan` oggetti da e verso questo `CTime` oggetto.

```
CTime& operator+=(CTimeSpan span) throw();
CTime& operator-=(CTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Il `CTimeSpan` oggetto da aggiungere o sottrarre.

### <a name="return-value"></a>Valore restituito

Aggiornato `CTime` oggetto.

### <a name="remarks"></a>Note

Questi operatori consentono di addizione e sottrazione una `CTimeSpan` oggetti da e verso questo `CTime` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#160](../../atl-mfc-shared/codesnippet/cpp/ctime-class_14.cpp)]

##  <a name="serialize64"></a>  CTime::Serialize64

> [!NOTE]
> Questo metodo è disponibile solo in progetti MFC.

Serializza i dati associati con la variabile membro in o da un archivio.

```
CArchive& Serialize64(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
Il `CArchive` oggetto che si desidera aggiornare.

### <a name="return-value"></a>Valore restituito

Aggiornato `CArchive` oggetto.

## <a name="see-also"></a>Vedere anche

[asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)<br/>
[_ftime_s, _ftime32_s, _ftime64_s](../../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)<br/>
[Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
