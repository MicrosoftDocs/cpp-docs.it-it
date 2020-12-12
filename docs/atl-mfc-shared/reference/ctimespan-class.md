---
description: 'Altre informazioni su: classe CTimeSpan'
title: Classe CTimeSpan
ms.date: 10/18/2018
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
helpviewer_keywords:
- elapsed time, CTimeSpan object
- timespan
- time span
- CTimeSpan class
- shared classes, CTimeSpan
- time, elapsed
ms.assetid: ee1e42f6-1839-477a-8435-fb26ad475140
ms.openlocfilehash: b15fa247baaa4de77c5caab12d584a80321b9420
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166577"
---
# <a name="ctimespan-class"></a>Classe CTimeSpan

Intervallo di tempo, che viene archiviato internamente come numero di secondi nell'intervallo di tempo.

## <a name="syntax"></a>Sintassi

```
class CTimeSpan
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CTimeSpan:: CTimeSpan](#ctimespan)|Costruisce `CTimeSpan` oggetti in diversi modi.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTimeSpan:: Format](#format)|Converte un oggetto `CTimeSpan` in una stringa formattata.|
|[CTimeSpan:: GetDays](#getdays)|Restituisce un valore che rappresenta il numero di giorni completi in questo oggetto `CTimeSpan` .|
|[CTimeSpan:: getHours](#gethours)|Restituisce un valore che rappresenta il numero di ore nel giorno corrente (da-23 a 23).|
|[CTimeSpan:: getMinutes](#getminutes)|Restituisce un valore che rappresenta il numero di minuti nell'ora corrente (da-59 a 59).|
|[CTimeSpan:: getsecondi](#getseconds)|Restituisce un valore che rappresenta il numero di secondi nel minuto corrente (da-59 a 59).|
|[CTimeSpan:: GetTimeSpan](#gettimespan)|Restituisce il valore dell' `CTimeSpan` oggetto.|
|[CTimeSpan:: GetTotalHours](#gettotalhours)|Restituisce un valore che rappresenta il numero totale di ore complete in questo oggetto `CTimeSpan` .|
|[CTimeSpan:: GetTotalMinutes](#gettotalminutes)|Restituisce un valore che rappresenta il numero totale di minuti completi in questo oggetto `CTimeSpan` .|
|[CTimeSpan:: GetTotalSeconds](#gettotalseconds)|Restituisce un valore che rappresenta il numero totale di secondi completi in questo oggetto `CTimeSpan` .|
|[CTimeSpan:: Serialize64](#serialize64)|Serializza i dati in o da un archivio.|

### <a name="operators"></a>Operatori

|Nome|Description|
|-|-|
|[operatore +-](#operator_add_-)|Aggiunge e sottrae `CTimeSpan` oggetti.|
|[operatore + =-=](#operator_add_eq_-_eq)|Aggiunge e sottrae un `CTimeSpan` oggetto da e verso questo oggetto `CTimeSpan` .|
|[operator = = < e così via.](#ctimespan_comparison_operators)|Confronta due valori temporali relativi.|

## <a name="remarks"></a>Commenti

`CTimeSpan` non dispone di una classe base.

`CTimeSpan` le funzioni convertono i secondi in diverse combinazioni di giorni, ore, minuti e secondi.

L' `CTimeSpan` oggetto viene archiviato in una struttura di **__time64_t** , ovvero 8 byte.

Una classe complementare, [CTime](../../atl-mfc-shared/reference/ctime-class.md), rappresenta un tempo assoluto.

Le `CTime` `CTimeSpan` classi e non sono progettate per la derivazione. Poiché non sono presenti funzioni virtuali, le dimensioni degli `CTime` oggetti e `CTimeSpan` sono esattamente di 8 byte. La maggior parte delle funzioni membro è inline.

Per ulteriori informazioni sull'utilizzo di `CTimeSpan` , vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md)e [gestione dell'ora](../../c-runtime-library/time-management.md) in *riferimenti alla libreria di runtime*.

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime. h

## <a name="ctimespan-comparison-operators"></a><a name="ctimespan_comparison_operators"></a> Operatori di confronto CTimeSpan

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

*intervallo*<br/>
Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Questi operatori confrontano due valori temporali relativi. Restituisce TRUE se la condizione è true; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#169](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_1.cpp)]

## <a name="ctimespanctimespan"></a><a name="ctimespan"></a> CTimeSpan:: CTimeSpan

Costruisce `CTimeSpan` oggetti in diversi modi.

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

*timeSpanSrc*<br/>
`CTimeSpan`Oggetto già esistente.

*time*<br/>
Valore di **__time64_t** ora, ovvero il numero di secondi nell'intervallo di tempo.

*lDays*, *nHours*, *nMins*, *nSecs*<br/>
Rispettivamente giorni, ore, minuti e secondi.

### <a name="remarks"></a>Commenti

Tutti questi costruttori creano un nuovo `CTimeSpan` oggetto inizializzato con l'ora relativa specificata. Ogni costruttore è descritto di seguito:

- `CTimeSpan( );` Costruisce un oggetto non inizializzato `CTimeSpan` .

- `CTimeSpan( const CTimeSpan& );` Costruisce un `CTimeSpan` oggetto da un altro `CTimeSpan` valore.

- `CTimeSpan( __time64_t );` Costruisce un `CTimeSpan` oggetto da un tipo di **__time64_t** .

- `CTimeSpan( LONG, int, int, int );` Costruisce un `CTimeSpan` oggetto dai componenti con ogni componente vincolato agli intervalli seguenti:

   |Componente|Range|
   |---------------|-----------|
   |*lDays*|0-25000 (approssimativamente)|
   |*nHours*|0-23|
   |*nMins*|0-59|
   |*nSecs*|0-59|

Si noti che la versione di debug dell'libreria Microsoft Foundation Class asserisce se uno o più componenti di ora non sono compresi nell'intervallo. È responsabilità dell'utente convalidare gli argomenti prima di chiamare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#162](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_2.cpp)]

## <a name="ctimespanformat"></a><a name="format"></a> CTimeSpan:: Format

Genera una stringa formattata che corrisponde a questo oggetto `CTimeSpan` .

```
CString Format(LPCSTR pFormat) const;
CString Format(LPCTSTR pszFormat) const;
CString Format(UINT nID) const;
```

### <a name="parameters"></a>Parametri

*pFormat*, *pszFormat*<br/>
Stringa di formattazione simile alla `printf` stringa di formattazione. I codici di formattazione, preceduti da un segno di percentuale ( `%` ), vengono sostituiti dal `CTimeSpan` componente corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati senza modifiche nella stringa restituita. Il valore e il significato dei codici di formattazione per `Format` sono elencati di seguito:

- **% D** Totale giorni in questo `CTimeSpan`

- **% H** Ore nel giorno corrente

- **% M** Minuti nell'ora corrente

- **% S** Secondi nel minuto corrente

- **%%** Segno di percentuale

*nID*<br/>
ID della stringa che identifica il formato.

### <a name="return-value"></a>Valore restituito

`CString`Oggetto che contiene il tempo formattato.

### <a name="remarks"></a>Commenti

La versione di debug della libreria controlla i codici di formattazione e le asserzioni se il codice non è presente nell'elenco precedente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#163](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_3.cpp)]

## <a name="ctimespangetdays"></a><a name="getdays"></a> CTimeSpan:: GetDays

Restituisce un valore che rappresenta il numero di giorni completi in questo oggetto `CTimeSpan` .

```
LONGLONG GetDays() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di giorni di 24 ore completi nell'intervallo di tempo. Questo valore può essere negativo se l'intervallo di tempo è negativo.

