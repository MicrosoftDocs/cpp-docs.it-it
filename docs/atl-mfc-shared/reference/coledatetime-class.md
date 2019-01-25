---
title: Classe COleDateTime
ms.date: 11/04/2016
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
ms.openlocfilehash: a49b886bcf9c25642b1f7b8e843be11baf2d2d00
ms.sourcegitcommit: c85c8a1226d8fbbaa29f4691ed719f8e6cc6575c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/24/2019
ms.locfileid: "54894107"
---
# <a name="coledatetime-class"></a>Classe COleDateTime

Incapsula il `DATE` tipo di dati che viene usato nell'automazione OLE.

## <a name="syntax"></a>Sintassi

```
class COleDateTime
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime::COleDateTime](#coledatetime)|Costruisce un oggetto `COleDateTime`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime::Format](#format)|Genera una rappresentazione di stringa formattata di un `COleDateTime` oggetto.|
|[COleDateTime::GetAsDBTIMESTAMP](#getasdbtimestamp)|Chiamare questo metodo per ottenere l'ora nel `COleDateTime` dell'oggetto come un `DBTIMESTAMP` struttura dei dati.|
|[COleDateTime::GetAsSystemTime](#getassystemtime)|Chiamare questo metodo per ottenere l'ora nel `COleDateTime` dell'oggetto come un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura dei dati.|
|[COleDateTime::GetAsUDATE](#getasudate)|Chiamare questo metodo per ottenere l'ora nel `COleDateTime` come un `UDATE` struttura dei dati.|
|[COleDateTime::GetCurrentTime](#getcurrenttime)|Crea un `COleDateTime` oggetto che rappresenta l'ora corrente (funzione membro statica).|
|[COleDateTime::GetDay](#getday)|Restituisce il giorno ciò `COleDateTime` oggetto rappresenta (1-31).|
|[COleDateTime::GetDayOfWeek](#getdayofweek)|Restituisce il giorno della settimana si `COleDateTime` rappresenta (domenica = 1) dell'oggetto.|
|[COleDateTime::GetDayOfYear](#getdayofyear)|Restituisce il giorno dell'anno si `COleDateTime` oggetto (1 gennaio = 1).|
|[COleDateTime::GetHour](#gethour)|Restituisce l'ora questo `COleDateTime` oggetto (0 - 23).|
|[COleDateTime::GetMinute](#getminute)|Restituisce il minuto ciò `COleDateTime` oggetto (0 - 59).|
|[COleDateTime::GetMonth](#getmonth)|Restituisce il mese questo `COleDateTime` oggetto rappresenta (1-12).|
|[COleDateTime::GetSecond](#getsecond)|Restituisce il secondo questa `COleDateTime` oggetto (0 - 59).|
|[COleDateTime::GetStatus](#getstatus)|Ottiene lo stato (validità) di questo `COleDateTime` oggetto.|
|[COleDateTime::GetYear](#getyear)|Restituisce l'anno questo `COleDateTime` oggetto rappresenta.|
|[COleDateTime::ParseDateTime](#parsedatetime)|Legge un valore data/ora da una stringa e imposta il valore di `COleDateTime`.|
|[COleDateTime::SetDate](#setdate)|Imposta il valore di questo `COleDateTime` oggetto sul valore specificato di sola data.|
|[COleDateTime::SetDateTime](#setdatetime)|Imposta il valore di questo `COleDateTime` oggetto con il valore di data/ora specificato.|
|[COleDateTime::SetStatus](#setstatus)|Imposta lo stato (validità) di questo `COleDateTime` oggetto.|
|[COleDateTime::SetTime](#settime)|Imposta il valore di questo `COleDateTime` oggetto sul valore di sola ora specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime:: operator = =, COleDateTime:: operator < e così via.](#coledatetime_relational_operators)|Confrontare due `COleDateTime` valori.|
|[COleDateTime:: operator +, COleDateTime:: operator-](#operator_add_-)|Addizione e sottrazione `COleDateTime` valori.|
|[COleDateTime:: operator + =, COleDateTime:: operator =](#operator_add_eq_-_eq)|Addizione e sottrazione una `COleDateTime` valore da questo `COleDateTime` oggetto.|
|[COleDateTime:: operator =](#operator_eq)|Copia un `COleDateTime` valore.|
|[COleDateTime:: operator DATE, Date COleDateTime:: operator *](#operator_date)|Converte un `COleDateTime` valore in un `DATE` o un `DATE*`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime::m_dt](#m_dt)|Contiene l'oggetto sottostante `DATE` per questo `COleDateTime` oggetto.|
|[COleDateTime::m_status](#m_status)|Contiene lo stato di questo `COleDateTime` oggetto.|

## <a name="remarks"></a>Note

`COleDateTime` non è una classe di base.

È uno dei possibili tipi per il [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) tipo di dati di automazione OLE. Oggetto `COleDateTime` valore rappresenta una data assoluta e il valore di ora.

Il `DATE` tipo viene implementato come un valore a virgola mobile. Giorni sono misurati dal 30 dicembre 1899 a mezzanotte. Nella tabella seguente mostra alcune date e i relativi valori associati:

|Data|Value|
|----------|-----------|
|29 dicembre 1899, mezzanotte|-1.0|
|29 dicembre 1899, m 6|-1.25|
|Dal 30 dicembre 1899, mezzanotte|0.0|
|Mezzanotte del 31 dicembre 1899,|1.0|
|1 ° gennaio 1900, 6 del mattino.|2.25|

> [!CAUTION]
> Notare che anche se i valori dei giorni diventare negativi prima di mezzanotte 30 dicembre 1899, i valori di ora del giorno non nella tabella precedente. Ad esempio, 6:00 è sempre rappresentato da un valore frazionario 0,25 indipendentemente dal fatto che l'intero che rappresenta il giorno è positivo (dopo il 30 dicembre 1899) o negativo (prima dal 30 dicembre 1899). Ciò significa che un semplice confronto punto a virgola mobile viene erroneamente ordinare un `COleDateTime` che rappresenta le 6.00 12/29/1899 come **in un secondo momento** rispetto a uno che rappresenta 7:00 nello stesso giorno.

Il `COleDateTime` classe gestisce le date dal 1 gennaio 100 e il 31 dicembre 9999. Il `COleDateTime` classe utilizza il calendario gregoriano; non supporta giuliana. `COleDateTime` Ignora l'ora legale. (Vedere [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).)

> [!NOTE]
> È possibile usare il `%y` formato per recuperare un anno a due cifre solo per le date a partire dal 1900. Se si usa il `%y` formatta una data precedente 1900, il codice genera un errore di ASSERZIONE.

Questo tipo viene anche utilizzato per rappresentare i valori data-only o solo in fase di. Per convenzione, la data 0 (30 dicembre 1899) viene utilizzata per i valori solo in fase di e il tempo 00.00 (mezzanotte) viene usato per i valori di sola data.

Se si crea una `COleDateTime` utilizzando una data minore di 100 e la data viene accettate, ma le successive chiamate a `GetYear`, `GetMonth`, `GetDay`, `GetHour`, `GetMinute`, e `GetSecond` esito negativo e restituiscono -1. In precedenza, è possibile utilizzare le date a due cifre, ma le date devono essere 100 o più grande in MFC 4.2 e versioni successive.

Per evitare problemi, specificare una data a quattro cifre. Ad esempio:

[!code-cpp[NVC_ATLMFC_Utilities#1](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_1.cpp)]

Operazioni aritmetiche di base per il `COleDateTime` valori di usano la classe complementare [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md). `COleDateTimeSpan` valori di definiscono un intervallo di tempo. La relazione tra queste classi è simile a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).

Per altre informazioni sul `COleDateTime` e `COleDateTimeSpan` classi, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLComTime.h

##  <a name="coledatetime_relational_operators"></a>  Operatori relazionali COleDateTime

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

### <a name="remarks"></a>Note

> [!NOTE]
>  Si verificherà un ATLASSERT se uno dei due operandi non è valido.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#13](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_2.cpp)]

### <a name="example"></a>Esempio

Gli operatori **>=**, **\< =**, **>**, e **<**, genera un'asserzione se il `COleDateTime` oggetto viene impostato su null.

[!code-cpp[NVC_ATLMFC_Utilities#170](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_3.cpp)]

##  <a name="coledatetime"></a>  COleDateTime::COleDateTime

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
COleDateTime(const DBTIMESTAMP& dbts) throw();
```

