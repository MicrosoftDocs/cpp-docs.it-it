---
title: Classe COleDateTimeSpan | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleDateTimeSpan
- ATLCOMTIME/ATL::COleDateTimeSpan
- ATLCOMTIME/ATL::COleDateTimeSpan::COleDateTimeSpan
- ATLCOMTIME/ATL::COleDateTimeSpan::Format
- ATLCOMTIME/ATL::COleDateTimeSpan::GetDays
- ATLCOMTIME/ATL::COleDateTimeSpan::GetHours
- ATLCOMTIME/ATL::COleDateTimeSpan::GetMinutes
- ATLCOMTIME/ATL::COleDateTimeSpan::GetSeconds
- ATLCOMTIME/ATL::COleDateTimeSpan::GetStatus
- ATLCOMTIME/ATL::COleDateTimeSpan::GetTotalDays
- ATLCOMTIME/ATL::COleDateTimeSpan::GetTotalHours
- ATLCOMTIME/ATL::COleDateTimeSpan::GetTotalMinutes
- ATLCOMTIME/ATL::COleDateTimeSpan::GetTotalSeconds
- ATLCOMTIME/ATL::COleDateTimeSpan::SetDateTimeSpan
- ATLCOMTIME/ATL::COleDateTimeSpan::SetStatus
- ATLCOMTIME/ATL::COleDateTimeSpan::m_span
- ATLCOMTIME/ATL::COleDateTimeSpan::m_status
dev_langs:
- C++
helpviewer_keywords:
- timespan
- time span
- shared classes, COleDateTimeSpan
- Date data type, MFC encapsulation of
- COleDateTimeSpan class
ms.assetid: 7441526d-a30a-4019-8fb3-3fee6f897cbe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1941984093879ba22921d19580618ce8caa04b38
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="coledatetimespan-class"></a>COleDateTimeSpan (classe)
Rappresenta un'ora relativa, un intervallo di tempo.  
  
## <a name="syntax"></a>Sintassi  
  
