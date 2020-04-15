---
title: Classe CTime
ms.date: 10/18/2018
f1_keywords:
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
ms.openlocfilehash: e6e471fe648c5fa370cce750e8569e158eb1ffe4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317562"
---
# <a name="ctime-class"></a>Classe CTime

Rappresenta un'ora e una data assolute.

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
|[CTime::Formato](#format)|Converte `CTime` un oggetto in una stringa formattata in base al fuso orario locale.|
|[CTime::FormatGmt](#formatgmt)|Converte `CTime` un oggetto in una stringa formattata in base all'ora UTC.|
|[CTime::GetAsDBTIMESTAMP](#getasdbtimestamp)|Converte le informazioni sull'ora archiviate nell'oggetto `CTime` in una struttura DBTIMESTAMP compatibile con Win32.|
|[CTime::GetAsSystemTime](#getassystemtime)|Converte le informazioni sull'ora archiviate nell'oggetto `CTime` in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) compatibile con Win32.|
|[CTime::GetCurrentTime](#getcurrenttime)|Crea `CTime` un oggetto che rappresenta l'ora corrente (funzione membro statica).|
|[CTime::GetDay](#getday)|Restituisce il giorno `CTime` rappresentato dall'oggetto.|
|[CTime::GetDayOfWeek](#getdayofweek)|Restituisce il giorno della `CTime` settimana rappresentato dall'oggetto.|
|[CTime::GetGmtTm](#getgmttm)|Suddivide `CTime` un oggetto in componenti, in base all'ora UTC.|
|[CTime::GetHour](#gethour)|Restituisce l'ora `CTime` rappresentata dall'oggetto.|
|[CTime::GetLocalTm](#getlocaltm)|Suddivide `CTime` un oggetto in componenti in base al fuso orario locale.|
|[CTime::GetMinute](#getminute)|Restituisce il minuto `CTime` rappresentato dall'oggetto.|
|[CTime::GetMonth](#getmonth)|Restituisce il mese `CTime` rappresentato dall'oggetto.|
|[CTime::GetSecond](#getsecond)|Restituisce il secondo `CTime` rappresentato dall'oggetto.|
|[CTime::GetTime](#gettime)|Restituisce un **__time64_t** `CTime` valore per l'oggetto specificato.|
|[CTime::GetYear](#getyear)|Restituisce l'anno `CTime` rappresentato dall'oggetto.|
|[CTime::Serialize64](#serialize64)|Serializza i dati da o verso un archivio.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore -](#operator_add_-)|Questi operatori aggiungono `CTimeSpan` `CTime` e sottraggono e oggetti.|
|[operatore di lavoro sz, -](#operator_add_eq_-_eq)|Questi operatori aggiungono `CTimeSpan` e sottraggono un oggetto da e verso questo `CTime` oggetto.|
|[operatore .](#operator_eq)|Operatore di assegnazione.|
|[operatore , < , ecc.](#ctime_comparison_operators)|Operatori di confronto.|

## <a name="remarks"></a>Osservazioni

`CTime`non dispone di una classe base.

`CTime`i valori si basano sull'ora UTC (Coordinated Universal Time), che equivale all'ora UTC (Coordinated Universal Time, GMT). Vedere [Gestione del tempo](../../c-runtime-library/time-management.md) per informazioni su come viene determinato il fuso orario.

Quando si `CTime` crea un `nDST` oggetto, impostare il parametro su 0 per indicare che l'ora solare è attiva o su un valore maggiore di 0 per indicare che è attiva l'ora legale oppure su un valore minore di zero per fare in modo che il codice della libreria di runtime C calcoli se è attiva l'ora solare o l'ora legale. `tm_isdst` è un campo obbligatorio. Se non è impostato, il relativo valore non è definito e il valore restituito da [mktime](../../c-runtime-library/reference/mktime-mktime32-mktime64.md) è imprevedibile. Se `timeptr` punta a una struttura tm restituita da una chiamata `tm_isdst` precedente a [asctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md), [_gmtime_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)o [localtime_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), il campo contiene il valore corretto.

Una classe complementare, [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md), rappresenta un intervallo di tempo.

Le `CTime` `CTimeSpan` classi e non sono progettate per la derivazione. Poiché non sono presenti funzioni `CTime` `CTimeSpan` virtuali, la dimensione di e gli oggetti è esattamente 8 byte. La maggior parte delle funzioni membro sono inline.

> [!NOTE]
> Il limite massimo di date è 31/12/3000. Il limite inferiore è 1/1/1970 12:00:00 AM GMT.

Per ulteriori informazioni `CTime`sull'utilizzo di , vedere gli articoli [Gestione di data e](../../atl-mfc-shared/date-and-time.md)ora e Gestione [ora](../../c-runtime-library/time-management.md) in Riferimenti alla libreria di runtime.

> [!NOTE]
> La `CTime` struttura è stata modificata da MFC 7.1 a 8.0. Se si `CTime` serializza una struttura utilizzando l'operatore ** <<** in MFC 8.0 o versione successiva, il file risultante non sarà leggibile nelle versioni precedenti di MFC.

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime.h

## <a name="ctime-comparison-operators"></a><a name="ctime_comparison_operators"></a>Operatori di confronto CTimeCTime Comparison Operators

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

Questi operatori confrontano due tempi assoluti e restituiscono TRUE se la condizione è vera; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#161](../../atl-mfc-shared/codesnippet/cpp/ctime-class_1.cpp)]

## <a name="ctimectime"></a><a name="ctime"></a>CTime::CTime

Crea un `CTime` nuovo oggetto inizializzato con l'ora specificata.

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
Valore `__time64_t` di ora, ovvero il numero di secondi successivi al 1 gennaio 1970 UTC. Si noti che questo verrà regolato in base all'ora locale. Ad esempio, se ci si trova `CTime` a New York e si crea un oggetto passando un parametro pari a 0, [CTime::GetMonth](#getmonth) restituirà 12.

*nYear*, *nMonth*, *nDay*, *nHour*, *nMin*, *nSec*<br/>
Indica i valori di data e ora `CTime` da copiare nel nuovo oggetto.

*nDST (in modo infuso)*<br/>
Indica se è attiva l'ora legale. Può avere uno dei tre valori seguenti:

- *nDST* impostato su 0L'ora standard è attiva.

- *nDST* impostato su un valore maggiore di 0Daylight è in vigore l'ora di risparmio.

- *nDST* impostato su un valore minore di 0Il valore predefinito. Calcola automaticamente se è attiva l'ora solare o l'ora legale.

*wDosDate*, *wDosTime*<br/>
Valori di data e ora MS-DOS da convertire in un `CTime` valore di data/ora e copiati nel nuovo oggetto.

*San*<br/>
Struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) da convertire in un valore di data/ora e copiata nel nuovo `CTime` oggetto.

*Ft*<br/>
Struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) da convertire in un valore di data/ora e copiata nel nuovo `CTime` oggetto.

*dbts (informazioni in base al ts)*<br/>
Riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.

### <a name="remarks"></a>Osservazioni

Ogni costruttore è descritto di seguito:Each constructor is described below:

- `CTime();`Costruisce un oggetto `CTime` non inizializzato. Questo costruttore consente `CTime` di definire matrici di oggetti. È necessario inizializzare tali matrici con orari validi prima di utilizzare.

- `CTime( const CTime& );`Costruisce un `CTime` oggetto `CTime` da un altro valore.

- `CTime( __time64_t );`Costruisce un `CTime` oggetto da un **tipo __time64_t.** Questo costruttore prevede un'ora UTC e converte il risultato in un'ora locale prima di archiviare il risultato.

- `CTime( int, int, ...);`Costruisce un `CTime` oggetto da componenti temporali locali con ogni componente vincolato agli intervalli seguenti:

   |Componente|Range|
   |---------------|-----------|
   |*nAnno*|1970-3000|
   |*nMese*|1-12|
   |*nGiorno*|1-31|
   |*nOre*|0-23|
   |*nMin*|0-59|
   |*nSec (Sec)*|0-59|

   Questo costruttore esegue la conversione appropriata in UTC. La versione di debug della libreria Microsoft Foundation Class asserisce se uno o più componenti di tempo sono fuori intervallo. È necessario convalidare gli argomenti prima di chiamare. Questo costruttore prevede un'ora locale.

- `CTime( WORD, WORD );`Costruisce un `CTime` oggetto dai valori di data e ora MS-DOS specificati. Questo costruttore prevede un'ora locale.

- `CTime( const SYSTEMTIME& );`Costruisce un `CTime` oggetto `SYSTEMTIME` da una struttura. Questo costruttore prevede un'ora locale.

- `CTime( const FILETIME& );`Costruisce un `CTime` oggetto `FILETIME` da una struttura. Molto probabilmente non `CTime FILETIME` verrà utilizzata l'inizializzazione direttamente. Se si `CFile` utilizza un oggetto `CFile::GetStatus` per modificare un file, recupera `CTime` automaticamente l'indicatore di data e ora del file tramite un oggetto inizializzato con una `FILETIME` struttura. Questo costruttore presuppone un'ora in base all'ora UTC e converte automaticamente il valore nell'ora locale prima di archiviare il risultato.

   > [!NOTE]
   > Il costruttore using `DBTIMESTAMP` parametro è disponibile solo quando OLEDB.h è incluso.

Per ulteriori informazioni, vedere la struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) e [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) in Windows SDK. Vedere anche la voce [Data e ora di MS-DOS](/windows/win32/SysInfo/ms-dos-date-and-time) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#148](../../atl-mfc-shared/codesnippet/cpp/ctime-class_2.cpp)]

## <a name="ctimeformat"></a><a name="format"></a>CTime::Formato

Chiamare questa funzione membro per creare una rappresentazione formattata del valore di data e ora.

```
CString Format(LPCTSTR pszFormat) const;
CString Format(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*formato pszFormat*<br/>
Stringa di formattazione `printf` simile alla stringa di formattazione. I codici di formattazione,`%`preceduti da un `CTime` segno di percentuale ( ), vengono sostituiti dal componente corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati invariati nella stringa restituita. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per un elenco di codici di formattazione.

*nId FormatID (informazioni in questo campo)*<br/>
ID della stringa che identifica questo formato.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene l'ora formattata.

### <a name="remarks"></a>Osservazioni

Se lo stato `CTime` di questo oggetto è null, il valore restituito è una stringa vuota.

Questo metodo genera un'eccezione se il valore di data/ora da formattare non è compreso tra la mezzanotte del 1 gennaio 1970 e il 31 dicembre 3000 ora UTC (Universal Coordinated Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#149](../../atl-mfc-shared/codesnippet/cpp/ctime-class_3.cpp)]

## <a name="ctimeformatgmt"></a><a name="formatgmt"></a>CTime::FormatGmt

Genera una stringa formattata `CTime` che corrisponde a questo oggetto.

```
CString FormatGmt(LPCTSTR pszFormat) const;
CString FormatGmt(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*formato pszFormat*<br/>
Specifica una stringa di `printf` formattazione simile alla stringa di formattazione. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per i dettagli.

*nId FormatID (informazioni in questo campo)*<br/>
ID della stringa che identifica questo formato.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene l'ora formattata.

### <a name="remarks"></a>Osservazioni

Il valore dell'ora non viene convertito e riflette pertanto l'ora UTC.

Questo metodo genera un'eccezione se il valore di data/ora da formattare non è compreso tra la mezzanotte del 1 gennaio 1970 e il 31 dicembre 3000 ora UTC (Universal Coordinated Time).

### <a name="example"></a>Esempio

Vedere l'esempio per [CTime::Format](#format).

## <a name="ctimegetasdbtimestamp"></a><a name="getasdbtimestamp"></a>CTime::GetAsDBTIMESTAMP

Chiamare questa funzione membro per convertire `CTime` le informazioni sull'ora archiviate nell'oggetto in una struttura DBTIMESTAMP compatibile con Win32.

```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```

### <a name="parameters"></a>Parametri

*dbts (informazioni in base al ts)*<br/>
Riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Archivia il tempo risultante nella struttura *dbts* a cui si fa riferimento. La `DBTIMESTAMP` struttura di dati inizializzata `fraction` da questa funzione avrà il relativo membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#150](../../atl-mfc-shared/codesnippet/cpp/ctime-class_4.cpp)]

## <a name="ctimegetassystemtime"></a><a name="getassystemtime"></a>CTime::GetAsSystemTime

Chiamare questa funzione membro per convertire `CTime` le informazioni sull'ora archiviate nell'oggetto in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) compatibile con Win32.

```
bool GetAsSystemTime(SYSTEMTIME& st) const throw();
```

### <a name="parameters"></a>Parametri

*timeDest*<br/>
Riferimento a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che conterrà il `CTime` valore di data/ora convertito dell'oggetto.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

`GetAsSystemTime`memorizza il tempo risultante nella struttura *timeDest di* riferimento. La `SYSTEMTIME` struttura di dati inizializzata `wMilliseconds` da questa funzione avrà il relativo membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#151](../../atl-mfc-shared/codesnippet/cpp/ctime-class_5.cpp)]

## <a name="ctimegetcurrenttime"></a><a name="getcurrenttime"></a>CTime::GetCurrentTime

Restituisce `CTime` un oggetto che rappresenta l'ora corrente.

```
static CTime WINAPI GetCurrentTime() throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce la data e l'ora di sistema correnti nell'ora UTC (Coordinated Universal Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#152](../../atl-mfc-shared/codesnippet/cpp/ctime-class_6.cpp)]

## <a name="ctimegetday"></a><a name="getday"></a>CTime::GetDay

Restituisce il giorno `CTime` rappresentato dall'oggetto.

```
int GetDay() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il giorno del mese, in base all'ora locale, compreso tra 1 e 31.

### <a name="remarks"></a>Osservazioni

Questa funzione `GetLocalTm`chiama , che utilizza un buffer interno allocato staticamente. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#153](../../atl-mfc-shared/codesnippet/cpp/ctime-class_7.cpp)]

## <a name="ctimegetdayofweek"></a><a name="getdayofweek"></a>CTime::GetDayOfWeek

Restituisce il giorno della `CTime` settimana rappresentato dall'oggetto.

```
int GetDayOfWeek() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il giorno della settimana in base all'ora locale; 1 - Domenica, 2 - Lunedi, a 7 - Sabato.

### <a name="remarks"></a>Osservazioni

Questa funzione `GetLocalTm`chiama , che utilizza un buffer allocato staticamente interno. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#154](../../atl-mfc-shared/codesnippet/cpp/ctime-class_8.cpp)]

## <a name="ctimegetgmttm"></a><a name="getgmttm"></a>CTime::GetGmtTm

Ottiene una **struttura tm** che contiene una scomposizione dell'ora contenuta in questo `CTime` oggetto.

```
struct tm* GetGmtTm(struct tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Ptm*<br/>
Punta a un buffer che riceverà i dati temporali. Se questo puntatore è NULL, viene generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Puntatore a uno **struct tm** compilato come definito nel file di inclusione TIME. H. Vedere [gmtime, _gmtime32 _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) per il layout della struttura.

### <a name="remarks"></a>Osservazioni

`GetGmtTm`restituisce UTC.

*ptm* non può essere NULL. Se si desidera ripristinare il comportamento precedente, in cui *ptm* potrebbe essere NULL per indicare che deve essere utilizzato un buffer interno allocato staticamente, quindi annullare la definizione _SECURE_ATL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#155](../../atl-mfc-shared/codesnippet/cpp/ctime-class_9.cpp)]

## <a name="ctimegethour"></a><a name="gethour"></a>CTime::GetHour

Restituisce l'ora `CTime` rappresentata dall'oggetto.

```
int GetHour() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ora, in base all'ora locale, nell'intervallo da 0 a 23.

### <a name="remarks"></a>Osservazioni

Questa funzione `GetLocalTm`chiama , che utilizza un buffer allocato staticamente interno. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#156](../../atl-mfc-shared/codesnippet/cpp/ctime-class_10.cpp)]

## <a name="ctimegetlocaltm"></a><a name="getlocaltm"></a>CTime::GetLocalTm

Ottiene una **struttura tm** contenente una scomposizione `CTime` dell'ora contenuta in questo oggetto.

```
struct tm* GetLocalTm(struct tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*Ptm*<br/>
Punta a un buffer che riceverà i dati temporali. Se questo puntatore è NULL, viene generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Puntatore a uno **struct tm** compilato come definito nel file di inclusione TIME. H. Vedere [gmtime, _gmtime32 _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) per il layout della struttura.

### <a name="remarks"></a>Osservazioni

`GetLocalTm`restituisce l'ora locale.

*ptm* non può essere NULL. Se si desidera ripristinare il comportamento precedente, in cui *ptm* potrebbe essere NULL per indicare che deve essere utilizzato un buffer interno allocato staticamente, quindi annullare la definizione _SECURE_ATL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#157](../../atl-mfc-shared/codesnippet/cpp/ctime-class_11.cpp)]

## <a name="ctimegetminute"></a><a name="getminute"></a>CTime::GetMinute

Restituisce il minuto `CTime` rappresentato dall'oggetto.

```
int GetMinute() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il minuto, in base all'ora locale, nell'intervallo da 0 a 59.

### <a name="remarks"></a>Osservazioni

Questa funzione `GetLocalTm`chiama , che utilizza un buffer allocato staticamente interno. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio per [GetHour](#gethour).

## <a name="ctimegetmonth"></a><a name="getmonth"></a>CTime::GetMonth

Restituisce il mese `CTime` rappresentato dall'oggetto.

```
int GetMonth() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il mese, in base all'ora locale, compreso tra 1 e 12 (1 - gennaio).

### <a name="remarks"></a>Osservazioni

Questa funzione `GetLocalTm`chiama , che utilizza un buffer allocato staticamente interno. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio per [GetDay](#getday).

## <a name="ctimegetsecond"></a><a name="getsecond"></a>CTime::GetSecond

Restituisce il secondo `CTime` rappresentato dall'oggetto.

```
int GetSecond() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il secondo, in base all'ora locale, nell'intervallo da 0 a 59.

### <a name="remarks"></a>Osservazioni

Questa funzione `GetLocalTm`chiama , che utilizza un buffer allocato staticamente interno. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio per [GetHour](#gethour).

## <a name="ctimegettime"></a><a name="gettime"></a>CTime::GetTime

Restituisce un **__time64_t** `CTime` valore per l'oggetto specificato.

```
__time64_t GetTime() const throw();
```

### <a name="return-value"></a>Valore restituito

`GetTime`restituirà il numero di `CTime` secondi tra l'oggetto corrente e il 1 gennaio 1970.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#158](../../atl-mfc-shared/codesnippet/cpp/ctime-class_12.cpp)]

## <a name="ctimegetyear"></a><a name="getyear"></a>CTime::GetYear

Restituisce l'anno `CTime` rappresentato dall'oggetto.

```
int GetYear();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'anno, in base all'ora locale, nell'intervallo 1 gennaio 1970, al 18 gennaio 2038 (incluso).

### <a name="remarks"></a>Osservazioni

Questa funzione `GetLocalTm`chiama , che utilizza un buffer allocato staticamente interno. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio per [GetDay](#getday).

## <a name="ctimeoperator-"></a><a name="operator_eq"></a>CTime::operatore

Operatore di assegnazione.

```
CTime& operator=(__time64_t time) throw();
```

### <a name="parameters"></a>Parametri

*time*<br/>
Nuovo valore di data/ora.

### <a name="return-value"></a>Valore restituito

Oggetto `CTime` aggiornato.

### <a name="remarks"></a>Osservazioni

Questo operatore di assegnazione di `CTime` overload copia l'ora di origine in questo oggetto. L'archiviazione dell'ora interna in un `CTime` oggetto è indipendente dal fuso orario. La conversione del fuso orario non è necessaria durante l'assegnazione.

## <a name="ctimeoperator---"></a><a name="operator_add_-"></a>CTime::operatore -

Questi operatori aggiungono `CTimeSpan` `CTime` e sottraggono e oggetti.

```
CTime operator+(CTimeSpan timeSpan) const throw();
CTime operator-(CTimeSpan timeSpan) const throw();
CTimeSpan operator-(CTime time) const throw();
```

### <a name="parameters"></a>Parametri

*Timespan*<br/>
Oggetto `CTimeSpan` da aggiungere o sottrarre.

*time*<br/>
Oggetto `CTime` da sottrarre.

### <a name="return-value"></a>Valore restituito

Oggetto `CTime` `CTimeSpan` o che rappresenta il risultato dell'operazione.

### <a name="remarks"></a>Osservazioni

`CTime`gli oggetti rappresentano `CTimeSpan` il tempo assoluto, gli oggetti rappresentano il tempo relativo. I primi due operatori consentono `CTimeSpan` di aggiungere `CTime` e sottrarre oggetti da e verso oggetti. Il terzo operatore consente `CTime` di sottrarre `CTimeSpan` un oggetto da un altro per produrre un oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#159](../../atl-mfc-shared/codesnippet/cpp/ctime-class_13.cpp)]

## <a name="ctimeoperator---"></a><a name="operator_add_eq_-_eq"></a>CTime::operatore

Questi operatori aggiungono `CTimeSpan` e sottraggono un oggetto da e verso questo `CTime` oggetto.

```
CTime& operator+=(CTimeSpan span) throw();
CTime& operator-=(CTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*<br/>
Oggetto `CTimeSpan` da aggiungere o sottrarre.

### <a name="return-value"></a>Valore restituito

Oggetto `CTime` aggiornato.

### <a name="remarks"></a>Osservazioni

Questi operatori consentono di aggiungere `CTimeSpan` e sottrarre un oggetto da e verso questo `CTime` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#160](../../atl-mfc-shared/codesnippet/cpp/ctime-class_14.cpp)]

## <a name="ctimeserialize64"></a><a name="serialize64"></a>CTime::Serialize64

> [!NOTE]
> Questo metodo è disponibile solo nei progetti MFC.

Serializza i dati associati alla variabile membro in o da un archivio.

```
CArchive& Serialize64(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
Oggetto `CArchive` che si desidera aggiornare.

### <a name="return-value"></a>Valore restituito

Oggetto `CArchive` aggiornato.

## <a name="see-also"></a>Vedere anche

[asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)<br/>
[_ftime_s, _ftime32_s, _ftime64_s](../../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)<br/>
[Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
