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
ms.openlocfilehash: 610cbec6cb65d4e9616c5e0e0d64e729f39febcc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317752"
---
# <a name="coledatetime-class"></a>Classe COleDateTime

Incapsula `DATE` il tipo di dati utilizzato nell'automazione OLE.

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
|[COleDateTime::Formato](#format)|Genera una rappresentazione di `COleDateTime` stringa formattata di un oggetto.|
|[COleDateTime::GetAsDBTIMESTAMP](#getasdbtimestamp)|Chiamare questo metodo per ottenere `COleDateTime` l'ora nell'oggetto come struttura di `DBTIMESTAMP` dati.|
|[COleDateTime::GetAsSystemTime](#getassystemtime)|Chiamare questo metodo per ottenere `COleDateTime` l'ora nell'oggetto come struttura di dati [SYSTEMTIME.](/windows/win32/api/minwinbase/ns-minwinbase-systemtime)|
|[COleDateTime::GetAsUDATE](#getasudate)|Chiamare questo metodo per ottenere `COleDateTime` l'ora nella struttura di dati as. `UDATE`|
|[COleDateTime::GetCurrentTime](#getcurrenttime)|Crea `COleDateTime` un oggetto che rappresenta l'ora corrente (funzione membro statica).|
|[COleDateTime::GetDay](#getday)|Restituisce il `COleDateTime` giorno rappresentato da questo oggetto (1 - 31).|
|[COleDateTime::GetDayOfWeek](#getdayofweek)|Restituisce il giorno `COleDateTime` della settimana rappresentato da questo oggetto (Domenica 1).|
|[COleDateTime::GetDayOfYear](#getdayofyear)|Restituisce il giorno `COleDateTime` dell'anno rappresentato da questo oggetto (1 gen.01).|
|[COleDateTime::GetHour](#gethour)|Restituisce l'ora che questo `COleDateTime` oggetto rappresenta (0 - 23).|
|[COleDateTime::GetMinute](#getminute)|Restituisce il `COleDateTime` minuto rappresentato da questo oggetto (0 - 59).|
|[COleDateTime::GetMonth](#getmonth)|Restituisce il `COleDateTime` mese rappresentato da questo oggetto (1 - 12).|
|[COleDateTime::GetSecond](#getsecond)|Restituisce il `COleDateTime` secondo rappresentato da questo oggetto (0 - 59).|
|[COleDateTime::GetStatus](#getstatus)|Ottiene lo stato (validità) `COleDateTime` di questo oggetto.|
|[COleDateTime::GetYear](#getyear)|Restituisce l'anno rappresentato da questo `COleDateTime` oggetto.|
|[COleDateTime::ParseDateTime](#parsedatetime)|Legge un valore di data/ora da una `COleDateTime`stringa e imposta il valore di .|
|[COleDateTime::SetDate](#setdate)|Imposta il valore `COleDateTime` di questo oggetto sul valore di sola data specificato.|
|[COleDateTime::SetDateTime](#setdatetime)|Imposta il valore `COleDateTime` di questo oggetto sul valore di data/ora specificato.|
|[COleDateTime::SetStatus](#setstatus)|Imposta lo stato (validità) `COleDateTime` di questo oggetto.|
|[COleDateTime::SetTime](#settime)|Imposta il valore `COleDateTime` di questo oggetto sul valore di sola ora specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime::operator , COleDateTime::operator < e così via.](#coledatetime_relational_operators)|Confrontare `COleDateTime` due valori.|
|[COleDateTime::operator , COleDateTime::operator -](#operator_add_-)|Aggiungere e `COleDateTime` sottrarre valori.|
|[COleDateTime::operator, COleDateTime::operator -](#operator_add_eq_-_eq)|Aggiungere e `COleDateTime` sottrarre `COleDateTime` un valore da questo oggetto.|
|[COleDateTime::operatore](#operator_eq)|Copia un `COleDateTime` valore.|
|[COleDateTime::operator DATE, COleDateTime::operator Date](#operator_date)|Converte `COleDateTime` un valore `DATE` in `DATE*`un oggetto o un oggetto .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTime::m_dt](#m_dt)|Contiene il `DATE` sottostante per questo `COleDateTime` oggetto.|
|[COleDateTime::m_status](#m_status)|Contiene lo stato `COleDateTime` di questo oggetto.|

## <a name="remarks"></a>Osservazioni

`COleDateTime`non dispone di una classe base.

È uno dei tipi possibili per il tipo di dati [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) dell'automazione OLE. Un `COleDateTime` valore rappresenta un valore di data e ora assoluto.

Il `DATE` tipo viene implementato come valore a virgola mobile. I giorni sono misurati dal 30 dicembre 1899, a mezzanotte. La tabella seguente mostra alcune date e i relativi valori associati:

|Data|Valore|
|----------|-----------|
|29 dicembre 1899, mezzanotte|-1.0|
|29 dicembre 1899, ore 6|-1.25|
|30 dicembre 1899, mezzanotte|0,0|
|31 dicembre 1899, mezzanotte|1.0|
|1o gennaio 1900, ore 6 del mattino|2.25|

> [!CAUTION]
> Nella tabella precedente, anche se i valori dei giorni diventano negativi prima della mezzanotte del 30 dicembre 1899, i valori di ora del giorno non lo fanno. Ad esempio, 6:00 AM è sempre rappresentato da un valore frazionario 0,25 indipendentemente dal fatto che il numero intero che rappresenta il giorno sia positivo (dopo il 30 dicembre 1899) o negativo (prima del 30 dicembre 1899). Ciò significa che un semplice confronto a virgola `COleDateTime` mobile ordinerebbe erroneamente un rappresentando 6:00 AM il 29/12/1899 come **successivo** a uno che rappresenta 7:00 AM nello stesso giorno.

La `COleDateTime` classe gestisce le date dal 1 gennaio 100 al 31 dicembre 9999. La `COleDateTime` classe utilizza il calendario gregoriano; non supporta le date giuliane. `COleDateTime`ignora l'ora legale. (Vedere [data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).)

> [!NOTE]
> È possibile `%y` utilizzare il formato per recuperare un anno a due cifre solo per le date a partire dal 1900. Se si `%y` utilizza il formato in una data precedente al 1900, il codice genera un errore ASSERT.

Questo tipo viene utilizzato anche per rappresentare valori di sola data o solo ora. Per convenzione, la data 0 (30 dicembre 1899) viene utilizzata per i valori di sola ora e l'ora 00:00 (mezzanotte) viene utilizzata per i valori di sola data.

Se si `COleDateTime` crea un oggetto utilizzando una data minore di 100, `GetYear` `GetMonth`la `GetDay` `GetHour`data viene accettata, ma le chiamate successive a , , , , `GetMinute`e `GetSecond` esito negativo e restituisce -1. In precedenza, era possibile utilizzare date a due cifre, ma le date devono essere 100 o più grandi in MFC 4.2 e versioni successive.

Per evitare problemi, specificare una data a quattro cifre. Ad esempio:

[!code-cpp[NVC_ATLMFC_Utilities#1](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_1.cpp)]

Le operazioni aritmetiche di base per i `COleDateTime` valori utilizzano la classe complementare [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md). `COleDateTimeSpan`definiscono un intervallo di tempo. La relazione tra queste classi è simile a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).

Per ulteriori informazioni `COleDateTime` `COleDateTimeSpan` sulle classi e , vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLComTime.h

## <a name="coledatetime-relational-operators"></a><a name="coledatetime_relational_operators"></a>Operatori relazionali COleDateTime

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

*Data*<br/>
L'oggetto `COleDateTime` da confrontare.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se uno dei due operandi non è valido, si verificherà un ERRORE ATLASSERT.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#13](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_2.cpp)]

### <a name="example"></a>Esempio

Gli **>=** operatori ** \< ** **>**, **<**, e , `COleDateTime` verranno assert se l'oggetto è impostato su null.

[!code-cpp[NVC_ATLMFC_Utilities#170](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_3.cpp)]

## <a name="coledatetimecoledatetime"></a><a name="coledatetime"></a>COleDateTime::COleDateTime

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
Oggetto `COleDateTime` esistente da copiare `COleDateTime` nel nuovo oggetto.

*varSrc*<br/>
Struttura `VARIANT` di dati esistente `COleVariant` (eventualmente un oggetto) da convertire in un valore `COleDateTime` di data/ora (VT_DATE) e copiata nel nuovo oggetto.

*dtSrc*<br/>
Valore di data/ora (`DATE`) da `COleDateTime` copiare nel nuovo oggetto.

*timeSrc*<br/>
Valore `time_t` `__time64_t` o da convertire in un valore di data/ora e copiato nel nuovo `COleDateTime` oggetto.

*systimeSrc*<br/>
Struttura `SYSTEMTIME` da convertire in un valore di data/ora e copiata nel nuovo `COleDateTime` oggetto.

*filetimeSrc*<br/>
Struttura `FILETIME` da convertire in un valore di data/ora e copiata nel nuovo `COleDateTime` oggetto. Un `FILETIME` utilizza l'ora UTC (Universal Coordinated Time), quindi se si passa un'ora locale nella struttura, i risultati non saranno corretti. Per altre informazioni, vedere [Orari dei file](/windows/win32/SysInfo/file-times) in Windows SDK.

*nYear*, *nMonth*, *nDay*, *nHour*, *nMin*, *nSec*<br/>
Indicare i valori di data e `COleDateTime` ora da copiare nel nuovo oggetto.

*wDosDate*, *wDosTime*<br/>
Valori di data e ora MS-DOS da convertire in un `COleDateTime` valore di data/ora e copiati nel nuovo oggetto.

*Timestamp*<br/>
Riferimento a una struttura [DBTimeStamp](/dotnet/api/system.data.oledb.oledbtype) contenente l'ora locale corrente.

### <a name="remarks"></a>Osservazioni

Tutti questi costruttori `COleDateTime` creano nuovi oggetti inizializzati sul valore specificato. La tabella seguente mostra gli intervalli validi per ogni componente di data e ora:

|Componente data/ora|Intervallo valido|
|--------------------------|-----------------|
|year|100 - 9999|
|month|0 - 12|
|day|0 - 31|
|hour|0 - 23|
|minute|0 - 59|
|second|0 - 59|

Si noti che il limite superiore effettivo per il componente giorno varia in base ai componenti mese e anno. Per informazioni dettagliate, vedere le `SetDate` funzioni membro o `SetDateTime` .

Di seguito è riportata una breve descrizione di ogni costruttore:Following is a brief description of each constructor:

- `COleDateTime(`**)** Costruisce `COleDateTime` un oggetto inizializzato su 0 (mezzanotte, 30 dicembre 1899).

- `COleDateTime(``dateSrc` **)** Costruisce `COleDateTime` un oggetto `COleDateTime` da un oggetto esistente.

- `COleDateTime(`*varSrc* **)** Costruisce `COleDateTime` un oggetto. Tenta di `VARIANT` convertire una struttura o [COleVariant](../../mfc/reference/colevariant-class.md) `VT_DATE`oggetto in un valore di data/ora ( ). Se questa conversione ha esito positivo, `COleDateTime` il valore convertito viene copiato nel nuovo oggetto. In caso contrario, il `COleDateTime` valore dell'oggetto viene impostato su 0 (mezzanotte, 30 dicembre 1899) e il relativo stato non è valido.

- `COleDateTime(``dtSrc` **)** Costruisce `COleDateTime` un oggetto `DATE` da un valore.

- `COleDateTime(``timeSrc` **)** Costruisce `COleDateTime` un oggetto `time_t` da un valore.

- `COleDateTime(`*systimeSrc* **)** Costruisce `COleDateTime` un `SYSTEMTIME` oggetto da un valore.

- `COleDateTime(``filetimeSrc` **)** Costruisce `COleDateTime` un oggetto `FILETIME` da un valore. . Un `FILETIME` utilizza l'ora UTC (Universal Coordinated Time), quindi se si passa un'ora locale nella struttura, i risultati non saranno corretti. Per altre informazioni, vedere [Tempi dei file](/windows/win32/SysInfo/file-times) in Windows SDK.

- `COleDateTime(``nYear`, `nMonth` `nDay`, `nHour` `nMin`, `nSec` , , `COleDateTime` , **)** Costruisce un oggetto dai valori numerici specificati.

- `COleDateTime(``wDosDate`, `wDosTime` **)** Costruisce `COleDateTime` un oggetto dai valori di data e ora MS-DOS specificati.

Per ulteriori informazioni `time_t` sul tipo di dati, vedere la funzione [time](../../c-runtime-library/reference/time-time32-time64.md) in Riferimenti alla libreria di *runtime*.

Per ulteriori informazioni, vedere le strutture [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) e [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) in Windows SDK.

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

> [!NOTE]
> Il costruttore using `DBTIMESTAMP` parametro è disponibile solo quando OLEDB.h è incluso.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#2](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_4.cpp)]

## <a name="coledatetimeformat"></a><a name="format"></a>COleDateTime::Formato

Crea una rappresentazione formattata del valore di data/ora.

```
CString Format(DWORD dwFlags = 0,  LCID lcid = LANG_USER_DEFAULT) const;
CString Format(LPCTSTR lpszFormat) const;
CString Format(UINT nFormatID) const;
```

### <a name="parameters"></a>Parametri

*dwFlags*<br/>
Indica uno dei seguenti flag locali:

- LOCALE_NOUSEROVERRIDE Utilizzare le impostazioni locali predefinite del sistema, anziché le impostazioni utente personalizzate.

- VAR_TIMEVALUEONLY Ignorare la parte relativa alla data durante l'analisi.

- VAR_DATEVALUEONLY Ignorare la parte relativa al tempo durante l'analisi.

*Lcid*<br/>
Indica l'ID delle impostazioni locali da utilizzare per la conversione. Per ulteriori informazioni sugli identificatori di lingua, vedere [Identificatori di lingua](/windows/win32/Intl/language-identifiers).

*Formato lpsz*<br/>
Stringa di formattazione `printf` simile alla stringa di formattazione. Ogni codice di formattazione, `%`preceduto da un segno `COleDateTime` di percentuale ( ), viene sostituito dal componente corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati invariati nella stringa restituita. Per ulteriori informazioni, vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md). Il valore e il significato `Format` dei codici di formattazione per sono:

- `%H`Ore nel giorno corrente

- `%M`Minuti nell'ora corrente

- `%S`Secondi nel minuto corrente

- `%%`Segno di percentuale

*nId FormatID (informazioni in questo campo)*<br/>
ID di risorsa per la stringa di controllo del formato.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il valore di data/ora formattato.

### <a name="remarks"></a>Osservazioni

Se lo stato `COleDateTime` di questo oggetto è null, il valore restituito è una stringa vuota. Se lo stato non è valido, la stringa restituita viene specificata dalla risorsa di tipo stringa ATL_IDS_DATETIME_INVALID.

Segue una breve descrizione delle tre forme per questa funzione:

`Format`( *dwFlags*, *lcid*)<br/>
Questo modulo formatta il valore utilizzando le specifiche della lingua (ID delle impostazioni locali) per data e ora. Utilizzando i parametri predefiniti, questo modulo stamperà la data e l'ora, a meno che la parte dell'ora non sia 0 (mezzanotte), nel qual caso verrà stampata solo la data o la parte della data è 0 (30 dicembre 1899), nel qual caso verrà stampata solo l'ora. Se il valore di data/ora è 0 (30 dicembre 1899, mezzanotte), questo modulo con i parametri predefiniti verrà stampato a mezzanotte.

`Format`( *lpszFormat*)<br/>
Questo modulo formatta il valore utilizzando la stringa di formato che contiene codici `printf`di formattazione speciali preceduti da un segno di percentuale (%), come in . La stringa di formattazione viene passata come parametro alla funzione. Per ulteriori informazioni sui codici di formattazione, vedere [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) in Riferimenti alla libreria di runtime.

`Format`( *nFormatID*)<br/>
Questo modulo formatta il valore utilizzando la stringa di formato che contiene codici `printf`di formattazione speciali preceduti da un segno di percentuale (%), come in . La stringa di formattazione è una risorsa. L'ID di questa risorsa di tipo stringa viene passato come parametro. Per ulteriori informazioni sui codici di formattazione, vedere [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) in Riferimenti alla *libreria*di runtime .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#3](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_5.cpp)]

## <a name="coledatetimegetasdbtimestamp"></a><a name="getasdbtimestamp"></a>COleDateTime::GetAsDBTIMESTAMP

Chiamare questo metodo per ottenere `COleDateTime` l'ora nell'oggetto come struttura di `DBTIMESTAMP` dati.

```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& timeStamp) const throw();
```

### <a name="parameters"></a>Parametri

*Timestamp*<br/>
Riferimento a una struttura [DBTimeStamp.](/dotnet/api/system.data.oledb.oledbtype)

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Archivia l'ora risultante nella struttura *timeStamp* di riferimento. La `DBTIMESTAMP` struttura di dati inizializzata `fraction` da questa funzione avrà il relativo membro impostato su zero.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#4](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_6.cpp)]

## <a name="coledatetimegetassystemtime"></a><a name="getassystemtime"></a>COleDateTime::GetAsSystemTime

Chiamare questo metodo per ottenere `COleDateTime` l'ora nell'oggetto come struttura di `SYSTEMTIME` dati.

```
bool GetAsSystemTime(SYSTEMTIME& sysTime) const throw();
```

### <a name="parameters"></a>Parametri

*sysTime (tempo di stato)*<br/>
Un riferimento a una struttura [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) per ricevere `COleDateTime` il valore di data/ora convertito dall'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo; FALSE se la conversione `COleDateTime` non riesce o se l'oggetto è NULL o non valido.

### <a name="remarks"></a>Osservazioni

`GetAsSystemTime`memorizza l'ora risultante nell'oggetto *sysTime* a cui si fa riferimento. La `SYSTEMTIME` struttura di dati inizializzata `wMilliseconds` da questa funzione avrà il relativo membro impostato su zero.

Per ulteriori informazioni sulle informazioni `COleDateTime` sullo stato contenute in un oggetto, vedere [GetStatus](#getstatus).

## <a name="coledatetimegetasudate"></a><a name="getasudate"></a>COleDateTime::GetAsUDATE

Chiamare questo metodo per ottenere `COleDateTime` l'ora nell'oggetto come struttura di `UDATE` dati.

```
bool GetAsUDATE(UDATE& uDate) const throw();
```

### <a name="parameters"></a>Parametri

*uData*<br/>
Riferimento a `UDATE` una struttura per ricevere il valore `COleDateTime` di data/ora convertito dall'oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se ha esito positivo; FALSE se la conversione `COleDateTime` non riesce o se l'oggetto è NULL o non valido.

### <a name="remarks"></a>Osservazioni

Una `UDATE` struttura rappresenta una data "decompressa".

## <a name="coledatetimegetcurrenttime"></a><a name="getcurrenttime"></a>COleDateTime::GetCurrentTime

Chiamare questa funzione membro statica per restituire il valore di data/ora corrente.

```
static COleDateTime WINAPI GetCurrentTime() throw();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#5](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_7.cpp)]

## <a name="coledatetimegetday"></a><a name="getday"></a>COleDateTime::GetDay

Ottiene il giorno del mese rappresentato da questo valore di data/ora.

```
int GetDay() const throw();
```

### <a name="return-value"></a>Valore restituito

Giorno del mese rappresentato dal `COleDateTime` valore `COleDateTime::error` di questo oggetto o se non è stato possibile ottenere il giorno.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 1 e 31.

Per informazioni su altre funzioni membro `COleDateTime` che eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#6](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_8.cpp)]

## <a name="coledatetimegetdayofweek"></a><a name="getdayofweek"></a>COleDateTime::GetDayOfWeek

Ottiene il giorno del mese rappresentato da questo valore di data/ora.

```
int GetDayOfWeek() const throw();
```

### <a name="return-value"></a>Valore restituito

Giorno della settimana rappresentato dal `COleDateTime` valore `COleDateTime::error` di questo oggetto o se non è stato possibile ottenere il giorno della settimana.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 1 e 7, dove 1 : Domenica, 2 , Lunedi e così via.

Per informazioni su altre funzioni membro `COleDateTime` che eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfAnno](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#7](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_9.cpp)]

## <a name="coledatetimegetdayofyear"></a><a name="getdayofyear"></a>COleDateTime::GetDayOfYear

Ottiene il giorno dell'anno rappresentato da questo valore di data/ora.

```
int GetDayOfYear() const throw();
```

### <a name="return-value"></a>Valore restituito

Il giorno dell'anno rappresentato `COleDateTime` dal `COleDateTime::error` valore di questo oggetto o se non è stato possibile ottenere il giorno dell'anno.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 1 e 366, dove gennaio è 1 .

Per informazioni su altre funzioni membro `COleDateTime` che eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#8](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_10.cpp)]

## <a name="coledatetimegethour"></a><a name="gethour"></a>COleDateTime::GetHour

Ottiene l'ora rappresentata da questo valore di data/ora.

```
int GetHour() const throw();
```

### <a name="return-value"></a>Valore restituito

L'ora rappresentata dal `COleDateTime` valore `COleDateTime::error` di questo oggetto o se non è stato possibile ottenere l'ora.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 0 e 23.

Per informazioni su altre funzioni membro `COleDateTime` che eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#9](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_11.cpp)]

## <a name="coledatetimegetminute"></a><a name="getminute"></a>COleDateTime::GetMinute

Ottiene il minuto rappresentato da questo valore di data/ora.

```
int GetMinute() const throw();
```

### <a name="return-value"></a>Valore restituito

Minuto rappresentato dal valore `COleDateTime` di `COleDateTime::error` questo oggetto o se non è stato possibile ottenere il minuto.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 0 e 59.

Per informazioni su altre funzioni membro `COleDateTime` che eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetHour](#gethour).

## <a name="coledatetimegetmonth"></a><a name="getmonth"></a>COleDateTime::GetMonth

Ottiene il mese rappresentato da questo valore di data/ora.

```
int GetMonth() const throw();
```

### <a name="return-value"></a>Valore restituito

Mese rappresentato dal valore `COleDateTime` di `COleDateTime::error` questo oggetto o se non è stato possibile ottenere il mese.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 1 e 12.

Per informazioni su altre funzioni membro `COleDateTime` che eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetDay](#getday).

## <a name="coledatetimegetsecond"></a><a name="getsecond"></a>COleDateTime::GetSecond

Ottiene il secondo rappresentato da questo valore di data/ora.

```
int GetSecond() const throw();
```

### <a name="return-value"></a>Valore restituito

Secondo rappresentato dal valore `COleDateTime` di `COleDateTime::error` questo oggetto o se non è stato possibile ottenere il secondo.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 0 e 59.

> [!NOTE]
> La `COleDateTime` classe non supporta i secondi intercalari.

Per ulteriori informazioni sull'implementazione di `COleDateTime`, vedere l'articolo Data e [ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

Per informazioni su altre funzioni membro `COleDateTime` che eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetHour](#gethour).

## <a name="coledatetimegetstatus"></a><a name="getstatus"></a>COleDateTime::GetStatus

Ottiene lo stato (validità) `COleDateTime` di un oggetto specificato.

```
DateTimeStatus GetStatus() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce lo `COleDateTime` stato di questo valore. Se si `GetStatus` chiama `COleDateTime` su un oggetto costruito con il valore predefinito, restituirà valido. Se si `GetStatus` chiama `COleDateTime` su un oggetto inizializzato `GetStatus` con il costruttore impostato su null, restituirà null.

### <a name="remarks"></a>Osservazioni

Il valore restituito è `DateTimeStatus` definito dal tipo enumerato, definito all'interno della `COleDateTime` classe.

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

- `COleDateTime::error`Indica che si è verificato un errore durante il tentativo di ottenere parte del valore di data/ora.

- `COleDateTime::valid`Indica che `COleDateTime` questo oggetto è valido.

- `COleDateTime::invalid`Indica che `COleDateTime` questo oggetto non è valido. vale a dire, il suo valore potrebbe non essere corretto.

- `COleDateTime::null`Indica che `COleDateTime` questo oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di database di "non avere alcun valore", al contrario di C , NULL.)

Lo stato `COleDateTime` di un oggetto non è valido nei seguenti casi:

- Se il valore è `VARIANT` `COleVariant` impostato da un valore o che non può essere convertito in un valore di data/ora.

- Se il valore è `time_t` `SYSTEMTIME`impostato `FILETIME` da un valore , o che non può essere convertito in un valore di data/ora valido.

- Se il relativo `SetDateTime` valore è impostato da con valori di parametro non validi.

- Se l'oggetto ha subito un overflow o underflow `+=` durante `-=`un'operazione di assegnazione aritmetica, ovvero, o .

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto `SetStatus`è stato impostato in modo esplicito su non valido utilizzando .

Per ulteriori informazioni sulle operazioni che possono impostare lo stato come non valido, vedere le seguenti funzioni membro:

- [COleDateTime](#coledatetime)

- [SetDateTime (Imposta)](#setdatetime)

- [operatore di comando , -](#operator_add_-)

- [operatore di lavoro sz, -](#operator_add_eq_-_eq)

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#10](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_12.cpp)]

## <a name="coledatetimegetyear"></a><a name="getyear"></a>COleDateTime::GetYear

Ottiene l'anno rappresentato da questo valore di data/ora.

```
int GetYear() const throw();
```

### <a name="return-value"></a>Valore restituito

Anno rappresentato dal valore `COleDateTime` di `COleDateTime::error` questo oggetto o se non è stato possibile ottenere l'anno.

### <a name="remarks"></a>Osservazioni

I valori restituiti validi sono compresi tra 100 e 9999, che include il secolo.

Per informazioni su altre funzioni membro `COleDateTime` che eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [GetDay](#getday).

## <a name="coledatetimem_dt"></a><a name="m_dt"></a>COleDateTime::m_dt

Struttura `DATE` sottostante `COleDateTime` per questo oggetto.

```
DATE m_dt;
```

### <a name="remarks"></a>Osservazioni

> [!CAUTION]
> Se si modifica `DATE` il valore nell'oggetto a cui accede il `COleDateTime` puntatore restituito da questa funzione, il valore di questo oggetto verrà modificato. Non modifica lo stato `COleDateTime` di questo oggetto.

Per ulteriori informazioni sull'implementazione dell'oggetto, `DATE` vedere l'articolo Data e [ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="coledatetimem_status"></a><a name="m_status"></a>COleDateTime::m_status

Contiene lo stato `COleDateTime` di questo oggetto.

```
DateTimeStatus m_status;
```

### <a name="remarks"></a>Osservazioni

Il tipo di questo membro dati `DateTimeStatus`è il tipo `COleDateTime` enumerato , definito all'interno della classe. Per ulteriori informazioni, vedere [COleDateTime::GetStatus](#getstatus).

> [!CAUTION]
> Questo membro dati è per situazioni di programmazione avanzate. È necessario utilizzare le funzioni membro inline [GetStatus](#getstatus) e [SetStatus](#setstatus). Per `SetStatus` ulteriori precauzioni relative all'impostazione esplicita di questo membro dati, vedere per ulteriori precauzioni.

## <a name="coledatetimeoperator-"></a><a name="operator_eq"></a>COleDateTime::operatore

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

Questi operatori di assegnazione di overload copiano il valore di data/ora di origine in questo `COleDateTime` oggetto. Di seguito è fornita una breve descrizione di ciascuno di questi operatori di assegnazione di overload:A brief description of each these overloaded assignment operators follows:

- **operatore : (** `dateSrc` **)** Il valore e lo stato dell'operando vengono copiati in questo `COleDateTime` oggetto.

- **operatore : (** *varSrc* **)** Se la conversione del valore [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) (o [c'èun oggetto COleVariant)](../../mfc/reference/colevariant-class.md) in una `COleDateTime` data/ora (VT_DATE) ha esito positivo, il valore convertito viene copiato in questo oggetto e il relativo stato viene impostato su valido. Se la conversione non riesce, il valore di questo oggetto viene impostato su zero (30 dicembre 1899, mezzanotte) e il relativo stato non è valido.

- **operatore : (** `dtSrc` **)** Il `DATE` valore viene `COleDateTime` copiato in questo oggetto e il relativo stato viene impostato su valido.

- **operatore : (** `timeSrc` **)** Il `time_t` `__time64_t` valore o viene convertito `COleDateTime` e copiato in questo oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido; in caso di esito negativo, viene impostato su non valido.

- **operatore : (** *systimeSrc* **)** Il valore [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) viene convertito `COleDateTime` e copiato in questo oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido; in caso di esito negativo, viene impostato su non valido.

- **operatore : (** `uDate` **)** Il `UDATE` valore viene convertito `COleDateTime` e copiato in questo oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido; in caso di esito negativo, viene impostato su non valido. Una `UDATE` struttura rappresenta una data "decompressa". Per ulteriori informazioni, vedere la funzione [VarDateFromUdate](/windows/win32/api/oleauto/nf-oleauto-vardatefromudate).

- **operatore : (** `filetimeSrc` **)** Il valore [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) viene convertito `COleDateTime` e copiato in questo oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido; in caso contrario è impostato su non valido. `FILETIME`utilizza l'ora UTC (Universal Coordinated Time), pertanto se si passa un'ora UTC nella struttura, i risultati verranno convertiti dall'ora UTC all'ora locale e verranno archiviati come ora di variante. Questo comportamento è lo stesso che in Visual C.NET 6.0 e Visual C.NET 2003 SP2. Per altre informazioni, vedere [Tempi dei file](/windows/win32/SysInfo/file-times) in Windows SDK.

Per ulteriori informazioni, vedere la voce [VARIANT](/windows/win32/api/oaidl/ns-oaidl-variant) in Windows SDK.

Per ulteriori informazioni `time_t` sul tipo di dati, vedere la funzione [time](../../c-runtime-library/reference/time-time32-time64.md) in Riferimenti alla libreria di *runtime*.

Per ulteriori informazioni, vedere le strutture [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) e [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) in Windows SDK.

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="coledatetimeoperator---"></a><a name="operator_add_-"></a>COleDateTime::operator

Aggiungere e `ColeDateTime` sottrarre valori.

```
COleDateTime operator+(COleDateTimeSpan dateSpan) const throw();
COleDateTime operator-(COleDateTimeSpan dateSpan) const throw();
COleDateTimeSpan operator-(const COleDateTime& date) const throw();
```

### <a name="remarks"></a>Osservazioni

`COleDateTime`oggetti rappresentano tempi assoluti. [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md) oggetti rappresentano tempi relativi. I primi due operatori consentono di `COleDateTimeSpan` aggiungere `COleDateTime` e sottrarre un valore da un valore. Il terzo operatore consente `COleDateTime` di sottrarre `COleDateTimeSpan` un valore da un altro per produrre un valore.

Se uno degli operandi è null, `COleDateTime` lo stato del valore risultante è null.

Se il `COleDateTime` valore risultante non rientra nei limiti `COleDateTime` dei valori accettabili, lo stato di tale valore non è valido.

Se uno degli operandi non è valido e l'altro `COleDateTime` non è null, lo stato del valore risultante non è valido.

Gli **+** **-** operatori e asseriranno se l'oggetto `COleDateTime` è impostato su null. Per un esempio, vedere [COleDateTime Relational Operators.](#coledatetime_relational_operators)

Per altre informazioni sui valori di stato valid, invalid e null, vedere la variabile membro [m_status.](#m_status)

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#12](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_13.cpp)]

## <a name="coledatetimeoperator---"></a><a name="operator_add_eq_-_eq"></a>COleDateTime::operatore

Aggiungere e `ColeDateTime` sottrarre `COleDateTime` un valore da questo oggetto.

```
COleDateTime& operator+=(COleDateTimeSpan dateSpan) throw();
COleDateTime& operator-=(COleDateTimeSpan dateSpan) throw();
```

### <a name="remarks"></a>Osservazioni

Questi operatori consentono di aggiungere `COleDateTimeSpan` e sottrarre un valore da e verso questo `COleDateTime`oggetto . Se uno degli operandi è null, `COleDateTime` lo stato del valore risultante è null.

Se il `COleDateTime` valore risultante non rientra nei limiti `COleDateTime` dei valori accettabili, lo stato di questo valore è impostato su non valido.

Se uno degli operandi non è valido e other `COleDateTime` non è null, lo stato del valore risultante non è valido.

Per altre informazioni sui valori di stato valid, invalid e null, vedere la variabile membro [m_status.](#m_status)

Gli **+=** **-=** operatori e asseriranno se l'oggetto `COleDateTime` è impostato su null. Per un esempio, vedere [COleDateTime Relational Operators.](#coledatetime_relational_operators)

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="coledatetimeoperator-date"></a><a name="operator_date"></a>COleDateTime::operator DATE

Converte `ColeDateTime` un valore `DATE`in un oggetto .

```
operator DATE() const throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore `DATE` restituisce un oggetto `COleDateTime` il cui valore viene copiato da questo oggetto. Per ulteriori informazioni sull'implementazione dell'oggetto, `DATE` vedere l'articolo Data e [ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

L'operatore `DATE` asserirà se l'oggetto `COleDateTime` è impostato su null. Per un esempio, vedere [COleDateTime Relational Operators.](#coledatetime_relational_operators)

## <a name="coledatetimeparsedatetime"></a><a name="parsedatetime"></a>COleDateTime::ParseDateTime

Analizza una stringa per leggere un valore di data/ora.

```
bool ParseDateTime(
    LPCTSTR lpszDate,
    DWORD dwFlags = 0,
    LCID lcid = LANG_USER_DEFAULT) throw();
```

### <a name="parameters"></a>Parametri

*lpszDate*<br/>
Puntatore alla stringa con terminazione null che deve essere analizzata. Per informazioni dettagliate, vedere la sezione Osservazioni.

*dwFlags*<br/>
Indica i flag per le impostazioni locali e l'analisi. Uno o più dei seguenti flag:

- LOCALE_NOUSEROVERRIDE Utilizzare le impostazioni locali predefinite del sistema, anziché le impostazioni utente personalizzate.

- VAR_TIMEVALUEONLY Ignorare la parte relativa alla data durante l'analisi.

- VAR_DATEVALUEONLY Ignorare la parte relativa al tempo durante l'analisi.

*Lcid*<br/>
Indica l'ID delle impostazioni locali da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se la stringa è stata convertita correttamente in un valore di data/ora, in caso contrario FALSE.

### <a name="remarks"></a>Osservazioni

Se la stringa è stata convertita correttamente in `COleDateTime` un valore di data/ora, il valore di questo oggetto viene impostato su tale valore e il relativo stato su valido.

> [!NOTE]
> I valori dell'anno devono essere compresi tra 100 e 9999, inclusi.

Il *lpszDate* parametro può assumere una varietà di formati. Ad esempio, le stringhe seguenti contengono formati di data/ora accettabili:For example, the following strings contain acceptable date/time formats:

`"25 January 1996"`

`"8:30:00"`

`"20:30:00"`

`"January 25, 1996 8:30:00"`

`"8:30:00 Jan. 25, 1996"`

`"1/25/1996 8:30:00"  // always specify the full year, even in a 'short date' format`

L'ID delle impostazioni locali influirà anche se il formato della stringa è accettabile per la conversione in un valore di data/ora.

Nel caso di VAR_DATEVALUEONLY, il valore dell'ora viene impostato su ora 0 o mezzanotte. Nel caso di VAR_TIMEVALUEONLY, il valore della data è impostato sulla data 0, ovvero il 30 dicembre 1899.

Se la stringa non può essere convertita in un valore di data/ora `COleDateTime` o se si è verificato un overflow numerico, lo stato di questo oggetto non è valido.

Per ulteriori informazioni sui limiti `COleDateTime` e sull'implementazione dei valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="coledatetimesetdate"></a><a name="setdate"></a>COleDateTime::SetDate

Imposta la data `COleDateTime` di questo oggetto.

```
int SetDate(
    int nYear,
    int nMonth,
    int nDay) throw();
```

### <a name="parameters"></a>Parametri

*nYear*, *nMonth*, *nDay*<br/>
Indicare i componenti data `COleDateTime` da copiare in questo oggetto.

### <a name="return-value"></a>Valore restituito

zero se il `COleDateTime` valore di questo oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è `DateTimeStatus` basato sul tipo enumerato. Per altre informazioni, vedere la funzione membro [SetStatus.For](#setstatus) more information, see the SetStatus member function.

### <a name="remarks"></a>Osservazioni

La data è impostata sui valori specificati. L'ora è impostata sull'ora 0, mezzanotte.

Vedere la tabella seguente per i limiti per i valori dei parametri:See the following table for bounds for the parameter values:

|Parametro|Bounds|
|---------------|------------|
|*nAnno*|100 - 9999|
|*nMese*|1 - 12|
|*nGiorno*|0 - 31|

Se il giorno del mese straripa, viene convertito nel giorno corretto del mese successivo e il mese e/o l'anno vengono incrementati di conseguenza. Un valore di giorno pari a zero indica l'ultimo giorno del mese precedente. Il comportamento è `SystemTimeToVariantTime`lo stesso di .

Se il valore della data specificato dai parametri non è `COleDateTime::invalid`valido, lo stato di questo oggetto viene impostato su . È necessario utilizzare [GetStatus](#getstatus) per verificare la validità del `DATE` valore e non deve presupporre che il valore di [m_dt](#m_dt) rimarrà invariato.

Di seguito sono riportati alcuni esempi di valori di data:

|*nAnno*|*nMese*|*nGiorno*|Valore|
|-------------|--------------|------------|-----------|
|2000|2|29|del 29 febbraio 2000|
|1776|7|4|4 luglio 1776|
|1925|4|35|35 aprile 1925 (data non valida)|
|10000|1|1|1 gennaio 10000 (data non valida)|

Per impostare sia la data che l'ora, vedere [COleDateTime::SetDateTime](#setdatetime).

Per informazioni sulle funzioni membro che `COleDateTime` eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#11](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_14.cpp)]

## <a name="coledatetimesetdatetime"></a><a name="setdatetime"></a>COleDateTime::SetDateTime

Imposta la data e `COleDateTime` l'ora di questo oggetto.

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
Indicare i componenti di data `COleDateTime` e ora da copiare in questo oggetto.

### <a name="return-value"></a>Valore restituito

zero se il `COleDateTime` valore di questo oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è `DateTimeStatus` basato sul tipo enumerato. Per altre informazioni, vedere la funzione membro [SetStatus.For](#setstatus) more information, see the SetStatus member function.

### <a name="remarks"></a>Osservazioni

Vedere la tabella seguente per i limiti per i valori dei parametri:See the following table for bounds for the parameter values:

|Parametro|Bounds|
|---------------|------------|
|*nAnno*|100 - 9999|
|*nMese*|1 - 12|
|*nGiorno*|0 - 31|
|*nOre*|0 - 23|
|*nMin*|0 - 59|
|*nSec (Sec)*|0 - 59|

Se il giorno del mese straripa, viene convertito nel giorno corretto del mese successivo e il mese e/o l'anno vengono incrementati di conseguenza. Un valore di giorno pari a zero indica l'ultimo giorno del mese precedente. Il comportamento è lo stesso di [SystemTimeToVariantTime](/windows/win32/api/oleauto/nf-oleauto-systemtimetovarianttime).

Se il valore di data o ora specificato dai parametri non è valido, lo stato di questo oggetto viene impostato su non valido e il valore di questo oggetto non viene modificato.

Ecco alcuni esempi di valori temporali:

|*nOre*|*nMin*|*nSec (Sec)*|Valore|
|-------------|------------|------------|-----------|
|1|3|3|01:03:03|
|23|45|0|23:45:00|
|25|30|0|Non valido|
|9|60|0|Non valido|

Di seguito sono riportati alcuni esempi di valori di data:

|*nAnno*|*nMese*|*nGiorno*|Valore|
|-------------|--------------|------------|-----------|
|1995|4|15|15 aprile 1995|
|1789|7|14|17 luglio 1789|
|1925|2|30|Non valido|
|10000|1|1|Non valido|

Per impostare solo la data, vedere [COleDateTime::SetDate](#setdate). Per impostare solo l'ora, vedere [COleDateTime::SetTime](#settime).

Per informazioni sulle funzioni membro che `COleDateTime` eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [GetStatus](#getstatus).

## <a name="coledatetimesetstatus"></a><a name="setstatus"></a>COleDateTime::SetStatus

Imposta lo stato `COleDateTime` di questo oggetto.

```
void SetStatus(DateTimeStatus status) throw();
```

### <a name="parameters"></a>Parametri

*status*<br/>
Nuovo valore di `COleDateTime` stato per questo oggetto.

### <a name="remarks"></a>Osservazioni

Il *status* valore del parametro `DateTimeStatus` status è definito dal `COleDateTime` tipo enumerato, definito all'interno della classe. Vedere [COleDateTime::GetStatus](#getstatus) per i dettagli.

> [!CAUTION]
> Questa funzione è per situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. Verrà utilizzato più spesso per impostare lo stato **su null** o **non valido.** L'operatore di assegnazione ([operatore )](#operator_eq)e [SetDateTime](#setdatetime) impostano lo stato dell'oggetto in base ai valori di origine.

### <a name="example"></a>Esempio

Vedere l'esempio per [GetStatus](#getstatus).

## <a name="coledatetimesettime"></a><a name="settime"></a>COleDateTime::SetTime

Imposta l'ora `COleDateTime` di questo oggetto.

```
int SetTime(
    int nHour,
    int nMin,
    int nSec) throw();
```

### <a name="parameters"></a>Parametri

*nHour*, *nMin*, *nSec*<br/>
Indicare i componenti temporali `COleDateTime` da copiare in questo oggetto.

### <a name="return-value"></a>Valore restituito

zero se il `COleDateTime` valore di questo oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è `DateTimeStatus` basato sul tipo enumerato. Per altre informazioni, vedere la funzione membro [SetStatus.For](#setstatus) more information, see the SetStatus member function.

### <a name="remarks"></a>Osservazioni

L'ora è impostata sui valori specificati. La data è impostata sulla data 0, ovvero il 30 dicembre 1899.

Vedere la tabella seguente per i limiti per i valori dei parametri:See the following table for bounds for the parameter values:

|Parametro|Bounds|
|---------------|------------|
|*nOre*|0 - 23|
|*nMin*|0 - 59|
|*nSec (Sec)*|0 - 59|

Se il valore di ora specificato dai parametri non è valido, lo stato di questo oggetto è impostato su non valido e il valore di questo oggetto non viene modificato.

Ecco alcuni esempi di valori temporali:

|*nOre*|*nMin*|*nSec (Sec)*|Valore|
|-------------|------------|------------|-----------|
|1|3|3|01:03:03|
|23|45|0|23:45:00|
|25|30|0|Non valido|
|9|60|0|Non valido|

Per impostare sia la data che l'ora, vedere [COleDateTime::SetDateTime](#setdatetime).

Per informazioni sulle funzioni membro che `COleDateTime` eseguono query sul valore di questo oggetto, vedere le seguenti funzioni membro:

- [GetDay](#getday)

- [Getmonth](#getmonth)

- [Getyear](#getyear)

- [GetHour](#gethour)

- [GetMinute (informazioni in base al valore](#getminute)

- [GetSecond](#getsecond)

- [GetDayOfWeek](#getdayofweek)

- [GetDayOfAnno](#getdayofyear)

Per ulteriori informazioni sui `COleDateTime` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [SetDate](#setdate).

## <a name="see-also"></a>Vedere anche

[Classe COleVariant](../../mfc/reference/colevariant-class.md)<br/>
[Classe CTime](../../atl-mfc-shared/reference/ctime-class.md)<br/>
[Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