### <a name="parameters"></a>Parametri

*dateSrc*<br/>
Un oggetto esistente `COleDateTime` da copiare nel nuovo oggetto `COleDateTime` oggetto.

*varSrc*<br/>
Un oggetto esistente `VARIANT` struttura di data (probabilmente un `COleVariant` oggetto) per essere convertito in un valore data/ora (VT_DATE) e copiare nel nuovo `COleDateTime` oggetto.

*dtSrc*<br/>
Una data/ora (`DATE`) valore da copiare nel nuovo `COleDateTime` oggetto.

*timeSrc*<br/>
Oggetto `time_t` oppure `__time64_t` valore convertito in un valore data/ora e copiarli nel nuovo `COleDateTime` oggetto.

*systimeSrc*<br/>
Oggetto `SYSTEMTIME` struttura venga convertito in un valore data/ora e copiare nel nuovo `COleDateTime` oggetto.

*filetimeSrc*<br/>
Oggetto `FILETIME` struttura venga convertito in un valore data/ora e copiare nel nuovo `COleDateTime` oggetto. Si noti che `FILETIME` utilizza Coordinated Universal Time (UTC), pertanto se si passa la struttura di un'ora locale, i risultati saranno non corretti. Visualizzare [tempi File](/windows/desktop/SysInfo/file-times) nel SDK di Windows per altre informazioni.

*nYear*, *nMonth*, *nDay*, *nHour*, *nMin*, *nSec*<br/>
Indichi i valori di data e ora da copiare nel nuovo `COleDateTime` oggetto.

*wDosDate*, *wDosTime*<br/>
Valori di data e ora di MS-DOS per essere convertito in un valore data/ora e copiare nel nuovo `COleDateTime` oggetto.

*dbts*<br/>
Un riferimento a un [DBTimeStamp](https://msdn.microsoft.com/library/system.data.oledb.oledbtype) struttura che contiene l'ora locale corrente.

### <a name="remarks"></a>Note

Tutti questi costruttori creano nuovi `COleDateTime` oggetti inizializzati sul valore specificato. La tabella seguente illustra gli intervalli validi per ogni componente di data e ora:

|Componente di data/ora|Intervallo valido|
|--------------------------|-----------------|
|anno|100 - 9999|
|mese|0 - 12|
|giorno|0 - 31|
|ora|0 - 23|
|minuto|0 - 59|
|secondo|0 - 59|

Si noti che il limite massimo effettivo per il componente giorno varia in base ai componenti anno e mese. Per informazioni dettagliate, vedere la `SetDate` o `SetDateTime` funzioni membro.

Ecco una breve descrizione di ogni costruttore:

- `COleDateTime(` **)** Costruisce un `COleDateTime` oggetto inizializzato a 0 (mezzanotte, 30 dicembre 1899).

