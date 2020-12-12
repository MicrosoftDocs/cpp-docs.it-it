---
description: 'Altre informazioni su: classe COleDateTimeSpan'
title: Classe COleDateTimeSpan
ms.date: 03/27/2019
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
helpviewer_keywords:
- timespan
- time span
- shared classes, COleDateTimeSpan
- Date data type, MFC encapsulation of
- COleDateTimeSpan class
ms.assetid: 7441526d-a30a-4019-8fb3-3fee6f897cbe
ms.openlocfilehash: 51632f8c179ea0e256c39052e924d296b89aefd0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166772"
---
# <a name="coledatetimespan-class"></a>Classe COleDateTimeSpan

Rappresenta un'ora relativa, un intervallo di tempo.

## <a name="syntax"></a>Sintassi

```
class COleDateTimeSpan
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleDateTimeSpan:: COleDateTimeSpan](#coledatetimespan)|Costruisce un oggetto `COleDateTimeSpan`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleDateTimeSpan:: Format](#format)|Genera una rappresentazione di stringa formattata di un `COleDateTimeSpan` oggetto.|
|[COleDateTimeSpan:: GetDays](#getdays)|Restituisce la parte relativa al giorno dell'intervallo `COleDateTimeSpan` rappresentato da questo oggetto.|
|[COleDateTimeSpan:: getHours](#gethours)|Restituisce la parte relativa all'ora dell'intervallo `COleDateTimeSpan` rappresentato da questo oggetto.|
|[COleDateTimeSpan:: getMinutes](#getminutes)|Restituisce la parte relativa ai minuti dell'intervallo `COleDateTimeSpan` rappresentato da questo oggetto.|
|[COleDateTimeSpan:: getsecondi](#getseconds)|Restituisce la seconda parte dell'intervallo rappresentato da questo `COleDateTimeSpan` oggetto.|
|[COleDateTimeSpan:: GetStatus](#getstatus)|Ottiene lo stato (validità) di questo `COleDateTimeSpan` oggetto.|
|[COleDateTimeSpan:: GetTotalDays](#gettotaldays)|Restituisce il numero di giorni rappresentato da questo `COleDateTimeSpan` oggetto.|
|[COleDateTimeSpan:: GetTotalHours](#gettotalhours)|Restituisce il numero di ore `COleDateTimeSpan` rappresentate da questo oggetto.|
|[COleDateTimeSpan:: GetTotalMinutes](#gettotalminutes)|Restituisce il numero di minuti `COleDateTimeSpan` rappresentati da questo oggetto.|
|[COleDateTimeSpan:: GetTotalSeconds](#gettotalseconds)|Restituisce il numero di secondi `COleDateTimeSpan` rappresentati da questo oggetto.|
|[COleDateTimeSpan:: SetDateTimeSpan](#setdatetimespan)|Imposta il valore di questo `COleDateTimeSpan` oggetto.|
|[COleDateTimeSpan:: sestatus](#setstatus)|Imposta lo stato (validità) di questo `COleDateTimeSpan` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|-|-|
|[operatore +,-](#operator_add_-)|Aggiungere, sottrarre e modificare il segno per `COleDateTimeSpan` i valori.|
|[operatore + =,-=](#operator_add_eq_-_eq)|Aggiungere e sottrarre un `COleDateTimeSpan` valore da questo `COleDateTimeSpan` valore.|
|[operatore =](#operator_eq)|Copia un `COleDateTimeSpan` valore.|
|[operator = =, <, <=](#coledatetimespan_relational_operators)|Confrontare due `COleDateTimeSpan` valori.|
|[operatore double](#operator_double)|Converte questo `COleDateTimeSpan` valore in un oggetto **`double`** .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[COleDateTimeSpan:: m_span](#m_span)|Contiene l' **`double`** oggetto sottostante per questo `COleDateTimeSpan` oggetto.|
|[COleDateTimeSpan:: m_status](#m_status)|Contiene lo stato di questo `COleDateTimeSpan` oggetto.|

## <a name="remarks"></a>Commenti

`COleDateTimeSpan` non dispone di una classe base.

Un `COleDateTimeSpan` mantiene il tempo in giorni.

`COleDateTimeSpan` viene usato con la classe complementare [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md). `COleDateTime` Incapsula il `DATE` tipo di dati dell'automazione OLE. `COleDateTime` rappresenta i valori temporali assoluti. Tutti i `COleDateTime` calcoli coinvolgono `COleDateTimeSpan` i valori. La relazione tra queste classi è analoga a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).

Per ulteriori informazioni sulle `COleDateTime` classi e `COleDateTimeSpan` , vedere l'articolo [data e ora: supporto di automazione](../date-and-time.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLComTime. h

## <a name="coledatetimespan-relational-operators"></a><a name="coledatetimespan_relational_operators"></a> Operatori relazionali COleDateTimeSpan

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

*dateSpan*<br/>
Oggetto `COleDateTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Questi operatori confrontano due valori di data/ora e restituiscono TRUE se la condizione è true; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

