---
title: Classe COleDateTime
ms.date: 03/27/2019
f1_keywords:
- COleDateTime
- ATLCOMTIME/ATL::COleDateTime
- ATLCOMTIME/ATL::COleDateTime::COleDateTime
- ATLCOMTIME/ATL::COleDateTime::Format
- ATLCOMTIME/ATL::COleDateTime::GetAsDBTIMESTAMP
- ATLCOMTIME/ATL::COleDateTime::GetAsSystemTime
- ATLCOMTIME/ATL::COleDateTime::GetAsUDATE
- ATLCOMTIME/ATL::COleDateTime::GetCurrentTime
- ATLCOMTIME/ATL::COleDateTime::GetDay
- ATLCOMTIME/ATL::COleDateTime::GetDayOfWeek
- ATLCOMTIME/ATL::COleDateTime::GetDayOfYear
- ATLCOMTIME/ATL::COleDateTime::GetHour
- ATLCOMTIME/ATL::COleDateTime::GetMinute
- ATLCOMTIME/ATL::COleDateTime::GetMonth
- ATLCOMTIME/ATL::COleDateTime::GetSecond
- ATLCOMTIME/ATL::COleDateTime::GetStatus
- ATLCOMTIME/ATL::COleDateTime::GetYear
- ATLCOMTIME/ATL::COleDateTime::ParseDateTime
- ATLCOMTIME/ATL::COleDateTime::SetDate
- ATLCOMTIME/ATL::COleDateTime::SetDateTime
- ATLCOMTIME/ATL::COleDateTime::SetStatus
- ATLCOMTIME/ATL::COleDateTime::SetTime
- ATLCOMTIME/ATL::COleDateTime::m_dt
- ATLCOMTIME/ATL::COleDateTime::m_status
helpviewer_keywords:
- shared classes, COleDateTime
- time-only values
- Date data type, MFC encapsulation of
- COleDateTime class
- dates, handling in MFC
- time, handling in MFC
ms.assetid: e718f294-16ec-4649-88b6-a4dbae5178fb
ms.openlocfilehash: 5cbc131a81afef1ee94069f39e79f22ce7addfcb
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88562467"
---
# <a name="coledatetime-class"></a>Classe COleDateTime

