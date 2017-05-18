---
title: Classe CTimeSpan | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CTimeSpan
- ATLTIME/ATL::CTimeSpan
- ATLTIME/ATL::CTimeSpan::CTimeSpan
- ATLTIME/ATL::CTimeSpan::Format
- ATLTIME/ATL::CTimeSpan::GetDays
- ATLTIME/ATL::CTimeSpan::GetHours
- ATLTIME/ATL::CTimeSpan::GetMinutes
- ATLTIME/ATL::CTimeSpan::GetSeconds
- ATLTIME/ATL::CTimeSpan::GetTimeSpan
- ATLTIME/ATL::CTimeSpan::GetTotalHours
- ATLTIME/ATL::CTimeSpan::GetTotalMinutes
- ATLTIME/ATL::CTimeSpan::GetTotalSeconds
- ATLTIME/ATL::CTimeSpan::Serialize64
dev_langs:
- C++
helpviewer_keywords:
- elapsed time, CTimeSpan object
- timespan
- time span
- CTimeSpan class
- shared classes, CTimeSpan
- time, elapsed
ms.assetid: ee1e42f6-1839-477a-8435-fb26ad475140
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: b82b12f33ee3cad1da9acad0fb2cd81c6dcb6e82
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="ctimespan-class"></a>Classe CTimeSpan
Un periodo di tempo, in cui verrà archiviato internamente come il numero di secondi nell'intervallo di tempo.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CTimeSpan
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTimeSpan::CTimeSpan](#ctimespan)|Costruisce `CTimeSpan` oggetti in vari modi.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTimeSpan::Format](#format)|Converte un `CTimeSpan` in una stringa formattata.|  
|[CTimeSpan::GetDays](#getdays)|Restituisce un valore che rappresenta il numero di giorni completati in questa `CTimeSpan`.|  
|[CTimeSpan::GetHours](#gethours)|Restituisce un valore che rappresenta il numero di ore del giorno corrente (-23 e 23).|  
|[CTimeSpan::GetMinutes](#getminutes)|Restituisce un valore che rappresenta il numero di minuti dell'ora corrente (da-59 e 59).|  
|[CTimeSpan::GetSeconds](#getseconds)|Restituisce un valore che rappresenta il numero di secondi del minuto corrente (da-59 e 59).|  
|[CTimeSpan::GetTimeSpan](#gettimespan)|Restituisce il valore di `CTimeSpan` oggetto.|  
|[CTimeSpan::GetTotalHours](#gettotalhours)|Restituisce un valore che rappresenta il numero totale di ore completate in questa `CTimeSpan`.|  
|[CTimeSpan::GetTotalMinutes](#gettotalminutes)|Restituisce un valore che rappresenta il numero totale di minuti completati in questa `CTimeSpan`.|  
|[CTimeSpan::GetTotalSeconds](#gettotalseconds)|Restituisce un valore che rappresenta il numero totale di secondi completati in questa `CTimeSpan`.|  
|[CTimeSpan::Serialize64](#serialize64)|Serializza i dati in o da un archivio.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore + -](#operator_add_-)|Aggiunge e sottrae `CTimeSpan` oggetti.|  
|[+ = operatore =](#operator_add_eq_-_eq)|Aggiunge e sottrae un `CTimeSpan` oggetto da e verso questo `CTimeSpan`.|  
|[operatore = =<>](#ctimespan_comparison_operators)|Confronta due valori di tempo relativo.|  
  
## <a name="remarks"></a>Note  
 `CTimeSpan`non dispone di una classe di base.  
  
 `CTimeSpan`funzioni convertono i secondi di varie combinazioni di giorni, ore, minuti e secondi.  
  
 Il `CTimeSpan` oggetto è archiviato in un **__time64_t** struttura, ovvero a 8 byte.  
  
 Una classe complementare, [CTime](../../atl-mfc-shared/reference/ctime-class.md), rappresenta un'ora assoluta.  
  
 Il `CTime` e `CTimeSpan` classi non sono progettate per la derivazione. Poiché non sono presenti funzioni virtuali, le dimensioni di entrambi `CTime` e `CTimeSpan` oggetti corrisponde esattamente a 8 byte. La maggior parte delle funzioni membro sono inline.  
  
 Per ulteriori informazioni sull'utilizzo `CTimeSpan`, vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md), e [gestione del tempo](../../c-runtime-library/time-management.md) nel *riferimenti alla libreria di Run-Time*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltime. h  
  
##  <a name="ctimespan_comparison_operators"></a>Operatori di confronto CTimeSpan  
 Operatori di confronto.  
  
```
bool operator==(CTimeSpan span) const throw();
bool operator!=(CTimeSpan span) const throw();
bool operator<(CTimeSpan span) const throw();
bool operator>(CTimeSpan span) const throw();
bool operator<=(CTimeSpan span) const throw();
bool operator>=(CTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
  
 Oggetto da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Questi operatori confrontano due valori di tempo relativo. Restituiscono **true** se la condizione è true; in caso contrario **false**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities #169](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_1.cpp)]  
  
##  <a name="ctimespan"></a>CTimeSpan::CTimeSpan  
 Costruisce `CTimeSpan` oggetti in vari modi.  
  
```
CTimeSpan() throw();
CTimeSpan(__time64_t time) throw();

CTimeSpan(  
 LONG lDays,
 int nHours,
 int nMins,
 int nSecs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *timeSpanSrc*  
 Oggetto `CTimeSpan` oggetto già esistente.  
  
 `time`  
 Oggetto **__time64_t** valore di ora, ovvero il numero di secondi nell'intervallo di tempo. Nelle versioni di Visual C++ 6.0 e versioni precedenti, `time` è un valore di `time_t`. Visual C++ .NET o in un secondo momento automaticamente converte un `time_t` parametro **__time64_t**.  
  
 `lDays`, `nHours`, `nMins`, `nSecs`  
 Giorni, ore, minuti e secondi, rispettivamente.  
  
### <a name="remarks"></a>Note  
 Tutti questi costruttori creano un nuovo `CTimeSpan` oggetto inizializzato con il tempo relativo specificato. Ogni costruttore è descritta di seguito:  
  
- **() CTimeSpan;** Costruisce l'oggetto non inizializzato `CTimeSpan` oggetto.  
  
- **CTimeSpan (const CTimeSpan /);** Costruisce una `CTimeSpan` oggetto da un altro `CTimeSpan` valore.  
  
- **CTimeSpan (__time64_t);** Costruisce una `CTimeSpan` dell'oggetto da un **__time64_t** tipo.  
  
- **CTimeSpan (LONG**, **int, int, int);** Costruisce un `CTimeSpan` oggetto dai componenti con ciascun componente vincolato a intervalli seguenti:  
  
    |Componente|Intervallo|  
    |---------------|-----------|  
    |`lDays`|0-25.000 (circa)|  
    |`nHours`|0-23|  
    |`nMins`|0-59|  
    |`nSecs`|0-59|  
  
 Si noti che la versione di Debug della libreria di classi Microsoft Foundation asserzioni se uno o più dei componenti di orario non compreso nell'intervallo. È responsabilità dell'utente per convalidare gli argomenti prima di chiamare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities #162](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_2.cpp)]  
  
##  <a name="format"></a>CTimeSpan::Format  
 Genera una stringa formattata che corrisponde a questo `CTimeSpan`.  
  
```
CString Format(LPCSTR pFormat) const;
CString Format(LPCTSTR pszFormat) const;
CString Format(UINT nID) const;
```  
  
### <a name="parameters"></a>Parametri  
 `pFormat`, `pszFormat`  
 Formattazione di una stringa simile al `printf` stringa di formattazione. Codici, preceduti da una percentuale di formattazione ( `%`) accesso, vengono sostituiti dal corrispondente `CTimeSpan` componente. Altri caratteri nella stringa di formattazione vengono copiati invariata la stringa restituita. Il valore e il significato dei codici di formattazione per **formato** sono elencati di seguito:  
  
- **%D** totale di giorni in questo`CTimeSpan`  
  
- **%H** ore del giorno corrente  
  
- **%M** minuti dell'ora corrente  
  
- **%S** secondi nel minuto corrente  
  
- **%%**Segno di percentuale  
  
 `nID`  
 L'ID della stringa che identifica questo formato.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto che contiene l'ora formattato.  
  
### <a name="remarks"></a>Note  
 La versione di Debug della libreria controlla i codici di formattazione e indica se il codice non è nell'elenco precedente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities #163](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_3.cpp)]  
  
##  <a name="getdays"></a>CTimeSpan::GetDays  
 Restituisce un valore che rappresenta il numero di giorni completati in questa `CTimeSpan`.  
  
```
LONGLONG GetDays() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di giorni di 24 ore complete nell'intervallo di tempo. Questo valore può essere negativo se l'intervallo di tempo è negativa.  
  
### <a name="remarks"></a>Note  
 Si noti che possono causare l'ora legale `GetDays` per restituire un risultato potenzialmente sorprendente. Ad esempio, quando DST è in effetti, **GetDays** indica il numero di giorni tra il 1 aprile e il 1 maggio come 29, 30 non, poiché viene ridotto a un'ora e pertanto non viene considerato come un giorno completo di un giorno nel mese di aprile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities #164](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_4.cpp)]  
  
##  <a name="gethours"></a>CTimeSpan::GetHours  
 Restituisce un valore che rappresenta il numero di ore del giorno corrente (-23 e 23).  
  
```
LONG GetHours() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di ore del giorno corrente. L'intervallo è compreso tra-23 e 23.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#165; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_5.cpp)]  
  
##  <a name="getminutes"></a>CTimeSpan::GetMinutes  
 Restituisce un valore che rappresenta il numero di minuti dell'ora corrente (da-59 e 59).  
  
```
LONG GetMinutes() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di minuti dell'ora corrente. L'intervallo è compreso tra-59 e 59.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetHours](#gethours).  
  
##  <a name="getseconds"></a>CTimeSpan::GetSeconds  
 Restituisce un valore che rappresenta il numero di secondi del minuto corrente (da-59 e 59).  
  
```
LONG GetSeconds() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di secondi del minuto corrente. L'intervallo è compreso tra-59 e 59.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetHours](#gethours).  
  
##  <a name="gettimespan"></a>CTimeSpan::GetTimeSpan  
 Restituisce il valore di `CTimeSpan` oggetto.  
  
```
__ time64_t GetTimeSpan() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore corrente di `CTimeSpan` oggetto.  
  
##  <a name="gettotalhours"></a>CTimeSpan::GetTotalHours  
 Restituisce un valore che rappresenta il numero totale di ore completate in questa `CTimeSpan`.  
  
```
LONGLONG GetTotalHours() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero totale di ore completate in questo `CTimeSpan`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#166; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_6.cpp)]  
  
##  <a name="gettotalminutes"></a>CTimeSpan::GetTotalMinutes  
 Restituisce un valore che rappresenta il numero totale di minuti completati in questa `CTimeSpan`.  
  
```
LONGLONG GetTotalMinutes() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero totale di minuti completati in questa `CTimeSpan`.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetTotalHours](#gettotalhours).  
  
##  <a name="gettotalseconds"></a>CTimeSpan::GetTotalSeconds  
 Restituisce un valore che rappresenta il numero totale di secondi completati in questa `CTimeSpan`.  
  
```
LONGLONG GetTotalSeconds() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero totale di secondi completati in questa `CTimeSpan`.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetTotalHours](#gettotalhours).  
  
##  <a name="operator_add_-"></a>CTimeSpan::operator +, -  
 Aggiunge e sottrae `CTimeSpan` oggetti.  
  
```
CTimeSpan operator+(CTimeSpan span) const throw();
CTimeSpan operator-(CTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Il valore da aggiungere per il `CTimeSpan` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CTimeSpan` oggetto che rappresenta il risultato dell'operazione.  
  
### <a name="remarks"></a>Note  
 Questi due operatori consentono di addizione e sottrazione `CTimeSpan` gli oggetti in e tra loro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities 167.](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_7.cpp)]  
  
##  <a name="operator_add_eq_-_eq"></a>+ = CTimeSpan::operator-=  
 Aggiunge e sottrae un `CTimeSpan` oggetto da e verso questo `CTimeSpan`.  
  
```
CTimeSpan& operator+=(CTimeSpan span) throw();
CTimeSpan& operator-=(CTimeSpan span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Il valore da aggiungere per il `CTimeSpan` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 L'aggiornamento `CTimeSpan` oggetto.  
  
### <a name="remarks"></a>Note  
 Questi operatori consentono di aggiungere e sottrarre un `CTimeSpan` oggetto da e verso questo `CTimeSpan`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities #168](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_8.cpp)]  
  
##  <a name="serialize64"></a>CTimeSpan::Serialize64  
  
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
 [asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)   
 [_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)   
 [gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)   
 [localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)