> [!NOTE]
> Si verificherà un ATLASSERT se uno degli operandi non è valido.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#25](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_1.cpp)]

[!code-cpp[NVC_ATLMFC_Utilities#26](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_2.cpp)]

## <a name="coledatetimespancoledatetimespan"></a><a name="coledatetimespan"></a> COleDateTimeSpan:: COleDateTimeSpan

Costruisce un oggetto `COleDateTimeSpan`.

```
COleDateTimeSpan() throw();
COleDateTimeSpan(double dblSpanSrc) throw();
COleDateTimeSpan(LONG lDays, int nHours, int nMins, int nSecs) throw();
```

### <a name="parameters"></a>Parametri

*dblSpanSrc*<br/>
Numero di giorni da copiare nel nuovo `COleDateTimeSpan` oggetto.

*lDays*, *nHours*, *nMins*, *nSecs*<br/>
Indica i valori di data e ora da copiare nel nuovo `COleDateTimeSpan` oggetto.

### <a name="remarks"></a>Commenti

Tutti questi costruttori creano nuovi `COleDateTimeSpan` oggetti inizializzati sul valore specificato. Di seguito viene riportata una breve descrizione di ognuno di questi costruttori:

- **COleDateTimeSpan ()** Costruisce un `COleDateTimeSpan` oggetto inizializzato su 0.

- **COleDateTimeSpan (** `dblSpanSrc` **)** costruisce un `COleDateTimeSpan` oggetto da un valore a virgola mobile.

- **COleDateTimeSpan (** `lDays` **,** `nHours` **,** `nMins` **,** `nSecs` **)** costruisce un `COleDateTimeSpan` oggetto inizializzato sui valori numerici specificati.

Lo stato del nuovo `COleDateTimeSpan` oggetto è impostato su valido.

Per ulteriori informazioni sui limiti per i `COleDateTimeSpan` valori, vedere l'articolo [data e ora: supporto](../date-and-time.md)per l'automazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#14](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_3.cpp)]

## <a name="coledatetimespanformat"></a><a name="format"></a> COleDateTimeSpan:: Format

Genera una rappresentazione di stringa formattata di un `COleDateTimeSpan` oggetto.

```
CString Format(LPCTSTR pFormat) const;
CString Format(UINT nID) const;
```

### <a name="parameters"></a>Parametri

*pFormat*<br/>
Stringa di formattazione simile alla `printf` stringa di formattazione. I codici di formattazione, preceduti da un segno di percentuale ( `%` ), vengono sostituiti dal `COleDateTimeSpan` componente corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati senza modifiche nella stringa restituita. Il valore e il significato dei codici di formattazione per `Format` sono elencati di seguito:

- **% H** Ore nel giorno corrente

- **% M** Minuti nell'ora corrente

- **% S** Secondi nel minuto corrente

- **%%** Segno di percentuale

I quattro codici di formato elencati sopra sono gli unici codici che verranno accettati dal formato.

-

*nID*<br/>
ID risorsa per la stringa di controllo del formato.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il valore formattato di data/ora.

### <a name="remarks"></a>Commenti

Chiamare queste funzioni per creare una rappresentazione formattata del valore di intervallo di tempo. Se lo stato di questo `COleDateTimeSpan` oggetto è null, il valore restituito è una stringa vuota. Se lo stato non è valido, la stringa restituita viene specificata dalla risorsa stringa IDS_INVALID_DATETIMESPAN.

Di seguito è riportata una breve descrizione dei moduli per questa funzione:

**Formato (** *pFormat* **)**<br/>
Questo formato formatta il valore utilizzando la stringa di formato che contiene codici di formattazione speciali preceduti da un segno di percentuale (%), come in `printf` . La stringa di formattazione viene passata come parametro alla funzione.

**Formato (** *NID* **)**<br/>
Questo formato formatta il valore utilizzando la stringa di formato che contiene codici di formattazione speciali preceduti da un segno di percentuale (%), come in `printf` . La stringa di formattazione è una risorsa. L'ID di questa risorsa stringa viene passato come parametro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#15](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_4.cpp)]

## <a name="coledatetimespangetdays"></a><a name="getdays"></a> COleDateTimeSpan:: GetDays

Recupera la parte relativa al giorno di questo valore di data/ora.

```
LONG GetDays() const throw();
```

### <a name="return-value"></a>Valore restituito

Parte relativa al giorno di questo valore di data/ora.

### <a name="remarks"></a>Commenti

I valori restituiti da questa funzione sono compresi tra circa-3.615.000 e 3.615.000.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

- [GetHours](#gethours)

- [GetMinutes](#getminutes)

- [GetSeconds](#getseconds)

- [GetTotalDays](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSeconds](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#16](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_5.cpp)]

## <a name="coledatetimespangethours"></a><a name="gethours"></a> COleDateTimeSpan:: getHours

Recupera la parte relativa all'ora di questo valore di data/ora.

```
LONG GetHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Parte relativa alle ore di questo valore di data/ora.

### <a name="remarks"></a>Commenti

I valori restituiti da questa funzione sono compresi tra-23 e 23.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

- [GetDays](#getdays)

- [GetMinutes](#getminutes)

- [GetSeconds](#getseconds)

- [GetTotalDays](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSeconds](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#17](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_6.cpp)]

## <a name="coledatetimespangetminutes"></a><a name="getminutes"></a> COleDateTimeSpan:: getMinutes

Recupera la parte relativa ai minuti di questo valore di data/ora.

```
LONG GetMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Parte relativa ai minuti di questo valore di data/ora.

### <a name="remarks"></a>Commenti

I valori restituiti da questa funzione sono compresi tra-59 e 59.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

- [GetDays](#getdays)

- [GetHours](#gethours)

- [GetSeconds](#getseconds)

- [GetTotalDays](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSeconds](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#18](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_7.cpp)]

## <a name="coledatetimespangetseconds"></a><a name="getseconds"></a> COleDateTimeSpan:: getsecondi

Recupera la seconda parte di questo valore di data/ora.

```
LONG GetSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Parte relativa ai secondi di questo valore di data/ora.

### <a name="remarks"></a>Commenti

I valori restituiti da questa funzione sono compresi tra-59 e 59.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

- [GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes](#getminutes)

- [GetTotalDays](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSeconds](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#19](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_8.cpp)]

## <a name="coledatetimespangetstatus"></a><a name="getstatus"></a> COleDateTimeSpan:: GetStatus

Ottiene lo stato (validità) di questo `COleDateTimeSpan` oggetto.

```
DateTimeSpanStatus GetStatus() const throw();
```

### <a name="return-value"></a>Valore restituito

Stato di questo `COleDateTimeSpan` valore.

### <a name="remarks"></a>Commenti

Il valore restituito è definito dal `DateTimeSpanStatus` tipo enumerato, definito all'interno della `COleDateTimeSpan` classe.

```
enum DateTimeSpanStatus{
   valid = 0,
   invalid = 1,
   null = 2,
};
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleDateTimeSpan::valid` Indica che l' `COleDateTimeSpan` oggetto è valido.

- `COleDateTimeSpan::invalid` Indica che l' `COleDateTimeSpan` oggetto non è valido, ovvero che il relativo valore potrebbe non essere corretto.

- `COleDateTimeSpan::null` Indica che l' `COleDateTimeSpan` oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Si tratta di "null" nel senso del database "senza valore", a differenza del valore C++ NULL).

Lo stato di un `COleDateTimeSpan` oggetto non è valido nei casi seguenti:

- Se l'oggetto ha riscontrato un overflow o un underflow durante un'operazione di assegnazione aritmetica, ovvero `+=` o `-=` .

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto è stato impostato in modo esplicito su non valido utilizzando `SetStatus` .

Per ulteriori informazioni sulle operazioni che possono impostare lo stato su non valido, vedere [COleDateTimeSpan:: operator +,-](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_-) e [COleDateTimeSpan:: operator + =,-=](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_eq_-_eq).

Per ulteriori informazioni sui limiti per i `COleDateTimeSpan` valori, vedere l'articolo [data e ora: supporto](../date-and-time.md)per l'automazione.

## <a name="coledatetimespangettotaldays"></a><a name="gettotaldays"></a> COleDateTimeSpan:: GetTotalDays

Recupera il valore di intervallo di data/ora espresso in giorni.

```
double GetTotalDays() const throw();
```

### <a name="return-value"></a>Valore restituito

Questo valore di data/ora espresso in giorni. Anche se questa funzione è con prototipo per restituire un valore Double, restituirà sempre un valore integer.

### <a name="remarks"></a>Commenti

I valori restituiti da questa funzione sono compresi tra circa-3.65 E6 e 3.65 E6.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

- [GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes](#getminutes)

- [GetSeconds](#getseconds)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSeconds](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#20](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_9.cpp)]

## <a name="coledatetimespangettotalhours"></a><a name="gettotalhours"></a> COleDateTimeSpan:: GetTotalHours

Recupera il valore di intervallo di data/ora espresso in ore.

```
double GetTotalHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Questo valore di data/ora espresso in ore. Anche se questa funzione è con prototipo per restituire un valore Double, restituirà sempre un valore integer.

### <a name="remarks"></a>Commenti

I valori restituiti da questa funzione sono compresi tra approssimativamente-8.77 E7 e 8.77 e7.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

- [GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes](#getminutes)

- [GetSeconds](#getseconds)

- [GetTotalDays](#gettotaldays)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSeconds](#gettotalseconds)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalDays](#gettotaldays).

## <a name="coledatetimespangettotalminutes"></a><a name="gettotalminutes"></a> COleDateTimeSpan:: GetTotalMinutes

Recupera il valore di intervallo di data/ora espresso in minuti.

```
double GetTotalMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Questo valore di data/ora espresso in minuti. Anche se questa funzione è con prototipo per restituire un valore Double, restituirà sempre un valore integer.

### <a name="remarks"></a>Commenti

I valori restituiti da questa funzione sono compresi tra 5.26 e9 e 5.26 E9.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

- [GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes](#getminutes)

- [GetSeconds](#getseconds)

- [GetTotalDays](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalSeconds](#gettotalseconds)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalDays](#gettotaldays).

## <a name="coledatetimespangettotalseconds"></a><a name="gettotalseconds"></a> COleDateTimeSpan:: GetTotalSeconds

Recupera il valore di intervallo di data/ora espresso in secondi.

```
double GetTotalSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Questo valore di data/ora espresso in secondi. Anche se questa funzione è con prototipo per restituire un valore Double, restituirà sempre un valore integer.

### <a name="remarks"></a>Commenti

I valori restituiti da questa funzione sono compresi tra approssimativamente-3.16 E11 e 3.16 e11.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

- [GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes](#getminutes)

- [GetSeconds](#getseconds)

- [GetTotalDays](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalDays](#gettotaldays).

## <a name="coledatetimespanm_span"></a><a name="m_span"></a> COleDateTimeSpan:: m_span

Valore sottostante **`double`** per questo `COleDateTime` oggetto.

```
double m_span;
```

### <a name="remarks"></a>Commenti

Questo valore esprime l'intervallo di data/ora in giorni.

> [!CAUTION]
> Se si modifica il valore nel **`double`** membro dati, il valore di questo `COleDateTimeSpan` oggetto verrà modificato. Non modifica lo stato di questo `COleDateTimeSpan` oggetto.

## <a name="coledatetimespanm_status"></a><a name="m_status"></a> COleDateTimeSpan:: m_status

Il tipo di questo membro dati è il tipo enumerato `DateTimeSpanStatus` , definito all'interno della `COleDateTimeSpan` classe.

```
DateTimeSpanStatus m_status;
```

### <a name="remarks"></a>Commenti

```
enum DateTimeSpanStatus{
   valid = 0,
   invalid = 1,
   null = 2,
   };
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleDateTimeSpan::valid` Indica che l' `COleDateTimeSpan` oggetto è valido.

- `COleDateTimeSpan::invalid` Indica che l' `COleDateTimeSpan` oggetto non è valido, ovvero che il relativo valore potrebbe non essere corretto.

- `COleDateTimeSpan::null` Indica che l' `COleDateTimeSpan` oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Si tratta di "null" nel senso del database "senza valore", a differenza del valore C++ NULL).

Lo stato di un `COleDateTimeSpan` oggetto non è valido nei casi seguenti:

- Se l'oggetto ha riscontrato un overflow o un underflow durante un'operazione di assegnazione aritmetica, ovvero `+=` o `-=` .

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto è stato impostato in modo esplicito su non valido utilizzando [sestatus](#setstatus).

Per ulteriori informazioni sulle operazioni che possono impostare lo stato su non valido, vedere [COleDateTimeSpan:: operator +,-](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_-) e [COleDateTimeSpan:: operator + =,-=](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_eq_-_eq).

> [!CAUTION]
> Questo membro dati è per le situazioni di programmazione avanzate. È necessario utilizzare le funzioni membro inline [GetStatus](#getstatus) e [sestatus](#setstatus). `SetStatus`Per ulteriori avvertenze su come impostare in modo esplicito questo membro dati, vedere.

Per ulteriori informazioni sui limiti per i `COleDateTimeSpan` valori, vedere l'articolo [data e ora: supporto](../date-and-time.md)per l'automazione.

## <a name="coledatetimespanoperator-"></a><a name="operator_eq"></a> COleDateTimeSpan:: operator =

Copia un `COleDateTimeSpan` valore.

```
COleDateTimeSpan& operator=(double dblSpanSrc) throw();
```

### <a name="remarks"></a>Commenti

Questo operatore di assegnazione di overload copia il valore di data/ora di origine in questo `COleDateTimeSpan` oggetto.

## <a name="coledatetimespanoperator---"></a><a name="operator_add_-"></a> COleDateTimeSpan:: operator +,-

Aggiungere, sottrarre e modificare il segno per `COleDateTimeSpan` i valori.

```
COleDateTimeSpan operator+(const COleDateTimeSpan& dateSpan) const throw();
COleDateTimeSpan operator-(const COleDateTimeSpan& dateSpan) const throw();
COleDateTimeSpan operator-() const throw();
```

### <a name="remarks"></a>Commenti

I primi due operatori consentono di aggiungere e sottrarre i valori di data/ora. Il terzo consente di modificare il segno di un valore di data/ora.

Se uno degli operandi è null, lo stato del `COleDateTimeSpan` valore risultante è null.

Se uno degli operandi non è valido e l'altro non è null, lo stato del valore risultante non `COleDateTimeSpan` è valido.

Per ulteriori informazioni sui valori di stato validi, non validi e null, vedere la [m_status](#m_status) variabile membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#23](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_10.cpp)]

## <a name="coledatetimespanoperator---"></a><a name="operator_add_eq_-_eq"></a> COleDateTimeSpan:: operator + =,-=

Aggiungere e sottrarre un `COleDateTimeSpan` valore da questo `COleDateTimeSpan` valore.

```
COleDateTimeSpan& operator+=(const COleDateTimeSpan dateSpan) throw();
COleDateTimeSpan& operator-=(const COleDateTimeSpan dateSpan) throw();
```

### <a name="remarks"></a>Commenti

Questi operatori consentono di aggiungere e sottrarre i valori di data/ora da questo `COleDateTimeSpan` oggetto. Se uno degli operandi è null, lo stato del `COleDateTimeSpan` valore risultante è null.

Se uno degli operandi non è valido e l'altro non è null, lo stato del valore risultante non `COleDateTimeSpan` è valido.

Per ulteriori informazioni sui valori di stato validi, non validi e null, vedere la [m_status](#m_status) variabile membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#24](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_11.cpp)]

## <a name="coledatetimespanoperator-double"></a><a name="operator_double"></a> COleDateTimeSpan:: operator double

Converte questo `COleDateTimeSpan` valore in un oggetto **`double`** .

```
operator double() const throw();
```

### <a name="remarks"></a>Commenti

Questo operatore restituisce il valore di questo `COleDateTimeSpan` valore come numero a virgola mobile di giorni.

## <a name="coledatetimespansetdatetimespan"></a><a name="setdatetimespan"></a> COleDateTimeSpan:: SetDateTimeSpan

Imposta il valore di questo valore di intervallo di data/ora.

```cpp
void SetDateTimeSpan(LONG lDays, int nHours, int nMins, int nSecs) throw();
```

### <a name="parameters"></a>Parametri

*lDays*, *nHours*, *nMins*, *nSecs*<br/>
Indica i valori di intervallo di date e di intervallo di tempo da copiare in questo `COleDateTimeSpan` oggetto.

### <a name="remarks"></a>Commenti

Per le funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le funzioni membro seguenti:

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

## <a name="coledatetimespansetstatus"></a><a name="setstatus"></a> COleDateTimeSpan:: sestatus

Imposta lo stato (validità) di questo `COleDateTimeSpan` oggetto.

```cpp
void SetStatus(DateTimeSpanStatus status) throw();
```

### <a name="parameters"></a>Parametri

*Stato*<br/>
Nuovo valore di stato per questo `COleDateTimeSpan` oggetto.

### <a name="remarks"></a>Commenti

Il valore del parametro *status* è definito dal `DateTimeSpanStatus` tipo enumerato, definito all'interno della `COleDateTimeSpan` classe.

```
enum DateTimeSpanStatus{
   valid = 0,
   invalid = 1,
   null = 2,
   };
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleDateTimeSpan::valid` Indica che l' `COleDateTimeSpan` oggetto è valido.

- `COleDateTimeSpan::invalid` Indica che l' `COleDateTimeSpan` oggetto non è valido, ovvero che il relativo valore potrebbe non essere corretto.

- `COleDateTimeSpan::null` Indica che l' `COleDateTimeSpan` oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Si tratta di "null" nel senso del database "senza valore", a differenza del valore C++ NULL).

   > [!CAUTION]
   > Questa funzione è destinata a situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. Verrà usato più spesso per impostare lo stato su **null** o **non valido**. Si noti che l'operatore di assegnazione ([operator =](#operator_eq)) e [SetDateTimeSpan](#setdatetimespan) non impostano lo stato dell'oggetto in base ai valori di origine.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#22](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_13.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)<br/>
[Classe CTime](../../atl-mfc-shared/reference/ctime-class.md)<br/>
[Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