### <a name="remarks"></a>Commenti

Si noti che l'ora legale può causare `GetDays` la restituzione di un risultato potenzialmente sorprendente. Ad esempio, quando DST è attivo, `GetDays` indica il numero di giorni compresi tra il 1 ° aprile e il 1 ° maggio 29, non 30, perché un giorno di aprile viene abbreviato di un'ora e pertanto non viene conteggiato come giorno completo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#164](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_4.cpp)]

## <a name="ctimespangethours"></a><a name="gethours"></a> CTimeSpan:: getHours

Restituisce un valore che rappresenta il numero di ore nel giorno corrente (da-23 a 23).

```
LONG GetHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di ore nel giorno corrente. L'intervallo è compreso tra-23 e 23.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#165](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_5.cpp)]

## <a name="ctimespangetminutes"></a><a name="getminutes"></a> CTimeSpan:: getMinutes

Restituisce un valore che rappresenta il numero di minuti nell'ora corrente (da-59 a 59).

```
LONG GetMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di minuti nell'ora corrente. L'intervallo è compreso tra-59 e 59.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [getHours](#gethours).

## <a name="ctimespangetseconds"></a><a name="getseconds"></a> CTimeSpan:: getsecondi

Restituisce un valore che rappresenta il numero di secondi nel minuto corrente (da-59 a 59).

```
LONG GetSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di secondi nel minuto corrente. L'intervallo è compreso tra-59 e 59.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [getHours](#gethours).

## <a name="ctimespangettimespan"></a><a name="gettimespan"></a> CTimeSpan:: GetTimeSpan

Restituisce il valore dell' `CTimeSpan` oggetto.

```
__ time64_t GetTimeSpan() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore corrente dell' `CTimeSpan` oggetto.

## <a name="ctimespangettotalhours"></a><a name="gettotalhours"></a> CTimeSpan:: GetTotalHours

Restituisce un valore che rappresenta il numero totale di ore complete in questo oggetto `CTimeSpan` .

```
LONGLONG GetTotalHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale di ore complete in questo oggetto `CTimeSpan` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#166](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_6.cpp)]

## <a name="ctimespangettotalminutes"></a><a name="gettotalminutes"></a> CTimeSpan:: GetTotalMinutes

Restituisce un valore che rappresenta il numero totale di minuti completi in questo oggetto `CTimeSpan` .

```
LONGLONG GetTotalMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale di minuti completi in questo oggetto `CTimeSpan` .

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalHours](#gettotalhours).

## <a name="ctimespangettotalseconds"></a><a name="gettotalseconds"></a> CTimeSpan:: GetTotalSeconds

Restituisce un valore che rappresenta il numero totale di secondi completi in questo oggetto `CTimeSpan` .

```
LONGLONG GetTotalSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale di secondi completi in questo oggetto `CTimeSpan` .

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalHours](#gettotalhours).

## <a name="ctimespanoperator---"></a><a name="operator_add_-"></a> CTimeSpan:: operator +,-

Aggiunge e sottrae `CTimeSpan` oggetti.

```
CTimeSpan operator+(CTimeSpan span) const throw();
CTimeSpan operator-(CTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*intervallo*<br/>
Valore da aggiungere all' `CTimeSpan` oggetto.

### <a name="return-value"></a>Valore restituito

`CTimeSpan`Oggetto che rappresenta il risultato dell'operazione.

### <a name="remarks"></a>Commenti

Questi due operatori consentono di aggiungere e sottrarre `CTimeSpan` oggetti tra loro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#167](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_7.cpp)]

## <a name="ctimespanoperator---"></a><a name="operator_add_eq_-_eq"></a> CTimeSpan:: operator + =,-=

Aggiunge e sottrae un `CTimeSpan` oggetto da e verso questo oggetto `CTimeSpan` .

```
CTimeSpan& operator+=(CTimeSpan span) throw();
CTimeSpan& operator-=(CTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*intervallo*<br/>
Valore da aggiungere all' `CTimeSpan` oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto aggiornato `CTimeSpan` .

### <a name="remarks"></a>Commenti

Questi operatori consentono di aggiungere e sottrarre un `CTimeSpan` oggetto da e verso questo `CTimeSpan` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#168](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_8.cpp)]

## <a name="ctimespanserialize64"></a><a name="serialize64"></a> CTimeSpan:: Serialize64

> [!NOTE]
> Questo metodo è disponibile solo nei progetti MFC.

Serializza i dati associati alla variabile membro in o da un archivio.

```
CArchive& Serialize64(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
`CArchive`Oggetto che si desidera aggiornare.

### <a name="return-value"></a>Valore restituito

Oggetto aggiornato `CArchive` .

## <a name="see-also"></a>Vedi anche

[asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)<br/>
[_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