- `COleDateTime(` `dateSrc` **)** Costruisce una `COleDateTime` oggetto da un oggetto esistente `COleDateTime` oggetto.

- `COleDateTime(` *varSrc* **)** costruisce un `COleDateTime` oggetto. Tenta di convertire un `VARIANT` struttura oppure [COleVariant](../../mfc/reference/colevariant-class.md) oggetto da una data/ora ( `VT_DATE`) valore. Se la conversione ha esito positivo, il valore convertito viene copiato nel nuovo `COleDateTime` oggetto. In caso contrario, il valore della `COleDateTime` oggetto è impostato su 0 (mezzanotte, 30 dicembre 1899) e il relativo stato come non valida.

- `COleDateTime(` `dtSrc` **)** Costruisce una `COleDateTime` dell'oggetto da un `DATE` valore.

- `COleDateTime(` `timeSrc` **)** Costruisce una `COleDateTime` dell'oggetto da un `time_t` valore.

- `COleDateTime(` *systimeSrc* **)** costruisce una `COleDateTime` dell'oggetto da un `SYSTEMTIME` valore.

- `COleDateTime(` `filetimeSrc` **)** Costruisce una `COleDateTime` dell'oggetto da un `FILETIME` valore. . Si noti che `FILETIME` utilizza Coordinated Universal Time (UTC), pertanto se si passa la struttura di un'ora locale, i risultati saranno non corretti. Visualizzare [tempi File](/windows/desktop/SysInfo/file-times) nel SDK di Windows per altre informazioni.

- `COleDateTime(` `nYear``nMonth`, `nDay`, `nHour`, `nMin`, `nSec` **)** Costruisce un `COleDateTime` oggetto dai valori numerici specificati.

- `COleDateTime(` `wDosDate``wDosTime` **)** Costruisce un `COleDateTime` oggetto dai valori di data e ora MS-DOS specificati.

Per altre informazioni sul `time_t` tipo di dati, vedere la [ora](../../c-runtime-library/reference/time-time32-time64.md) funzionare nel *Run-Time Library Reference*.

Per altre informazioni, vedere la [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) e [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) strutture nel SDK di Windows.

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

> [!NOTE]
> Il costruttore usando `DBTIMESTAMP` parametro è disponibile solo quando viene incluso OleDb.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#2](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_4.cpp)]

##  <a name="format"></a>  COleDateTime::Format

Crea una rappresentazione formattata del valore data/ora.

```
CString Format(DWORD dwFlags = 0,  LCID lcid = LANG_USER_DEFAULT) const;
CString Format(LPCTSTR lpszFormat) const;
CString Format(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Indica uno dei flag delle impostazioni locali seguenti:

- LOCALE_NOUSEROVERRIDE usare le impostazioni locali di sistema predefinito, anziché le impostazioni utente personalizzate.

- VAR_TIMEVALUEONLY ignorare la parte relativa alla data durante l'analisi.

- VAR_DATEVALUEONLY ignorare la parte relativa all'ora durante l'analisi.

*lcid*<br/>
Indica l'ID delle impostazioni locali da usare per la conversione. Per altre informazioni sugli identificatori di lingua, vedere [identificatori di lingua](/windows/desktop/Intl/language-identifiers).

*lpszFormat*<br/>
Formattazione di un stringa simile al `printf` stringa di formattazione. Ogni formattazione del codice, preceduto da una percentuale ( `%`) accesso, viene sostituito dal corrispondente `COleDateTime` componente. Altri caratteri nella stringa di formattazione vengono copiati senza modifiche alla stringa restituita. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per altre informazioni. Il valore e il significato dei codici di formattazione per `Format` sono:

- `%H` Ore del giorno corrente

- `%M` Minuti dell'ora corrente

- `%S` Secondi nel minuto corrente

- `%%` Segno di percentuale

*nFormatID*<br/>
L'ID di risorsa per la stringa di controllo del formato.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il valore di data e ora formattato.

### <a name="remarks"></a>Note

Se lo stato di questo `COleDateTime` oggetto è null, il valore restituito è una stringa vuota. Se lo stato è valido, la stringa restituita è specificata da risorsa di tipo stringa ATL_IDS_DATETIME_INVALID.

Di seguito una breve descrizione dei tre formati per questa funzione:

`Format`( *dwFlags*, *lcid*)<br/>
Questo modulo formatta il valore utilizzando le specifiche del linguaggio (ID impostazioni locali) per data e ora. Usa i parametri predefiniti, questo modulo stamperà la data e l'ora, a meno che la parte dell'ora è 0 (mezzanotte), nel qual caso il titolo verrà visualizzato solo la data o la parte relativa alla data è 0 (30 dicembre 1899), nel qual caso il titolo verrà visualizzato solo l'ora. Se il valore di data/ora è 0 (30 dicembre 1899, mezzanotte), questo modulo con i parametri predefiniti stamperà mezzanotte.

`Format`( *lpszFormat*)<br/>
Questo modulo formatta il valore usando la stringa di formato che contiene codici di formattazione speciali che sono preceduti da un segno di percentuale, %, come in `printf`. La stringa di formattazione viene passata come parametro alla funzione. Per altre informazioni sui codici di formattazione, vedere [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) nel riferimento alla libreria Run-Time.

`Format`( *nFormatID*)<br/>
Questo modulo formatta il valore usando la stringa di formato che contiene codici di formattazione speciali che sono preceduti da un segno di percentuale, %, come in `printf`. La stringa di formattazione è una risorsa. L'ID della risorsa stringa viene passato come parametro. Per altre informazioni sui codici di formattazione, vedere [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) nel *Run-Time Library Reference*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#3](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_5.cpp)]

##  <a name="getasdbtimestamp"></a>  COleDateTime::GetAsDBTIMESTAMP

Chiamare questo metodo per ottenere l'ora nel `COleDateTime` dell'oggetto come un `DBTIMESTAMP` struttura dei dati.

```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```

### <a name="parameters"></a>Parametri

*dbts*<br/>
Un riferimento a un [DBTimeStamp](https://msdn.microsoft.com/library/system.data.oledb.oledbtype) struttura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Archivia l'ora risultante in di riferimento *dbts* struttura. Il `DBTIMESTAMP` struttura di dati inizializzato da questa funzione avrà relativo `fraction` membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#4](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_6.cpp)]

##  <a name="getassystemtime"></a>  COleDateTime::GetAsSystemTime

Chiamare questo metodo per ottenere l'ora nel `COleDateTime` dell'oggetto come un `SYSTEMTIME` struttura dei dati.

```
bool GetAsSystemTime(SYSTEMTIME& sysTime) const throw();
```

### <a name="parameters"></a>Parametri

*sysTime*<br/>
Un riferimento a un [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) struttura per ricevere il valore di data/ora convertita dal `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo. FALSE se la conversione non riesce o se il `COleDateTime` oggetto è NULL o non valido.

