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
ms.openlocfilehash: a1d62cca42e3110974b07dae143bafcf807fed7e
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440495"
---
# <a name="ctime-class"></a>Classe CTime

Rappresenta una data e un'ora assolute.

## <a name="syntax"></a>Sintassi

```
class CTime
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTime:: CTime](#ctime)|Costruisce `CTime` oggetti in diversi modi.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTime:: Format](#format)|Converte un oggetto `CTime` in una stringa formattata, in base al fuso orario locale.|
|[CTime:: FormatGmt](#formatgmt)|Converte un oggetto `CTime` in una stringa formattata, in base all'ora UTC.|
|[CTime:: GetAsDBTIMESTAMP](#getasdbtimestamp)|Converte le informazioni sull'ora archiviate nell'oggetto `CTime` in una struttura DBTIMESTAMP compatibile con Win32.|
|[CTime:: GetAsSystemTime](#getassystemtime)|Converte le informazioni sull'ora archiviate nell'oggetto `CTime` in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) compatibile con Win32.|
|[CTime:: GetCurrentTime](#getcurrenttime)|Crea un `CTime` oggetto che rappresenta l'ora corrente (funzione membro statica).|
|[CTime:: GetDay](#getday)|Restituisce il giorno rappresentato dall'oggetto `CTime`.|
|[CTime:: GetDayOfWeek](#getdayofweek)|Restituisce il giorno della settimana rappresentato dall'oggetto `CTime`.|
|[CTime:: GetGmtTm](#getgmttm)|Suddivide un oggetto `CTime` in componenti, in base all'ora UTC.|
|[CTime:: GetHour](#gethour)|Restituisce l'ora rappresentata dall'oggetto `CTime`.|
|[CTime:: GetLocalTm](#getlocaltm)|Suddivide un oggetto `CTime` in componenti, in base al fuso orario locale.|
|[CTime:: GetMinute](#getminute)|Restituisce il minuto rappresentato dall'oggetto `CTime`.|
|[CTime:: GetMonth](#getmonth)|Restituisce il mese rappresentato dall'oggetto `CTime`.|
|[CTime:: GetSecond](#getsecond)|Restituisce il secondo rappresentato dall'oggetto `CTime`.|
|[CTime:: getTime](#gettime)|Restituisce un valore **__time64_t** per l'oggetto `CTime` specificato.|
|[CTime:: GetYear](#getyear)|Restituisce l'anno rappresentato dall'oggetto `CTime`.|
|[CTime:: Serialize64](#serialize64)|Serializza i dati in o da un archivio.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore +-](#operator_add_-)|Questi operatori aggiungono e sottraggono `CTimeSpan` e `CTime` oggetti.|
|[operatore + =,-=](#operator_add_eq_-_eq)|Questi operatori aggiungono e sottraono un oggetto `CTimeSpan` da e verso questo oggetto `CTime`.|
|[operatore =](#operator_eq)|Operatore di assegnazione.|
|[operator = =, < e così via.](#ctime_comparison_operators)|Operatori di confronto.|

## <a name="remarks"></a>Osservazioni

`CTime` non dispone di una classe di base.

`CTime` valori sono basati sull'ora UTC (Coordinated Universal Time), che equivale a Coordinated Universal Time (ora di Greenwich, GMT). Per informazioni sul modo in cui viene determinato il fuso orario, vedere [gestione del tempo](../../c-runtime-library/time-management.md) .

Quando si crea un oggetto `CTime`, impostare il parametro `nDST` su 0 per indicare che l'ora solare è attiva o su un valore maggiore di 0 per indicare che è attiva l'ora legale o su un valore minore di zero per fare in modo che il codice della libreria di runtime C calcoli se è attiva l'ora solare o l'ora legale. `tm_isdst` è un campo obbligatorio. Se non è impostato, il relativo valore non è definito e il valore restituito da [mktime](../../c-runtime-library/reference/mktime-mktime32-mktime64.md) è imprevedibile. Se `timeptr` punta a una struttura TM restituita da una chiamata precedente a [asctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md), [_gmtime_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)o [localtime_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), il campo `tm_isdst` contiene il valore corretto.

Una classe complementare, [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md), rappresenta un intervallo di tempo.

Le classi `CTime` e `CTimeSpan` non sono progettate per la derivazione. Poiché non sono presenti funzioni virtuali, le dimensioni degli oggetti `CTime` e `CTimeSpan` sono esattamente di 8 byte. La maggior parte delle funzioni membro è inline.

> [!NOTE]
>  Il limite di data superiore è 12/31/3000. Il limite inferiore è 1/1/1970 12:00:00 GMT.

Per ulteriori informazioni sull'utilizzo di `CTime`, vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md)e [gestione dell'ora](../../c-runtime-library/time-management.md) in riferimenti alla libreria di Runtime.

> [!NOTE]
>  La struttura di `CTime` è cambiata da MFC 7,1 a MFC 8,0. Se si serializza una struttura di `CTime` usando l' **operatore < <** in MFC 8,0 o versione successiva, il file risultante non sarà leggibile nelle versioni precedenti di MFC.

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime. h

##  <a name="ctime_comparison_operators"></a>Operatori di confronto CTime

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

Questi operatori confrontano due ore assolute e restituiscono TRUE se la condizione è true; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#161](../../atl-mfc-shared/codesnippet/cpp/ctime-class_1.cpp)]

##  <a name="ctime"></a>CTime:: CTime

Crea un nuovo oggetto `CTime` inizializzato con l'ora specificata.

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
Indica un oggetto `CTime` già esistente.

*time*<br/>
Valore di `__time64_t` tempo, ovvero il numero di secondi dopo il 1 ° gennaio 1970 UTC. Si noti che questa operazione verrà adattata all'ora locale. Se ad esempio si è a New York e si crea un oggetto `CTime` passando un parametro 0, [CTime:: GetMonth](#getmonth) restituirà 12.

*nYear*, *nMonth*, *Maurizio*, *Nora*, *nmin*, *nsec*<br/>
Indica i valori di data e ora da copiare nel nuovo oggetto `CTime`.

*nDST*<br/>
Indica se è attiva l'ora legale. Può avere uno dei tre valori seguenti:

- *nDST* impostato su 0Standard ora è attivo.

- *nDST* impostato su un valore maggiore del tempo di risparmio 0Daylight è attivo.

- *nDST* impostato su un valore minore di 0The default. Calcola automaticamente se è attiva l'ora solare o l'ora legale.

*wDosDate*, *wDosTime*<br/>
Valori di data e ora di MS-DOS da convertire in un valore di data/ora e copiati nel nuovo oggetto `CTime`.

*St*<br/>
Struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) da convertire in un valore di data/ora e copiata nel nuovo oggetto `CTime`.

*ft*<br/>
Struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) da convertire in un valore di data/ora e copiata nel nuovo oggetto `CTime`.

*DBTS*<br/>
Riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.

### <a name="remarks"></a>Osservazioni

Ogni costruttore è descritto di seguito:

- `CTime();` costruisce un oggetto `CTime` non inizializzato. Questo costruttore consente di definire `CTime` matrici di oggetti. È necessario inizializzare tali matrici con tempi validi prima di utilizzare.

- `CTime( const CTime& );` costruisce un oggetto `CTime` da un altro `CTime` valore.

- `CTime( __time64_t );` costruisce un oggetto `CTime` da un tipo di **__time64_t** . Questo costruttore prevede un'ora UTC e converte il risultato in un'ora locale prima di archiviare il risultato.

- `CTime( int, int, ...);` costruisce un oggetto `CTime` dai componenti dell'ora locale con ogni componente vincolato agli intervalli seguenti:

   |Componente|Range|
   |---------------|-----------|
   |*nYear*|1970-3000|
   |*nMonth*|1-12|
   |*Maurizio*|1-31|
   |*Nora*|0-23|
   |*nMin*|0-59|
   |*nSec*|0-59|

   Questo costruttore apporta la conversione appropriata all'ora UTC. La versione di debug dell'libreria Microsoft Foundation Class dichiara se uno o più componenti temporali non sono compresi nell'intervallo. È necessario convalidare gli argomenti prima di chiamare. Questo costruttore prevede l'ora locale.

- `CTime( WORD, WORD );` costruisce un oggetto `CTime` dai valori di data e ora di MS-DOS specificati. Questo costruttore prevede l'ora locale.

- `CTime( const SYSTEMTIME& );` costruisce un oggetto `CTime` da una struttura `SYSTEMTIME`. Questo costruttore prevede l'ora locale.

- `CTime( const FILETIME& );` costruisce un oggetto `CTime` da una struttura `FILETIME`. È molto probabile che non venga usata direttamente l'inizializzazione `CTime FILETIME`. Se si utilizza un oggetto `CFile` per modificare un file, `CFile::GetStatus` Recupera il timestamp del file tramite un oggetto `CTime` inizializzato con una struttura `FILETIME`. Questo costruttore presuppone un'ora basata sull'ora UTC e converte automaticamente il valore nell'ora locale prima di archiviare il risultato.

   > [!NOTE]
   > Il costruttore che utilizza `DBTIMESTAMP` parametro è disponibile solo quando OLEDB. h è incluso.

Per ulteriori informazioni, vedere la struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) e [filetime](/windows/win32/api/minwinbase/ns-minwinbase-filetime) nell'Windows SDK. Vedere anche la voce relativa alla [data e all'ora di MS-DOS](/windows/win32/SysInfo/ms-dos-date-and-time) nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#148](../../atl-mfc-shared/codesnippet/cpp/ctime-class_2.cpp)]

##  <a name="format"></a>CTime:: Format

Chiamare questa funzione membro per creare una rappresentazione formattata del valore di data e ora.

```
CString Format(LPCTSTR pszFormat) const;
CString Format(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*pszFormat*<br/>
Stringa di formattazione simile alla stringa di formattazione `printf`. I codici di formattazione, preceduti da un segno di percentuale (`%`), vengono sostituiti dal componente `CTime` corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati senza modifiche nella stringa restituita. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per un elenco di codici di formattazione.

*nFormatID*<br/>
ID della stringa che identifica il formato.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il tempo formattato.

### <a name="remarks"></a>Osservazioni

Se lo stato di questo oggetto `CTime` è null, il valore restituito è una stringa vuota.

Questo metodo genera un'eccezione se il valore di data e ora da formattare non è compreso tra la mezzanotte del 1 gennaio 1970 e il 31 dicembre 3000 ora UTC (Universal Coordinated Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#149](../../atl-mfc-shared/codesnippet/cpp/ctime-class_3.cpp)]

##  <a name="formatgmt"></a>CTime:: FormatGmt

Genera una stringa formattata che corrisponde a questo oggetto `CTime`.

```
CString FormatGmt(LPCTSTR pszFormat) const;
CString FormatGmt(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*pszFormat*<br/>
Specifica una stringa di formattazione simile alla stringa di formattazione `printf`. Per informazioni dettagliate, vedere la funzione in fase di esecuzione [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) .

*nFormatID*<br/>
ID della stringa che identifica il formato.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il tempo formattato.

### <a name="remarks"></a>Osservazioni

Il valore di ora non viene convertito e quindi riflette l'ora UTC.

Questo metodo genera un'eccezione se il valore di data e ora da formattare non è compreso tra la mezzanotte del 1 gennaio 1970 e il 31 dicembre 3000 ora UTC (Universal Coordinated Time).

### <a name="example"></a>Esempio

Vedere l'esempio per [CTime:: Format](#format).

##  <a name="getasdbtimestamp"></a>CTime:: GetAsDBTIMESTAMP

Chiamare questa funzione membro per convertire le informazioni sull'ora archiviate nell'oggetto `CTime` in una struttura DBTIMESTAMP compatibile con Win32.

```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```

### <a name="parameters"></a>Parametri

*DBTS*<br/>
Riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Archivia il tempo risultante nella struttura *DBTS* a cui si fa riferimento. La struttura di dati `DBTIMESTAMP` inizializzata da questa funzione avrà il relativo membro `fraction` impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#150](../../atl-mfc-shared/codesnippet/cpp/ctime-class_4.cpp)]

##  <a name="getassystemtime"></a>CTime:: GetAsSystemTime

Chiamare questa funzione membro per convertire le informazioni sull'ora archiviate nell'oggetto `CTime` in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) compatibile con Win32.

```
bool GetAsSystemTime(SYSTEMTIME& st) const throw();
```

### <a name="parameters"></a>Parametri

*più a tempo*<br/>
Riferimento a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che conterrà il valore di data/ora convertito dell'oggetto `CTime`.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

`GetAsSystemTime` archivia il tempo risultante *nella struttura a* cui si fa riferimento. La struttura di dati `SYSTEMTIME` inizializzata da questa funzione avrà il relativo membro `wMilliseconds` impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#151](../../atl-mfc-shared/codesnippet/cpp/ctime-class_5.cpp)]

##  <a name="getcurrenttime"></a>CTime:: GetCurrentTime

Restituisce un `CTime` oggetto che rappresenta l'ora corrente.

```
static CTime WINAPI GetCurrentTime() throw();
```

### <a name="remarks"></a>Osservazioni

Restituisce la data e l'ora di sistema correnti nell'ora UTC (Coordinated Universal Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#152](../../atl-mfc-shared/codesnippet/cpp/ctime-class_6.cpp)]

##  <a name="getday"></a>CTime:: GetDay

Restituisce il giorno rappresentato dall'oggetto `CTime`.

```
int GetDay() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il giorno del mese, in base all'ora locale, nell'intervallo compreso tra 1 e 31.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama `GetLocalTm`, che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre funzioni membro `CTime`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#153](../../atl-mfc-shared/codesnippet/cpp/ctime-class_7.cpp)]

##  <a name="getdayofweek"></a>CTime:: GetDayOfWeek

Restituisce il giorno della settimana rappresentato dall'oggetto `CTime`.

```
int GetDayOfWeek() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il giorno della settimana in base all'ora locale; 1 = domenica, 2 = lunedì, a 7 = sabato.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama `GetLocalTm`, che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre funzioni membro `CTime`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#154](../../atl-mfc-shared/codesnippet/cpp/ctime-class_8.cpp)]

##  <a name="getgmttm"></a>CTime:: GetGmtTm

Ottiene uno **struct TM** che contiene una scomposizione dell'ora contenuta in questo oggetto `CTime`.

```
struct tm* GetGmtTm(struct tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*PTM*<br/>
Punta a un buffer che riceverà i dati temporali. Se questo puntatore è NULL, viene generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Puntatore a una **struttura TM** compilata come definito nell'ora del file di inclusione. H. Per il layout della struttura, vedere [gmtime, _gmtime32 _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) .

### <a name="remarks"></a>Osservazioni

`GetGmtTm` restituisce l'ora UTC.

*PTM* non può essere null. Se si desidera ripristinare il comportamento precedente, in cui *PTM* potrebbe essere null per indicare che deve essere utilizzato un buffer interno allocato in modo statico, quindi annullare la definizione di _SECURE_ATL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#155](../../atl-mfc-shared/codesnippet/cpp/ctime-class_9.cpp)]

##  <a name="gethour"></a>CTime:: GetHour

Restituisce l'ora rappresentata dall'oggetto `CTime`.

```
int GetHour() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ora, in base all'ora locale, nell'intervallo compreso tra 0 e 23.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama `GetLocalTm`, che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre funzioni membro `CTime`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#156](../../atl-mfc-shared/codesnippet/cpp/ctime-class_10.cpp)]

##  <a name="getlocaltm"></a>CTime:: GetLocalTm

Ottiene uno **struct TM** contenente una scomposizione dell'ora contenuta in questo oggetto `CTime`.

```
struct tm* GetLocalTm(struct tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*PTM*<br/>
Punta a un buffer che riceverà i dati temporali. Se questo puntatore è NULL, viene generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Puntatore a una **struttura TM** compilata come definito nell'ora del file di inclusione. H. Per il layout della struttura, vedere [gmtime, _gmtime32 _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) .

### <a name="remarks"></a>Osservazioni

`GetLocalTm` restituisce l'ora locale.

*PTM* non può essere null. Se si desidera ripristinare il comportamento precedente, in cui *PTM* potrebbe essere null per indicare che deve essere utilizzato un buffer interno allocato in modo statico, quindi annullare la definizione di _SECURE_ATL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#157](../../atl-mfc-shared/codesnippet/cpp/ctime-class_11.cpp)]

##  <a name="getminute"></a>CTime:: GetMinute

Restituisce il minuto rappresentato dall'oggetto `CTime`.

```
int GetMinute() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il minuto, in base all'ora locale, nell'intervallo compreso tra 0 e 59.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama `GetLocalTm`, che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre funzioni membro `CTime`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetHour](#gethour).

##  <a name="getmonth"></a>CTime:: GetMonth

Restituisce il mese rappresentato dall'oggetto `CTime`.

```
int GetMonth() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il mese, in base all'ora locale, nell'intervallo compreso tra 1 e 12 (1 = gennaio).

### <a name="remarks"></a>Osservazioni

Questa funzione chiama `GetLocalTm`, che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre funzioni membro `CTime`.

### <a name="example"></a>Esempio

Vedere l'esempio per [getDay](#getday).

##  <a name="getsecond"></a>CTime:: GetSecond

Restituisce il secondo rappresentato dall'oggetto `CTime`.

```
int GetSecond() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il secondo oggetto, in base all'ora locale, nell'intervallo compreso tra 0 e 59.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama `GetLocalTm`, che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre funzioni membro `CTime`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetHour](#gethour).

##  <a name="gettime"></a>CTime:: getTime

Restituisce un valore **__time64_t** per l'oggetto `CTime` specificato.

```
__time64_t GetTime() const throw();
```

### <a name="return-value"></a>Valore restituito

`GetTime` restituirà il numero di secondi tra l'oggetto `CTime` corrente e il 1 ° gennaio 1970.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#158](../../atl-mfc-shared/codesnippet/cpp/ctime-class_12.cpp)]

##  <a name="getyear"></a>CTime:: GetYear

Restituisce l'anno rappresentato dall'oggetto `CTime`.

```
int GetYear();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'anno, in base all'ora locale, nell'intervallo dal 1 ° gennaio 1970 al 18 gennaio 2038 (inclusivo).

### <a name="remarks"></a>Osservazioni

Questa funzione chiama `GetLocalTm`, che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre funzioni membro `CTime`.

### <a name="example"></a>Esempio

Vedere l'esempio per [getDay](#getday).

##  <a name="operator_eq"></a>CTime:: operator =

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

Questo operatore di assegnazione di overload copia l'ora di origine in questo oggetto `CTime`. L'archiviazione interna del tempo in un oggetto `CTime` è indipendente dal fuso orario. La conversione del fuso orario non è necessaria durante l'assegnazione.

##  <a name="operator_add_-"></a>CTime:: operator +,-

Questi operatori aggiungono e sottraggono `CTimeSpan` e `CTime` oggetti.

```
CTime operator+(CTimeSpan timeSpan) const throw();
CTime operator-(CTimeSpan timeSpan) const throw();
CTimeSpan operator-(CTime time) const throw();
```

### <a name="parameters"></a>Parametri

*timeSpan*<br/>
Oggetto `CTimeSpan` da aggiungere o sottrarre.

*time*<br/>
Oggetto `CTime` da sottrarre.

### <a name="return-value"></a>Valore restituito

Oggetto `CTime` o `CTimeSpan` che rappresenta il risultato dell'operazione.

### <a name="remarks"></a>Osservazioni

`CTime` oggetti rappresentano il tempo assoluto, gli oggetti `CTimeSpan` rappresentano l'ora relativa. I primi due operatori consentono di aggiungere e sottrarre oggetti `CTimeSpan` da e verso `CTime` oggetti. Il terzo operatore consente di sottrarre un oggetto `CTime` da un altro per produrre un oggetto `CTimeSpan`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#159](../../atl-mfc-shared/codesnippet/cpp/ctime-class_13.cpp)]

##  <a name="operator_add_eq_-_eq"></a>CTime:: operator + =,-=

Questi operatori aggiungono e sottraono un oggetto `CTimeSpan` da e verso questo oggetto `CTime`.

```
CTime& operator+=(CTimeSpan span) throw();
CTime& operator-=(CTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*intervallo*<br/>
Oggetto `CTimeSpan` da aggiungere o sottrarre.

### <a name="return-value"></a>Valore restituito

Oggetto `CTime` aggiornato.

### <a name="remarks"></a>Osservazioni

Questi operatori consentono di aggiungere e sottrarre un oggetto `CTimeSpan` da e verso questo oggetto `CTime`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#160](../../atl-mfc-shared/codesnippet/cpp/ctime-class_14.cpp)]

##  <a name="serialize64"></a>CTime:: Serialize64

> [!NOTE]
> Questo metodo è disponibile solo nei progetti MFC.

Serializza i dati associati alla variabile membro in o da un archivio.

```
CArchive& Serialize64(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*AR*<br/>
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
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
