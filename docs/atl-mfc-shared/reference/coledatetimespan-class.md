---
title: COleDateTimeSpan (classe)
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
ms.openlocfilehash: 8f6a26c2724146f8723dee3ddce60ddce6995ec8
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747146"
---
# <a name="coledatetimespan-class"></a>COleDateTimeSpan (classe)

Rappresenta un tempo relativo, un intervallo di tempo.

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
|[COleDateTimeSpan::Formato](#format)|Genera una rappresentazione di `COleDateTimeSpan` stringa formattata di un oggetto.|
|[COleDateTimeSpan::GetDays](#getdays)|Restituisce la parte relativa `COleDateTimeSpan` al giorno dell'intervallo rappresentato da questo oggetto.|
|[COleDateTimeSpan::GetHours](#gethours)|Restituisce la parte dell'ora dell'intervallo rappresentato da questo `COleDateTimeSpan` oggetto.|
|[COleDateTimeSpan::GetMinutes](#getminutes)|Restituisce la parte dei `COleDateTimeSpan` minuti dell'intervallo rappresentato da questo oggetto.|
|[COleDateTimeSpan::GetSeconds](#getseconds)|Restituisce la seconda parte `COleDateTimeSpan` dell'intervallo rappresentato da questo oggetto.|
|[COleDateTimeSpan::GetStatus](#getstatus)|Ottiene lo stato (validità) `COleDateTimeSpan` di questo oggetto.|
|[COleDateTimeSpan::GetTotalDays](#gettotaldays)|Restituisce il numero `COleDateTimeSpan` di giorni rappresentato da questo oggetto.|
|[COleDateTimeSpan::GetTotalHours](#gettotalhours)|Restituisce il numero `COleDateTimeSpan` di ore rappresentato dall'oggetto.|
|[COleDateTimeSpan::GetTotalMinutes](#gettotalminutes)|Restituisce il numero `COleDateTimeSpan` di minuti rappresentato dall'oggetto.|
|[COleDateTimeSpan::GetTotalSeconds](#gettotalseconds)|Restituisce il numero `COleDateTimeSpan` di secondi rappresentato dall'oggetto.|
|[COleDateTimeSpan::SetDateTimeSpan](#setdatetimespan)|Imposta il valore `COleDateTimeSpan` di questo oggetto.|
|[COleDateTimeSpan::SetStatus](#setstatus)|Imposta lo stato (validità) `COleDateTimeSpan` di questo oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|||
|-|-|
|[operatore di comando , -](#operator_add_-)|Aggiungere, sottrarre e `COleDateTimeSpan` modificare il segno per i valori.|
|[operatore di lavoro sz, -](#operator_add_eq_-_eq)|Aggiungere e `COleDateTimeSpan` sottrarre `COleDateTimeSpan` un valore da questo valore.|
|[operatore .](#operator_eq)|Copia un `COleDateTimeSpan` valore.|
|[operatore : <, <](#coledatetimespan_relational_operators)|Confrontare `COleDateTimeSpan` due valori.|
|[operatore double](#operator_double)|Converte `COleDateTimeSpan` questo valore in un **valore double.**|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleDateTimeSpan::m_span](#m_span)|Contiene il **valore** `COleDateTimeSpan` double sottostante per questo oggetto.|
|[COleDateTimeSpan::m_status](#m_status)|Contiene lo stato `COleDateTimeSpan` di questo oggetto.|

## <a name="remarks"></a>Osservazioni

`COleDateTimeSpan`non dispone di una classe base.

A `COleDateTimeSpan` mantiene il tempo in giorni.

`COleDateTimeSpan`viene utilizzato con la classe complementare [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md). `COleDateTime`incapsula `DATE` il tipo di dati dell'automazione OLE. `COleDateTime`rappresenta valori di tempo assoluti. Tutti `COleDateTime` i `COleDateTimeSpan` calcoli coinvolgono valori. La relazione tra queste classi è analoga a quella tra [CTime](../../atl-mfc-shared/reference/ctime-class.md) e [CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md).

Per ulteriori informazioni `COleDateTime` `COleDateTimeSpan` sulle classi e , vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLComTime.h

## <a name="coledatetimespan-relational-operators"></a><a name="coledatetimespan_relational_operators"></a>Operatori relazionali COleDateTimeSpan

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

*dateSpan (Intervallo di valori)*<br/>
Oggetto `COleDateTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Questi operatori confrontano due valori di data/ora-intervallo e restituiscono TRUE se la condizione è vera; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Se uno degli operandi non è valido, si verificherà un ERRORE ATLASSERT.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#25](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_1.cpp)]

[!code-cpp[NVC_ATLMFC_Utilities#26](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_2.cpp)]

## <a name="coledatetimespancoledatetimespan"></a><a name="coledatetimespan"></a>COleDateTimeSpan::COleDateTimeSpan

Costruisce un oggetto `COleDateTimeSpan`.

```
COleDateTimeSpan() throw();
COleDateTimeSpan(double dblSpanSrc) throw();
COleDateTimeSpan(LONG lDays, int nHours, int nMins, int nSecs) throw();
```

### <a name="parameters"></a>Parametri

*dblSpanSrc*<br/>
Numero di giorni da copiare `COleDateTimeSpan` nel nuovo oggetto.

*lDays*, *nHours*, *nMins*, *nSecs*<br/>
Indicare i valori di giorno e `COleDateTimeSpan` ora da copiare nel nuovo oggetto.

### <a name="remarks"></a>Osservazioni

Tutti questi costruttori `COleDateTimeSpan` creano nuovi oggetti inizializzati sul valore specificato. Segue una breve descrizione di ciascuno di questi costruttori:

- **COleDateTimeSpan( )** Costruisce un `COleDateTimeSpan` oggetto inizializzato su 0.

- **COleDateTimeSpan(** `dblSpanSrc` **)** Costruisce un `COleDateTimeSpan` oggetto da un valore a virgola mobile.

- **COleDateTimeSpan(** `lDays` **,** `nHours` **,** `nMins` **,** `nSecs` **)** Costruisce un `COleDateTimeSpan` oggetto inizializzato sui valori numerici specificati.

Lo stato del `COleDateTimeSpan` nuovo oggetto è impostato su valido.

Per ulteriori informazioni sui `COleDateTimeSpan` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#14](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_3.cpp)]

## <a name="coledatetimespanformat"></a><a name="format"></a>COleDateTimeSpan::Formato

Genera una rappresentazione di `COleDateTimeSpan` stringa formattata di un oggetto.

```
CString Format(LPCTSTR pFormat) const;
CString Format(UINT nID) const;
```

### <a name="parameters"></a>Parametri

*pFormato*<br/>
Stringa di formattazione `printf` simile alla stringa di formattazione. I codici di formattazione,`%`preceduti da un `COleDateTimeSpan` segno di percentuale ( ), vengono sostituiti dal componente corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati invariati nella stringa restituita. Il valore e il significato `Format` dei codici di formattazione per sono elencati di seguito:

- **%H** Ore nel giorno corrente

- **%M** Minuti nell'ora corrente

- **%S** Secondi nel minuto corrente

- **%%** Segno di percentuale

I quattro codici di formato sopra elencati sono gli unici codici accettati da Format.

-

*nID*<br/>
ID di risorsa per la stringa di controllo del formato.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene il valore di data/ora formattato.

### <a name="remarks"></a>Osservazioni

Chiamare queste funzioni per creare una rappresentazione formattata del valore dell'intervallo di tempo. Se lo stato `COleDateTimeSpan` di questo oggetto è null, il valore restituito è una stringa vuota. Se lo stato non è valido, la stringa restituita viene specificata dalla risorsa di tipo stringa IDS_INVALID_DATETIMESPAN.

Segue una breve descrizione dei moduli per questa funzione:

**Format(** *pFormat* **)**<br/>
Questo modulo formatta il valore utilizzando la stringa di formato che contiene codici `printf`di formattazione speciali preceduti da un segno di percentuale (%), come in . La stringa di formattazione viene passata come parametro alla funzione.

**Format(** *nID* **)**<br/>
Questo modulo formatta il valore utilizzando la stringa di formato che contiene codici `printf`di formattazione speciali preceduti da un segno di percentuale (%), come in . La stringa di formattazione è una risorsa. L'ID di questa risorsa di tipo stringa viene passato come parametro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#15](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_4.cpp)]

## <a name="coledatetimespangetdays"></a><a name="getdays"></a>COleDateTimeSpan::GetDays

Recupera la parte relativa al giorno di questo valore di data/intervallo di tempo.

```
LONG GetDays() const throw();
```

### <a name="return-value"></a>Valore restituito

Parte del giorno di questo valore di data/intervallo di tempo.

### <a name="remarks"></a>Osservazioni

I valori restituiti da questa funzione sono compresi approssimativamente tra 3.615.000 e 3.615.000.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le seguenti funzioni membro:

- [GetHours](#gethours)

- [GetMinutes (Informazioni in base ai](#getminutes)

- [GetSecondi](#getseconds)

- [Giorni getTotali](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSecondi](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#16](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_5.cpp)]

## <a name="coledatetimespangethours"></a><a name="gethours"></a>COleDateTimeSpan::GetHours

Recupera la parte relativa all'ora di questo valore di data/intervallo di tempo.

```
LONG GetHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Parte relativa alle ore di questo valore di data/intervallo di tempo.

### <a name="remarks"></a>Osservazioni

I valori restituiti da questa funzione sono compresi tra - 23 e 23.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le seguenti funzioni membro:

- [Giorni GetDays](#getdays)

- [GetMinutes (Informazioni in base ai](#getminutes)

- [GetSecondi](#getseconds)

- [Giorni getTotali](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSecondi](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#17](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_6.cpp)]

## <a name="coledatetimespangetminutes"></a><a name="getminutes"></a>COleDateTimeSpan::GetMinutes

Recupera la parte dei minuti di questo valore di data/intervallo di tempo.

```
LONG GetMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Parte dei minuti di questo valore di data/intervallo di tempo.

### <a name="remarks"></a>Osservazioni

I valori restituiti da questa funzione sono compresi tra - 59 e 59.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le seguenti funzioni membro:

- [Giorni GetDays](#getdays)

- [GetHours](#gethours)

- [GetSecondi](#getseconds)

- [Giorni getTotali](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSecondi](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#18](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_7.cpp)]

## <a name="coledatetimespangetseconds"></a><a name="getseconds"></a>COleDateTimeSpan::GetSeconds

Recupera la seconda parte di questo valore di data/intervallo di tempo.

```
LONG GetSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Parte dei secondi di questo valore di data/ora-intervallo.

### <a name="remarks"></a>Osservazioni

I valori restituiti da questa funzione sono compresi tra - 59 e 59.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le seguenti funzioni membro:

- [Giorni GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes (Informazioni in base ai](#getminutes)

- [Giorni getTotali](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSecondi](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#19](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_8.cpp)]

## <a name="coledatetimespangetstatus"></a><a name="getstatus"></a>COleDateTimeSpan::GetStatus

Ottiene lo stato (validità) `COleDateTimeSpan` di questo oggetto.

```
DateTimeSpanStatus GetStatus() const throw();
```

### <a name="return-value"></a>Valore restituito

Stato di `COleDateTimeSpan` questo valore.

### <a name="remarks"></a>Osservazioni

Il valore restituito è `DateTimeSpanStatus` definito dal tipo enumerato, definito all'interno della `COleDateTimeSpan` classe.

```
enum DateTimeSpanStatus{
   valid = 0,
   invalid = 1,
   null = 2,
};
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleDateTimeSpan::valid`Indica che `COleDateTimeSpan` questo oggetto è valido.

- `COleDateTimeSpan::invalid`Indica che `COleDateTimeSpan` questo oggetto non è valido. vale a dire, il suo valore potrebbe non essere corretto.

- `COleDateTimeSpan::null`Indica che `COleDateTimeSpan` questo oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di database di "non avere alcun valore", al contrario di C , NULL.)

Lo stato `COleDateTimeSpan` di un oggetto non è valido nei seguenti casi:

- Se l'oggetto ha subito un overflow o underflow `+=` durante `-=`un'operazione di assegnazione aritmetica, ovvero, o .

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto `SetStatus`è stato impostato in modo esplicito su non valido utilizzando .

Per ulteriori informazioni sulle operazioni che possono impostare lo stato come non valido, vedere [COleDateTimeSpan::operator , e](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_-) [COleDateTimeSpan::operator , -](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_eq_-_eq).

Per ulteriori informazioni sui `COleDateTimeSpan` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="coledatetimespangettotaldays"></a><a name="gettotaldays"></a>COleDateTimeSpan::GetTotalDays

Recupera questo valore di data/ora-intervallo espresso in giorni.

```
double GetTotalDays() const throw();
```

### <a name="return-value"></a>Valore restituito

Valore di data/intervallo di tempo espresso in giorni. Anche se questa funzione viene prototipo per restituire un valore double, restituirà sempre un valore intero.

### <a name="remarks"></a>Osservazioni

I valori restituiti da questa funzione sono compresi tra circa 3,65e6 e 3,65e6.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le seguenti funzioni membro:

- [Giorni GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes (Informazioni in base ai](#getminutes)

- [GetSecondi](#getseconds)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSecondi](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#20](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_9.cpp)]

## <a name="coledatetimespangettotalhours"></a><a name="gettotalhours"></a>COleDateTimeSpan::GetTotalHours

Recupera questo valore di data/intervallo di tempo espresso in ore.

```
double GetTotalHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Valore di data/intervallo di tempo espresso in ore. Anche se questa funzione viene prototipo per restituire un valore double, restituirà sempre un valore intero.

### <a name="remarks"></a>Osservazioni

I valori restituiti da questa funzione sono compresi tra circa 8,77e7 e 8,77e7.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le seguenti funzioni membro:

- [Giorni GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes (Informazioni in base ai](#getminutes)

- [GetSecondi](#getseconds)

- [Giorni getTotali](#gettotaldays)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSecondi](#gettotalseconds)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalDays](#gettotaldays).

## <a name="coledatetimespangettotalminutes"></a><a name="gettotalminutes"></a>COleDateTimeSpan::GetTotalMinutes

Recupera questo valore di data/intervallo di tempo espresso in minuti.

```
double GetTotalMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Valore di data/intervallo di tempo espresso in minuti. Anche se questa funzione viene prototipo per restituire un valore double, restituirà sempre un valore intero.

### <a name="remarks"></a>Osservazioni

I valori restituiti da questa funzione sono compresi tra circa - 5,26e9 e 5,26e9.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le seguenti funzioni membro:

- [Giorni GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes (Informazioni in base ai](#getminutes)

- [GetSecondi](#getseconds)

- [Giorni getTotali](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalSecondi](#gettotalseconds)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalDays](#gettotaldays).

## <a name="coledatetimespangettotalseconds"></a><a name="gettotalseconds"></a>COleDateTimeSpan::GetTotalSeconds

Recupera questo valore di data/intervallo di tempo espresso in secondi.

```
double GetTotalSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Valore di data/intervallo di tempo espresso in secondi. Anche se questa funzione viene prototipo per restituire un valore double, restituirà sempre un valore intero.

### <a name="remarks"></a>Osservazioni

I valori restituiti da questa funzione sono compresi tra circa 3,16e11 e 3,16e11.

Per altre funzioni che eseguono query sul valore di un `COleDateTimeSpan` oggetto, vedere le seguenti funzioni membro:

- [Giorni GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes (Informazioni in base ai](#getminutes)

- [GetSecondi](#getseconds)

- [Giorni getTotali](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalDays](#gettotaldays).

## <a name="coledatetimespanm_span"></a><a name="m_span"></a>COleDateTimeSpan::m_span

Valore **double** sottostante `COleDateTime` per questo oggetto.

```
double m_span;
```

### <a name="remarks"></a>Osservazioni

Questo valore esprime la data/intervallo di tempo in giorni.

> [!CAUTION]
> La modifica del **double** valore nel membro dati `COleDateTimeSpan` double modificherà il valore di questo oggetto. Non modifica lo stato `COleDateTimeSpan` di questo oggetto.

## <a name="coledatetimespanm_status"></a><a name="m_status"></a>COleDateTimeSpan::m_status

Il tipo per questo membro dati `DateTimeSpanStatus`è il tipo `COleDateTimeSpan` enumerato , definito all'interno della classe.

```
DateTimeSpanStatus m_status;
```

### <a name="remarks"></a>Osservazioni

```
enum DateTimeSpanStatus{
   valid = 0,
   invalid = 1,
   null = 2,
   };
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleDateTimeSpan::valid`Indica che `COleDateTimeSpan` questo oggetto è valido.

- `COleDateTimeSpan::invalid`Indica che `COleDateTimeSpan` questo oggetto non è valido. vale a dire, il suo valore potrebbe non essere corretto.

- `COleDateTimeSpan::null`Indica che `COleDateTimeSpan` questo oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di database di "non avere alcun valore", al contrario di C , NULL.)

Lo stato `COleDateTimeSpan` di un oggetto non è valido nei seguenti casi:

- Se l'oggetto ha subito un overflow o underflow `+=` durante `-=`un'operazione di assegnazione aritmetica, ovvero, o .

- Se a questo oggetto è stato assegnato un valore non valido.

- Se lo stato di questo oggetto è stato impostato in modo esplicito su non valido utilizzando [SetStatus](#setstatus).

Per ulteriori informazioni sulle operazioni che possono impostare lo stato come non valido, vedere [COleDateTimeSpan::operator , e](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_-) [COleDateTimeSpan::operator , -](../../atl-mfc-shared/reference/coledatetime-class.md#operator_add_eq_-_eq).

> [!CAUTION]
> Questo membro dati è per situazioni di programmazione avanzate. È necessario utilizzare le funzioni membro inline [GetStatus](#getstatus) e [SetStatus](#setstatus). Per `SetStatus` ulteriori precauzioni relative all'impostazione esplicita di questo membro dati, vedere per ulteriori precauzioni.

Per ulteriori informazioni sui `COleDateTimeSpan` limiti per i valori, vedere l'articolo [Data e ora: supporto dell'automazione](../../atl-mfc-shared/date-and-time-automation-support.md).

## <a name="coledatetimespanoperator-"></a><a name="operator_eq"></a>COleDateTimeSpan::operatore

Copia un `COleDateTimeSpan` valore.

```
COleDateTimeSpan& operator=(double dblSpanSrc) throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore di assegnazione di overload copia il `COleDateTimeSpan` valore di data/ora-intervallo di origine in questo oggetto.

## <a name="coledatetimespanoperator---"></a><a name="operator_add_-"></a>COleDateTimeSpan::operator

Aggiungere, sottrarre e `COleDateTimeSpan` modificare il segno per i valori.

```
COleDateTimeSpan operator+(const COleDateTimeSpan& dateSpan) const throw();
COleDateTimeSpan operator-(const COleDateTimeSpan& dateSpan) const throw();
COleDateTimeSpan operator-() const throw();
```

### <a name="remarks"></a>Osservazioni

I primi due operatori consentono di aggiungere e sottrarre valori di data/intervallo di tempo. Il terzo consente di modificare il segno di un valore di data/intervallo di tempo.

Se uno degli operandi è null, `COleDateTimeSpan` lo stato del valore risultante è null.

Se uno degli operandi non è valido e l'altro `COleDateTimeSpan` non è null, lo stato del valore risultante non è valido.

Per altre informazioni sui valori di stato valid, invalid e null, vedere la variabile membro [m_status.](#m_status)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#23](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_10.cpp)]

## <a name="coledatetimespanoperator---"></a><a name="operator_add_eq_-_eq"></a>COleDateTimeSpan::operatore

Aggiungere e `COleDateTimeSpan` sottrarre `COleDateTimeSpan` un valore da questo valore.

```
COleDateTimeSpan& operator+=(const COleDateTimeSpan dateSpan) throw();
COleDateTimeSpan& operator-=(const COleDateTimeSpan dateSpan) throw();
```

### <a name="remarks"></a>Osservazioni

Questi operatori consentono di aggiungere e sottrarre `COleDateTimeSpan` valori di intervallo di data/ora da questo oggetto. Se uno degli operandi è null, `COleDateTimeSpan` lo stato del valore risultante è null.

Se uno degli operandi non è valido e l'altro `COleDateTimeSpan` non è null, lo stato del valore risultante non è valido.

Per altre informazioni sui valori di stato valid, invalid e null, vedere la variabile membro [m_status.](#m_status)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#24](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_11.cpp)]

## <a name="coledatetimespanoperator-double"></a><a name="operator_double"></a>COleDateTimeSpan::operator double

Converte `COleDateTimeSpan` questo valore in un **valore double.**

```
operator double() const throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore restituisce `COleDateTimeSpan` il valore di questo valore come numero di giorni a virgola mobile.

## <a name="coledatetimespansetdatetimespan"></a><a name="setdatetimespan"></a>COleDateTimeSpan::SetDateTimeSpan

Imposta il valore di questo valore di data/ora-intervallo.

```cpp
void SetDateTimeSpan(LONG lDays, int nHours, int nMins, int nSecs) throw();
```

### <a name="parameters"></a>Parametri

*lDays*, *nHours*, *nMins*, *nSecs*<br/>
Indicare i valori dell'intervallo di data `COleDateTimeSpan` e dell'intervallo di tempo da copiare in questo oggetto.

### <a name="remarks"></a>Osservazioni

Per le funzioni che `COleDateTimeSpan` eseguono query sul valore di un oggetto, vedere le seguenti funzioni membro:

- [Giorni GetDays](#getdays)

- [GetHours](#gethours)

- [GetMinutes (Informazioni in base ai](#getminutes)

- [GetSecondi](#getseconds)

- [Giorni getTotali](#gettotaldays)

- [GetTotalHours](#gettotalhours)

- [GetTotalMinutes](#gettotalminutes)

- [GetTotalSecondi](#gettotalseconds)

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#21](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_12.cpp)]

## <a name="coledatetimespansetstatus"></a><a name="setstatus"></a>COleDateTimeSpan::SetStatus

Imposta lo stato (validità) `COleDateTimeSpan` di questo oggetto.

```cpp
void SetStatus(DateTimeSpanStatus status) throw();
```

### <a name="parameters"></a>Parametri

*Stato*<br/>
Nuovo valore di `COleDateTimeSpan` stato per questo oggetto.

### <a name="remarks"></a>Osservazioni

Il *Status* valore del parametro `DateTimeSpanStatus` Status è definito dal `COleDateTimeSpan` tipo enumerato, definito all'interno della classe.

```
enum DateTimeSpanStatus{
   valid = 0,
   invalid = 1,
   null = 2,
   };
```

Per una breve descrizione di questi valori di stato, vedere l'elenco seguente:

- `COleDateTimeSpan::valid`Indica che `COleDateTimeSpan` questo oggetto è valido.

- `COleDateTimeSpan::invalid`Indica che `COleDateTimeSpan` questo oggetto non è valido. vale a dire, il suo valore potrebbe non essere corretto.

- `COleDateTimeSpan::null`Indica che `COleDateTimeSpan` questo oggetto è null, ovvero che non è stato fornito alcun valore per questo oggetto. (Questo è "null" nel senso di database di "non avere alcun valore", al contrario di C , NULL.)

   > [!CAUTION]
   > Questa funzione è per situazioni di programmazione avanzate. Questa funzione non modifica i dati in questo oggetto. Verrà utilizzato più spesso per impostare lo stato **su null** o **non valido.** Si noti che l'operatore di assegnazione ([operatore )](#operator_eq)e [SetDateTimeSpan](#setdatetimespan) impostano lo stato dell'oggetto in base ai valori di origine.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#22](../../atl-mfc-shared/codesnippet/cpp/coledatetimespan-class_13.cpp)]

## <a name="see-also"></a>Vedere anche

[Classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)<br/>
[Classe CTime](../../atl-mfc-shared/reference/ctime-class.md)<br/>
[Classe CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