### <a name="remarks"></a>Note

`GetAsSystemTime` Archivia l'ora risultante in di riferimento *sysTime* oggetto. Il `SYSTEMTIME` struttura di dati inizializzato da questa funzione avrà relativo `wMilliseconds` membro impostato su zero.

Visualizzare [GetStatus](#getstatus) per altre informazioni sulle informazioni sullo stato contenute in un `COleDateTime` oggetto.

##  <a name="getasudate"></a>  COleDateTime::GetAsUDATE

Chiamare questo metodo per ottenere l'ora nel `COleDateTime` dell'oggetto come un `UDATE` struttura dei dati.

```
bool GetAsUDATE(UDATE& udate) const throw();
```

### <a name="parameters"></a>Parametri

*udate*<br/>
Un riferimento a un `UDATE` per ricevere il valore di data/ora convertita dalla struttura di `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo. FALSE se la conversione non riesce o se il `COleDateTime` oggetto è NULL o non valido.

### <a name="remarks"></a>Note

Oggetto `UDATE` struttura rappresenta una data di "decompressa".

##  <a name="getcurrenttime"></a>  COleDateTime::GetCurrentTime

Chiamare questa funzione membro statico per restituire il valore di data/ora corrente.

```
static COleDateTime WINAPI GetCurrentTime() throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#5](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_7.cpp)]

##  <a name="getday"></a>  COleDateTime::GetDay

Ottiene il giorno del mese rappresentato dal valore data/ora.

```
int GetDay() const throw();
```

### <a name="return-value"></a>Valore restituito

Il giorno del mese rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il giorno.

### <a name="remarks"></a>Note

Intervallo di valori restituiti valido compreso tra 1 e 31.

Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#6](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_8.cpp)]

##  <a name="getdayofweek"></a>  COleDateTime::GetDayOfWeek

Ottiene il giorno del mese rappresentato dal valore data/ora.

```
int GetDayOfWeek() const throw();
```

### <a name="return-value"></a>Valore restituito

Il giorno della settimana rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il giorno della settimana.

### <a name="remarks"></a>Note

Return validi i valori compresi tra 1 e 7, dove 1 = domenica, 2 = lunedì e così via.

Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#7](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_9.cpp)]

##  <a name="getdayofyear"></a>  COleDateTime::GetDayOfYear

Ottiene il giorno dell'anno rappresentato dal valore data/ora.

```
int GetDayOfYear() const throw();
```

### <a name="return-value"></a>Valore restituito

Il giorno dell'anno rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il giorno dell'anno.

### <a name="remarks"></a>Note

Return validi i valori compresi tra 1 e 366, dove 1 gennaio = 1.

Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#8](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_10.cpp)]

##  <a name="gethour"></a>  COleDateTime::GetHour

Ottiene l'ora rappresentata dal valore data/ora.

```
int GetHour() const throw();
```

### <a name="return-value"></a>Valore restituito

L'ora rappresentata dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere l'ora.

### <a name="remarks"></a>Note

Intervallo di valori restituiti valido compreso tra 0 e 23.

Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#9](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_11.cpp)]

##  <a name="getminute"></a>  COleDateTime::GetMinute

Ottiene il minuto rappresentato dal valore data/ora.

```
int GetMinute() const throw();
```

### <a name="return-value"></a>Valore restituito

Al minuto rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il minuto.

### <a name="remarks"></a>Note

Intervallo di valori restituiti valido compreso tra 0 e 59.

Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetHour](#gethour).

##  <a name="getmonth"></a>  COleDateTime::GetMonth

Ottiene il mese rappresentato dal valore data/ora.

```
int GetMonth() const throw();
```

### <a name="return-value"></a>Valore restituito

Del mese rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il mese.

### <a name="remarks"></a>Note

Intervallo di valori restituiti valido compreso tra 1 e 12.

Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetDay](#getday).

##  <a name="getsecond"></a>  COleDateTime::GetSecond

Ottiene il secondo rappresentato dal valore data/ora.

```
int GetSecond() const throw();
```

### <a name="return-value"></a>Valore restituito

Il secondo rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il secondo.

### <a name="remarks"></a>Note

Intervallo di valori restituiti valido compreso tra 0 e 59.

> [!NOTE]
>  Il `COleDateTime` classe non supporta i secondi intercalari.

Per altre informazioni sull'implementazione per `COleDateTime`, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetHour](#gethour).

##  <a name="getstatus"></a>  COleDateTime::GetStatus

Ottiene lo stato (validità) di un determinato `COleDateTime` oggetto.

```
DateTimeStatus GetStatus() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce lo stato di questo `COleDateTime` valore. Se si chiama `GetStatus` su un `COleDateTime` oggetto costruito con l'impostazione predefinita, verrà restituito valido. Se si chiama `GetStatus` su una `COleDateTime` inizializzato con il costruttore impostato su null, oggetto `GetStatus` restituirà null. Visualizzare **osservazioni** per altre informazioni.

### <a name="remarks"></a>Note

Il valore restituito è definito dal `DateTimeStatus` enumerata di tipo, che è definito all'interno di `COleDateTime` classe.

```
enum DateTimeStatus
{
   error = -1,
   valid = 0,
   invalid = 1,    // Invalid date (out of range, etc.)
   null = 2,       // Literally has no value
};
```

Per una breve descrizione dei valori di stato, vedere l'elenco seguente:

- `COleDateTime::error` Indica che si è verificato un errore durante il tentativo di ottenere parte del valore data/ora.

- `COleDateTime::valid` Indica che questo `COleDateTime` oggetto è valido.

- `COleDateTime::invalid` Indica che questo `COleDateTime` oggetto non è valido; vale a dire, il relativo valore sia corretto.

- `COleDateTime::null` Indica che questo `COleDateTime` oggetto è null, vale a dire che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di NULL C++ database).

Lo stato di un `COleDateTime` oggetto non è valido nei casi seguenti:

- Se è impostato sul valore da un `VARIANT` o `COleVariant` valore che non è stato possibile convertire un valore data/ora.

- Se è impostato sul valore da un `time_t`, `SYSTEMTIME`, o `FILETIME` valore che non è stato possibile convertire un valore data/ora valido.

- Se è impostato sul valore `SetDateTime` con valori di parametro non valido.

- Se questo oggetto ha riscontrato un overflow o underflow durante un'operazione aritmetica di assegnazione, vale a dire `+=` o `-=`.

- Se è stato assegnato un valore non valido per questo oggetto.

- Se lo stato di questo oggetto è stato impostato in modo esplicito come non valido tramite `SetStatus`.

Per altre informazioni sulle operazioni che possono impostare lo stato non validi, vedere le funzioni membro seguenti:

- [COleDateTime](#coledatetime)

- [SetDateTime](#setdatetime)

- [operator +, -](#operator_add_-)

- [operatore + =, =](#operator_add_eq_-_eq)

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#10](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_12.cpp)]

##  <a name="getyear"></a>  COleDateTime::GetYear

Ottiene l'anno rappresentato dal valore data/ora.

```
int GetYear() const throw();
```

### <a name="return-value"></a>Valore restituito

L'anno rappresentata dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere l'anno.

### <a name="remarks"></a>Note

Intervallo di valori restituiti valido compreso tra 100 e 9999, che include il secolo.

Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetDay](#getday).

##  <a name="m_dt"></a>  COleDateTime::m_dt

Sottostante `DATE` struttura per l'oggetto `COleDateTime` oggetto.

```
DATE m_dt;
```

### <a name="remarks"></a>Note

> [!CAUTION]
>  Modifica del valore nel `DATE` oggetto a cui accede il puntatore restituito da questa funzione verrà modificato il valore di questa `COleDateTime` oggetto. Non modifica lo stato di questo `COleDateTime` oggetto.

Per altre informazioni sull'implementazione del `DATE` oggetti, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

##  <a name="m_status"></a>  COleDateTime::m_status

Contiene lo stato di questo `COleDateTime` oggetto.

```
DateTimeStatus m_status;
```

### <a name="remarks"></a>Note

Il tipo di questo membro dati è di tipo enumerato `DateTimeStatus`, che è definito all'interno di `COleDateTime` classe. Visualizzare [COleDateTime::GetStatus](#getstatus) per informazioni dettagliate.

> [!CAUTION]
>  Questo membro dati è utile nelle situazioni di programmazione avanzate. È consigliabile usare le funzioni membro inline [GetStatus](#getstatus) e [SetStatus](#setstatus). Vedere `SetStatus` per gli altri avvisi riguardanti impostare in modo esplicito questo membro dati.

##  <a name="operator_eq"></a>  COleDateTime:: operator =

Copia un `COleDateTime` valore.

```
COleDateTime& operator=(const VARIANT& varSrc) throw();
COleDateTime& operator=(DATE dtSrc) throw();
COleDateTime& operator=(const time_t& timeSrc) throw();
COleDateTime& operator=(const __time64_t& timeSrc) throw();
COleDateTime& operator=(const SYSTEMTIME& systimeSrc) throw();
COleDateTime& operator=(const FILETIME& filetimeSrc) throw();
COleDateTime& operator=(const UDATE& udate) throw();
```

### <a name="remarks"></a>Note

Questi operatori di assegnazione di overload copiare il valore di data/ora di origine in questo `COleDateTime` oggetto. Una breve descrizione di ognuna di queste segue gli operatori di assegnazione di overload:

- **operatore = (** `dateSrc` **)** il valore e lo stato dell'operando vengono copiati in questa `COleDateTime` oggetto.

- **operatore = (** *varSrc* **)** se la conversione del [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) valore (o [COleVariant](../../mfc/reference/colevariant-class.md) oggetto) per una data/ora (VT _ Data) ha esito positivo, il valore convertito viene copiato in questo `COleDateTime` oggetto e il relativo stato è impostato su valido. Se la conversione non riesce, il valore di questo oggetto è impostato su zero (30 dicembre 1899, mezzanotte) e il relativo stato come non valida.

- **operatore = (** `dtSrc` **)** il `DATE` valore viene copiato in questo `COleDateTime` oggetto e il relativo stato è impostato su valido.

- **operatore = (** `timeSrc` **)** il `time_t` oppure `__time64_t` valore viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido. Se ha esito negativo, viene impostato come non valida.

- **operatore = (** *systimeSrc* **)** il [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) valore viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido. Se ha esito negativo, viene impostato come non valida.

- **operatore = (** `udate` **)** il `UDATE` viene convertito e copiato in questo valore `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido. Se ha esito negativo, viene impostato come non valida. Oggetto `UDATE` struttura rappresenta una data di "decompressa". Vedere la funzione [VarDateFromUdate](/windows/desktop/api/oleauto/nf-oleauto-vardatefromudate) per altri dettagli.

- **operatore = (** `filetimeSrc` **)** il [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) valore viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido. altrimenti è impostato come non valida. `FILETIME` utilizza Coordinated Universal Time (UTC), pertanto se si passa a un'ora UTC della struttura, i risultati verranno convertiti dall'ora UTC nell'ora locale e verranno archiviati come ora variant. Questo comportamento è analogo a quello in Visual C++ 6.0 e Visual C++ .NET 2003 SP2. Visualizzare [tempi File](/windows/desktop/SysInfo/file-times) nel SDK di Windows per altre informazioni.

Per altre informazioni, vedere la [VARIANT](/windows/desktop/api/oaidl/ns-oaidl-tagvariant) voce nel SDK di Windows.

Per altre informazioni sul `time_t` tipo di dati, vedere la [ora](../../c-runtime-library/reference/time-time32-time64.md) funzionare nel *Run-Time Library Reference*.

Per altre informazioni, vedere la [SYSTEMTIME](/windows/desktop/api/minwinbase/ns-minwinbase-systemtime) e [FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime) strutture nel SDK di Windows.

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

##  <a name="operator_add_-"></a>  COleDateTime:: operator +, -

Addizione e sottrazione `ColeDateTime` valori.

```
COleDateTime operator+(COleDateTimeSpan dateSpan) const throw();
COleDateTime operator-(COleDateTimeSpan dateSpan) const throw();
COleDateTimeSpan operator-(const COleDateTime& date) const throw();
```

### <a name="remarks"></a>Note

`COleDateTime` gli oggetti rappresentano i casi in assoluto. [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md) oggetti rappresentano periodi di tempo relativi. I primi due operatori consentono di addizione e sottrazione una `COleDateTimeSpan` valore da un `COleDateTime` valore. Il terzo operatore consente di sottrarre uno `COleDateTime` valore da un altro per produrre un `COleDateTimeSpan` valore.

Se uno degli operandi è null, lo stato dell'oggetto risultante `COleDateTime` valore è null.

Se l'oggetto risultante `COleDateTime` valore non rientra nei limiti dei valori accettabili, lo stato di tale `COleDateTime` valore non è valido.

Se uno degli operandi è valido e l'altro non è null, lo stato dell'oggetto risultante `COleDateTime` valore non è valido.

Il **+** e **-** operatori asserirà se il `COleDateTime` oggetto viene impostato su null. Visualizzare [operatori relazionali COleDateTime](#coledatetime_relational_operators) per un esempio.

Per altre informazioni sui valori di stato validi, non è valido e null, vedere la [m_status](#m_status) variabile membro.

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#12](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_13.cpp)]

##  <a name="operator_add_eq_-_eq"></a>  COleDateTime:: operator + =, =

Addizione e sottrazione una `ColeDateTime` valore da questo `COleDateTime` oggetto.

```
COleDateTime& operator+=(COleDateTimeSpan dateSpan) throw();
COleDateTime& operator-=(COleDateTimeSpan dateSpan) throw();
```

### <a name="remarks"></a>Note

Questi operatori consentono di addizione e sottrazione una `COleDateTimeSpan` valore da e verso questo `COleDateTime`. Se uno degli operandi è null, lo stato dell'oggetto risultante `COleDateTime` valore è null.

Se l'oggetto risultante `COleDateTime` valore non rientra nei limiti dei valori accettabili, lo stato di questo `COleDateTime` valore viene impostato come non valida.

Se uno degli operandi è valido e l'altro non lo è null, lo stato dell'oggetto risultante `COleDateTime` valore non è valido.

Per altre informazioni sui valori di stato validi, non è valido e null, vedere la [m_status](#m_status) variabile membro.

Il **+=** e **-=** operatori asserirà se il `COleDateTime` oggetto viene impostato su null. Visualizzare [operatori relazionali COleDateTime](#coledatetime_relational_operators) per un esempio.

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

##  <a name="operator_date"></a>  Data COleDateTime:: operator

Converte un `ColeDateTime` valore in un `DATE`.

```
operator DATE() const throw();
```

### <a name="remarks"></a>Note

Questo operatore restituisce un `DATE` il cui valore viene copiato da questo oggetto `COleDateTime` oggetto. Per altre informazioni sull'implementazione del `DATE` oggetti, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

Il `DATE` asserirà operatore se il `COleDateTime` oggetto viene impostato su null. Visualizzare [operatori relazionali COleDateTime](#coledatetime_relational_operators) per un esempio.

##  <a name="parsedatetime"></a>  COleDateTime::ParseDateTime

Analizza una stringa per leggere un valore data/ora.

```
bool ParseDateTime(
    LPCTSTR lpszDate,
    DWORD dwFlags = 0,
    LCID lcid = LANG_USER_DEFAULT) throw();
```

### <a name="parameters"></a>Parametri

*lpszDate*<br/>
Puntatore alla stringa con terminazione null che deve essere analizzato. Per informazioni dettagliate, vedere la sezione Osservazioni.

*dwFlags*<br/>
Indica i flag per le impostazioni locali e l'analisi. Uno o più dei flag seguenti:

- LOCALE_NOUSEROVERRIDE usare le impostazioni locali del sistema predefinito, anziché impostazioni utente personalizzate.

- VAR_TIMEVALUEONLY ignorare la parte relativa alla data durante l'analisi.

- VAR_DATEVALUEONLY ignorare la parte relativa all'ora durante l'analisi.

*lcid*<br/>
Indica l'ID delle impostazioni locali da usare per la conversione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa è stata convertita in un valore data/ora, in caso contrario FALSE.

### <a name="remarks"></a>Note

Se la stringa è stata convertita a una data/ora valore, il valore di questa `COleDateTime` oggetto è impostato su tale valore e lo stato su valido.

> [!NOTE]
>  I valori di anno devono essere compresi tra 100 e 9999 (inclusi).

Il *lpszDate* parametro può accettare un'ampia gamma di formati. Ad esempio, le stringhe seguenti contengono formati di data/ora accettabile:

`"25 January 1996"`

`"8:30:00"`

`"20:30:00"`

`"January 25, 1996 8:30:00"`

`"8:30:00 Jan. 25, 1996"`

`"1/25/1996 8:30:00"  // always specify the full year, even in a 'short date' format`

Si noti che l'ID impostazioni locali influirà anche se il formato della stringa è accettabile per la conversione in un valore data/ora.

Nel caso di VAR_DATEVALUEONLY, il valore di ora viene impostato su 0 o mezzanotte di tempo. Nel caso di VAR_TIMEVALUEONLY, il valore di data viene impostato su data 0, vale a dire il 30 dicembre 1899.

Se la stringa non può essere convertita in un valore data/ora o se si è verificato un overflow numerico, lo stato di questo `COleDateTime` oggetto non è valido.

Per altre informazioni sui limiti e implementazione per `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

##  <a name="setdate"></a>  COleDateTime::SetDate

Imposta la data di questo `COleDateTime` oggetto.

```
int SetDate(
    int nYear,
    int nMonth,
    int nDay) throw();
```

### <a name="parameters"></a>Parametri

*nYear*, *nMonth*, *nDay*<br/>
Indicare i componenti della data deve essere copiato `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Zero se il valore di questa `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito si basa sul `DateTimeStatus` tipo enumerato. Per altre informazioni, vedere la [SetStatus](#setstatus) funzione membro.

### <a name="remarks"></a>Note

La data viene impostata sui valori specificati. Il tempo è impostato su ora 0, mezzanotte.

Vedere la tabella seguente per i limiti per i valori dei parametri:

|Parametro|Limiti|
|---------------|------------|
|*nYear*|100 - 9999|
|*nMonth*|1 - 12|
|*nDay*|0 - 31|

Se il giorno del mese causa l'overflow, viene convertito nel giorno del mese successivo e il mese corretto e/o anno viene incrementato di conseguenza. Un valore del giorno zero indica l'ultimo giorno del mese precedente. Il comportamento è identico `SystemTimeToVariantTime`.

Se il valore di data specificato dai parametri non è valido, lo stato di questo oggetto è impostato su `COleDateTime::invalid`. È consigliabile usare [GetStatus](#getstatus) per verificare la validità delle `DATE` il valore e non deve presupporre che il valore di [m_dt](#m_dt) rimarrà invariato.

Di seguito sono riportati alcuni esempi di valori di data:

|*nYear*|*nMonth*|*nDay*|Valore|
|-------------|--------------|------------|-----------|
|2000|2|29|29 febbraio 2000|
|1776|7|4|4 luglio 1776|
|1925|4|35|35 1925 aprile (data non valida)|
|10000|1|1|1 ° gennaio 10000 (data non valida)|

Per impostare sia data e ora, vedere [COleDateTime::SetDateTime](#setdatetime).

Per informazioni sulle funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#11](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_14.cpp)]

##  <a name="setdatetime"></a>  COleDateTime::SetDateTime

Imposta la data e ora della `COleDateTime` oggetto.

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

*nYear*, *nMonth*, *nDay*, *nHour*, *nMin*, *nSec*<br/>
Indicare i componenti di data e ora deve essere copiato `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Zero se il valore di questa `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito si basa sul `DateTimeStatus` tipo enumerato. Per altre informazioni, vedere la [SetStatus](#setstatus) funzione membro.

### <a name="remarks"></a>Note

Vedere la tabella seguente per i limiti per i valori dei parametri:

|Parametro|Limiti|
|---------------|------------|
|*nYear*|100 - 9999|
|*nMonth*|1 - 12|
|*nDay*|0 - 31|
|*nHour*|0 - 23|
|*nMin*|0 - 59|
|*nSec*|0 - 59|

Se il giorno del mese causa l'overflow, viene convertito nel giorno del mese successivo e il mese corretto e/o anno viene incrementato di conseguenza. Un valore del giorno zero indica l'ultimo giorno del mese precedente. Il comportamento è identico [SystemTimeToVariantTime](/windows/desktop/api/oleauto/nf-oleauto-systemtimetovarianttime).

Se il valore di data o ora specificato dai parametri non è valido, che lo stato di questo oggetto è impostato su non è valido e il valore di questo oggetto non viene modificato.

Di seguito sono riportati alcuni esempi di valori di ora:

|*nHour*|*nMin*|*nSec*|Value|
|-------------|------------|------------|-----------|
|1|3|3|01:03:03|
|23|45|0|23:45:00|
|25|30|0|Non valido|
|9|60|0|Non valido|

Di seguito sono riportati alcuni esempi di valori di data:

|*nYear*|*nMonth*|*nDay*|Value|
|-------------|--------------|------------|-----------|
|1995|4|15|15 aprile 1995|
|1789|7|14|17 luglio 1789|
|1925|2|30|Non valido|
|10000|1|1|Non valido|

Per impostare solo la data, vedere [COleDateTime::SetDate](#setdate). Per impostare solo l'ora, vedere [COleDateTime::SetTime](#settime).

Per informazioni sulle funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetStatus](#getstatus).

##  <a name="setstatus"></a>  COleDateTime::SetStatus

Imposta lo stato di questo `COleDateTime` oggetto.

```
void SetStatus(DateTimeStatus status) throw();
```

### <a name="parameters"></a>Parametri

*status*<br/>
Il nuovo valore di stato per l'oggetto `COleDateTime` oggetto.

### <a name="remarks"></a>Note

Il *lo stato* valore del parametro è definito dal `DateTimeStatus` tipo enumerato, che viene definito all'interno di `COleDateTime` classe. Visualizzare [COleDateTime::GetStatus](#getstatus) per informazioni dettagliate.

> [!CAUTION]
>  Questa funzione è utile nelle situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. Sarà spesso usata per impostare lo stato su **null** oppure **valido**. Si noti che l'operatore di assegnazione ( [operatore =](#eq)) e [SetDateTime](#setdatetime) impostare lo stato dell'oggetto in base al valore di origine/i.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetStatus](#getstatus).

##  <a name="settime"></a>  COleDateTime::SetTime

Imposta l'ora della `COleDateTime` oggetto.

```
int SetTime(
    int nHour,
    int nMin,
    int nSec) throw();
```

### <a name="parameters"></a>Parametri

*nHour*, *nMin*, *nSec*<br/>
Indicare i componenti della fase deve essere copiato `COleDateTime` oggetto.

### <a name="return-value"></a>Valore restituito

Zero se il valore di questa `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito si basa sul `DateTimeStatus` tipo enumerato. Per altre informazioni, vedere la [SetStatus](#setstatus) funzione membro.

### <a name="remarks"></a>Note

L'ora viene impostata sui valori specificati. La data viene impostata per data 0, vale a dire il 30 dicembre 1899.

Vedere la tabella seguente per i limiti per i valori dei parametri:

|Parametro|Limiti|
|---------------|------------|
|*nHour*|0 - 23|
|*nMin*|0 - 59|
|*nSec*|0 - 59|

Se il tempo specificato dai parametri di valore non valido, lo stato di questo oggetto è impostato su non è valido e il valore di questo oggetto non viene modificato.

Di seguito sono riportati alcuni esempi di valori di ora:

|*nHour*|*nMin*|*nSec*|Valore|
|-------------|------------|------------|-----------|
|1|3|3|01:03:03|
|23|45|0|23:45:00|
|25|30|0|Non valido|
|9|60|0|Non valido|

Per impostare sia data e ora, vedere [COleDateTime::SetDateTime](#setdatetime).

Per informazioni sulle funzioni membro che il valore di questa query `COleDateTime` oggetti, vedere le funzioni membro seguenti:

- [GetDay](#getday)

- [GetMonth](#getmonth)

- [GetYear](#getyear)

- [GetHour](#gethour)

- [GetMinute](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfYear](#getdayofyear)

Per altre informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: Il supporto per automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo [SetDate](#setdate).

## <a name="see-also"></a>Vedere anche

[Classe COleVariant](../../mfc/reference/colevariant-class.md)<br/>
[Classe CTime](../../atl-mfc-shared/reference/ctime-class.md)<br/>
[Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)