Incapsula il `DATE` tipo di dati utilizzato nell'automazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleDateTime
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime:: COleDateTime](#coledatetime)|Costruisce un oggetto `COleDateTime`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime:: Format](#format)|Genera una rappresentazione di stringa formattata di un `COleDateTime` oggetto.|
|[COleDateTime:: GetAsDBTIMESTAMP](#getasdbtimestamp)|Chiamare questo metodo per ottenere l'ora nell' `COleDateTime` oggetto come una `DBTIMESTAMP` struttura di dati.|
|[COleDateTime:: GetAsSystemTime](#getassystemtime)|Chiamare questo metodo per ottenere l'ora nell' `COleDateTime` oggetto come una struttura di dati [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) .|
|[COleDateTime:: GetAsUDATE](#getasudate)|Chiamare questo metodo per ottenere l'ora in `COleDateTime` come struttura di `UDATE` dati.|
|[COleDateTime:: GetCurrentTime](#getcurrenttime)|Crea un `COleDateTime` oggetto che rappresenta l'ora corrente (funzione membro statica).|
|[COleDateTime:: GetDay](#getday)|Restituisce il giorno rappresentato da questo `COleDateTime` oggetto (1-31).|
|[COleDateTime:: GetDayOfWeek](#getdayofweek)|Restituisce il giorno della settimana rappresentato da questo `COleDateTime` oggetto (domenica = 1).|
|[COleDateTime:: GetDayOfYear](#getdayofyear)|Restituisce il giorno dell'anno rappresentato da questo `COleDateTime` oggetto (1 gennaio = 1).|
|[COleDateTime:: GetHour](#gethour)|Restituisce l'ora `COleDateTime` rappresentata da questo oggetto (0-23).|
|[COleDateTime:: GetMinute](#getminute)|Restituisce i minuti `COleDateTime` rappresentati da questo oggetto (0-59).|
|[COleDateTime:: GetMonth](#getmonth)|Restituisce il mese rappresentato da questo `COleDateTime` oggetto (1-12).|
|[COleDateTime:: GetSecond](#getsecond)|Restituisce il secondo `COleDateTime` oggetto rappresentato da questo oggetto (0-59).|
|[COleDateTime:: GetStatus](#getstatus)|Ottiene lo stato (validità) di questo `COleDateTime` oggetto.|
|[COleDateTime:: GetYear](#getyear)|Restituisce l'anno rappresentato da questo `COleDateTime` oggetto.|
|[COleDateTime::P arseDateTime](#parsedatetime)|Legge un valore di data/ora da una stringa e imposta il valore di `COleDateTime` .|
|[COleDateTime:: sedate](#setdate)|Imposta il valore di questo `COleDateTime` oggetto sul valore di sola data specificato.|
|[COleDateTime:: DateTime](#setdatetime)|Imposta il valore di questo `COleDateTime` oggetto sul valore di data/ora specificato.|
|[COleDateTime:: sestatus](#setstatus)|Imposta lo stato (validità) di questo `COleDateTime` oggetto.|
|[COleDateTime:: setime](#settime)|Imposta il valore di questo `COleDateTime` oggetto sul valore di solo tempo specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime:: operator = =, COleDateTime:: operator < e così via.](#coledatetime_relational_operators)|Confrontare due `COleDateTime` valori.|
|[COleDateTime:: operator +, COleDateTime:: operator-](#operator_add_-)|Aggiunta e sottrazione di `COleDateTime` valori.|
|[COleDateTime:: operator + =, COleDateTime:: operator-=](#operator_add_eq_-_eq)|Aggiunta e sottrazione `COleDateTime` di un valore da questo `COleDateTime` oggetto.|
|[COleDateTime:: operator =](#operator_eq)|Copia un `COleDateTime` valore.|
|[COleDateTime:: operator DATE, COleDateTime:: operator date *](#operator_date)|Converte un `COleDateTime` valore in un oggetto `DATE` o `DATE*` .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime:: m_dt](#m_dt)|Contiene l' `DATE` oggetto sottostante per questo `COleDateTime` oggetto.|
|[COleDateTime:: m_status](#m_status)|Contiene lo stato di questo `COleDateTime` oggetto.|

## <a name="remarks"></a>Osservazioni

`COleDateTime` non dispone di una classe base.

È uno dei tipi possibili per il tipo di dati [Variant](/windows/win32/api/oaidl/ns-oaidl-variant) di automazione OLE. Un `COleDateTime` valore rappresenta un valore di data e ora assoluto.

Il `DATE` tipo viene implementato come valore a virgola mobile. I giorni sono misurati dal 30 dicembre 1899 a mezzanotte. Nella tabella seguente vengono illustrate alcune date e i relativi valori associati:

|Data|valore|
|----------|-----------|
|29 dicembre 1899, mezzanotte|-1.0|
|29 dicembre 1899, 6 A. M|-1.25|
|30 dicembre, 1899, mezzanotte|0,0|
|31 dicembre 1899, mezzanotte|1.0|
|1 gennaio 1900, 6.00|2.25|

> [!CAUTION]
> Nella tabella precedente, anche se i valori dei giorni diventano negativi prima della mezzanotte il 30 dicembre 1899, i valori relativi all'ora del giorno non lo sono. Ad esempio, 6:00 AM è sempre rappresentato da un valore frazionario 0,25 indipendentemente dal fatto che il valore integer che rappresenta il giorno sia positivo (dopo il 30 dicembre 1899) o negativo (prima del 30 dicembre 1899). Ciò significa che un confronto a virgola mobile semplice ordina erroneamente un oggetto `COleDateTime` che rappresenta 6:00 AM su 12/29/1899, in modo che sia **più recente** di uno che rappresenta 7:00 AM nello stesso giorno.

La `COleDateTime` classe gestisce le date dal 1 gennaio 100 al 31 dicembre 9999. La `COleDateTime` classe utilizza il calendario gregoriano e non supporta le date Julian. `COleDateTime` ignora l'ora legale. (Vedere [data e ora: supporto per l'automazione](../../atl-mfc-shared/date-and-time-automation-support.md)).

> [!NOTE]
> È possibile usare il `%y` formato per recuperare un anno a due cifre solo per le date a partire da 1900. Se si usa il `%y` formato in una data precedente alla 1900, il codice genera un errore di asserzione.

Questo tipo viene utilizzato anche per rappresentare valori di solo data e ora. Per convenzione, la data 0 (30 dicembre 1899) viene usata per i valori di solo tempo e l'ora 00:00 (mezzanotte) viene usata per i valori di sola data.

Se si crea un `COleDateTime` oggetto usando una data inferiore a 100, la data viene accettata, ma le chiamate successive a `GetYear` , `GetMonth` , `GetDay` , `GetHour` , e hanno `GetMinute` `GetSecond` esito negativo e restituiscono-1. In precedenza, era possibile utilizzare date a due cifre, ma le date devono essere 100 o superiori in MFC 4,2 e versioni successive.

Per evitare problemi, specificare una data di quattro cifre. Ad esempio:

[!code-cpp[NVC_ATLMFC_Utilities#1](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_1.cpp)]

Le operazioni aritmetiche di base per i `COleDateTime` valori usano la classe complementare [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md). `COleDateTimeSpan` i valori definiscono un intervallo di tempo. La relazione tra queste classi è simile a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).

Per ulteriori informazioni sulle `COleDateTime` classi e `COleDateTimeSpan` , vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLComTime. h

## <a name="coledatetime-relational-operators"></a><a name="coledatetime_relational_operators"></a> Operatori relazionali COleDateTime

Operatori di confronto.

```
bool operator==(const COleDateTime& date) const throw();
bool operator!=(const COleDateTime& date) const throw();
bool operator<(const COleDateTime& date) const throw();
bool operator>(const COleDateTime& date) const throw();
bool operator<=(const COleDateTime& date) const throw();
bool operator>=(const COleDateTime& date) const throw();
```

### <a name="parameters"></a>Parametri

*date*<br/>
L'oggetto `COleDateTime` da confrontare.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Si verificherà un ATLASSERT se uno dei due operandi non è valido.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#13](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_2.cpp)]

### <a name="example"></a>Esempio

Gli operatori **>=** , **\<=**, **>** e **<** , asseriranno se l' `COleDateTime` oggetto è impostato su null.

[!code-cpp[NVC_ATLMFC_Utilities#170](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_3.cpp)]

## <a name="coledatetimecoledatetime"></a><a name="coledatetime"></a> COleDateTime:: COleDateTime

Costruisce un oggetto `COleDateTime`.

```
COleDateTime() throw();
COleDateTime(const VARIANT& varSrc) throw();
COleDateTime(DATE dtSrc) throw();
COleDateTime(time_t timeSrc) throw();
COleDateTime(__time64_t timeSrc) throw();
COleDateTime(const SYSTEMTIME& systimeSrc) throw();
COleDateTime(const FILETIME& filetimeSrc) throw();

COleDateTime(int nYear,
    int nMonth,
    int nDay,
    int nHour,
    int nMin,
    int nSec) throw();

COleDateTime(WORD wDosDate,
    WORD wDosTime) throw();
COleDateTime(const DBTIMESTAMP& timeStamp) throw();
```

### <a name="parameters"></a>Parametri

*dateSrc*<br/>
Oggetto esistente `COleDateTime` da copiare nel nuovo `COleDateTime` oggetto.

*varSrc*<br/>
Una `VARIANT` struttura di dati esistente (possibilmente un `COleVariant` oggetto) da convertire in un valore di data/ora (VT_DATE) e copiato nel nuovo `COleDateTime` oggetto.

*dtSrc*<br/>
Valore di data/ora ( `DATE` ) da copiare nel nuovo `COleDateTime` oggetto.

*timeSrc*<br/>
`time_t`Valore o `__time64_t` da convertire in un valore di data/ora e copiato nel nuovo `COleDateTime` oggetto.

*systimeSrc*<br/>
`SYSTEMTIME`Struttura da convertire in un valore di data/ora e copiato nel nuovo `COleDateTime` oggetto.

*filetimeSrc*<br/>
`FILETIME`Struttura da convertire in un valore di data/ora e copiato nel nuovo `COleDateTime` oggetto. Un `FILETIME` Usa l'ora UTC (Universal Coordinated Time). Pertanto, se si passa un'ora locale nella struttura, i risultati non saranno corretti. Per ulteriori informazioni, vedere la pagina relativa agli [orari dei file](/windows/win32/SysInfo/file-times) nella Windows SDK.

*nYear*, *nMonth*, *Maurizio*, *Nora*, *nmin*, *nsec*<br/>
Indica i valori di data e ora da copiare nel nuovo `COleDateTime` oggetto.

*wDosDate*, *wDosTime*<br/>
Valori di data e ora di MS-DOS da convertire in un valore di data/ora e copiati nel nuovo `COleDateTime` oggetto.

*timeStamp*<br/>
Riferimento a una struttura [DBTIMESTAMP](/dotnet/api/system.data.oledb.oledbtype) contenente l'ora locale corrente.

### <a name="remarks"></a>Osservazioni

Tutti questi costruttori creano nuovi `COleDateTime` oggetti inizializzati sul valore specificato. La tabella seguente Mostra gli intervalli validi per ogni componente di data e ora:

|Componente data/ora|Intervallo valido|
|--------------------------|-----------------|
|year|100-9999|
|month|0 - 12|
|day|0 - 31|
|hour|0 - 23|
|minute|0 - 59|
|second|0 - 59|

Si noti che il limite superiore effettivo per il componente giorno varia in base ai componenti month e Year. Per informazioni dettagliate, vedere `SetDate` le `SetDateTime` funzioni membro o.

Di seguito è riportata una breve descrizione di ogni costruttore:

- `COleDateTime(`**)** Costruisce un `COleDateTime` oggetto inizializzato su 0 (mezzanotte, 30 dicembre 1899).

- `COleDateTime(``dateSrc` **)** Costruisce un `COleDateTime` oggetto da un `COleDateTime` oggetto esistente.

- `COleDateTime(`*varSrc* **)** costruisce un `COleDateTime` oggetto. Tenta di convertire una `VARIANT` struttura o un oggetto [COleVariant](../../mfc/reference/colevariant-class.md) in un valore di data/ora ( `VT_DATE` ). Se la conversione ha esito positivo, il valore convertito viene copiato nel nuovo `COleDateTime` oggetto. In caso contrario, il valore dell' `COleDateTime` oggetto viene impostato su 0 (mezzanotte, 30 dicembre 1899) e il relativo stato su non valido.

- `COleDateTime(``dtSrc` **)** Costruisce un `COleDateTime` oggetto da un `DATE` valore.

- `COleDateTime(``timeSrc` **)** Costruisce un `COleDateTime` oggetto da un `time_t` valore.

- `COleDateTime(`*systimeSrc* **)** costruisce un `COleDateTime` oggetto da un `SYSTEMTIME` valore.

- `COleDateTime(``filetimeSrc` **)** Costruisce un `COleDateTime` oggetto da un `FILETIME` valore. . Un `FILETIME` Usa l'ora UTC (Universal Coordinated Time). Pertanto, se si passa un'ora locale nella struttura, i risultati non saranno corretti. Per ulteriori informazioni, vedere la pagina relativa ai [tempi di file](/windows/win32/SysInfo/file-times) nel Windows SDK.

- `COleDateTime(``nYear`, `nMonth` , `nDay` , `nHour` , `nMin` , `nSec` **)** Costruisce un `COleDateTime` oggetto dai valori numerici specificati.

- `COleDateTime(``wDosDate`, `wDosTime` **)** Costruisce un `COleDateTime` oggetto dai valori di data e ora di MS-DOS specificati.

Per ulteriori informazioni sul `time_t` tipo di dati, vedere la funzione [Time](../../c-runtime-library/reference/time-time32-time64.md) in riferimenti alla *libreria di runtime*.

Per ulteriori informazioni, vedere le strutture [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) e [filetime](/windows/win32/api/minwinbase/ns-minwinbase-filetime) nel Windows SDK.

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

> [!NOTE]
> Il costruttore che utilizza il `DBTIMESTAMP` parametro è disponibile solo quando OLEDB. h è incluso.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#2](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_4.cpp)]

## <a name="coledatetimeformat"></a><a name="format"></a> COleDateTime:: Format

Crea una rappresentazione formattata del valore di data/ora.

```
CString Format(DWORD dwFlags = 0,  LCID lcid = LANG_USER_DEFAULT) const;
CString Format(LPCTSTR lpszFormat) const;
CString Format(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Indica uno dei flag locali seguenti:

- LOCALE_NOUSEROVERRIDE utilizzare le impostazioni locali predefinite del sistema anziché le impostazioni utente personalizzate.

- VAR_TIMEVALUEONLY ignorare la parte relativa alla data durante l'analisi.

- VAR_DATEVALUEONLY ignorare la parte relativa all'ora durante l'analisi.

*lcid*<br/>
Indica l'ID delle impostazioni locali da utilizzare per la conversione. Per ulteriori informazioni sugli identificatori di lingua, vedere [identificatori di lingua](/windows/win32/Intl/language-identifiers).

*lpszFormat*<br/>
Stringa di formattazione simile alla `printf` stringa di formattazione. Ogni codice di formattazione, preceduto da un segno di percentuale ( `%` ), viene sostituito dal `COleDateTime` componente corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati senza modifiche nella stringa restituita. Per ulteriori informazioni, vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md). Il valore e il significato dei codici di formattazione per `Format` sono:

- `%H` Ore nel giorno corrente

- `%M` Minuti nell'ora corrente

- `%S` Secondi nel minuto corrente

- `%%` Segno di percentuale

*nFormatID*<br/>
ID risorsa per la stringa di controllo del formato.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il valore formattato di data/ora.

### <a name="remarks"></a>Osservazioni

Se lo stato di questo `COleDateTime` oggetto è null, il valore restituito è una stringa vuota. Se lo stato non è valido, la stringa restituita viene specificata dalla risorsa stringa ATL_IDS_DATETIME_INVALID.

Di seguito è riportata una breve descrizione delle tre forme per questa funzione:

`Format`( *dwFlags*, *LCID*)<br/>
Questo formato formatta il valore utilizzando le specifiche del linguaggio (ID impostazioni locali) per la data e l'ora. Usando i parametri predefiniti, questo form stampa la data e l'ora, a meno che la parte relativa all'ora non sia 0 (mezzanotte), nel qual caso verrà stampata solo la data o la parte relativa alla data è pari a 0 (30 dicembre 1899), nel qual caso verrà stampata solo l'ora. Se il valore di data/ora è 0 (30 dicembre 1899, mezzanotte), il form con i parametri predefiniti stamperà la mezzanotte.

`Format`( *lpszFormat*)<br/>
Questo formato formatta il valore usando la stringa di formato che contiene codici di formattazione speciali preceduti da un segno di percentuale (%), come in `printf` . La stringa di formattazione viene passata come parametro alla funzione. Per ulteriori informazioni sui codici di formattazione, vedere [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) in riferimenti alla libreria di Runtime.

`Format`( *nFormatID*)<br/>
Questo formato formatta il valore usando la stringa di formato che contiene codici di formattazione speciali preceduti da un segno di percentuale (%), come in `printf` . La stringa di formattazione è una risorsa. L'ID di questa risorsa stringa viene passato come parametro. Per ulteriori informazioni sui codici di formattazione, vedere [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) in *riferimenti alla libreria di runtime*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#3](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_5.cpp)]

## <a name="coledatetimegetasdbtimestamp"></a><a name="getasdbtimestamp"></a> COleDateTime:: GetAsDBTIMESTAMP

Chiamare questo metodo per ottenere l'ora nell' `COleDateTime` oggetto come una `DBTIMESTAMP` struttura di dati.

```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& timeStamp) const throw();
```

### <a name="parameters"></a>Parametri

*timeStamp*<br/>
Riferimento a una struttura [DBTIMESTAMP](/dotnet/api/system.data.oledb.oledbtype) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Archivia il tempo risultante nella struttura *timestamp* a cui si fa riferimento. La `DBTIMESTAMP` struttura dei dati inizializzata da questa funzione avrà il relativo `fraction` membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#4](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_6.cpp)]

## <a name="coledatetimegetassystemtime"></a><a name="getassystemtime"></a> COleDateTime:: GetAsSystemTime

Chiamare questo metodo per ottenere l'ora nell' `COleDateTime` oggetto come una `SYSTEMTIME` struttura di dati.

```
bool GetAsSystemTime(SYSTEMTIME& sysTime) const throw();
```

### <a name="parameters"></a>Parametri

*sysTime*<br/>
Riferimento a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) per ricevere il valore di data/ora convertito dall' `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione ha esito positivo; FALSE se la conversione ha esito negativo o se l' `COleDateTime` oggetto è null o non valido.

### <a name="remarks"></a>Osservazioni

`GetAsSystemTime` Archivia il tempo risultante nell'oggetto *sysTime* a cui si fa riferimento. La `SYSTEMTIME` struttura dei dati inizializzata da questa funzione avrà il relativo `wMilliseconds` membro impostato su zero.

Per ulteriori informazioni sulle informazioni sullo stato contenute in un `COleDateTime` oggetto, vedere [GetStatus](#getstatus).

## <a name="coledatetimegetasudate"></a><a name="getasudate"></a> COleDateTime:: GetAsUDATE

Chiamare questo metodo per ottenere l'ora nell' `COleDateTime` oggetto come una `UDATE` struttura di dati.

```
bool GetAsUDATE(UDATE& uDate) const throw();
```

### <a name="parameters"></a>Parametri

*uDate*<br/>
Riferimento a una `UDATE` struttura per ricevere il valore di data/ora convertito dall' `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione ha esito positivo; FALSE se la conversione ha esito negativo o se l' `COleDateTime` oggetto è null o non valido.

### <a name="remarks"></a>Osservazioni

Una `UDATE` struttura rappresenta una data "decompresso".

## <a name="coledatetimegetcurrenttime"></a><a name="getcurrenttime"></a> COleDateTime:: GetCurrentTime

Chiamare questa funzione membro statica per restituire il valore di data/ora corrente.

```
static COleDateTime WINAPI GetCurrentTime() throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#5](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_7.cpp)]

## <a name="coledatetimegetday"></a><a name="getday"></a> COleDateTime:: GetDay

Ottiene il giorno del mese rappresentato da questo valore di data/ora.

```
int GetDay() const throw();
```

### <a name="return-value"></a>Valore restituito

Il giorno del mese rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se il giorno non è stato ottenuto.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 1 e 31.

Per informazioni su altre funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#6](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_8.cpp)]

## <a name="coledatetimegetdayofweek"></a><a name="getdayofweek"></a> COleDateTime:: GetDayOfWeek

Ottiene il giorno del mese rappresentato da questo valore di data/ora.

```
int GetDayOfWeek() const throw();
```

### <a name="return-value"></a>Valore restituito

Il giorno della settimana rappresentato dal valore di questo `COleDateTime` oggetto oppure `COleDateTime::error` se non è stato possibile ottenere il giorno della settimana.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 1 e 7, dove 1 = domenica, 2 = lunedì e così via.

Per informazioni su altre funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#7](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_9.cpp)]

## <a name="coledatetimegetdayofyear"></a><a name="getdayofyear"></a> COleDateTime:: GetDayOfYear

Ottiene il giorno dell'anno rappresentato da questo valore di data/ora.

```
int GetDayOfYear() const throw();
```

### <a name="return-value"></a>Valore restituito

Il giorno dell'anno rappresentato dal valore di questo `COleDateTime` oggetto oppure `COleDateTime::error` se non è stato possibile ottenere il giorno dell'anno.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 1 e 366, dove 1 gennaio = 1.

Per informazioni su altre funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#8](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_10.cpp)]

## <a name="coledatetimegethour"></a><a name="gethour"></a> COleDateTime:: GetHour

Ottiene l'ora rappresentata da questo valore di data/ora.

```
int GetHour() const throw();
```

### <a name="return-value"></a>Valore restituito

Ora rappresentata dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere l'ora.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 0 e 23.

Per informazioni su altre funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#9](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_11.cpp)]

## <a name="coledatetimegetminute"></a><a name="getminute"></a> COleDateTime:: GetMinute

Ottiene il minuto rappresentato da questo valore di data/ora.

```
int GetMinute() const throw();
```

### <a name="return-value"></a>Valore restituito

Minuto rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il minuto.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 0 e 59.

Per informazioni su altre funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetHour](#gethour).

## <a name="coledatetimegetmonth"></a><a name="getmonth"></a> COleDateTime:: GetMonth

Ottiene il mese rappresentato da questo valore di data/ora.

```
int GetMonth() const throw();
```

### <a name="return-value"></a>Valore restituito

Mese rappresentato dal valore di questo `COleDateTime` oggetto oppure `COleDateTime::error` se non è stato possibile ottenere il mese.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 1 e 12.

Per informazioni su altre funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio per [getDay](#getday).

## <a name="coledatetimegetsecond"></a><a name="getsecond"></a> COleDateTime:: GetSecond

Ottiene il secondo rappresentato da questo valore di data/ora.

```
int GetSecond() const throw();
```

### <a name="return-value"></a>Valore restituito

Secondo oggetto rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se il secondo non è stato ottenuto.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 0 e 59.

> [!NOTE]
> La `COleDateTime` classe non supporta i secondi intercalari.

Per ulteriori informazioni sull'implementazione di `COleDateTime` , vedere l'articolo relativo a [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

Per informazioni su altre funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetHour](#gethour).

## <a name="coledatetimegetstatus"></a><a name="getstatus"></a> COleDateTime:: GetStatus

Ottiene lo stato (validità) di un `COleDateTime` oggetto specificato.

```
DateTimeStatus GetStatus() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce lo stato di questo `COleDateTime` valore. Se si chiama `GetStatus` su un `COleDateTime` oggetto costruito con l'impostazione predefinita, verrà restituito valido. Se si chiama `GetStatus` su un `COleDateTime` oggetto inizializzato con il costruttore impostato su null, `GetStatus` restituirà null.

### <a name="remarks"></a>Osservazioni

Il valore restituito è definito dal `DateTimeStatus` tipo enumerato, definito all'interno della `COleDateTime` classe.

```
enum DateTimeStatus
{
   error = -1,
   valid = 0,
   invalid = 1,    // Invalid date (out of range, etc.)
   null = 2,       // Literally has no value
};
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleDateTime::error` Indica che si è verificato un errore durante il tentativo di ottenere parte del valore di data/ora.

- `COleDateTime::valid` Indica che l' `COleDateTime` oggetto è valido.

- `COleDateTime::invalid` Indica che l' `COleDateTime` oggetto non è valido, ovvero che il relativo valore potrebbe non essere corretto.

- `COleDateTime::null` Indica che l' `COleDateTime` oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Si tratta di "null" nel senso del database "senza valore", a differenza del valore C++ NULL).

Lo stato di un `COleDateTime` oggetto non è valido nei casi seguenti:

- Se il valore viene impostato da un `VARIANT` `COleVariant` valore o che non può essere convertito in un valore di data/ora.

- Se il valore viene impostato da un `time_t` `SYSTEMTIME` valore, o `FILETIME` che non può essere convertito in un valore di data/ora valido.

- Se il valore viene impostato da `SetDateTime` con valori di parametro non validi.

- Se l'oggetto ha riscontrato un overflow o un underflow durante un'operazione di assegnazione aritmetica, ovvero `+=` o `-=` .

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto è stato impostato in modo esplicito su non valido utilizzando `SetStatus` .

Per ulteriori informazioni sulle operazioni che possono impostare lo stato su non valido, vedere le funzioni membro seguenti:

- [COleDateTime](#coledatetime)

- [SetDateTime](#setdatetime)

- [operatore +,-](#operator_add_-)

- [operatore + =,-=](#operator_add_eq_-_eq)

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#10](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_12.cpp)]

## <a name="coledatetimegetyear"></a><a name="getyear"></a> COleDateTime:: GetYear

Ottiene l'anno rappresentato da questo valore di data/ora.

```
int GetYear() const throw();
```

### <a name="return-value"></a>Valore restituito

Anno rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere l'anno.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 100 e 9999, che include il secolo.

Per informazioni su altre funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

### <a name="example"></a>Esempio

Vedere l'esempio per [getDay](#getday).

## <a name="coledatetimem_dt"></a><a name="m_dt"></a> COleDateTime:: m_dt

Struttura sottostante `DATE` per questo `COleDateTime` oggetto.

```
DATE m_dt;
```

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
> Modificando il valore nell'oggetto a cui si `DATE` accede dal puntatore restituito da questa funzione verrà modificato il valore di questo `COleDateTime` oggetto. Non modifica lo stato di questo `COleDateTime` oggetto.

Per ulteriori informazioni sull'implementazione dell' `DATE` oggetto, vedere l'articolo relativo a [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

## <a name="coledatetimem_status"></a><a name="m_status"></a> COleDateTime:: m_status

Contiene lo stato di questo `COleDateTime` oggetto.

```
DateTimeStatus m_status;
```

### <a name="remarks"></a>Osservazioni

Il tipo di questo membro dati è il tipo enumerato `DateTimeStatus` , definito all'interno della `COleDateTime` classe. Per ulteriori informazioni, vedere [COleDateTime:: GetStatus](#getstatus).

> [!CAUTION]
> Questo membro dati è per le situazioni di programmazione avanzate. È necessario utilizzare le funzioni membro inline [GetStatus](#getstatus) e [sestatus](#setstatus). `SetStatus`Per ulteriori avvertenze su come impostare in modo esplicito questo membro dati, vedere.

## <a name="coledatetimeoperator-"></a><a name="operator_eq"></a> COleDateTime:: operator =

Copia un `COleDateTime` valore.

```
COleDateTime& operator=(const VARIANT& varSrc) throw();
COleDateTime& operator=(DATE dtSrc) throw();
COleDateTime& operator=(const time_t& timeSrc) throw();
COleDateTime& operator=(const __time64_t& timeSrc) throw();
COleDateTime& operator=(const SYSTEMTIME& systimeSrc) throw();
COleDateTime& operator=(const FILETIME& filetimeSrc) throw();
COleDateTime& operator=(const UDATE& uDate) throw();
```

### <a name="remarks"></a>Osservazioni

Questi operatori di assegnazione di overload copiano il valore di data/ora di origine in questo `COleDateTime` oggetto. Una breve descrizione di ognuno di questi operatori di assegnazione di overload segue:

- **operator = (** `dateSrc` **)** il valore e lo stato dell'operando vengono copiati in questo `COleDateTime` oggetto.

- **operatore = (** *varSrc* **)** Se la conversione del valore [Variant](/windows/win32/api/oaidl/ns-oaidl-variant) (o oggetto [COleVariant](../../mfc/reference/colevariant-class.md) ) in una data/ora (VT_DATE) ha esito positivo, il valore convertito viene copiato in questo `COleDateTime` oggetto e il relativo stato è impostato su valid. Se la conversione ha esito negativo, il valore di questo oggetto viene impostato su zero (30 dicembre 1899, mezzanotte) e il relativo stato su non valido.

- **operator = (** `dtSrc` **)** il `DATE` valore viene copiato in questo `COleDateTime` oggetto e il relativo stato è impostato su valid.

- **operator = (** `timeSrc` **)** il `time_t` `__time64_t` valore o viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido; Se ha esito negativo, viene impostato su non valido.

- **operatore = (** *systimeSrc* **)** Il valore [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido; Se ha esito negativo, viene impostato su non valido.

- **operator = (** `uDate` **)** il `UDATE` valore viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido; Se ha esito negativo, viene impostato su non valido. Una `UDATE` struttura rappresenta una data "decompresso". Per ulteriori informazioni, vedere la funzione [VarDateFromUdate](/windows/win32/api/oleauto/nf-oleauto-vardatefromudate).

- **operator = (** `filetimeSrc` **)** il valore [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido; in caso contrario, è impostato su non valido. `FILETIME` Usa l'ora UTC (Universal Coordinated Time), pertanto se si passa un'ora UTC nella struttura, i risultati verranno convertiti dall'ora UTC all'ora locale e verranno archiviati come varianti temporali. Questo comportamento è identico a quello di Visual C++ 6,0 e Visual C++ .NET 2003 SP2. Per ulteriori informazioni, vedere la pagina relativa ai [tempi di file](/windows/win32/SysInfo/file-times) nel Windows SDK.

Per ulteriori informazioni, vedere la voce [Variant](/windows/win32/api/oaidl/ns-oaidl-variant) nella Windows SDK.

Per ulteriori informazioni sul `time_t` tipo di dati, vedere la funzione [Time](../../c-runtime-library/reference/time-time32-time64.md) in riferimenti alla *libreria di runtime*.

Per ulteriori informazioni, vedere le strutture [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) e [filetime](/windows/win32/api/minwinbase/ns-minwinbase-filetime) nel Windows SDK.

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

## <a name="coledatetimeoperator---"></a><a name="operator_add_-"></a> COleDateTime:: operator +,-

Aggiunta e sottrazione di `ColeDateTime` valori.

```
COleDateTime operator+(COleDateTimeSpan dateSpan) const throw();
COleDateTime operator-(COleDateTimeSpan dateSpan) const throw();
COleDateTimeSpan operator-(const COleDateTime& date) const throw();
```

### <a name="remarks"></a>Osservazioni

`COleDateTime` gli oggetti rappresentano orari assoluti. Gli oggetti [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md) rappresentano le ore relative. I primi due operatori consentono di aggiungere e sottrarre un `COleDateTimeSpan` valore da un `COleDateTime` valore. Il terzo operatore consente di sottrarre un `COleDateTime` valore da un altro per produrre un `COleDateTimeSpan` valore.

Se uno degli operandi è null, lo stato del `COleDateTime` valore risultante è null.

Se il valore risultante non `COleDateTime` rientra nei limiti dei valori accettabili, lo stato del `COleDateTime` valore non è valido.

Se uno degli operandi non è valido e l'altro non è null, lo stato del valore risultante non `COleDateTime` è valido.

Gli **+** **-** operatori e asseriranno se l' `COleDateTime` oggetto è impostato su null. Per un esempio, vedere [operatori relazionali COleDateTime](#coledatetime_relational_operators) .

Per ulteriori informazioni sui valori di stato validi, non validi e null, vedere la [m_status](#m_status) variabile membro.

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#12](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_13.cpp)]

## <a name="coledatetimeoperator---"></a><a name="operator_add_eq_-_eq"></a> COleDateTime:: operator + =,-=

Aggiunta e sottrazione `ColeDateTime` di un valore da questo `COleDateTime` oggetto.

```
COleDateTime& operator+=(COleDateTimeSpan dateSpan) throw();
COleDateTime& operator-=(COleDateTimeSpan dateSpan) throw();
```

### <a name="remarks"></a>Osservazioni

Questi operatori consentono di aggiungere e sottrarre un `COleDateTimeSpan` valore a e da questo oggetto `COleDateTime` . Se uno degli operandi è null, lo stato del `COleDateTime` valore risultante è null.

Se il valore risultante non `COleDateTime` rientra nei limiti dei valori accettabili, lo stato di questo `COleDateTime` valore è impostato su non valido.

Se uno degli operandi non è valido e other non è null, lo stato del valore risultante non `COleDateTime` è valido.

Per ulteriori informazioni sui valori di stato validi, non validi e null, vedere la [m_status](#m_status) variabile membro.

Gli **+=** **-=** operatori e asseriranno se l' `COleDateTime` oggetto è impostato su null. Per un esempio, vedere [operatori relazionali COleDateTime](#coledatetime_relational_operators) .

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

## <a name="coledatetimeoperator-date"></a><a name="operator_date"></a> Data COleDateTime:: operator

Converte un `ColeDateTime` valore in un oggetto `DATE` .

```
operator DATE() const throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore restituisce un `DATE` oggetto il cui valore viene copiato da questo `COleDateTime` oggetto. Per ulteriori informazioni sull'implementazione dell' `DATE` oggetto, vedere l'articolo relativo a [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

L' `DATE` operatore asserirà se l' `COleDateTime` oggetto è impostato su null. Per un esempio, vedere [operatori relazionali COleDateTime](#coledatetime_relational_operators) .

## <a name="coledatetimeparsedatetime"></a><a name="parsedatetime"></a> COleDateTime::P arseDateTime

Analizza una stringa per leggere un valore di data/ora.

```
bool ParseDateTime(
    LPCTSTR lpszDate,
    DWORD dwFlags = 0,
    LCID lcid = LANG_USER_DEFAULT) throw();
```

### <a name="parameters"></a>Parametri

*lpszDate*<br/>
Puntatore alla stringa con terminazione null da analizzare. Per informazioni dettagliate, vedere la sezione Osservazioni.

*dwFlags*<br/>
Indica i flag per le impostazioni locali e l'analisi. Uno o più dei flag seguenti:

- LOCALE_NOUSEROVERRIDE utilizzare le impostazioni locali predefinite del sistema anziché le impostazioni utente personalizzate.

- VAR_TIMEVALUEONLY ignorare la parte relativa alla data durante l'analisi.

- VAR_DATEVALUEONLY ignorare la parte relativa all'ora durante l'analisi.

*lcid*<br/>
Indica l'ID delle impostazioni locali da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa è stata convertita correttamente in un valore di data/ora; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se la stringa è stata convertita correttamente in un valore di data/ora, il valore di questo `COleDateTime` oggetto viene impostato su tale valore e il relativo stato su valid.

> [!NOTE]
> I valori dell'anno devono essere compresi tra 100 e 9999.

Il parametro *lpszDate* può assumere vari formati. Ad esempio, le stringhe seguenti contengono formati di data/ora accettabili:

`"25 January 1996"`

`"8:30:00"`

`"20:30:00"`

`"January 25, 1996 8:30:00"`

`"8:30:00 Jan. 25, 1996"`

`"1/25/1996 8:30:00"  // always specify the full year, even in a 'short date' format`

L'ID delle impostazioni locali influirà anche sul fatto che il formato della stringa sia accettabile per la conversione in un valore di data/ora.

Nel caso di VAR_DATEVALUEONLY, il valore Time è impostato su Time 0 o Midnight. Nel caso di VAR_TIMEVALUEONLY, il valore della data viene impostato su data 0, ovvero il 30 dicembre 1899.

Se la stringa non può essere convertita in un valore di data/ora o se si è verificato un overflow numerico, lo stato di questo `COleDateTime` oggetto non è valido.

Per ulteriori informazioni sui limiti e sull'implementazione per `COleDateTime` i valori, vedere l'articolo relativo a [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

## <a name="coledatetimesetdate"></a><a name="setdate"></a> COleDateTime:: sedate

Imposta la data di questo `COleDateTime` oggetto.

```
int SetDate(
    int nYear,
    int nMonth,
    int nDay) throw();
```

### <a name="parameters"></a>Parametri

*nYear*\
Indica l'anno da copiare in questo `COleDateTime` oggetto.

*nMonth*\
Indica il mese da copiare in questo `COleDateTime` oggetto.

*Maurizio*\
Indica il giorno in cui eseguire la copia in questo `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Zero se il valore di questo `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è basato sul `DateTimeStatus` tipo enumerato. Per ulteriori informazioni, vedere la funzione membro [sestatus](#setstatus) .

### <a name="remarks"></a>Osservazioni

La data viene impostata sui valori specificati. L'ora è impostata su Time 0, Midnight.

Vedere la tabella seguente per i limiti per i valori dei parametri:

|Parametro|Bounds|
|---------------|------------|
|*nYear*|100-9999|
|*nMonth*|1 - 12|
|*Maurizio*|0 - 31|

Se il giorno del mese si verifica un overflow, viene convertito nel giorno corretto del mese successivo e il mese e/o l'anno vengono incrementati di conseguenza. Il valore giorno zero indica l'ultimo giorno del mese precedente. Il comportamento è identico a quello di `SystemTimeToVariantTime` .

Se il valore di data specificato dai parametri non è valido, lo stato di questo oggetto è impostato su `COleDateTime::invalid` . È consigliabile utilizzare [GetStatus](#getstatus) per verificare la validità del `DATE` valore e non si presuppone che il valore di [m_dt](#m_dt) rimanga invariato.

Di seguito sono riportati alcuni esempi di valori di data:

|*nYear*|*nMonth*|*Maurizio*|valore|
|-------------|--------------|------------|-----------|
|2000|2|29|29 febbraio 2000|
|1776|7|4|4 luglio 1776|
|1925|4|35|35 aprile 1925 (data non valida)|
|10000|1|1|1 gennaio 10000 (data non valida)|

Per impostare sia la data che l'ora, vedere [COleDateTime:: DateTime](#setdatetime).

Per informazioni sulle funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#11](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_14.cpp)]

## <a name="coledatetimesetdatetime"></a><a name="setdatetime"></a> COleDateTime:: DateTime

Imposta la data e l'ora di questo `COleDateTime` oggetto.

```
int SetDateTime(
    int nYear,
    int nMonth,
    int nDay,
    int nHour,
    int nMin,
    int nSec) throw();
```

### <a name="parameters"></a>Parametri

*nYear*, *nMonth*, *Maurizio*, *Nora*, *nmin*, *nsec*<br/>
Indica i componenti di data e ora da copiare in questo `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Zero se il valore di questo `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è basato sul `DateTimeStatus` tipo enumerato. Per ulteriori informazioni, vedere la funzione membro [sestatus](#setstatus) .

### <a name="remarks"></a>Osservazioni

Vedere la tabella seguente per i limiti per i valori dei parametri:

|Parametro|Bounds|
|---------------|------------|
|*nYear*|100-9999|
|*nMonth*|1 - 12|
|*Maurizio*|0 - 31|
|*Nora*|0 - 23|
|*nMin*|0 - 59|
|*nSec*|0 - 59|

Se il giorno del mese si verifica un overflow, viene convertito nel giorno corretto del mese successivo e il mese e/o l'anno vengono incrementati di conseguenza. Il valore giorno zero indica l'ultimo giorno del mese precedente. Il comportamento è identico a [SystemTimeToVariantTime](/windows/win32/api/oleauto/nf-oleauto-systemtimetovarianttime).

Se il valore di data o ora specificato dai parametri non è valido, lo stato di questo oggetto è impostato su non valido e il valore di questo oggetto non viene modificato.

Di seguito sono riportati alcuni esempi di valori temporali:

|*Nora*|*nMin*|*nSec*|valore|
|-------------|------------|------------|-----------|
|1|3|3|01:03:03|
|23|45|0|23:45:00|
|25|30|0|Non valido|
|9|60|0|Non valido|

Di seguito sono riportati alcuni esempi di valori di data:

|*nYear*|*nMonth*|*Maurizio*|valore|
|-------------|--------------|------------|-----------|
|1995|4|15|15 aprile 1995|
|1789|7|14|17 luglio 1789|
|1925|2|30|Non valido|
|10000|1|1|Non valido|

Per impostare solo la data, vedere [COleDateTime:: sedate](#setdate). Per impostare solo l'ora, vedere [COleDateTime:: setime](#settime).

Per informazioni sulle funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetStatus](#getstatus).

## <a name="coledatetimesetstatus"></a><a name="setstatus"></a> COleDateTime:: sestatus

Imposta lo stato di questo `COleDateTime` oggetto.

```cpp
void SetStatus(DateTimeStatus status) throw();
```

### <a name="parameters"></a>Parametri

*Stato*<br/>
Nuovo valore di stato per questo `COleDateTime` oggetto.

### <a name="remarks"></a>Osservazioni

Il valore del parametro *status* è definito dal `DateTimeStatus` tipo enumerato, definito all'interno della `COleDateTime` classe. Per informazioni dettagliate, vedere [COleDateTime:: GetStatus](#getstatus) .

> [!CAUTION]
> Questa funzione è destinata a situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. Verrà usato più spesso per impostare lo stato su **null** o **non valido**. L'operatore di assegnazione ([operator =](#operator_eq)) e il valore di [DateTime](#setdatetime) impostano lo stato dell'oggetto in base ai valori di origine.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [GetStatus](#getstatus).

## <a name="coledatetimesettime"></a><a name="settime"></a> COleDateTime:: setime

Imposta l'ora di questo `COleDateTime` oggetto.

```
int SetTime(
    int nHour,
    int nMin,
    int nSec) throw();
```

### <a name="parameters"></a>Parametri

*Nora*, *nmin*, *nsec*<br/>
Indica i componenti dell'ora da copiare in questo `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Zero se il valore di questo `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è basato sul `DateTimeStatus` tipo enumerato. Per ulteriori informazioni, vedere la funzione membro [sestatus](#setstatus) .

### <a name="remarks"></a>Osservazioni

L'ora è impostata sui valori specificati. La data è impostata su date 0, ovvero il 30 dicembre 1899.

Vedere la tabella seguente per i limiti per i valori dei parametri:

|Parametro|Bounds|
|---------------|------------|
|*Nora*|0 - 23|
|*nMin*|0 - 59|
|*nSec*|0 - 59|

Se il valore di ora specificato dai parametri non è valido, lo stato di questo oggetto è impostato su non valido e il valore di questo oggetto non viene modificato.

Di seguito sono riportati alcuni esempi di valori temporali:

|*Nora*|*nMin*|*nSec*|valore|
|-------------|------------|------------|-----------|
|1|3|3|01:03:03|
|23|45|0|23:45:00|
|25|30|0|Non valido|
|9|60|0|Non valido|

Per impostare sia la data che l'ora, vedere [COleDateTime:: DateTime](#setdatetime).

Per informazioni sulle funzioni membro che eseguono query sul valore di questo `COleDateTime` oggetto, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

Per ulteriori informazioni sui limiti per i `COleDateTime` valori, vedere l'articolo [data e ora: supporto](../../atl-mfc-shared/date-and-time-automation-support.md)per l'automazione.

### <a name="example"></a>Esempio

Vedere l'esempio per [sedate](#setdate).

## <a name="see-also"></a>Vedi anche

[Classe COleVariant](../../mfc/reference/colevariant-class.md)<br/>
[Classe CTime](../../atl-mfc-shared/reference/ctime-class.md)<br/>
[Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
