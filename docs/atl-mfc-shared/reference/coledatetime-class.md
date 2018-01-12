---
title: Classe COleDateTime | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
helpviewer_keywords:
- shared classes, COleDateTime
- time-only values
- Date data type, MFC encapsulation of
- COleDateTime class
- dates, handling in MFC
- time, handling in MFC
ms.assetid: e718f294-16ec-4649-88b6-a4dbae5178fb
caps.latest.revision: "34"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dbe0e831a644dfc09c6b4afb3c54f23b220850d3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="coledatetime-class"></a>COleDateTime (classe)
Incapsula il `DATE` tipo di dati che viene utilizzato nell'automazione OLE.  
  
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
|[COleDateTime:: Format](#format)|Genera una rappresentazione di stringa formattata di un `COleDateTime` oggetto.|  
|[COleDateTime::GetAsDBTIMESTAMP](#getasdbtimestamp)|Chiamare questo metodo per ottenere l'ora nel `COleDateTime` oggetto come un **DBTIMESTAMP** struttura dei dati.|  
|[COleDateTime::GetAsSystemTime](#getassystemtime)|Chiamare questo metodo per ottenere l'ora nel `COleDateTime` oggetto come un [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura dei dati.|  
|[COleDateTime::GetAsUDATE](#getasudate)|Chiamare questo metodo per ottenere l'ora nel `COleDateTime` come un **UDATE** struttura dei dati.|  
|[COleDateTime::GetCurrentTime](#getcurrenttime)|Crea un `COleDateTime` oggetto che rappresenta l'ora corrente (funzione membro statica).|  
|[COleDateTime::GetDay](#getday)|Restituisce il giorno `COleDateTime` rappresenta (1-31).|  
|[COleDateTime::GetDayOfWeek](#getdayofweek)|Restituisce il giorno della settimana `COleDateTime` oggetto (domenica = 1).|  
|[COleDateTime::GetDayOfYear](#getdayofyear)|Restituisce il giorno dell'anno `COleDateTime` oggetto (1 gennaio = 1).|  
|[COleDateTime::GetHour](#gethour)|Restituisce l'ora di questo `COleDateTime` oggetto (0 - 23).|  
|[COleDateTime::GetMinute](#getminute)|Restituisce il minuto questo `COleDateTime` oggetto (0 - 59).|  
|[COleDateTime::GetMonth](#getmonth)|Restituisce il mese `COleDateTime` rappresenta (1-12).|  
|[COleDateTime::GetSecond](#getsecond)|Restituisce il secondo questo `COleDateTime` oggetto (0 - 59).|  
|[COleDateTime::GetStatus](#getstatus)|Ottiene lo stato (validità) di questo `COleDateTime` oggetto.|  
|[COleDateTime::GetYear](#getyear)|Restituisce l'anno `COleDateTime` oggetto rappresenta.|  
|[COleDateTime::ParseDateTime](#parsedatetime)|Legge un valore data/ora da una stringa e imposta il valore di `COleDateTime`.|  
|[COleDateTime::SetDate](#setdate)|Imposta il valore di questo `COleDateTime` oggetto sul valore specificato solo Data.|  
|[COleDateTime::SetDateTime](#setdatetime)|Imposta il valore di questo `COleDateTime` oggetto con il valore di data e l'ora specificate.|  
|[COleDateTime::SetStatus](#setstatus)|Imposta lo stato (validità) di questo `COleDateTime` oggetto.|  
|[COleDateTime::SetTime](#settime)|Imposta il valore di questo `COleDateTime` oggetto sul valore basate sul tempo specificato.|  
  
### <a name="public-operators"></a>Operatori pubblici  

|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTime:: operator = =, COleDateTime:: operator < e così via.](#coledatetime_relational_operators)|Confrontare due `COleDateTime` valori.|  
|[COleDateTime:: operator + COleDateTime:: operator-](#operator_add_-)|Addizione e sottrazione `COleDateTime` valori.|  
|[+ = COleDateTime:: operator, COleDateTime:: operator =](#operator_add_eq_-_eq)|Addizione e sottrazione un `COleDateTime` questo valore `COleDateTime` oggetto.|  
|[COleDateTime:: operator =](#operator_eq)|Copia un `COleDateTime` valore.|  
|[COleDateTime:: operator data, data COleDateTime:: operator *](#operator_date)|Converte un `COleDateTime` valore in un `DATE` o `DATE*`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTime::m_dt](#m_dt)|Contiene l'oggetto sottostante **data** per questo `COleDateTime` oggetto.|  
|[COleDateTime::m_status](#m_status)|Contiene lo stato di questo `COleDateTime` oggetto.|  
  
## <a name="remarks"></a>Note  
 `COleDateTime`non dispone di una classe di base.  
  
 È uno dei possibili tipi per il [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) tipo di dati di automazione OLE. Oggetto `COleDateTime` valore rappresenta una data assoluta e il valore di ora.  
  
 Il `DATE` tipo viene implementato come un valore a virgola mobile. Giorni vengono misurati dal 30 dicembre 1899, ogni notte a mezzanotte. Nella tabella seguente mostra alcune date e i relativi valori associati:  
  
|Data|Valore|  
|----------|-----------|  
|Mezzanotte del 29 dicembre 1899,|-1.0|  
|29 dicembre 1899, m 6|-1.25|  
|Dal 30 dicembre 1899, mezzanotte|0.0|  
|Mezzanotte del 31 dicembre 1899,|1.0|  
|1 gennaio 1900, 6 ore|2.25|  
  
> [!CAUTION]
>  Nota che anche se i valori del giorno diventano negativi prima di mezzanotte in 30 dicembre 1899, i valori di ora del giorno non nella tabella precedente. Ad esempio 6:00 AM è sempre rappresentato da un valore frazionario 0,25 indipendentemente dal fatto che il valore integer che rappresenta il giorno sia positivo (dopo il 30 dicembre 1899) o negativo (prima del 30 dicembre 1899). Ciò significa che un semplice confronto punto mobile erroneamente ordinare un `COleDateTime` che rappresenta le 6.00 29/12/1899 come **in un secondo momento** rispetto a uno che rappresenta 7:00 AM nello stesso giorno.  
  
 La `COleDateTime` classe gestisce le date dal 1 gennaio 100 e il 31 dicembre 9999. La `COleDateTime` classe utilizza il calendario gregoriano; non supporta date basate sulla datazione giuliana. `COleDateTime`Ignora l'ora legale. (Vedere [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).)  
  
> [!NOTE]
>  È possibile utilizzare il `%y` formato per recuperare un anno a due cifre solo per le date a partire da 1900. Se si utilizza il `%y` formato in una data precedente 1900, il codice genera un errore di ASSERZIONE.  
  
 Questo tipo viene anche utilizzato per rappresentare i valori solo data o ora di sola lettura. Per convenzione, la data 0 (30 dicembre 1899) viene utilizzata per i valori di ora e ora 00:00 (mezzanotte) viene utilizzato per i valori di Data.  
  
 Se si crea un `COleDateTime` oggetto utilizzando una data minore di 100, la data è accettate, ma le successive chiamate a `GetYear`, `GetMonth`, `GetDay`, `GetHour`, `GetMinute`, e `GetSecond` esito negativo e restituiscono -1. In precedenza, è possibile utilizzare anni a due cifre, ma le date devono essere 100 o più grande in MFC 4.2 e versioni successive.  
  
 Per evitare problemi, specificare una data a quattro cifre. Ad esempio:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#1](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_1.cpp)]  
  
 Operazioni aritmetiche di base per il `COleDateTime` valori utilizzano la classe complementare [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md). `COleDateTimeSpan`valori definiscono un intervallo di tempo. La relazione tra queste classi è simile a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).  
  
 Per ulteriori informazioni sul `COleDateTime` e `COleDateTimeSpan` classi, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLComTime.h  
  
##  <a name="coledatetime_relational_operators"></a>Operatori relazionali COleDateTime  
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
 `date`  
 Il **COleDateTime** oggetto da confrontare.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Si verificherà un ATLASSERT se uno dei due operandi non è valido.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#13](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_2.cpp)]  
  
### <a name="example"></a>Esempio  
 Gli operatori  **>=** ,  **\< =** ,  **>** , e  **<** , genera un'asserzione se il `COleDateTime` oggetto è impostato su null.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#170](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_3.cpp)]  
  
##  <a name="coledatetime"></a>COleDateTime::COleDateTime  
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
 `dateSrc`  
 Un oggetto esistente `COleDateTime` oggetto da copiare nel nuovo `COleDateTime` oggetto.  
  
 *varSrc*  
 Un oggetto esistente **VARIANT** struttura dei dati (probabilmente un `COleVariant` oggetto) da convertire in un valore data/ora ( `VT_DATE`) e copiare nel nuovo `COleDateTime` oggetto.  
  
 `dtSrc`  
 Una data/ora ( **data**) valore da copiare nel nuovo `COleDateTime` oggetto.  
  
 `timeSrc`  
 Oggetto `time_t` o **__time64_t** valore da convertire in un valore data/ora e copiare nel nuovo `COleDateTime` oggetto.  
  
 *systimeSrc*  
 Oggetto `SYSTEMTIME` struttura convertito in un valore data/ora e la copia nel nuovo `COleDateTime` oggetto.  
  
 `filetimeSrc`  
 Oggetto `FILETIME` struttura convertito in un valore data/ora e la copia nel nuovo `COleDateTime` oggetto. Si noti che `FILETIME` utilizza Coordinated Universal Time (UTC), pertanto se si passa la struttura di un'ora locale, i risultati saranno non corretti. Vedere [volte File](http://msdn.microsoft.com/library/windows/desktop/ms724290) in Windows SDK per ulteriori informazioni.  
  
 `nYear`, `nMonth`, `nDay`, `nHour`, `nMin`, `nSec`  
 Indicare i valori di data e ora da copiare nel nuovo `COleDateTime` oggetto.  
  
 `wDosDate`, `wDosTime`  
 Valori di data e ora di MS-DOS per essere convertito in un valore data/ora e copiare nel nuovo `COleDateTime` oggetto.  
  
 `dbts`  
 Un riferimento a un [DBTimeStamp](https://msdn.microsoft.com/library/system.data.oledb.oledbtype) struttura che contiene l'ora locale corrente.  
  
### <a name="remarks"></a>Note  
 Tutti questi costruttori creano nuovi `COleDateTime` oggetti inizializzati sul valore specificato. La tabella seguente illustra gli intervalli validi per ogni componente di data e ora:  
  
|Componente di data/ora|Intervallo valido|  
|--------------------------|-----------------|  
|anno|100 - 9999|  
|mese|0 - 12|  
|giorno|0 - 31|  
|Ora|0 - 23|  
|Minuto|0 - 59|  
|Secondo|0 - 59|  
  
 Si noti che il limite effettivo per il componente giorno varia in base ai componenti di mese e anno. Per informazioni dettagliate, vedere il **SetDate** o `SetDateTime` funzioni membro.  
  
 Ecco una breve descrizione di ogni costruttore:  
  
- `COleDateTime(`**)** Costruisce una `COleDateTime` oggetto inizializzato a 0 (mezzanotte, 30 dicembre 1899).  
  
- `COleDateTime(``dateSrc` **)** Costruisce una `COleDateTime` oggetto da un oggetto esistente `COleDateTime` oggetto.  
  
- `COleDateTime(`*varSrc* **)** costruisce una `COleDateTime` oggetto. Tenta di convertire un `VARIANT` struttura o [COleVariant](../../mfc/reference/colevariant-class.md) oggetto da una data/ora ( `VT_DATE`) valore. Se la conversione ha esito positivo, il valore convertito viene copiato nel nuovo `COleDateTime` oggetto. In caso contrario, il valore di `COleDateTime` oggetto è impostato su 0 (mezzanotte, 30 dicembre 1899) e il relativo stato di non valido.  
  
- `COleDateTime(``dtSrc` **)** Costruisce una `COleDateTime` dell'oggetto da un **data** valore.  
  
- `COleDateTime(``timeSrc` **)** Costruisce una `COleDateTime` dell'oggetto da un `time_t` valore.  
  
- `COleDateTime(`*systimeSrc* **)** costruisce una `COleDateTime` dell'oggetto da un `SYSTEMTIME` valore.  
  
- `COleDateTime(``filetimeSrc` **)** Costruisce una `COleDateTime` dell'oggetto da un `FILETIME` valore. . Si noti che `FILETIME` utilizza Coordinated Universal Time (UTC), pertanto se si passa la struttura di un'ora locale, i risultati saranno non corretti. Vedere [volte File](http://msdn.microsoft.com/library/windows/desktop/ms724290) in Windows SDK per ulteriori informazioni.  
  
- `COleDateTime(``nYear`, `nMonth`, `nDay`, `nHour`, `nMin`, `nSec` **)** Costruisce una `COleDateTime` oggetto dai valori numerici specificati.  
  
- `COleDateTime(``wDosDate`, `wDosTime` **)** Costruisce una `COleDateTime` oggetto dai valori di data e ora MS-DOS specificati.  
  
 Per ulteriori informazioni sul `time_t` del tipo di dati, vedere il [ora](../../c-runtime-library/reference/time-time32-time64.md) funzionare nel *riferimenti alla libreria di Run-Time*.  
  
 Per ulteriori informazioni, vedere il [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) e [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) strutture in Windows SDK.  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
> [!NOTE]
>  Il costruttore usando **DBTIMESTAMP** parametro è disponibile solo quando viene incluso OleDb.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#2](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_4.cpp)]  
  
##  <a name="format"></a>COleDateTime:: Format  
 Crea una rappresentazione del valore data/ora formattata.  
  
```
CString Format(DWORD dwFlags = 0,  LCID lcid = LANG_USER_DEFAULT) const;
CString Format(LPCTSTR lpszFormat) const;
CString Format(UINT nFormatID) const;
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Indica uno dei flag delle impostazioni locali seguenti:  
  
- `LOCALE_NOUSEROVERRIDE`Utilizzare le impostazioni locali di sistema predefinito, anziché le impostazioni utente personalizzate.  
  
- `VAR_TIMEVALUEONLY`Ignorare la parte relativa alla data durante l'analisi.  
  
- `VAR_DATEVALUEONLY`Ignorare la porzione dell'ora durante l'analisi.  
  
 `lcid`  
 Indica l'ID delle impostazioni locali da utilizzare per la conversione. Per ulteriori informazioni sugli identificatori di lingua, vedere [identificatori di lingua](http://msdn.microsoft.com/library/windows/desktop/dd318691).  
  
 `lpszFormat`  
 Formattazione di una stringa simile al `printf` stringa di formattazione. Ogni codice, preceduto da una percentuale di formattazione ( `%`) accesso, viene sostituito dal corrispondente `COleDateTime` componente. Altri caratteri nella stringa di formattazione vengono copiati invariata la stringa restituita. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per ulteriori informazioni. Il valore e il significato dei codici di formattazione per `Format` sono:  
  
- `%H`Ore del giorno corrente  
  
- `%M`Minuti dell'ora corrente  
  
- `%S`Secondi nel minuto corrente  
  
- `%%`Segno di percentuale  
  
 `nFormatID`  
 L'ID di risorsa per la stringa di formato controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene il valore di data/ora formattati.  
  
### <a name="remarks"></a>Note  
 Se lo stato di questo `COleDateTime` oggetto è null, il valore restituito è una stringa vuota. Se lo stato è valido, la stringa restituita è specificata dalla risorsa stringa `ATL_IDS_DATETIME_INVALID`.  
  
 Una breve descrizione dei tre formati per la funzione seguente:  
  
 `Format`( `dwFlags`, `lcid`)  
 Questo modulo formatta il valore utilizzando le specifiche del linguaggio (ID impostazioni locali) per data e ora. Utilizzando i parametri predefiniti, questo modulo verrà stampata la data e l'ora, a meno che la porzione dell'ora è 0 (mezzanotte), nel qual caso verrà stampata solo la data o la parte relativa alla data è 0 (30 dicembre 1899), nel qual caso il titolo verrà visualizzato solo l'ora. Se il valore di data/ora è 0 (30 dicembre 1899, mezzanotte), questo modulo con i parametri predefiniti verrà stampati mezzanotte.  
  
 `Format`( `lpszFormat`)  
 Questo modulo formatta il valore utilizzando la stringa di formato che contiene i codici di formattazione speciale che sono preceduti da un segno di percentuale (%), come in `printf`. La stringa di formattazione viene passata come parametro alla funzione. Per ulteriori informazioni sui codici di formattazione, vedere [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) in riferimenti alla libreria di Run-Time.  
  
 `Format`( `nFormatID`)  
 Questo modulo formatta il valore utilizzando la stringa di formato che contiene i codici di formattazione speciale che sono preceduti da un segno di percentuale (%), come in `printf`. La stringa di formattazione è una risorsa. L'ID della risorsa stringa viene passato come parametro. Per ulteriori informazioni sui codici di formattazione, vedere [strftime, wcsftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) nel *riferimenti alla libreria di Run-Time*.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#3](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_5.cpp)]  
  
##  <a name="getasdbtimestamp"></a>COleDateTime::GetAsDBTIMESTAMP  
 Chiamare questo metodo per ottenere l'ora nel `COleDateTime` oggetto come un **DBTIMESTAMP** struttura dei dati.  
  
```
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dbts`  
 Un riferimento a un [DBTimeStamp](https://msdn.microsoft.com/library/system.data.oledb.oledbtype) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Archivia il tempo risultante nella struttura `dbts` a cui viene fatto riferimento. Il **DBTIMESTAMP** struttura dati inizializzata da questa funzione avrà il **frazione** membro impostato su zero.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#4](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_6.cpp)]  
  
##  <a name="getassystemtime"></a>COleDateTime::GetAsSystemTime  
 Chiamare questo metodo per ottenere l'ora nel `COleDateTime` oggetto come un `SYSTEMTIME` struttura dei dati.  
  
```
bool GetAsSystemTime(SYSTEMTIME& sysTime) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *sysTime*  
 Un riferimento a un [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura per ricevere il valore di data/ora convertita dal `COleDateTime` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se ha esito positivo. **false** se la conversione non riesce o se il `COleDateTime` oggetto **NULL** o non valido.  
  
### <a name="remarks"></a>Note  
 `GetAsSystemTime`Archivia il tempo risultante in di riferimento *sysTime* oggetto. Il `SYSTEMTIME` struttura dati inizializzata da questa funzione avrà il **wMilliseconds** membro impostato su zero.  
  
 Vedere [GetStatus](#getstatus) per ulteriori informazioni sulle informazioni di stato mantenuto attivo un `COleDateTime` oggetto.  
  
##  <a name="getasudate"></a>COleDateTime::GetAsUDATE  
 Chiamare questo metodo per ottenere l'ora nel `COleDateTime` oggetto come un **UDATE** struttura dei dati.  
  
```
bool GetAsUDATE(UDATE& udate) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `udate`  
 Un riferimento a un **UDATE** struttura per ricevere il valore di data/ora convertita dal `COleDateTime` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se ha esito positivo. **false** se la conversione non riesce o se il `COleDateTime` oggetto **NULL** o non valido.  
  
### <a name="remarks"></a>Note  
 Oggetto **UDATE** struttura rappresenta una data di "decompressa".  
  
##  <a name="getcurrenttime"></a>COleDateTime::GetCurrentTime  
 Chiamare questa funzione membro statica per restituire il valore di data/ora corrente.  
  
```
static COleDateTime WINAPI GetCurrentTime() throw();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#5](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_7.cpp)]  
  
##  <a name="getday"></a>COleDateTime::GetDay  
 Ottiene il giorno del mese rappresentato da questo valore di data/ora.  
  
```
int GetDay() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il giorno del mese rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il giorno.  
  
### <a name="remarks"></a>Note  
 Intervallo di valori restituiti valido compreso tra 1 e 31.  
  
 Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#6](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_8.cpp)]  
  
##  <a name="getdayofweek"></a>COleDateTime::GetDayOfWeek  
 Ottiene il giorno del mese rappresentato da questo valore di data/ora.  
  
```
int GetDayOfWeek() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il giorno della settimana rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il giorno della settimana.  
  
### <a name="remarks"></a>Note  
 I valori restituiscono valido compreso tra 1 e 7, dove 1 = domenica, 2 = lunedì e così via.  
  
 Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfYear](#getdayofyear)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#7](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_9.cpp)]  
  
##  <a name="getdayofyear"></a>COleDateTime::GetDayOfYear  
 Ottiene il giorno dell'anno rappresentato da questo valore di data/ora.  
  
```
int GetDayOfYear() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il giorno dell'anno rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il giorno dell'anno.  
  
### <a name="remarks"></a>Note  
 Valori di ritorno valido compreso tra 1 e 366, dove 1 gennaio = 1.  
  
 Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#8](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_10.cpp)]  
  
##  <a name="gethour"></a>COleDateTime::GetHour  
 Ottiene l'ora rappresentata da questo valore di data/ora.  
  
```
int GetHour() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ora rappresentata dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere l'ora.  
  
### <a name="remarks"></a>Note  
 Intervallo di valori restituiti valido compreso tra 0 e 23.  
  
 Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#9](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_11.cpp)]  
  
##  <a name="getminute"></a>COleDateTime::GetMinute  
 Ottiene il minuto rappresentato da questo valore di data/ora.  
  
```
int GetMinute() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il minuto rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il minuto.  
  
### <a name="remarks"></a>Note  
 Intervallo di valori restituiti valido compreso tra 0 e 59.  
  
 Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetHour](#gethour).  
  
##  <a name="getmonth"></a>COleDateTime::GetMonth  
 Ottiene il mese rappresentato da questo valore di data/ora.  
  
```
int GetMonth() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Mese rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il mese.  
  
### <a name="remarks"></a>Note  
 Intervallo di valori restituiti valido compreso tra 1 e 12.  
  
 Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetDay](#getday).  
  
##  <a name="getsecond"></a>COleDateTime::GetSecond  
 Ottiene il secondo rappresentato da questo valore di data/ora.  
  
```
int GetSecond() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il secondo rappresentato dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere il secondo.  
  
### <a name="remarks"></a>Note  
 Intervallo di valori restituiti valido compreso tra 0 e 59.  
  
> [!NOTE]
>  La `COleDateTime` classe non supporta i secondi di compensazione.  
  
 Per ulteriori informazioni sull'implementazione per `COleDateTime`, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
 Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetHour](#gethour).  
  
##  <a name="getstatus"></a>COleDateTime::GetStatus  
 Ottiene lo stato (validità) di un determinato `COleDateTime` oggetto.  
  
```
DateTimeStatus GetStatus() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce lo stato di questo `COleDateTime` valore. Se si chiama **GetStatus** su un `COleDateTime` oggetto costruito con l'impostazione predefinita, verrà restituito valido. Se si chiama **GetStatus** su un `COleDateTime` oggetto inizializzato con il costruttore impostato su null, **GetStatus** restituirà null. Vedere **osservazioni** per ulteriori informazioni.  
  
### <a name="remarks"></a>Note  
 Il valore restituito è definito dal **DateTimeStatus** tipo enumerato, definito all'interno di `COleDateTime` classe.  
  
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
  
- `COleDateTime::error`Indica che si è verificato un errore durante il tentativo di ottenere una parte del valore data/ora.  
  
- **COleDateTime::valid** indica che questo `COleDateTime` oggetto è valido.  
  
- **COleDateTime::invalid** indica che questo `COleDateTime` oggetto non è valido; ovvero, il relativo valore sia corretto.  
  
- **COleDateTime::null** indica che questo `COleDateTime` oggetto è null, vale a dire che è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di C++ database **NULL**.)  
  
 Lo stato di un `COleDateTime` oggetto non è valido nei casi seguenti:  
  
-   Se il relativo valore è impostato da un **VARIANT** o `COleVariant` valore che non è stato possibile convertire un valore data/ora.  
  
-   Se il relativo valore è impostato da un `time_t`, `SYSTEMTIME`, o `FILETIME` valore che non è stato possibile convertire un valore data/ora valido.  
  
-   Se il relativo valore viene impostato dal `SetDateTime` con valori di parametro non valido.  
  
-   Se questo oggetto è verificato un overflow o underflow durante un'operazione aritmetica di assegnazione, vale a dire, `+=` o `-=`.  
  
-   Se questo oggetto è stato assegnato un valore non valido.  
  
-   Se lo stato di questo oggetto è stato impostato in modo esplicito non valido tramite `SetStatus`.  
  
 Per ulteriori informazioni sulle operazioni che è possibile impostare lo stato non valido, vedere le seguenti funzioni membro:  
  
- [COleDateTime](#coledatetime)  
  
- [SetDateTime](#setdatetime)  
  
- [operatore +, -](#operator_add_-)  
  
- [+ = (operatore)-=](#operator_add_eq_-_eq)  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#10](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_12.cpp)]  
  
##  <a name="getyear"></a>COleDateTime::GetYear  
 Ottiene l'anno rappresentata da questo valore di data/ora.  
  
```
int GetYear() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'anno rappresentata dal valore di questo `COleDateTime` oggetto o `COleDateTime::error` se non è stato possibile ottenere l'anno.  
  
### <a name="remarks"></a>Note  
 Intervallo di valori restituiti valido compreso tra 100 e 9999, che include il secolo.  
  
 Per informazioni su altre funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetDay](#getday).  
  
##  <a name="m_dt"></a>COleDateTime::m_dt  
 Sottostante **data** struttura per questo `COleDateTime` oggetto.  
  
```
DATE m_dt;
```  
  
### <a name="remarks"></a>Note  
  
> [!CAUTION]
>  Modifica il valore di **data** oggetto a cui accede il puntatore restituito da questa funzione verrà modificato il valore di questo `COleDateTime` oggetto. Non viene modificato lo stato di questo `COleDateTime` oggetto.  
  
 Per ulteriori informazioni sull'implementazione del **data** dell'oggetto, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="m_status"></a>COleDateTime::m_status  
 Contiene lo stato di questo `COleDateTime` oggetto.  
  
```
DateTimeStatus m_status;
```  
  
### <a name="remarks"></a>Note  
 Il tipo di questo membro dati è di tipo enumerato **DateTimeStatus**, cui è definito all'interno di `COleDateTime` classe. Vedere [COleDateTime::GetStatus](#getstatus) per informazioni dettagliate.  
  
> [!CAUTION]
>  Questo membro dati è per le situazioni di programmazione avanzate. È consigliabile utilizzare le funzioni membro inline [GetStatus](#getstatus) e [SetStatus](#setstatus). Vedere `SetStatus` per ulteriore avvertenze relative in modo esplicito l'impostazione di questo membro dati.  
  
##  <a name="operator_eq"></a>COleDateTime:: operator =  
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
 Questi operatori di assegnazione di overload copiare il valore di data/ora di origine in questo `COleDateTime` oggetto. Una breve descrizione di ognuna di queste overload segue gli operatori di assegnazione:  
  
- **operatore = (** `dateSrc` **)** il valore e lo stato dell'operando vengono copiati in questa `COleDateTime` oggetto.  
  
- **operatore = (** *varSrc* **)** se la conversione del [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) valore (o [COleVariant](../../mfc/reference/colevariant-class.md) oggetto) a (una data e ora `VT_DATE`) viene completata correttamente, il valore convertito viene copiato in questo `COleDateTime` oggetto e il relativo stato è impostato su valido. Se la conversione non riesce, il valore di questo oggetto è impostato su zero (30 dicembre 1899, mezzanotte) e il relativo stato di non valido.  
  
- **operatore = (** `dtSrc` **)** il **data** valore viene copiato in questo `COleDateTime` oggetto e il relativo stato è impostato su valido.  
  
- **operatore = (** `timeSrc` **)** il `time_t` o **__time64_t** valore viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido. Se ha esito negativo, viene impostato come non valida.  
  
- **operatore = (** *systimeSrc* **)** il [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) valore viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido. Se ha esito negativo, viene impostato come non valida.  
  
- **operatore = (** `udate` **)** il **UDATE** valore viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido. Se ha esito negativo, viene impostato come non valida. Oggetto **UDATE** struttura rappresenta una data di "decompressa". Vedere la funzione [VarDateFromUdate](http://msdn.microsoft.com/en-us/1c924ac5-b896-49e1-9ccf-825ac7a030c8) per altri dettagli.  
  
- **operatore = (** `filetimeSrc` **)** il [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) valore viene convertito e copiato in questo `COleDateTime` oggetto. Se la conversione ha esito positivo, lo stato di questo oggetto è impostato su valido. in caso contrario è impostata come non valida. `FILETIME`utilizza il tempo universale coordinato (UTC), in modo che se si passa la struttura di un'ora UTC, i risultati verranno convertiti dall'ora UTC in ora locale e verranno archiviati come ora variante. Questo comportamento è uguale a quello di Visual C++ 6.0 e Visual C++ .NET 2003 SP2. Vedere [volte File](http://msdn.microsoft.com/library/windows/desktop/ms724290) in Windows SDK per ulteriori informazioni.  
  
 Per ulteriori informazioni, vedere il [VARIANT](http://msdn.microsoft.com/en-us/e305240e-9e11-4006-98cc-26f4932d2118) voce in Windows SDK.  
  
 Per ulteriori informazioni sul `time_t` del tipo di dati, vedere il [ora](../../c-runtime-library/reference/time-time32-time64.md) funzionare nel *riferimenti alla libreria di Run-Time*.  
  
 Per ulteriori informazioni, vedere il [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) e [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) strutture in Windows SDK.  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="operator_add_-"></a>COleDateTime:: operator +, -  
 Addizione e sottrazione **ColeDateTime** valori.  
  
```
COleDateTime operator+(COleDateTimeSpan dateSpan) const throw();
COleDateTime operator-(COleDateTimeSpan dateSpan) const throw();
COleDateTimeSpan operator-(const COleDateTime& date) const throw();
```  
  
### <a name="remarks"></a>Note  
 `COleDateTime`gli oggetti rappresentano i casi in assoluto. [COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md) oggetti rappresentano orari relativi. I primi due operatori consentono di aggiungere e sottrarre un `COleDateTimeSpan` valore da un `COleDateTime` valore. Il terzo operatore consente di sottrarre uno `COleDateTime` valore da un altro per produrre un `COleDateTimeSpan` valore.  
  
 Se uno degli operandi è null, lo stato dell'oggetto risultante `COleDateTime` valore è null.  
  
 Se il valore risultante `COleDateTime` non rientra nei limiti dei valori accettabili, lo stato di tale valore `COleDateTime` valore non è valido.  
  
 Se uno degli operandi non è valido e l'altro non è null, lo stato dell'oggetto risultante `COleDateTime` valore non è valido.  
  
 Il  **+**  e  **-**  operatori genera un'asserzione se il `COleDateTime` oggetto è impostato su null. Vedere [operatori relazionali COleDateTime](#coledatetime_relational_operators) per un esempio.  
  
 Per ulteriori informazioni sui valori di stato valido, non valido e null, vedere il [m_status](#m_status) variabile membro.  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#12](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_13.cpp)]  
  
##  <a name="operator_add_eq_-_eq"></a>+ = COleDateTime:: operator-=  
 Addizione e sottrazione un **ColeDateTime** questo valore `COleDateTime` oggetto.  
  
```
COleDateTime& operator+=(COleDateTimeSpan dateSpan) throw();
COleDateTime& operator-=(COleDateTimeSpan dateSpan) throw();
```  
  
### <a name="remarks"></a>Note  
 Questi operatori consentono di aggiungere e sottrarre un `COleDateTimeSpan` valore da e verso questo `COleDateTime`. Se uno degli operandi è null, lo stato dell'oggetto risultante `COleDateTime` valore è null.  
  
 Se il valore risultante `COleDateTime` non rientra nei limiti dei valori accettabili, lo stato di questo valore `COleDateTime` è impostato per non valido.  
  
 Se uno degli operandi non è valido e l'altro non lo è null, lo stato dell'oggetto risultante `COleDateTime` valore non è valido.  
  
 Per ulteriori informazioni sui valori di stato valido, non valido e null, vedere il [m_status](#m_status) variabile membro.  
  
 Il  **+=**  e  **-=**  operatori genera un'asserzione se il `COleDateTime` oggetto è impostato su null. Vedere [operatori relazionali COleDateTime](#coledatetime_relational_operators) per un esempio.  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="operator_date"></a>Data COleDateTime:: operator  
 Converte un **ColeDateTime** valore in un **data**.  
  
```
operator DATE() const throw();
```  
  
### <a name="remarks"></a>Note  
 Questo operatore restituisce un **data** il cui valore viene copiato da questo oggetto `COleDateTime` oggetto. Per ulteriori informazioni sull'implementazione del **data** dell'oggetto, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
 Il **data** operatore genera un'asserzione se il `COleDateTime` oggetto è impostato su null. Vedere [operatori relazionali COleDateTime](#coledatetime_relational_operators) per un esempio.  
  
##  <a name="parsedatetime"></a>COleDateTime::ParseDateTime  
 Analizza una stringa per leggere un valore data/ora.  
  
```
bool ParseDateTime(  
 LPCTSTR lpszDate,
 DWORD dwFlags = 0,
 LCID lcid = LANG_USER_DEFAULT) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszDate`  
 Puntatore alla stringa con terminazione null che deve essere analizzato. Per informazioni dettagliate, vedere la sezione Osservazioni.  
  
 `dwFlags`  
 Indica i flag per le impostazioni locali e l'analisi. Uno o più dei flag seguenti:  
  
- **LOCALE_NOUSEROVERRIDE** utilizzare le impostazioni locali predefinite di sistema piuttosto che le impostazioni utente personalizzate.  
  
- **VAR_TIMEVALUEONLY** ignorare la parte relativa alla data durante l'analisi.  
  
- **VAR_DATEVALUEONLY** ignora la porzione dell'ora durante l'analisi.  
  
 `lcid`  
 Indica l'ID delle impostazioni locali da utilizzare per la conversione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la stringa è stata convertita correttamente in un valore data/ora, in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 Valore se la stringa è stata convertita correttamente in una data/ora, il valore di questo `COleDateTime` oggetto è impostato su tale valore e lo stato su valido.  
  
> [!NOTE]
>  I valori di anno devono rientrare tra 100 e 9999 (inclusi).  
  
 Il `lpszDate` parametro può assumere una varietà di formati. Ad esempio, le stringhe seguenti contengono formati di data/ora accettabile:  
  
 `"25 January 1996"`  
  
 `"8:30:00"`  
  
 `"20:30:00"`  
  
 `"January 25, 1996 8:30:00"`  
  
 `"8:30:00 Jan. 25, 1996"`  
  
 `"1/25/1996 8:30:00"  // always specify the full year, even in a 'short date' format`  
  
 Si noti che l'ID impostazioni locali influirà anche se il formato della stringa è accettabile per la conversione in un valore data/ora.  
  
 In caso di **VAR_DATEVALUEONLY**, l'ora in cui è impostato su 0 ora o la mezzanotte. In caso di **VAR_TIMEVALUEONLY**, la data è impostato su data 0, vale a dire 30 dicembre 1899.  
  
 Se non è possibile convertire la stringa su un valore data/ora o se si è verificato un overflow numerico, lo stato di questo `COleDateTime` oggetto non è valido.  
  
 Per ulteriori informazioni sui limiti e di implementazione per `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="setdate"></a>COleDateTime::SetDate  
 Imposta la data di questo `COleDateTime` oggetto.  
  
```
int SetDate(  
 int nYear,
 int nMonth,
 int nDay) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nYear`, `nMonth`, `nDay`  
 Indicare i componenti della data deve essere copiato `COleDateTime` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se il valore di questo `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è basato sul **DateTimeStatus** tipo enumerato. Per ulteriori informazioni, vedere il [SetStatus](#setstatus) funzione membro.  
  
### <a name="remarks"></a>Note  
 La data viene impostata sui valori specificati. L'ora viene ora 0, la mezzanotte.  
  
 Vedere la tabella seguente per i limiti per i valori dei parametri:  
  
|Parametro|Limiti|  
|---------------|------------|  
|`nYear`|100 - 9999|  
|`nMonth`|1 - 12|  
|`nDay`|0 - 31|  
  
 Se il giorno del mese causa l'overflow, viene convertito nel giorno del mese successivo e il mese corretto e/o anno viene incrementato di conseguenza. Un valore del giorno pari a zero indica l'ultimo giorno del mese precedente. Il comportamento è identico `SystemTimeToVariantTime`.  
  
 Se il valore di data specificato dai parametri non è valido, lo stato di questo oggetto è impostato su **COleDateTime::invalid**. È consigliabile utilizzare [GetStatus](#getstatus) per verificare la validità del **data** valore e non deve presupporre che il valore di [m_dt](#m_dt) rimarrà invariato.  
  
 Di seguito sono riportati alcuni esempi di valori di data:  
  
|`nYear`|`nMonth`|`nDay`|Valore|  
|-------------|--------------|------------|-----------|  
|2000|2|29|29 febbraio 2000|  
|1776|7|4|4 luglio 1776|  
|1925|4|35|35 aprile 1925 (data non valida)|  
|10000|1|1|1 ° gennaio 10000 (data non valida)|  
  
 Per impostare sia data e ora, vedere [COleDateTime::SetDateTime](#setdatetime).  
  
 Per informazioni sulle funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#11](../../atl-mfc-shared/codesnippet/cpp/coledatetime-class_14.cpp)]  
  
##  <a name="setdatetime"></a>COleDateTime::SetDateTime  
 Imposta la data e ora di questo `COleDateTime` oggetto.  
  
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
 `nYear`, `nMonth`, `nDay`, `nHour`, `nMin`, `nSec`  
 Indicare i componenti di data e ora deve essere copiato `COleDateTime` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se il valore di questo `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è basato sul **DateTimeStatus** tipo enumerato. Per ulteriori informazioni, vedere il [SetStatus](#setstatus) funzione membro.  
  
### <a name="remarks"></a>Note  
 Vedere la tabella seguente per i limiti per i valori dei parametri:  
  
|Parametro|Limiti|  
|---------------|------------|  
|`nYear`|100 - 9999|  
|`nMonth`|1 - 12|  
|`nDay`|0 - 31|  
|`nHour`|0 - 23|  
|`nMin`|0 - 59|  
|`nSec`|0 - 59|  
  
 Se il giorno del mese causa l'overflow, viene convertito nel giorno del mese successivo e il mese corretto e/o anno viene incrementato di conseguenza. Un valore del giorno pari a zero indica l'ultimo giorno del mese precedente. Il comportamento è identico [SystemTimeToVariantTime](http://msdn.microsoft.com/en-us/d9d69521-9b33-4fc5-8a1c-929f216db450).  
  
 Se il valore di data o ora specificato dai parametri non è valido, che lo stato di questo oggetto è impostato su valido e il valore di questo oggetto non viene modificato.  
  
 Di seguito sono riportati alcuni esempi di valori di ora:  
  
|`nHour`|`nMin`|`nSec`|Valore|  
|-------------|------------|------------|-----------|  
|1|3|3|01:03:03|  
|23|45|0|23:45:00|  
|25|30|0|Non valido|  
|9|60|0|Non valido|  
  
 Di seguito sono riportati alcuni esempi di valori di data:  
  
|`nYear`|`nMonth`|`nDay`|Valore|  
|-------------|--------------|------------|-----------|  
|1995|4|15|15 aprile 1995|  
|1789|7|14|17 luglio 1789|  
|1925|2|30|Non valido|  
|10000|1|1|Non valido|  
  
 Per impostare solo la data, vedere [COleDateTime::SetDate](#setdate). Per impostare solo l'ora, vedere [COleDateTime::SetTime](#settime).  
  
 Per informazioni sulle funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetStatus](#getstatus).  
  
##  <a name="setstatus"></a>COleDateTime::SetStatus  
 Imposta lo stato di questo `COleDateTime` oggetto.  
  
```
void SetStatus(DateTimeStatus status) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *status*  
 Il nuovo valore di stato per questo `COleDateTime` oggetto.  
  
### <a name="remarks"></a>Note  
 Il *stato* consiste nel valore del parametro dal **DateTimeStatus** tipo enumerato, definito all'interno di `COleDateTime` classe. Vedere [COleDateTime::GetStatus](#getstatus) per informazioni dettagliate.  
  
> [!CAUTION]
>  Questa funzione è per le situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. E spesso essere utilizzato per impostare lo stato su `null` o **valido**. Si noti che l'operatore di assegnazione ( [operatore =](#eq)) e [SetDateTime](#setdatetime) impostare lo stato dell'oggetto in base ai valori di origine.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetStatus](#getstatus).  
  
##  <a name="settime"></a>COleDateTime::SetTime  
 Imposta l'ora di questo `COleDateTime` oggetto.  
  
```
int SetTime(  
 int nHour,
 int nMin,
 int nSec) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nHour`, `nMin`, `nSec`  
 Indicare i componenti della fase deve essere copiato `COleDateTime` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Zero se il valore di questo `COleDateTime` oggetto è stato impostato correttamente; in caso contrario, 1. Questo valore restituito è basato sul **DateTimeStatus** tipo enumerato. Per ulteriori informazioni, vedere il [SetStatus](#setstatus) funzione membro.  
  
### <a name="remarks"></a>Note  
 L'ora viene impostata sui valori specificati. La data viene impostata per data 0, vale a dire 30 dicembre 1899.  
  
 Vedere la tabella seguente per i limiti per i valori dei parametri:  
  
|Parametro|Limiti|  
|---------------|------------|  
|`nHour`|0 - 23|  
|`nMin`|0 - 59|  
|`nSec`|0 - 59|  
  
 Se il tempo specificato dai parametri di valore non è valido, lo stato di questo oggetto è valido e il valore di questo oggetto non viene modificato.  
  
 Di seguito sono riportati alcuni esempi di valori di ora:  
  
|`nHour`|`nMin`|`nSec`|Valore|  
|-------------|------------|------------|-----------|  
|1|3|3|01:03:03|  
|23|45|0|23:45:00|  
|25|30|0|Non valido|  
|9|60|0|Non valido|  
  
 Per impostare sia data e ora, vedere [COleDateTime::SetDateTime](#setdatetime).  
  
 Per informazioni sulle funzioni membro che il valore di questa query `COleDateTime` , vedere le seguenti funzioni membro:  
  
- [GetDay](#getday)  
  
- [GetMonth](#getmonth)  
  
- [GetYear](#getyear)  
  
- [GetHour](#gethour)  
  
- [GetMinute](#getminute)  
  
- [GetSecond](#getsecond)  
  
- [GetDayOfWeek](#getdayofweek)  
  
- [GetDayOfYear](#getdayofyear)  
  
 Per ulteriori informazioni sui limiti dei `COleDateTime` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [SetDate](#setdate).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleVariant](../../mfc/reference/colevariant-class.md)   
 [Classe CTime](../../atl-mfc-shared/reference/ctime-class.md)   
 [Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)



