---
title: Classe CTime | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CTime class
- shared classes, CTime
ms.assetid: 0a299544-485b-48dc-9d3c-fdc30f57d612
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8ec195c7733255487b08f8b48379abe58e305f61
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32366549"
---
# <a name="ctime-class"></a>Classe CTime
Rappresenta una data e l'ora assoluta.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CTime  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttori CTime::](#ctime)|Costruisce `CTime` oggetti in vari modi.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTime::Format](#format)|Converte un `CTime` oggetto in una stringa formattata, in base al fuso orario locale.|  
|[CTime::FormatGmt](#formatgmt)|Converte un `CTime` oggetto in una stringa formattata, in base a UTC.|  
|[CTime::GetAsDBTIMESTAMP](#getasdbtimestamp)|Converte le informazioni sull'ora archiviati nel `CTime` oggetto a una struttura compatibile con Win32 DBTIMESTAMP.|  
|[CTime::GetAsSystemTime](#getassystemtime)|Converte le informazioni sull'ora archiviati nel `CTime` oggetto a una compatibile con Win32 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura.|  
|[CTime::GetCurrentTime](#getcurrenttime)|Crea un `CTime` oggetto che rappresenta l'ora corrente (funzione membro statica).|  
|[CTime::GetDay](#getday)|Restituisce il giorno rappresentato dal `CTime` oggetto.|  
|[CTime::GetDayOfWeek](#getdayofweek)|Restituisce il giorno della settimana rappresentato dal `CTime` oggetto.|  
|[CTime::GetGmtTm](#getgmttm)|Suddivide una `CTime` oggetto nei componenti, in base a UTC.|  
|[CTime::GetHour](#gethour)|Restituisce l'ora rappresentata dal `CTime` oggetto.|  
|[CTime::GetLocalTm](#getlocaltm)|Suddivide una `CTime` oggetto nei componenti, in base al fuso orario locale.|  
|[CTime::GetMinute](#getminute)|Restituisce i minuti rappresentato dal `CTime` oggetto.|  
|[CTime::GetMonth](#getmonth)|Restituisce il mese rappresentato dal `CTime` oggetto.|  
|[CTime::GetSecond](#getsecond)|Restituisce il secondo elemento rappresentato dal `CTime` oggetto.|  
|[CTime::GetTime](#gettime)|Restituisce un **__time64_t** valore per il dato `CTime` oggetto.|  
|[CTime::GetYear](#getyear)|Restituisce l'anno rappresentata la `CTime` oggetto.|  
|[CTime::Serialize64](#serialize64)|Serializza i dati in o da un archivio.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore + -](#operator_add_-)|Questi operatori di addizione e sottrazione `CTimeSpan` e `CTime` oggetti.|  
|[operatore + =-=](#operator_add_eq_-_eq)|Questi operatori di addizione e sottrazione un `CTimeSpan` oggetto da e verso questo `CTime` oggetto.|  
|[operator =](#operator_eq)|L'operatore di assegnazione.|  
|[operatore = =, < e così via.](#ctime_comparison_operators)|Operatori di confronto.|  
  
## <a name="remarks"></a>Note  
 `CTime` non dispone di una classe basa.  
  
 `CTime` valori sono basati su ora UTC (coordinated universal time), che equivale a Coordinated Universal time (Greenwich Mean Time, GMT). Vedere [gestione del tempo](../../c-runtime-library/time-management.md) per informazioni sulla determinazione il fuso orario.  
  
 Quando si crea un `CTime` dell'oggetto, impostare il `nDST` parametro su 0 per indicare che è attiva l'ora solare o a un valore maggiore di 0 per indicare che l'ora legale è attivo o a un valore minore di zero per i comput codice di libreria di runtime C e che ora solare o l'ora legale è attiva. `tm_isdst` è un campo obbligatorio. Se non è impostata, il relativo valore non è definito e il valore restituito da [mktime](../../c-runtime-library/reference/mktime-mktime32-mktime64.md) è imprevedibile. Se `timeptr` punta a una struttura tm restituita da una precedente chiamata a [asctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md), [gmtime_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md), o [localtime_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), `tm_isdst` campo contiene il valore corretto.  
  
 Una classe complementare, [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md), rappresenta un intervallo di tempo.  
  
 Il `CTime` e `CTimeSpan` classi non sono progettate per la derivazione. Poiché non sono presenti funzioni virtuali, le dimensioni di `CTime` e `CTimeSpan` oggetti corrisponde esattamente a 8 byte. La maggior parte delle funzioni membro sono inline.  
  
> [!NOTE]
>  Il limite superiore della data è 12/31/3000. Il limite inferiore è 1/1/1970 12:00:00 AM GMT.  
  
 Per ulteriori informazioni sull'utilizzo `CTime`, vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md), e [gestione del tempo](../../c-runtime-library/time-management.md) in riferimenti alla libreria di Run-Time.  
  
> [!NOTE]
>  Il `CTime` struttura è stata modificata da MFC 7.1 a MFC 8.0. Se si serializza un `CTime` struttura utilizzando il `operator <<` in MFC 8.0 o versione successiva, il file risultante non sarà possibile leggere in versioni precedenti di MFC.  
  
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
 `time`  
 L'oggetto `CTime` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Questi operatori confrontano due volte assoluti e restituiscono **true** se la condizione è true; in caso contrario **false**.  
  
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
CTime(const DBTIMESTAMP& dbts,int nDST = -1) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `timeSrc`  
 Indica un `CTime` oggetto già esistente.  
  
 `time`  
 Oggetto **__time64_t** valore di ora, ovvero il numero di secondi dopo il 1 gennaio 1970 ora UTC. Si noti che questo verrà adeguato al fuso orario locale. Ad esempio, se si trovano in New York e crea un `CTime` oggetto passando un parametro pari a 0, [CTime::GetMonth](#getmonth) restituirà 12.  

  
 `nYear`, `nMonth`, `nDay`, `nHour`, `nMin`, `nSec`  
 Indica i valori di data e ora da copiare nel nuovo `CTime` oggetto.  
  
 `nDST`  
 Indica se l'ora legale è attiva. Può avere uno dei tre valori:  
  
- `nDST` set 0Standard ora è attiva.  
  
- `nDST` Impostare su un valore maggiore di 0Daylight ora è attiva.  
  
- `nDST` Impostare su un valore inferiore a 0The predefinito. Calcola automaticamente se ora solare o l'ora legale è attiva.  
  
 `wDosDate`, `wDosTime`  
 Valori di data e ora di MS-DOS per essere convertito in un valore data/ora e copiare nel nuovo `CTime` oggetto.  
  
 `st`  
 Oggetto [SYSTEMTIME](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/d6609fff-1931-4818-8a26-f042630af0b0/locales/en-us) struttura convertito in un valore data/ora e la copia nel nuovo `CTime` oggetto.  
  
 `ft`  
 Oggetto [FILETIME](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/979ce746-dc17-4147-89f8-41d05c5fcc5f/locales/en-us) struttura convertito in un valore data/ora e la copia nel nuovo `CTime` oggetto.  
  
 DBTS  
 Un riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.  
  
### <a name="remarks"></a>Note  
 Ogni costruttore è descritta di seguito:  
  
- **CTime();**  Costruisce un valore non inizializzato `CTime` oggetto. Questo costruttore consente di definire `CTime` matrici dell'oggetto. È necessario inizializzare tali matrici con tempi validi prima di utilizzare.  
  
- **CTime (CTime const &);**  Costruisce una `CTime` da un altro oggetto `CTime` valore.  
  
- **CTime (__time64_t);**  Costruisce una `CTime` dell'oggetto da un **__time64_t** tipo. Questo costruttore prevede un'ora UTC e converte il risultato di un'ora locale prima di archiviare il risultato.  
  
- **CTime (int, int,...);**  Costruisce una `CTime` oggetto dai componenti di ora locale in cui ogni componente vincolato a intervalli seguenti:  
  
    |Componente|Intervallo|  
    |---------------|-----------|  
    |`nYear`|1970-3000|  
    |`nMonth`|1-12|  
    |`nDay`|1-31|  
    |`nHour`|0-23|  
    |`nMin`|0-59|  
    |`nSec`|0-59|  
  
     Questo costruttore effettua la conversione appropriata in formato UTC. La versione di Debug della libreria di classi Microsoft Foundation asserzioni se uno o più dei componenti di ora sono non compreso nell'intervallo. È necessario convalidare gli argomenti prima di chiamare. Questo costruttore è prevista un'ora locale.  
  
- **CTime (WORD, parola);**  Costruisce una `CTime` oggetto dai valori di data e ora MS-DOS specificati. Questo costruttore è prevista un'ora locale.  
  
- **CTime (SYSTEMTIME const &);**  Costruisce una `CTime` dell'oggetto da un `SYSTEMTIME` struttura. Questo costruttore è prevista un'ora locale.  
  
- **CTime (const FILETIME &);**  Costruisce una `CTime` dell'oggetto da un `FILETIME` struttura. Non è probabile che si utilizzerà `CTime FILETIME` direttamente l'inizializzazione. Se si utilizza un `CFile` oggetto per modificare un file, `CFile::GetStatus` recupera il timestamp di file per l'utente tramite un `CTime` oggetto inizializzato con un `FILETIME` struttura. Questo costruttore utilizza un tempo basato su UTC e converte automaticamente il valore di ora locale prima di archiviare il risultato.  
  
    > [!NOTE]
    >  Il costruttore usando **DBTIMESTAMP** parametro è disponibile solo quando viene incluso OleDb.  
  
 Per ulteriori informazioni, vedere il [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) e [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) struttura in Windows SDK. Vedere anche il [MS-DOS data e ora](http://msdn.microsoft.com/library/windows/desktop/ms724503) voce in Windows SDK.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#148](../../atl-mfc-shared/codesnippet/cpp/ctime-class_2.cpp)]  
  
##  <a name="format"></a>  CTime::Format  
 Chiamare questa funzione membro per creare una rappresentazione del valore data e ora formattata.  
  
```  
CString Format(LPCTSTR pszFormat) const; 
CString Format(UINT nFormatID) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `pszFormat`  
 Formattazione di una stringa simile al `printf` stringa di formattazione. Codici, preceduti da una percentuale di formattazione ( `%`) accesso, vengono sostituiti dal corrispondente `CTime` componente. Altri caratteri nella stringa di formattazione vengono copiati invariata la stringa restituita. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per un elenco di codici di formattazione.  
  
 `nFormatID`  
 L'ID della stringa che identifica questo formato.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene l'ora formattato.  
  
### <a name="remarks"></a>Note  
 Se lo stato di questo `CTime` oggetto è null, il valore restituito è una stringa vuota.  
  
 Questo metodo genera un'eccezione se il valore di data e ora da formattare non è compresa tra la mezzanotte dell'1 gennaio 1970 31 dicembre 3000 ora UTC (Universal Coordinated Time).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#149](../../atl-mfc-shared/codesnippet/cpp/ctime-class_3.cpp)]  
  
##  <a name="formatgmt"></a>  CTime::FormatGmt  
 Genera una stringa formattata che corrisponde a questo `CTime` oggetto.  
  
```  
CString FormatGmt(LPCTSTR pszFormat) const; 
CString FormatGmt(UINT nFormatID) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `pszFormat`  
 Specifica una stringa di formattazione simile al `printf` stringa di formattazione. Vedere la funzione di runtime [strftime](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per informazioni dettagliate.  
  
 `nFormatID`  
 L'ID della stringa che identifica questo formato.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene l'ora formattato.  
  
### <a name="remarks"></a>Note  
 Il valore di ora non viene convertito e pertanto riflette UTC.  
  
 Questo metodo genera un'eccezione se il valore di data e ora da formattare non è compresa tra la mezzanotte dell'1 gennaio 1970 31 dicembre 3000 ora UTC (Universal Coordinated Time).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CTime::Format](#format).  
  
##  <a name="getasdbtimestamp"></a>  CTime::GetAsDBTIMESTAMP  
 Chiamare questa funzione membro per convertire le informazioni sull'ora archiviati nel `CTime` oggetto a una struttura compatibile con Win32 DBTIMESTAMP.  
  
```  
bool GetAsDBTIMESTAMP(DBTIMESTAMP& dbts) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dbts`  
 Un riferimento a una struttura DBTIMESTAMP contenente l'ora locale corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Archivia il tempo risultante nella struttura `dbts` a cui viene fatto riferimento. Il **DBTIMESTAMP** struttura dati inizializzata da questa funzione avrà il **frazione** membro impostato su zero.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#150](../../atl-mfc-shared/codesnippet/cpp/ctime-class_4.cpp)]  
  
##  <a name="getassystemtime"></a>  CTime::GetAsSystemTime  
 Chiamare questa funzione membro per convertire le informazioni sull'ora archiviati nel `CTime` oggetto a una compatibile con Win32 [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura.  
  
```  
bool GetAsSystemTime(SYSTEMTIME& st) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *timeDest*  
 Un riferimento a un [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura che conterrà il valore data/ora convertito il `CTime` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 True se ha esito positivo. in caso contrario false.  
  
### <a name="remarks"></a>Note  
 `GetAsSystemTime` Archivia il tempo risultante nel riferimento *timeDest* struttura. Il `SYSTEMTIME` struttura dati inizializzata da questa funzione avrà il **wMilliseconds** membro impostato su zero.  
  
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
 Restituisce il giorno del mese, in base all'ora locale, compreso tra 1 e 31.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama `GetLocalTm`, che utilizza un buffer interno, allocato in modo statico. I dati di questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#153](../../atl-mfc-shared/codesnippet/cpp/ctime-class_7.cpp)]  
  
##  <a name="getdayofweek"></a>  CTime::GetDayOfWeek  
 Restituisce il giorno della settimana rappresentato dal `CTime` oggetto.  
  
```  
int GetDayOfWeek() const throw(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il giorno della settimana basato sull'ora locale. 1 = domenica, 2 = lunedì, 7 = sabato.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama `GetLocalTm`, che utilizza un oggetto interno statico buffer allocato. I dati di questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#154](../../atl-mfc-shared/codesnippet/cpp/ctime-class_8.cpp)]  
  
##  <a name="getgmttm"></a>  CTime::GetGmtTm  
 Ottiene un **struct tm** che contiene una scomposizione di contenuti in questo momento `CTime` oggetto.  
  
```  
struct tm* GetGmtTm(struct tm* ptm) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `ptm`  
 Punta a un buffer che riceverà i dati della fase. Se questo puntatore è **NULL**, viene generata un'eccezione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un compilato in **struct tm** come definito nel file di inclusione ora. H. Vedere [gmtime, gmtime32, gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) per il layout della struttura.  
  
### <a name="remarks"></a>Note  
 `GetGmtTm` Restituisce l'ora UTC.  
  
 Il parametro `ptm` non può essere `NULL`. Se si desidera ripristinare il comportamento precedente, in cui `ptm` potrebbe essere `NULL` per indicare che è necessario utilizzare un buffer interno, allocato in modo statico, quindi rimuovere la definizione di `_SECURE_ATL`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#155](../../atl-mfc-shared/codesnippet/cpp/ctime-class_9.cpp)]  
  
##  <a name="gethour"></a>  CTime::GetHour  
 Restituisce l'ora rappresentata dal `CTime` oggetto.  
  
```  
int GetHour() const throw(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'ora, in base all'ora locale, nell'intervallo da 0 a 23.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama `GetLocalTm`, che utilizza un oggetto interno statico buffer allocato. I dati di questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#156](../../atl-mfc-shared/codesnippet/cpp/ctime-class_10.cpp)]  
  
##  <a name="getlocaltm"></a>  CTime::GetLocalTm  
 Ottiene un **struct tm** contenente una scomposizione di contenuti in questo momento `CTime` oggetto.  
  
```  
struct tm* GetLocalTm(struct tm* ptm) const; 
```  
  
### <a name="parameters"></a>Parametri  
 `ptm`  
 Punta a un buffer che riceverà i dati della fase. Se questo puntatore è **NULL**, viene generata un'eccezione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un compilato in **struct tm** come definito nel file di inclusione ora. H. Vedere [gmtime, gmtime32, gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) per il layout della struttura.  
  
### <a name="remarks"></a>Note  
 `GetLocalTm` Restituisce l'ora locale.  
  
 Il parametro `ptm` non può essere `NULL`. Se si desidera ripristinare il comportamento precedente, in cui `ptm` potrebbe essere `NULL` per indicare che è necessario utilizzare un buffer interno, allocato in modo statico, quindi rimuovere la definizione di `_SECURE_ATL`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#157](../../atl-mfc-shared/codesnippet/cpp/ctime-class_11.cpp)]  
  
##  <a name="getminute"></a>  CTime::GetMinute  
 Restituisce i minuti rappresentato dal `CTime` oggetto.  
  
```  
int GetMinute() const throw(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce i minuti, in base all'ora locale, nell'intervallo da 0 a 59.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama `GetLocalTm`, che utilizza un oggetto interno statico buffer allocato. I dati di questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetHour](#gethour).  
  
##  <a name="getmonth"></a>  CTime::GetMonth  
 Restituisce il mese rappresentato dal `CTime` oggetto.  
  
```  
int GetMonth() const throw(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il mese, in base all'ora locale, compreso tra 1 e 12 (1 = gennaio).  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama `GetLocalTm`, che utilizza un oggetto interno statico buffer allocato. I dati di questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetDay](#getday).  
  
##  <a name="getsecond"></a>  CTime::GetSecond  
 Restituisce il secondo elemento rappresentato dal `CTime` oggetto.  
  
```  
int GetSecond() const throw(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il secondo, in base all'ora locale, nell'intervallo da 0 a 59.  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama `GetLocalTm`, che utilizza un oggetto interno statico buffer allocato. I dati di questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetHour](#gethour).  
  
##  <a name="gettime"></a>  CTime::GetTime  
 Restituisce un **__time64_t** valore per il dato `CTime` oggetto.  
  
```  
__time64_t GetTime() const throw(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 **GetTime** verrà restituito il numero di secondi tra l'oggetto corrente `CTime` oggetto e il 1 ° gennaio 1970.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#158](../../atl-mfc-shared/codesnippet/cpp/ctime-class_12.cpp)]  
  
##  <a name="getyear"></a>  CTime::GetYear  
 Restituisce l'anno rappresentata la `CTime` oggetto.  
  
```  
int GetYear();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'anno, in base all'ora locale, nell'intervallo di gennaio 1,1970, per il 18 gennaio 2038 (inclusivo).  
  
### <a name="remarks"></a>Note  
 Questa funzione chiama `GetLocalTm`, che utilizza un oggetto interno statico buffer allocato. I dati di questo buffer viene sovrascritto a causa di chiamate ad altri `CTime` funzioni membro.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetDay](#getday).  
  
##  <a name="operator_eq"></a>  CTime::operator =  
 L'operatore di assegnazione.  
  
```  
CTime& operator=(__time64_t time) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `time`  
 Il valore di data e ora nuove.  
  
### <a name="return-value"></a>Valore restituito  
 L'aggiornamento `CTime` oggetto.  
  
### <a name="remarks"></a>Note  
 Questo operatore di assegnazione di overload copia l'ora di origine in questa `CTime` oggetto. Lo spazio di archiviazione interno ora un `CTime` oggetto è indipendente del fuso orario. Conversione del fuso orario non è necessaria durante l'assegnazione.  
  
##  <a name="operator_add_-"></a>  CTime::operator +, -  
 Questi operatori di addizione e sottrazione `CTimeSpan` e `CTime` oggetti.  
  
```  
CTime operator+(CTimeSpan timeSpan) const throw(); 
CTime operator-(CTimeSpan timeSpan) const throw(); 
CTimeSpan operator-(CTime time) const throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 *Intervallo di tempo*  
 Il `CTimeSpan` oggetto da aggiungere o sottrarre.  
  
 `time`  
 Il `CTime` oggetto da sottrarre.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CTime` o `CTimeSpan` oggetto che rappresenta il risultato dell'operazione.  
  
### <a name="remarks"></a>Note  
 `CTime` gli oggetti rappresentano ora assoluta, `CTimeSpan` oggetti rappresentano tempo relativo. Consentono i primi due operatori di addizione e sottrazione `CTimeSpan` oggetti da e verso `CTime` oggetti. Il terzo operatore consente di sottrarre uno `CTime` oggetto da un altro per produrre un `CTimeSpan` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#159](../../atl-mfc-shared/codesnippet/cpp/ctime-class_13.cpp)]  
  
##  <a name="operator_add_eq_-_eq"></a>  + = CTime::operator-=  
 Questi operatori di addizione e sottrazione un `CTimeSpan` oggetto da e verso questo `CTime` oggetto.  
  
```  
CTime& operator+=(CTimeSpan span) throw();
CTime& operator-=(CTimeSpan span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Il `CTimeSpan` oggetto da aggiungere o sottrarre.  
  
### <a name="return-value"></a>Valore restituito  
 L'aggiornamento `CTime` oggetto.  
  
### <a name="remarks"></a>Note  
 Questi operatori consentono di aggiungere e sottrarre un `CTimeSpan` oggetto da e verso questo `CTime` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#160](../../atl-mfc-shared/codesnippet/cpp/ctime-class_14.cpp)]  
  
##  <a name="serialize64"></a>  CTime::Serialize64  
  
> [!NOTE]
>  Questo metodo è disponibile solo in progetti MFC.  
  
 Serializza i dati associati con la variabile membro a o da un archivio.  
  
```  
CArchive& Serialize64(CArchive& ar);
```  
  
### <a name="parameters"></a>Parametri  
 `ar`  
 Il `CArchive` oggetto che si desidera aggiornare.  
  
### <a name="return-value"></a>Valore restituito  
 L'aggiornamento `CArchive` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [asctime_s, _wasctime_s](../../c-runtime-library/reference/asctime-s-wasctime-s.md)   
 [ftime_s, _ftime32_s, _ftime64_s](../../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md)   
 [gmtime_s, _gmtime32_s, _gmtime64_s](../../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md)   
 [localtime_s, _localtime32_s, _localtime64_s](../../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)


