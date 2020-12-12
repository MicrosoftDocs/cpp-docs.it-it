---
description: 'Altre informazioni su: classe CTime'
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
ms.openlocfilehash: 3768423a4d3bf873e9161b846e21fda4beffdc9c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166603"
---
# <a name="ctime-class"></a>Classe CTime

Rappresenta una data e un'ora assolute.

## <a name="syntax"></a>Sintassi

```
class CTime
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CTime:: CTime](#ctime)|Costruisce `CTime` oggetti in diversi modi.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTime:: Format](#format)|Converte un `CTime` oggetto in una stringa formattata, in base al fuso orario locale.|
|[CTime:: FormatGmt](#formatgmt)|Converte un `CTime` oggetto in una stringa formattata, in base all'ora UTC.|
|[CTime:: GetAsDBTIMESTAMP](#getasdbtimestamp)|Converte le informazioni sull'ora archiviate nell' `CTime` oggetto in una struttura DBTimeStamp compatibile con Win32.|
|[CTime:: GetAsSystemTime](#getassystemtime)|Converte le informazioni sull'ora archiviate nell' `CTime` oggetto in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) compatibile con Win32.|
|[CTime:: GetCurrentTime](#getcurrenttime)|Crea un `CTime` oggetto che rappresenta l'ora corrente (funzione membro statica).|
|[CTime:: GetDay](#getday)|Restituisce il giorno rappresentato dall' `CTime` oggetto.|
|[CTime:: GetDayOfWeek](#getdayofweek)|Restituisce il giorno della settimana rappresentato dall' `CTime` oggetto.|
|[CTime:: GetGmtTm](#getgmttm)|Suddivide un `CTime` oggetto in componenti, in base all'ora UTC.|
|[CTime:: GetHour](#gethour)|Restituisce l'ora rappresentata dall' `CTime` oggetto.|
|[CTime:: GetLocalTm](#getlocaltm)|Suddivide un `CTime` oggetto in componenti, in base al fuso orario locale.|
|[CTime:: GetMinute](#getminute)|Restituisce il minuto rappresentato dall' `CTime` oggetto.|
|[CTime:: GetMonth](#getmonth)|Restituisce il mese rappresentato dall' `CTime` oggetto.|
|[CTime:: GetSecond](#getsecond)|Restituisce il secondo rappresentato dall' `CTime` oggetto.|
|[CTime:: getTime](#gettime)|Restituisce un valore **__time64_t** per l' `CTime` oggetto specificato.|
|[CTime:: GetYear](#getyear)|Restituisce l'anno rappresentato dall' `CTime` oggetto.|
|[CTime:: Serialize64](#serialize64)|Serializza i dati in o da un archivio.|

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore +-](#operator_add_-)|Questi operatori aggiungono e sottratno `CTimeSpan` `CTime` oggetti e.|
|[operatore + =,-=](#operator_add_eq_-_eq)|Questi operatori aggiungono e sottraono un `CTimeSpan` oggetto da e verso questo `CTime` oggetto.|
|[operatore =](#operator_eq)|Operatore di assegnazione.|
|[operator = =, < e così via.](#ctime_comparison_operators)|Operatori di confronto.|

## <a name="remarks"></a>Commenti

`CTime` non dispone di una classe base.

`CTime` i valori sono basati sull'ora UTC (Coordinated Universal Time), che equivale a Coordinated Universal Time (ora di Greenwich, GMT). Per informazioni sul modo in cui viene determinato il fuso orario, vedere [gestione del tempo](../../c-runtime-library/time-management.md) .

Quando si crea un `CTime` oggetto, impostare il `nDST` parametro su 0 per indicare che l'ora solare è attiva o su un valore maggiore di 0 per indicare che è attiva l'ora legale o su un valore minore di zero per fare in modo che il codice della libreria di runtime C calcoli se è attiva l'ora solare o l'ora legale. `tm_isdst` è un campo obbligatorio. Se non è impostato, il relativo valore non è definito e il valore restituito da [mktime](../../c-runtime-library/reference/mktime-mktime32-mktime64.md) è imprevedibile. Se `timeptr` punta a una struttura TM restituita da una chiamata precedente a [asctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md), [_gmtime_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)o [localtime_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), il `tm_isdst` campo contiene il valore corretto.

Una classe complementare, [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md), rappresenta un intervallo di tempo.

Le `CTime` `CTimeSpan` classi e non sono progettate per la derivazione. Poiché non sono presenti funzioni virtuali, la dimensione degli `CTime` `CTimeSpan` oggetti e è esattamente di 8 byte. La maggior parte delle funzioni membro è inline.

> [!NOTE]
> Il limite di data superiore è 12/31/3000. Il limite inferiore è 1/1/1970 12:00:00 GMT.

Per ulteriori informazioni sull'utilizzo di `CTime` , vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md)e [gestione dell'ora](../../c-runtime-library/time-management.md) nel riferimento alla libreria Run-Time.

> [!NOTE]
> La `CTime` struttura è cambiata da mfc 7,1 a mfc 8,0. Se si serializza una `CTime` struttura utilizzando l' **operatore <<** in MFC 8,0 o versione successiva, il file risultante non sarà leggibile nelle versioni precedenti di MFC.

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime. h

## <a name="ctime-comparison-operators"></a><a name="ctime_comparison_operators"></a> Operatori di confronto CTime

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

## <a name="ctimectime"></a><a name="ctime"></a> CTime:: CTime

Crea un nuovo `CTime` oggetto inizializzato con l'ora specificata.

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
`__time64_t`Valore di ora, ovvero il numero di secondi dopo il 1 ° gennaio 1970 UTC. Si noti che questa operazione verrà adattata all'ora locale. Se ad esempio si è a New York e si crea un `CTime` oggetto passando un parametro 0, [CTime:: GetMonth](#getmonth) restituirà 12.

*nYear*, *nMonth*, *Maurizio*, *Nora*, *nmin*, *nsec*<br/>
Indica i valori di data e ora da copiare nel nuovo `CTime` oggetto.

*nDST*<br/>
Indica se è attiva l'ora legale. Può avere uno dei tre valori seguenti:

- *nDST* impostato su 0Standard ora è attivo.

- *nDST* impostato su un valore maggiore del tempo di risparmio 0Daylight è attivo.

- *nDST* impostato su un valore minore di 0The default. Calcola automaticamente se è attiva l'ora solare o l'ora legale.

*wDosDate*, *wDosTime*<br/>
Valori di data e ora di MS-DOS da convertire in un valore di data/ora e copiati nel nuovo `CTime` oggetto.

*St*<br/>
Struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) da convertire in un valore di data/ora e copiata nel nuovo `CTime` oggetto.

*ft*<br/>
Struttura [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) da convertire in un valore di data/ora e copiata nel nuovo `CTime` oggetto.

*DBTS*<br/>
Riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.

### <a name="remarks"></a>Commenti

Ogni costruttore è descritto di seguito:

- `CTime();` Costruisce un oggetto non inizializzato `CTime` . Questo costruttore consente di definire `CTime` matrici di oggetti. È necessario inizializzare tali matrici con tempi validi prima di utilizzare.

- `CTime( const CTime& );` Costruisce un `CTime` oggetto da un altro `CTime` valore.

- `CTime( __time64_t );` Costruisce un `CTime` oggetto da un tipo di **__time64_t** . Questo costruttore prevede un'ora UTC e converte il risultato in un'ora locale prima di archiviare il risultato.

- `CTime( int, int, ...);` Costruisce un `CTime` oggetto dai componenti dell'ora locale con ogni componente vincolato agli intervalli seguenti:

   |Componente|Range|
   |---------------|-----------|
   |*nYear*|1970-3000|
   |*nMonth*|1-12|
   |*Maurizio*|1-31|
   |*Nora*|0-23|
   |*nMin*|0-59|
   |*nSec*|0-59|

   Questo costruttore apporta la conversione appropriata all'ora UTC. La versione di debug dell'libreria Microsoft Foundation Class dichiara se uno o più componenti temporali non sono compresi nell'intervallo. È necessario convalidare gli argomenti prima di chiamare. Questo costruttore prevede l'ora locale.

- `CTime( WORD, WORD );` Costruisce un `CTime` oggetto dai valori di data e ora di MS-DOS specificati. Questo costruttore prevede l'ora locale.

- `CTime( const SYSTEMTIME& );` Costruisce un `CTime` oggetto da una `SYSTEMTIME` struttura. Questo costruttore prevede l'ora locale.

- `CTime( const FILETIME& );` Costruisce un `CTime` oggetto da una `FILETIME` struttura. Probabilmente non utilizzerà direttamente l' `CTime FILETIME` inizializzazione. Se si usa un `CFile` oggetto per modificare un file, `CFile::GetStatus` Recupera il timestamp del file per l'utente tramite un `CTime` oggetto inizializzato con una `FILETIME` struttura. Questo costruttore presuppone un'ora basata sull'ora UTC e converte automaticamente il valore nell'ora locale prima di archiviare il risultato.

   > [!NOTE]
   > Il costruttore che utilizza il `DBTIMESTAMP` parametro è disponibile solo quando OLEDB. h è incluso.

Per ulteriori informazioni, vedere la struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) e [filetime](/windows/win32/api/minwinbase/ns-minwinbase-filetime) nell'Windows SDK. Vedere anche la voce relativa alla [data e all'ora di MS-DOS](/windows/win32/SysInfo/ms-dos-date-and-time) nell'Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#148](../../atl-mfc-shared/codesnippet/cpp/ctime-class_2.cpp)]

## <a name="ctimeformat"></a><a name="format"></a> CTime:: Format

Chiamare questa funzione membro per creare una rappresentazione formattata del valore di data e ora.

```
CString Format(LPCTSTR pszFormat) const;
CString Format(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*pszFormat*<br/>
Stringa di formattazione simile alla `printf` stringa di formattazione. I codici di formattazione, preceduti da un segno di percentuale ( `%` ), vengono sostituiti dal `CTime` componente corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati senza modifiche nella stringa restituita. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per un elenco di codici di formattazione.

*nFormatID*<br/>
ID della stringa che identifica il formato.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il tempo formattato.

### <a name="remarks"></a>Commenti

Se lo stato di questo `CTime` oggetto è null, il valore restituito è una stringa vuota.

Questo metodo genera un'eccezione se il valore di data e ora da formattare non è compreso tra la mezzanotte del 1 gennaio 1970 e il 31 dicembre 3000 ora UTC (Universal Coordinated Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#149](../../atl-mfc-shared/codesnippet/cpp/ctime-class_3.cpp)]

## <a name="ctimeformatgmt"></a><a name="formatgmt"></a> CTime:: FormatGmt

Genera una stringa formattata che corrisponde a questo `CTime` oggetto.

```
CString FormatGmt(LPCTSTR pszFormat) const;
CString FormatGmt(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*pszFormat*<br/>
Specifica una stringa di formattazione simile alla `printf` stringa di formattazione. Per informazioni dettagliate, vedere la funzione in fase di esecuzione [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) .

*nFormatID*<br/>
ID della stringa che identifica il formato.

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il tempo formattato.

### <a name="remarks"></a>Commenti

Il valore di ora non viene convertito e quindi riflette l'ora UTC.

Questo metodo genera un'eccezione se il valore di data e ora da formattare non è compreso tra la mezzanotte del 1 gennaio 1970 e il 31 dicembre 3000 ora UTC (Universal Coordinated Time).

### <a name="example"></a>Esempio

Vedere l'esempio per [CTime:: Format](#format).

## <a name="ctimegetasdbtimestamp"></a><a name="getasdbtimestamp"></a> CTime:: GetAsDBTIMESTAMP

Chiamare questa funzione membro per convertire le informazioni sull'ora archiviate nell' `CTime` oggetto in una struttura DBTimeStamp compatibile con Win32.

```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```

### <a name="parameters"></a>Parametri

*DBTS*<br/>
Riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Archivia il tempo risultante nella struttura *DBTS* a cui si fa riferimento. La `DBTIMESTAMP` struttura dei dati inizializzata da questa funzione avrà il relativo `fraction` membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#150](../../atl-mfc-shared/codesnippet/cpp/ctime-class_4.cpp)]

## <a name="ctimegetassystemtime"></a><a name="getassystemtime"></a> CTime:: GetAsSystemTime

Chiamare questa funzione membro per convertire le informazioni sull'ora archiviate nell' `CTime` oggetto in una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) compatibile con Win32.

```
bool GetAsSystemTime(SYSTEMTIME& st) const throw();
```

### <a name="parameters"></a>Parametri

*più a tempo*<br/>
Riferimento a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) che conterrà il valore di data/ora convertito dell' `CTime` oggetto.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione riesce; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

`GetAsSystemTime` Archivia il tempo risultante *nella struttura a* cui si fa riferimento. La `SYSTEMTIME` struttura dei dati inizializzata da questa funzione avrà il relativo `wMilliseconds` membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#151](../../atl-mfc-shared/codesnippet/cpp/ctime-class_5.cpp)]

## <a name="ctimegetcurrenttime"></a><a name="getcurrenttime"></a> CTime:: GetCurrentTime

Restituisce un `CTime` oggetto che rappresenta l'ora corrente.

```
static CTime WINAPI GetCurrentTime() throw();
```

### <a name="remarks"></a>Commenti

Restituisce la data e l'ora di sistema correnti nell'ora UTC (Coordinated Universal Time).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#152](../../atl-mfc-shared/codesnippet/cpp/ctime-class_6.cpp)]

## <a name="ctimegetday"></a><a name="getday"></a> CTime:: GetDay

Restituisce il giorno rappresentato dall' `CTime` oggetto.

```
int GetDay() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il giorno del mese, in base all'ora locale, nell'intervallo compreso tra 1 e 31.

### <a name="remarks"></a>Commenti

Questa funzione chiama `GetLocalTm` , che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#153](../../atl-mfc-shared/codesnippet/cpp/ctime-class_7.cpp)]

## <a name="ctimegetdayofweek"></a><a name="getdayofweek"></a> CTime:: GetDayOfWeek

Restituisce il giorno della settimana rappresentato dall' `CTime` oggetto.

```
int GetDayOfWeek() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il giorno della settimana in base all'ora locale; 1 = domenica, 2 = lunedì, a 7 = sabato.

### <a name="remarks"></a>Commenti

Questa funzione chiama `GetLocalTm` , che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#154](../../atl-mfc-shared/codesnippet/cpp/ctime-class_8.cpp)]

## <a name="ctimegetgmttm"></a><a name="getgmttm"></a> CTime:: GetGmtTm

Ottiene uno **struct TM** che contiene una scomposizione dell'ora contenuta in questo `CTime` oggetto.

```
struct tm* GetGmtTm(struct tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*PTM*<br/>
Punta a un buffer che riceverà i dati temporali. Se questo puntatore è NULL, viene generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Un puntatore a una **TM struct** compilata come definito nel file di inclusione time. H. Per il layout della struttura, vedere [gmtime, _gmtime32 _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) .

### <a name="remarks"></a>Commenti

`GetGmtTm` Restituisce l'ora UTC.

*PTM* non può essere null. Se si desidera ripristinare il comportamento precedente, in cui *PTM* potrebbe essere null per indicare che deve essere utilizzato un buffer interno allocato in modo statico, quindi annullare la definizione di _SECURE_ATL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#155](../../atl-mfc-shared/codesnippet/cpp/ctime-class_9.cpp)]

## <a name="ctimegethour"></a><a name="gethour"></a> CTime:: GetHour

Restituisce l'ora rappresentata dall' `CTime` oggetto.

```
int GetHour() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'ora, in base all'ora locale, nell'intervallo compreso tra 0 e 23.

### <a name="remarks"></a>Commenti

Questa funzione chiama `GetLocalTm` , che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#156](../../atl-mfc-shared/codesnippet/cpp/ctime-class_10.cpp)]

## <a name="ctimegetlocaltm"></a><a name="getlocaltm"></a> CTime:: GetLocalTm

Ottiene uno **struct TM** contenente una scomposizione del tempo contenuto nell' `CTime` oggetto.

```
struct tm* GetLocalTm(struct tm* ptm) const;
```

### <a name="parameters"></a>Parametri

*PTM*<br/>
Punta a un buffer che riceverà i dati temporali. Se questo puntatore è NULL, viene generata un'eccezione.

### <a name="return-value"></a>Valore restituito

Un puntatore a una **TM struct** compilata come definito nel file di inclusione time. H. Per il layout della struttura, vedere [gmtime, _gmtime32 _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) .

### <a name="remarks"></a>Commenti

`GetLocalTm` Restituisce l'ora locale.

*PTM* non può essere null. Se si desidera ripristinare il comportamento precedente, in cui *PTM* potrebbe essere null per indicare che deve essere utilizzato un buffer interno allocato in modo statico, quindi annullare la definizione di _SECURE_ATL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#157](../../atl-mfc-shared/codesnippet/cpp/ctime-class_11.cpp)]

## <a name="ctimegetminute"></a><a name="getminute"></a> CTime:: GetMinute

Restituisce il minuto rappresentato dall' `CTime` oggetto.

```
int GetMinute() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il minuto, in base all'ora locale, nell'intervallo compreso tra 0 e 59.

### <a name="remarks"></a>Commenti

Questa funzione chiama `GetLocalTm` , che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetHour](#gethour).

## <a name="ctimegetmonth"></a><a name="getmonth"></a> CTime:: GetMonth

Restituisce il mese rappresentato dall' `CTime` oggetto.

```
int GetMonth() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il mese, in base all'ora locale, nell'intervallo compreso tra 1 e 12 (1 = gennaio).

### <a name="remarks"></a>Commenti

Questa funzione chiama `GetLocalTm` , che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio per [getDay](#getday).

## <a name="ctimegetsecond"></a><a name="getsecond"></a> CTime:: GetSecond

Restituisce il secondo rappresentato dall' `CTime` oggetto.

```
int GetSecond() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il secondo oggetto, in base all'ora locale, nell'intervallo compreso tra 0 e 59.

### <a name="remarks"></a>Commenti

Questa funzione chiama `GetLocalTm` , che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetHour](#gethour).

## <a name="ctimegettime"></a><a name="gettime"></a> CTime:: getTime

Restituisce un valore **__time64_t** per l' `CTime` oggetto specificato.

```
__time64_t GetTime() const throw();
```

### <a name="return-value"></a>Valore restituito

`GetTime` restituirà il numero di secondi tra l' `CTime` oggetto corrente e il 1 ° gennaio 1970.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#158](../../atl-mfc-shared/codesnippet/cpp/ctime-class_12.cpp)]

## <a name="ctimegetyear"></a><a name="getyear"></a> CTime:: GetYear

Restituisce l'anno rappresentato dall' `CTime` oggetto.

```
int GetYear();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'anno, in base all'ora locale, nell'intervallo dal 1 ° gennaio 1970 al 18 gennaio 2038 (inclusivo).

### <a name="remarks"></a>Commenti

Questa funzione chiama `GetLocalTm` , che usa un buffer interno allocato in modo statico. I dati in questo buffer vengono sovrascritti a causa di chiamate ad altre `CTime` funzioni membro.

### <a name="example"></a>Esempio

Vedere l'esempio per [getDay](#getday).

## <a name="ctimeoperator-"></a><a name="operator_eq"></a> CTime:: operator =

Operatore di assegnazione.

```
CTime& operator=(__time64_t time) throw();
```

### <a name="parameters"></a>Parametri

*time*<br/>
Nuovo valore di data/ora.

### <a name="return-value"></a>Valore restituito

Oggetto aggiornato `CTime` .

### <a name="remarks"></a>Commenti

Questo operatore di assegnazione di overload copia l'ora di origine in questo `CTime` oggetto. L'archiviazione interna del tempo in un `CTime` oggetto è indipendente dal fuso orario. La conversione del fuso orario non è necessaria durante l'assegnazione.

## <a name="ctimeoperator---"></a><a name="operator_add_-"></a> CTime:: operator +,-

Questi operatori aggiungono e sottratno `CTimeSpan` `CTime` oggetti e.

```
CTime operator+(CTimeSpan timeSpan) const throw();
CTime operator-(CTimeSpan timeSpan) const throw();
CTimeSpan operator-(CTime time) const throw();
```

### <a name="parameters"></a>Parametri

*timeSpan*<br/>
`CTimeSpan`Oggetto da aggiungere o sottrarre.

*time*<br/>
`CTime`Oggetto da sottrarre.

### <a name="return-value"></a>Valore restituito

`CTime`Oggetto o `CTimeSpan` che rappresenta il risultato dell'operazione.

### <a name="remarks"></a>Commenti

`CTime` gli oggetti rappresentano il tempo assoluto, `CTimeSpan` gli oggetti rappresentano l'ora relativa. I primi due operatori consentono di aggiungere e sottrarre `CTimeSpan` oggetti da e verso `CTime` oggetti. Il terzo operatore consente di sottrarre un `CTime` oggetto da un altro per produrre un `CTimeSpan` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#159](../../atl-mfc-shared/codesnippet/cpp/ctime-class_13.cpp)]

## <a name="ctimeoperator---"></a><a name="operator_add_eq_-_eq"></a> CTime:: operator + =,-=

Questi operatori aggiungono e sottraono un `CTimeSpan` oggetto da e verso questo `CTime` oggetto.

```
CTime& operator+=(CTimeSpan span) throw();
CTime& operator-=(CTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*intervallo*<br/>
`CTimeSpan`Oggetto da aggiungere o sottrarre.

### <a name="return-value"></a>Valore restituito

Oggetto aggiornato `CTime` .

### <a name="remarks"></a>Commenti

Questi operatori consentono di aggiungere e sottrarre un `CTimeSpan` oggetto da e verso questo `CTime` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#160](../../atl-mfc-shared/codesnippet/cpp/ctime-class_14.cpp)]

## <a name="ctimeserialize64"></a><a name="serialize64"></a> CTime:: Serialize64

> [!NOTE]
> Questo metodo è disponibile solo nei progetti MFC.

Serializza i dati associati alla variabile membro in o da un archivio.

```
CArchive& Serialize64(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
`CArchive`Oggetto che si desidera aggiornare.

### <a name="return-value"></a>Valore restituito

Oggetto aggiornato `CArchive` .

## <a name="see-also"></a>Vedi anche

[asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)<br/>
[_ftime_s, _ftime32_s, _ftime64_s](../../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)<br/>
[Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