```
class COleDateTimeSpan
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTimeSpan::COleDateTimeSpan](#coledatetimespan)|Costruisce un oggetto `COleDateTimeSpan`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTimeSpan::Format](#format)|Genera una rappresentazione di stringa formattata di un `COleDateTimeSpan` oggetto.|  
|[COleDateTimeSpan::GetDays](#getdays)|Restituisce la parte relativa al giorno dell'ampiezza `COleDateTimeSpan` oggetto rappresenta.|  
|[COleDateTimeSpan::GetHours](#gethours)|Restituisce la parte relativa all'ora dell'intervallo di questo `COleDateTimeSpan` oggetto rappresenta.|  
|[COleDateTimeSpan::GetMinutes](#getminutes)|Restituisce la parte relativa ai minuti dell'intervallo di questo `COleDateTimeSpan` oggetto rappresenta.|  
|[COleDateTimeSpan::GetSeconds](#getseconds)|Restituisce la seconda parte dell'intervallo di questo `COleDateTimeSpan` oggetto rappresenta.|  
|[COleDateTimeSpan::GetStatus](#getstatus)|Ottiene lo stato (validità) di questo `COleDateTimeSpan` oggetto.|  
|[COleDateTimeSpan::GetTotalDays](#gettotaldays)|Restituisce il numero di giorni `COleDateTimeSpan` oggetto rappresenta.|  
|[COleDateTimeSpan::GetTotalHours](#gettotalhours)|Restituisce il numero di ore `COleDateTimeSpan` oggetto rappresenta.|  
|[COleDateTimeSpan::GetTotalMinutes](#gettotalminutes)|Restituisce il numero di minuti `COleDateTimeSpan` oggetto rappresenta.|  
|[COleDateTimeSpan::GetTotalSeconds](#gettotalseconds)|Restituisce il numero di secondi `COleDateTimeSpan` oggetto rappresenta.|  
|[COleDateTimeSpan::SetDateTimeSpan](#setdatetimespan)|Imposta il valore di questo `COleDateTimeSpan` oggetto.|  
|[COleDateTimeSpan::SetStatus](#setstatus)|Imposta lo stato (validità) di questo `COleDateTimeSpan` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|||  
|-|-|  
|[operatore +, -](#operator_add_-)|Aggiungere, sottrarre e modificare una firma `COleDateTimeSpan` valori.|  
|[operatore + =-=](#operator_add_eq_-_eq)|Addizione e sottrazione un `COleDateTimeSpan` questo valore `COleDateTimeSpan` valore.|  
|[operator =](#operator_eq)|Copia un `COleDateTimeSpan` valore.|  
|[operatore = =, <, < =](#coledatetimespan_relational_operators)|Confrontare due `COleDateTimeSpan` valori.|  
|[operatore double](#operator_double)|Converte l'oggetto `COleDateTimeSpan` valore un **double**.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDateTimeSpan::m_span](#m_span)|Contiene l'oggetto sottostante **doppie** per questo `COleDateTimeSpan` oggetto.|  
|[COleDateTimeSpan::m_status](#m_status)|Contiene lo stato di questo `COleDateTimeSpan` oggetto.|  
  
## <a name="remarks"></a>Note  
 `COleDateTimeSpan` non dispone di una classe basa.  
  
 Oggetto `COleDateTimeSpan` mantiene tempo in giorni.  
  
 `COleDateTimeSpan` viene utilizzato con la relativa classe complementare [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md). `COleDateTime` incapsula il **data** tipo di dati di automazione OLE. `COleDateTime` rappresenta i valori di tempo assoluto. Tutti `COleDateTime` calcoli `COleDateTimeSpan` valori. La relazione tra queste classi è analoga a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).  
  
 Per ulteriori informazioni sul `COleDateTime` e `COleDateTimeSpan` classi, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLComTime.h  
  
##  <a name="coledatetimespan_relational_operators"></a>  Operatori relazionali COleDateTimeSpan  
 Operatori di confronto.  
  
```
bool operator==(const COleDateTimeSpan& dateSpan) const throw();
bool operator!=(const COleDateTimeSpan& dateSpan) const throw();
bool operator<(const COleDateTimeSpan& dateSpan) const throw();
bool operator>(const COleDateTimeSpan& dateSpan) const throw();
bool operator<=(const COleDateTimeSpan& dateSpan) const throw();
bool operator>=(const COleDateTimeSpan& dateSpan) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 *dateSpan*  
 Oggetto `COleDateTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Questi operatori confrontano due valori di data/ora-intervallo e restituire **true** se la condizione è true; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Si verificherà un ATLASSERT se degli operandi è di tipo non valido.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#25](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_1.cpp)]  
  
 [!code-cpp[NVC_ATLMFC_Utilities#26](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_2.cpp)]  
  
##  <a name="coledatetimespan"></a>  COleDateTimeSpan::COleDateTimeSpan  
 Costruisce un oggetto `COleDateTimeSpan`.  
  
```
COleDateTimeSpan() throw();
COleDateTimeSpan(double dblSpanSrc) throw();
COleDateTimeSpan(LONG lDays, int nHours, int nMins, int nSecs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `dblSpanSrc`  
 Il numero di giorni da copiare nel nuovo `COleDateTimeSpan` oggetto.  
  
 `lDays`, `nHours`, `nMins`, `nSecs`  
 Indicare i valori di ora e giorno da copiare nel nuovo `COleDateTimeSpan` oggetto.  
  
### <a name="remarks"></a>Note  
 Tutti questi costruttori creare nuovi `COleDateTimeSpan` oggetti inizializzati sul valore specificato. Di seguito una breve descrizione di ognuno di questi costruttori:  
  
- **() COleDateTimeSpan** costruisce una `COleDateTimeSpan` oggetto inizializzato a 0.  
  
- **COleDateTimeSpan (** `dblSpanSrc` **)** costrutti un `COleDateTimeSpan` oggetto da un valore a virgola mobile.  
  
- **COleDateTimeSpan (** `lDays` **,** `nHours` **,** `nMins` **,** `nSecs` **)**  Costruisce un `COleDateTimeSpan` oggetto inizializzato con i valori numerici specificati.  
  
 Lo stato del nuovo `COleDateTimeSpan` oggetto è impostato su valido.  
  
 Per ulteriori informazioni sui limiti dei `COleDateTimeSpan` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#14](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_3.cpp)]  
  
##  <a name="format"></a>  COleDateTimeSpan::Format  
 Genera una rappresentazione di stringa formattata di un `COleDateTimeSpan` oggetto.  
  
```
CString Format(LPCTSTR pFormat) const;
CString Format(UINT nID) const;
```  
  
### <a name="parameters"></a>Parametri  
 `pFormat`  
 Formattazione di una stringa simile al `printf` stringa di formattazione. Codici, preceduti da una percentuale di formattazione ( `%`) accesso, vengono sostituiti dal corrispondente `COleDateTimeSpan` componente. Altri caratteri nella stringa di formattazione vengono copiati invariata la stringa restituita. Il valore e il significato dei codici di formattazione per **formato** sono elencati di seguito:  
  
- **%H** ore del giorno corrente  
  
- **%M** minuti dell'ora corrente  
  
- **%S** secondi nel minuto corrente  
  
- **%%** Segno di percentuale  
  
 I codici di formato quattro elencati sopra sono i codici soli che accetterà formato.  
  
-  
  
 `nID`  
 L'ID di risorsa per la stringa di formato controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` che contiene il valore di data/ora-intervallo formattato.  
  
### <a name="remarks"></a>Note  
 Chiamare queste funzioni per creare una rappresentazione formattata del valore di intervallo di tempo. Se lo stato di questo `COleDateTimeSpan` oggetto è null, il valore restituito è una stringa vuota. Se lo stato è valido, la stringa restituita è specificata dalla risorsa stringa **IDS_INVALID_DATETIMESPAN**.  
  
 Di seguito una breve descrizione del form per questa funzione:  
  
 **Formato (** `pFormat` **)**  
 Questo modulo formatta il valore utilizzando la stringa di formato che contiene i codici di formattazione speciale che sono preceduti da un segno di percentuale (%), come in `printf`. La stringa di formattazione viene passata come parametro alla funzione.  
  
 **Formato (** `nID` **)**  
 Questo modulo formatta il valore utilizzando la stringa di formato che contiene i codici di formattazione speciale che sono preceduti da un segno di percentuale (%), come in `printf`. La stringa di formattazione è una risorsa. L'ID della risorsa stringa viene passato come parametro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#15](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_4.cpp)]  
  
##  <a name="getdays"></a>  COleDateTimeSpan::GetDays  
 Recupera la parte relativa al giorno di questo valore di data/ora-intervallo.  
  
```
LONG GetDays() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La parte relativa al giorno di questo valore di data/ora-intervallo.  
  
### <a name="remarks"></a>Note  
 La restituzione di valori da questo intervallo di funzione tra circa - 3,615,000 e 3,615,000.  
  
 Per altre funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetHours](#gethours)  
  
- [GetMinutes](#getminutes)  
  
- [GetSeconds](#getseconds)  
  
- [GetTotalDays](#gettotaldays)  
  
- [GetTotalHours](#gettotalhours)  
  
- [GetTotalMinutes](#gettotalminutes)  
  
- [GetTotalSeconds](#gettotalseconds)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#16](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_5.cpp)]  
  
##  <a name="gethours"></a>  COleDateTimeSpan::GetHours  
 Recupera la parte di questo valore di-intervallo di tempo di data/ora.  
  
```
LONG GetHours() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Parte di questo valore di data/ora-intervallo di ore.  
  
### <a name="remarks"></a>Note  
 I valori restituiti da questo intervallo funzione compreso tra - 23 e 23.  
  
 Per altre funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetDays](#getdays)  
  
- [GetMinutes](#getminutes)  
  
- [GetSeconds](#getseconds)  
  
- [GetTotalDays](#gettotaldays)  
  
- [GetTotalHours](#gettotalhours)  
  
- [GetTotalMinutes](#gettotalminutes)  
  
- [GetTotalSeconds](#gettotalseconds)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#17](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_6.cpp)]  
  
##  <a name="getminutes"></a>  COleDateTimeSpan::GetMinutes  
 Recupera la parte di questo valore di-intervallo di tempo di data/minuto.  
  
```
LONG GetMinutes() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Parte di questo valore di data/ora-intervallo di minuti.  
  
### <a name="remarks"></a>Note  
 I valori restituiti da questo intervallo funzione compreso tra - 59 e 59.  
  
 Per altre funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetDays](#getdays)  
  
- [GetHours](#gethours)  
  
- [GetSeconds](#getseconds)  
  
- [GetTotalDays](#gettotaldays)  
  
- [GetTotalHours](#gettotalhours)  
  
- [GetTotalMinutes](#gettotalminutes)  
  
- [GetTotalSeconds](#gettotalseconds)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#18](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_7.cpp)]  
  
##  <a name="getseconds"></a>  COleDateTimeSpan::GetSeconds  
 Recupera la seconda parte di questo valore di data/ora-intervallo.  
  
```
LONG GetSeconds() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La parte relativa ai secondi di questo valore di data/ora-intervallo.  
  
### <a name="remarks"></a>Note  
 I valori restituiti da questo intervallo funzione compreso tra - 59 e 59.  
  
 Per altre funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetDays](#getdays)  
  
- [GetHours](#gethours)  
  
- [GetMinutes](#getminutes)  
  
- [GetTotalDays](#gettotaldays)  
  
- [GetTotalHours](#gettotalhours)  
  
- [GetTotalMinutes](#gettotalminutes)  
  
- [GetTotalSeconds](#gettotalseconds)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#19](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_8.cpp)]  
  
##  <a name="getstatus"></a>  COleDateTimeSpan::GetStatus  
 Ottiene lo stato (validità) di questo `COleDateTimeSpan` oggetto.  
  
```
DateTimeSpanStatus GetStatus() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato di questo `COleDateTimeSpan` valore.  
  
### <a name="remarks"></a>Note  
 Il valore restituito è definito dal **DateTimeSpanStatus** tipo enumerato, definito all'interno di `COleDateTimeSpan` classe.  
  
```  
enum DateTimeSpanStatus{  
   valid = 0,  
   invalid = 1,  
   null = 2,  
};  
```  
  
 Per una breve descrizione dei valori di stato, vedere l'elenco seguente:  
  
- **COleDateTimeSpan::valid** indica che questo `COleDateTimeSpan` oggetto è valido.  
  
- **COleDateTimeSpan::invalid** indica che questo `COleDateTimeSpan` oggetto non è valido; vale a dire, il relativo valore sia corretto.  
  
- **COleDateTimeSpan::null** indica che questo `COleDateTimeSpan` oggetto è null, vale a dire che è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di C++ database **NULL**.)  
  
 Lo stato di un `COleDateTimeSpan` oggetto non è valido nei casi seguenti:  
  
-   Se questo oggetto è verificato un overflow o underflow durante un'operazione aritmetica di assegnazione, vale a dire, `+=` o `-=`.  
  
-   Se questo oggetto è stato assegnato un valore non valido.  
  
-   Se lo stato di questo oggetto è stato impostato in modo esplicito non valido tramite `SetStatus`.  
  
 Per ulteriori informazioni sulle operazioni che è possibile impostare lo stato non valido, vedere [COleDateTimeSpan::operator +, -](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_-) e [COleDateTimeSpan::operator +, -=](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_eq_-_eq).  
  
 Per ulteriori informazioni sui limiti dei `COleDateTimeSpan` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="gettotaldays"></a>  COleDateTimeSpan::GetTotalDays  
 Recupera il valore di data/ora-intervallo espresso in giorni.  
  
```
double GetTotalDays() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo valore di data/ora-intervallo espresso in giorni. Anche se questa funzione è un prototipo per restituire un valore double, restituirà sempre un valore intero.  
  
### <a name="remarks"></a>Note  
 I valori restituiti da questo intervallo di funzione tra circa - 3.65e6 e 3.65e6.  
  
 Per altre funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetDays](#getdays)  
  
- [GetHours](#gethours)  
  
- [GetMinutes](#getminutes)  
  
- [GetSeconds](#getseconds)  
  
- [GetTotalHours](#gettotalhours)  
  
- [GetTotalMinutes](#gettotalminutes)  
  
- [GetTotalSeconds](#gettotalseconds)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#20](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_9.cpp)]  
  
##  <a name="gettotalhours"></a>  COleDateTimeSpan::GetTotalHours  
 Recupera il valore di data/ora-intervallo espresso in ore.  
  
```
double GetTotalHours() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo valore di data/ora-intervallo espresso in ore. Anche se questa funzione è un prototipo per restituire un valore double, restituirà sempre un valore intero.  
  
### <a name="remarks"></a>Note  
 I valori restituiti da questo intervallo di funzione tra circa - 8.77e7 e 8.77e7.  
  
 Per altre funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetDays](#getdays)  
  
- [GetHours](#gethours)  
  
- [GetMinutes](#getminutes)  
  
- [GetSeconds](#getseconds)  
  
- [GetTotalDays](#gettotaldays)  
  
- [GetTotalMinutes](#gettotalminutes)  
  
- [GetTotalSeconds](#gettotalseconds)  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetTotalDays](#gettotaldays).  
  
##  <a name="gettotalminutes"></a>  COleDateTimeSpan::GetTotalMinutes  
 Recupera il valore di data/ora-intervallo espresso in minuti.  
  
```
double GetTotalMinutes() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo valore di data/ora-intervallo espresso in minuti. Anche se questa funzione è un prototipo per restituire un valore double, restituirà sempre un valore intero.  
  
### <a name="remarks"></a>Note  
 I valori restituiti da questo intervallo di funzione tra circa - 5.26e9 e 5.26e9.  
  
 Per altre funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetDays](#getdays)  
  
- [GetHours](#gethours)  
  
- [GetMinutes](#getminutes)  
  
- [GetSeconds](#getseconds)  
  
- [GetTotalDays](#gettotaldays)  
  
- [GetTotalHours](#gettotalhours)  
  
- [GetTotalSeconds](#gettotalseconds)  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetTotalDays](#gettotaldays).  
  
##  <a name="gettotalseconds"></a>  COleDateTimeSpan::GetTotalSeconds  
 Recupera il valore di data/ora-intervallo espresso in secondi.  
  
```
double GetTotalSeconds() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo valore di data/ora-intervallo espresso in secondi. Anche se questa funzione è un prototipo per restituire un valore double, restituirà sempre un valore intero.  
  
### <a name="remarks"></a>Note  
 I valori restituiti da questa funzione è compreso tra circa - 3.16e11 a 3.16e11.  
  
 Per altre funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetDays](#getdays)  
  
- [GetHours](#gethours)  
  
- [GetMinutes](#getminutes)  
  
- [GetSeconds](#getseconds)  
  
- [GetTotalDays](#gettotaldays)  
  
- [GetTotalHours](#gettotalhours)  
  
- [GetTotalMinutes](#gettotalminutes)  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [GetTotalDays](#gettotaldays).  
  
##  <a name="m_span"></a>  COleDateTimeSpan::m_span  
 Sottostante **doppie** valore per questo `COleDateTime` oggetto.  
  
```
double m_span;
```  
  
### <a name="remarks"></a>Note  
 Questo valore indica la data /-intervallo di tempo in giorni.  
  
> [!CAUTION]
>  La modifica del valore nel **doppie** membro dati verrà modificato il valore di questo `COleDateTimeSpan` oggetto. Non viene modificato lo stato di questo `COleDateTimeSpan` oggetto.  
  
##  <a name="m_status"></a>  COleDateTimeSpan::m_status  
 Il tipo per questo membro dati è di tipo enumerato **DateTimeSpanStatus**, cui è definito all'interno di `COleDateTimeSpan` classe.  
  
```
DateTimeSpanStatus m_status;
```  
  
### <a name="remarks"></a>Note  
  
```  
enum DateTimeSpanStatus{  
   valid = 0,  
   invalid = 1,  
   null = 2,  
   };  
```  
  
 Per una breve descrizione dei valori di stato, vedere l'elenco seguente:  
  
- **COleDateTimeSpan::valid** indica che questo `COleDateTimeSpan` oggetto è valido.  
  
- **COleDateTimeSpan::invalid** indica che questo `COleDateTimeSpan` oggetto non è valido; vale a dire, il relativo valore sia corretto.  
  
- **COleDateTimeSpan::null** indica che questo `COleDateTimeSpan` oggetto è null, vale a dire che è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di C++ database **NULL**.)  
  
 Lo stato di un `COleDateTimeSpan` oggetto non è valido nei casi seguenti:  
  
-   Se questo oggetto è verificato un overflow o underflow durante un'operazione aritmetica di assegnazione, vale a dire, `+=` o `-=`.  
  
-   Se questo oggetto è stato assegnato un valore non valido.  
  
-   Se lo stato di questo oggetto è stato impostato in modo esplicito non valido tramite [SetStatus](#setstatus).  
  
 Per ulteriori informazioni sulle operazioni che è possibile impostare lo stato non valido, vedere [COleDateTimeSpan::operator +, -](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_-) e [COleDateTimeSpan::operator +, -=](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_eq_-_eq).  
  
> [!CAUTION]
>  Questo membro dati è per le situazioni di programmazione avanzate. È consigliabile utilizzare le funzioni membro inline [GetStatus](#getstatus) e [SetStatus](#setstatus). Vedere `SetStatus` per ulteriore avvertenze relative in modo esplicito l'impostazione di questo membro dati.  
  
 Per ulteriori informazioni sui limiti dei `COleDateTimeSpan` valori, vedere l'articolo [data e ora: supporto di automazione](../../atl-mfc-shared/date-and-time-automation-support.md).  
  
##  <a name="operator_eq"></a>  COleDateTimeSpan::operator =  
 Copia un `COleDateTimeSpan` valore.  
  
```
COleDateTimeSpan& operator=(double dblSpanSrc) throw();
```  
  
### <a name="remarks"></a>Note  
 Questo operatore di assegnazione di overload copia il valore di data/ora-intervallo di origine in questa `COleDateTimeSpan` oggetto.  
  
##  <a name="operator_add_-"></a>  COleDateTimeSpan::operator +, -  
 Aggiungere, sottrarre e modificare una firma `COleDateTimeSpan` valori.  
  
```
COleDateTimeSpan operator+(const COleDateTimeSpan& dateSpan) const throw();
COleDateTimeSpan operator-(const COleDateTimeSpan& dateSpan) const throw();
COleDateTimeSpan operator-() const throw();
```  
  
### <a name="remarks"></a>Note  
 I primi due operatori consentono di addizione e sottrazione di valori di data/ora-intervallo. Il terzo consente di modificare il segno di un valore data/ora-intervallo.  
  
 Se uno degli operandi è null, lo stato dell'oggetto risultante `COleDateTimeSpan` valore è null.  
  
 Se uno degli operandi non è valido e l'altro non è null, lo stato dell'oggetto risultante `COleDateTimeSpan` valore non è valido.  
  
 Per ulteriori informazioni sui valori di stato valido, non valido e null, vedere il [m_status](#m_status) variabile membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#23](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_10.cpp)]  
  
##  <a name="operator_add_eq_-_eq"></a>  + = COleDateTimeSpan::operator-=  
 Addizione e sottrazione un `COleDateTimeSpan` questo valore `COleDateTimeSpan` valore.  
  
```
COleDateTimeSpan& operator+=(const COleDateTimeSpan dateSpan) throw();
COleDateTimeSpan& operator-=(const COleDateTimeSpan dateSpan) throw();
```  
  
### <a name="remarks"></a>Note  
 Questi operatori consentono di addizione e sottrazione di valori di data/ora-intervallo da questo `COleDateTimeSpan` oggetto. Se uno degli operandi è null, lo stato dell'oggetto risultante `COleDateTimeSpan` valore è null.  
  
 Se uno degli operandi non è valido e l'altro non è null, lo stato dell'oggetto risultante `COleDateTimeSpan` valore non è valido.  
  
 Per ulteriori informazioni sui valori di stato valido, non valido e null, vedere il [m_status](#m_status) variabile membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#24](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_11.cpp)]  
  
##  <a name="operator_double"></a>  COleDateTimeSpan::operator double  
 Converte l'oggetto `COleDateTimeSpan` valore un **double**.  
  
```
operator double() const throw();
```  
  
### <a name="remarks"></a>Note  
 Questo operatore restituisce il valore di questo `COleDateTimeSpan` valore come numero a virgola mobile di giorni.  
  
##  <a name="setdatetimespan"></a>  COleDateTimeSpan::SetDateTimeSpan  
 Imposta il valore di questo valore di data/ora-intervallo.  
  
```
void SetDateTimeSpan(LONG lDays, int nHours, int nMins, int nSecs) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lDays`, `nHours`, `nMins`, `nSecs`  
 Indicare i valori di intervallo di date e intervallo di tempo deve essere copiato `COleDateTimeSpan` oggetto.  
  
### <a name="remarks"></a>Note  
 Per le funzioni che richiedono il valore di un `COleDateTimeSpan` , vedere le seguenti funzioni membro:  
  
- [GetDays](#getdays)  
  
- [GetHours](#gethours)  
  
- [GetMinutes](#getminutes)  
  
- [GetSeconds](#getseconds)  
  
- [GetTotalDays](#gettotaldays)  
  
- [GetTotalHours](#gettotalhours)  
  
- [GetTotalMinutes](#gettotalminutes)  
  
- [GetTotalSeconds](#gettotalseconds)  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#21](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_12.cpp)]  
  
##  <a name="setstatus"></a>  COleDateTimeSpan::SetStatus  
 Imposta lo stato (validità) di questo `COleDateTimeSpan` oggetto.  
  
```
void SetStatus(DateTimeSpanStatus status) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *status*  
 Il nuovo valore di stato per questo `COleDateTimeSpan` oggetto.  
  
### <a name="remarks"></a>Note  
 Il *stato* consiste nel valore del parametro dal **DateTimeSpanStatus** tipo enumerato, definito all'interno di `COleDateTimeSpan` classe.  
  
```  
enum DateTimeSpanStatus{  
   valid = 0,  
   invalid = 1,  
   null = 2,  
   };  
```  
  
 Per una breve descrizione dei valori di stato, vedere l'elenco seguente:  
  
- **COleDateTimeSpan::valid** indica che questo `COleDateTimeSpan` oggetto è valido.  
  
- **COleDateTimeSpan::invalid** indica che questo `COleDateTimeSpan` oggetto non è valido; vale a dire, il relativo valore sia corretto.  
  
- **COleDateTimeSpan::null** indica che questo `COleDateTimeSpan` oggetto è null, vale a dire che è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di "non avere alcun valore," invece di C++ database **NULL**.)  
  
    > [!CAUTION]
    >  Questa funzione è per le situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. E spesso essere utilizzato per impostare lo stato su `null` o **valido**. Si noti che l'operatore di assegnazione ( [operatore =](#eq)) e [SetDateTimeSpan](#setdatetimespan) impostare lo stato dell'oggetto in base ai valori di origine.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#22](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_13.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [COleDateTime (classe)](../../atl-mfc-shared/reference/coledatetime-class.md)   
 [Classe CTime](../../atl-mfc-shared/reference/ctime-class.md)   
 [Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)


