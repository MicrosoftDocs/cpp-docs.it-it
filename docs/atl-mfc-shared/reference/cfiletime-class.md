---
title: Classe CFileTime | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CFileTime class
- shared classes, CFileTime
ms.assetid: 1a358a65-1383-4124-b0d4-59b026e6860f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7a1e7abe1fbbf3667999852dd1810a8a337cac79
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39208663"
---
# <a name="cfiletime-class"></a>Classe CFileTime
Questa classe fornisce metodi per gestire i valori di data e ora associati a un file.  
  
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
|[CFileTime::GetCurrentTime](#getcurrenttime)|Chiamare questa funzione statica per recuperare un `CFileTime` oggetto che rappresenta la data corrente del sistema e l'ora.|  
|[CFileTime::GetTime](#gettime)|Chiamare questo metodo per recuperare l'ora dal `CFileTime` oggetto.|  
|[CFileTime::LocalToUTC](#localtoutc)|Chiamare questo metodo per convertire l'ora di un file locale in ora file basata su Coordinated Universal Time (UTC).|  
|[CFileTime::SetTime](#settime)|Chiamare questo metodo per impostare la data e ora archiviate dal `CFileTime` oggetto.|  
|[CFileTime::UTCToLocal](#utctolocal)|Chiamare questo metodo per convertire un orario basato sul Coordinated Universal Time (UTC) all'ora di file locale.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTime::operator-](#operator_-)|Questo operatore viene usato per eseguire la sottrazione su un `CFileTime` o `CFileTimeSpan` oggetto.|  
|[CFileTime::operator! =](#operator_neq)|Questo operatore confronta due `CFileTime` oggetti per verificarne la disuguaglianza.|  
|[CFileTime::operator +](#operator_add)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan`.|  
|[+ = CFileTime::operator](#operator_add_eq)|Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan` e per assegnare il risultato all'oggetto corrente.|  
|[CFileTime::operator &lt;](#operator_lt)|Questo operatore confronta due oggetti `CFileTime` per determinare il minore.|  
|[CFileTime::operator &lt;=](#operator_lt_eq)|Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il minore.|  
|[CFileTime::operator =](#operator_eq)|L'operatore di assegnazione.|  
|[CFileTime::operator =](#operator_-_eq)|Questo operatore viene usato per eseguire la sottrazione su un `CFileTimeSpan` dell'oggetto e assegnare il risultato all'oggetto corrente.|  
|[CFileTime::operator = =](#operator_eq_eq)|Questo operatore confronta due oggetti `CFileTime` per stabilirne l'uguaglianza.|  
|[CFileTime::operator &gt;](#operator_gt)|Questo operatore confronta due oggetti `CFileTime` per determinare il più grande.|  
|[CFileTime::operator &gt;=](#operator_gt_eq)|Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il più grande.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CFileTime::Day](#day)|Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un giorno.|  
|[CFileTime::Hour](#hour)|Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un'ora.|  
|[CFileTime::Millisecond](#millisecond)|Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un millisecondo.|  
|[CFileTime::Minute](#minute)|Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un minuto.|  
|[CFileTime::Second](#second)|Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un secondo.|  
|[CFileTime::Week](#week)|Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono una settimana.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per gestire i valori di data e ora associati con la creazione, accesso e modifica dei file. I metodi e i dati di questa classe vengono spesso utilizzati in combinazione con `CFileTimeSpan` oggetti, gestiscono i valori di tempo relativo.  
  
 Il valore di data e ora viene archiviato come valore a 64 bit che rappresenta il numero di intervalli di 100 nanosecondi dal 1 ° gennaio 1601. Si tratta del formato Coordinated Universal Time (UTC).  
  
 Per semplificare i calcoli sono disponibili le seguenti variabili membro const statico:  
  
|Variabile membro|Numero di intervalli di 100 nanosecondi|  
|---------------------|-----------------------------------------|  
|Millisecond|10,000|  
|Second|Millisecondo \* 1.000|  
|Minute|Secondo \* 60|  
|Hour|Minuto \* 60|  
|Day|Ora \* 24|  
|Settimana|Giorno \* 7|  
  
 **Nota** non tutti i file System in grado di registrare la creazione e l'ora dell'ultimo accesso e non tutti i sistemi di file registrano nello stesso modo. Per esempio, nel file system FAT di Windows NT, creare ora ha una risoluzione di 10 millisecondi, ora di scrittura ha una risoluzione di 2 secondi e ora di accesso ha una risoluzione di 1 giorno (Data access). Su NTFS, ora di accesso ha una risoluzione di 1 ora. Inoltre, FAT registra volte su disco nell'ora locale, ma NTFS registra volte su disco in formato UTC. Per altre informazioni, vedere [tempi File](http://msdn.microsoft.com/library/windows/desktop/ms724290).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `FILETIME`  
  
 `CFileTime`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltime. h  
  
##  <a name="cfiletime"></a>  CFileTime::CFileTime  
 Costruttore.  
  
```
CFileTime() throw();
CFileTime(const FILETIME& ft) throw();
CFileTime(ULONGLONG nTime) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *full-text*  
 Oggetto [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) struttura.  
  
 *Nintervallo*  
 Data e ora espresse come valore a 64 bit.  
  
### <a name="remarks"></a>Note  
 Il `CFileTime` oggetto può essere creato usando Data esistente e un'ora da un `FILETIME` struttura o espressa come valore a 64 bit (in locale o di formati di ora (UTC) Coordinated Universal Time). Il costruttore predefinito imposta l'ora su 0.  
  
##  <a name="day"></a>  CFileTime::Day  
 Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un giorno.  
  
```
static const ULONGLONG Day = Hour* 24;
```  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CFileTime::Millisecond](#millisecond).  
  
##  <a name="getcurrenttime"></a>  CFileTime::GetCurrentTime  
 Chiamare questa funzione statica per recuperare un `CFileTime` oggetto che rappresenta la data corrente del sistema e l'ora.  
  
```
static CFileTime GetCurrentTime() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la data corrente del sistema e l'ora nel formato Coordinated Universal Time (UTC).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#41](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_1.cpp)]  
  
##  <a name="gettime"></a>  CFileTime::GetTime  
 Chiamare questo metodo per recuperare l'ora dal `CFileTime` oggetto.  
  
```
ULONGLONG GetTime() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la data e ora sotto forma di numero a 64 bit, che potrebbe trovarsi in locale o formato Coordinated Universal Time (UTC).  
  
##  <a name="hour"></a>  CFileTime::Hour  
 Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un'ora.  
  
```
static const ULONGLONG Hour = Minute* 60;
```  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CFileTime::Millisecond](#millisecond).  
  
##  <a name="localtoutc"></a>  CFileTime::LocalToUTC  
 Chiamare questo metodo per convertire l'ora di un file locale in ora file basata su Coordinated Universal Time (UTC).  
  
```
CFileTime LocalToUTC() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CFileTime` oggetto contenente l'ora in formato UTC.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CFileTime::UTCToLocal](#utctolocal).  
  
##  <a name="millisecond"></a>  CFileTime::Millisecond  
 Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un millisecondo.  
  
```
static const ULONGLONG Millisecond = 10000;
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#44](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_2.cpp)]  
  
##  <a name="minute"></a>  CFileTime::Minute  
 Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un minuto.  
  
```
static const ULONGLONG Minute = Second* 60;
```  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CFileTime::Millisecond](#millisecond).  
  
##  <a name="operator_-"></a>  CFileTime::operator-  
 Questo operatore viene usato per eseguire la sottrazione su un `CFileTime` o `CFileTimeSpan` oggetto.  
  
```
CFileTime operator-(CFileTimeSpan span) const throw();
CFileTimeSpan operator-(CFileTime ft) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *intervallo*  
 Oggetto `CFileTimeSpan`.  
  
 *full-text*  
 Oggetto `CFileTime`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CFileTime` oggetto o un `CFileTimeSpan` oggetto che rappresenta il risultato della differenza di tempo tra i due oggetti.  
  
##  <a name="operator_neq"></a>  CFileTime::operator! =  
 Questo operatore confronta due `CFileTime` oggetti per verificarne la disuguaglianza.  
  
```
bool operator!=(CFileTime ft) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *full-text*  
 L'oggetto `CFileTime` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se l'elemento di cui eseguire il confronto non è uguale al `CFileTime` oggetto, in caso contrario FALSE.  
  
##  <a name="operator_add"></a>  CFileTime::operator +  
 Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan`.  
  
```
CFileTime operator+(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *intervallo*  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CFileTime` oggetto che rappresenta il risultato dell'ora di originali più un tempo relativo.  
  
##  <a name="operator_add_eq"></a>  + = CFileTime::operator  
 Questo operatore viene usato per eseguire l'addizione su un oggetto `CFileTimeSpan` e per assegnare il risultato all'oggetto corrente.  
  
```
CFileTime& operator+=(CFileTimeSpan span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *intervallo*  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornato `CFileTime` oggetto che rappresenta il risultato dell'ora di originali più un tempo relativo.  
  
##  <a name="operator_lt"></a>  CFileTime::operator &lt;  
 Questo operatore confronta due oggetti `CFileTime` per determinare il minore.  
  
```
bool operator<(CFileTime ft) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *full-text*  
 L'oggetto `CFileTime` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il primo oggetto è minore di (precedente nel tempo) del secondo e FALSE in caso contrario.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#43](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_3.cpp)]  
  
##  <a name="operator_lt_eq"></a>  CFileTime::operator &lt;=  
 Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il minore.  
  
```
bool operator<=(CFileTime ft) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *full-text*  
 L'oggetto `CFileTime` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il primo oggetto è minore di (precedente nel tempo) o uguale al secondo, in caso contrario, FALSE.  
  
##  <a name="operator_eq"></a>  CFileTime::operator =  
 L'operatore di assegnazione.  
  
```
CFileTime& operator=(const FILETIME& ft) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *full-text*  
 Oggetto `CFileTime` oggetto contenente la data e ora nuove.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornato `CFileTime` oggetto.  
  
##  <a name="operator_-_eq"></a>  CFileTime::operator =  
 Questo operatore viene usato per eseguire la sottrazione su un `CFileTimeSpan` dell'oggetto e assegnare il risultato all'oggetto corrente.  
  
```
CFileTime& operator-=(CFileTimeSpan span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *intervallo*  
 Oggetto `CFileTimeSpan` oggetto contenente il relativo tempo da sottrarre.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornato `CFileTime` oggetto.  
  
##  <a name="operator_eq_eq"></a>  CFileTime::operator = =  
 Questo operatore confronta due oggetti `CFileTime` per stabilirne l'uguaglianza.  
  
```
bool operator==(CFileTime ft) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *full-text*  
 Il `CFileTime` oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se gli oggetti sono uguali, in caso contrario, FALSE.  
  
##  <a name="operator_gt"></a>  CFileTime::operator &gt;  
 Questo operatore confronta due oggetti `CFileTime` per determinare il più grande.  
  
```
bool operator>(CFileTime ft) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *full-text*  
 L'oggetto `CFileTime` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il primo oggetto è maggiore di (in un secondo momento nel tempo) del secondo, in caso contrario, FALSE.  
  
##  <a name="operator_gt_eq"></a>  CFileTime::operator &gt;=  
 Questo operatore confronta due oggetti `CFileTime` per determinare l'uguaglianza o il più grande.  
  
```
bool operator>=(CFileTime ft) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *full-text*  
 L'oggetto `CFileTime` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il primo oggetto è maggiore di (in un secondo momento nel tempo) o uguale al secondo, in caso contrario, FALSE.  
  
##  <a name="second"></a>  CFileTime::Second  
 Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono un giorno.  
  
```
static const ULONGLONG Second = Millisecond* 1000;
```  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CFileTime::Millisecond](#millisecond).  
  
##  <a name="settime"></a>  CFileTime::SetTime  
 Chiamare questo metodo per impostare la data e ora archiviate dal `CFileTime` oggetto.  
  
```
void SetTime(ULONGLONG nTime) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *Nintervallo*  
 Il valore a 64 bit che rappresenta la data e ora, nel formato Coordinated Universal Time (UTC) o locale.  
  
##  <a name="utctolocal"></a>  CFileTime::UTCToLocal  
 Chiamare questo metodo per convertire un orario basato sul Coordinated Universal Time (UTC) all'ora di file locale.  
  
```
CFileTime UTCToLocal() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CFileTime` oggetto contenente l'ora in formato di ora di file locale.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#42](../../atl-mfc-shared/reference/codesnippet/cpp/cfiletime-class_4.cpp)]  
  
##  <a name="week"></a>  CFileTime::Week  
 Un membro dati statici archiviare il numero di intervalli da 100 nanosecondi che costituiscono una settimana.  
  
```
static const ULONGLONG Week = Day* 7;
```  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CFileTime::Millisecond](#millisecond).  
  
## <a name="see-also"></a>Vedere anche  
 [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284)   
 [Classe CFileTimeSpan](../../atl-mfc-shared/reference/cfiletimespan-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)


