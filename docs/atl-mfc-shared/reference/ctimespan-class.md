---
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
ms.openlocfilehash: 14aa5eb52e2c631a92e40ae7053c566284e00e57
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317507"
---
# <a name="ctimespan-class"></a>Classe CTimeSpan

Quantità di tempo, che viene archiviata internamente come numero di secondi nell'intervallo di tempo.

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
|[CTimeSpan::Formato](#format)|Converte `CTimeSpan` un in una stringa formattata.|
|[CTimeSpan::GetDays](#getdays)|Restituisce un valore che rappresenta il `CTimeSpan`numero di giorni completi in questo oggetto .|
|[CTimeSpan::GetHours](#gethours)|Restituisce un valore che rappresenta il numero di ore nel giorno corrente (da -23 a 23).|
|[CTimeSpan::GetMinutes](#getminutes)|Restituisce un valore che rappresenta il numero di minuti nell'ora corrente (da -59 a 59).|
|[CTimeSpan::GetSeconds](#getseconds)|Restituisce un valore che rappresenta il numero di secondi nel minuto corrente (da -59 a 59).|
|[CTimeSpan::GetTimeSpan](#gettimespan)|Restituisce il `CTimeSpan` valore dell'oggetto.|
|[CTimeSpan::GetTotalHours](#gettotalhours)|Restituisce un valore che rappresenta il `CTimeSpan`numero totale di ore complete in questo oggetto .|
|[CTimeSpan::GetTotalMinutes](#gettotalminutes)|Restituisce un valore che rappresenta il `CTimeSpan`numero totale di minuti completi in questo oggetto .|
|[CTimeSpan::GetTotalSeconds](#gettotalseconds)|Restituisce un valore che rappresenta il `CTimeSpan`numero totale di secondi completi in questo oggetto .|
|[CTimeSpan::Serialize64](#serialize64)|Serializza i dati da o verso un archivio.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore -](#operator_add_-)|Aggiunge e `CTimeSpan` sottrae oggetti.|
|[operatore .](#operator_add_eq_-_eq)|Aggiunge e sottrae `CTimeSpan` un `CTimeSpan`oggetto a e da questo oggetto .|
|[operatore n. < ecc.](#ctimespan_comparison_operators)|Confronta due valori temporali relativi.|

## <a name="remarks"></a>Osservazioni

`CTimeSpan`non dispone di una classe base.

`CTimeSpan`le funzioni convertono i secondi in varie combinazioni di giorni, ore, minuti e secondi.

L'oggetto `CTimeSpan` viene archiviato in una struttura **__time64_t,** ovvero 8 byte.

Una classe complementare, [CTime](../../atl-mfc-shared/reference/ctime-class.md), rappresenta un tempo assoluto.

Le `CTime` `CTimeSpan` classi e non sono progettate per la derivazione. Poiché non sono presenti funzioni `CTime` virtuali, la dimensione di entrambi e `CTimeSpan` gli oggetti sono esattamente 8 byte. La maggior parte delle funzioni membro sono inline.

Per ulteriori informazioni `CTimeSpan`sull'utilizzo di , vedere gli articoli [Gestione di data e](../../atl-mfc-shared/date-and-time.md)ora e Gestione [ora](../../c-runtime-library/time-management.md) in Riferimenti alla libreria di *runtime*.

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime.h

## <a name="ctimespan-comparison-operators"></a><a name="ctimespan_comparison_operators"></a>Operatori di confronto CTimeSpanCTimeSpan Comparison Operators

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

*Rotazione*<br/>
Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Questi operatori confrontano due valori di ora relativi. Restituiscono TRUE se la condizione è vera; in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#169](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_1.cpp)]

## <a name="ctimespanctimespan"></a><a name="ctimespan"></a>CTimeSpan::CTimeSpan

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

*timeSpanSrc (intervallo di informazioni in stato di ins*<br/>
Oggetto `CTimeSpan` già esistente.

*time*<br/>
Valore di tempo **__time64_t,** ovvero il numero di secondi nell'intervallo di tempo.

*lDays*, *nHours*, *nMins*, *nSecs*<br/>
Rispettivamente giorni, ore, minuti e secondi.

### <a name="remarks"></a>Osservazioni

Tutti questi costruttori `CTimeSpan` creano un nuovo oggetto inizializzato con il tempo relativo specificato. Ogni costruttore è descritto di seguito:Each constructor is described below:

- `CTimeSpan( );`Costruisce un oggetto `CTimeSpan` non inizializzato.

- `CTimeSpan( const CTimeSpan& );`Costruisce un `CTimeSpan` oggetto `CTimeSpan` da un altro valore.

- `CTimeSpan( __time64_t );`Costruisce un `CTimeSpan` oggetto da un **tipo __time64_t.**

- `CTimeSpan( LONG, int, int, int );`Costruisce un `CTimeSpan` oggetto da componenti con ogni componente vincolato ai seguenti intervalli:

   |Componente|Range|
   |---------------|-----------|
   |*lGiorni*|0-25.000 (circa)|
   |*nOr*|0-23|
   |*nMins*|0-59|
   |*nSecs*|0-59|

Si noti che la versione di debug della libreria Microsoft Foundation Class asserisce se uno o più componenti del giorno dell'ora non sono compresi nell'intervallo. È responsabilità dell'utente convalidare gli argomenti prima di chiamare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#162](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_2.cpp)]

## <a name="ctimespanformat"></a><a name="format"></a>CTimeSpan::Formato

Genera una stringa formattata `CTimeSpan`che corrisponde a questo oggetto .

```
CString Format(LPCSTR pFormat) const;
CString Format(LPCTSTR pszFormat) const;
CString Format(UINT nID) const;
```

### <a name="parameters"></a>Parametri

*pFormat*, *pszFormat*<br/>
Stringa di formattazione `printf` simile alla stringa di formattazione. I codici di formattazione,`%`preceduti da un `CTimeSpan` segno di percentuale ( ), vengono sostituiti dal componente corrispondente. Gli altri caratteri nella stringa di formattazione vengono copiati invariati nella stringa restituita. Il valore e il significato `Format` dei codici di formattazione per sono elencati di seguito:

- **%D (informazioni in due)** Totale giorni in questo`CTimeSpan`

- **%H** Ore nel giorno corrente

- **%M** Minuti nell'ora corrente

- **%S** Secondi nel minuto corrente

- **%%** Segno di percentuale

*nID*<br/>
ID della stringa che identifica questo formato.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` che contiene l'ora formattata.

### <a name="remarks"></a>Osservazioni

La versione di debug della libreria controlla i codici di formattazione e asserisce se il codice non è presente nell'elenco precedente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#163](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_3.cpp)]

## <a name="ctimespangetdays"></a><a name="getdays"></a>CTimeSpan::GetDays

Restituisce un valore che rappresenta il `CTimeSpan`numero di giorni completi in questo oggetto .

```
LONGLONG GetDays() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di giorni completi di 24 ore nell'intervallo di tempo. Questo valore può essere negativo se l'intervallo di tempo è negativo.

### <a name="remarks"></a>Osservazioni

Si noti che l'ora legale può causare `GetDays` la restituzione di un risultato potenzialmente sorprendente. Ad esempio, quando è attiva `GetDays` l'ora legale, segnala il numero di giorni tra aprile 1 e maggio 1 come 29, non 30, perché un giorno di aprile viene abbreviato di un'ora e pertanto non viene conteggiato come giorno completo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#164](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_4.cpp)]

## <a name="ctimespangethours"></a><a name="gethours"></a>CTimeSpan::GetHours

Restituisce un valore che rappresenta il numero di ore nel giorno corrente (da -23 a 23).

```
LONG GetHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di ore nel giorno corrente. L'intervallo è compreso tra -23 e 23.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#165](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_5.cpp)]

## <a name="ctimespangetminutes"></a><a name="getminutes"></a>CTimeSpan::GetMinutes

Restituisce un valore che rappresenta il numero di minuti nell'ora corrente (da -59 a 59).

```
LONG GetMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di minuti nell'ora corrente. L'intervallo è compreso tra -59 e 59.

### <a name="example"></a>Esempio

Vedere l'esempio per [GetHours](#gethours).

## <a name="ctimespangetseconds"></a><a name="getseconds"></a>CTimeSpan::GetSeconds

Restituisce un valore che rappresenta il numero di secondi nel minuto corrente (da -59 a 59).

```
LONG GetSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di secondi nel minuto corrente. L'intervallo è compreso tra -59 e 59.

### <a name="example"></a>Esempio

Vedere l'esempio per [GetHours](#gethours).

## <a name="ctimespangettimespan"></a><a name="gettimespan"></a>CTimeSpan::GetTimeSpan

Restituisce il `CTimeSpan` valore dell'oggetto.

```
__ time64_t GetTimeSpan() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore `CTimeSpan` corrente dell'oggetto.

## <a name="ctimespangettotalhours"></a><a name="gettotalhours"></a>CTimeSpan::GetTotalHours

Restituisce un valore che rappresenta il `CTimeSpan`numero totale di ore complete in questo oggetto .

```
LONGLONG GetTotalHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale `CTimeSpan`di ore complete in questo file .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#166](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_6.cpp)]

## <a name="ctimespangettotalminutes"></a><a name="gettotalminutes"></a>CTimeSpan::GetTotalMinutes

Restituisce un valore che rappresenta il `CTimeSpan`numero totale di minuti completi in questo oggetto .

```
LONGLONG GetTotalMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale `CTimeSpan`di minuti completi in questo oggetto .

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalHours](#gettotalhours).

## <a name="ctimespangettotalseconds"></a><a name="gettotalseconds"></a>CTimeSpan::GetTotalSeconds

Restituisce un valore che rappresenta il `CTimeSpan`numero totale di secondi completi in questo oggetto .

```
LONGLONG GetTotalSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale `CTimeSpan`di secondi completi in questo file .

### <a name="example"></a>Esempio

Vedere l'esempio per [GetTotalHours](#gettotalhours).

## <a name="ctimespanoperator---"></a><a name="operator_add_-"></a>CTimeSpan::operatore -

Aggiunge e `CTimeSpan` sottrae oggetti.

```
CTimeSpan operator+(CTimeSpan span) const throw();
CTimeSpan operator-(CTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*<br/>
Valore da aggiungere `CTimeSpan` all'oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `CTimeSpan` che rappresenta il risultato dell'operazione.

### <a name="remarks"></a>Osservazioni

Questi due operatori consentono di `CTimeSpan` aggiungere e sottrarre oggetti l'uno dall'altro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#167](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_7.cpp)]

## <a name="ctimespanoperator---"></a><a name="operator_add_eq_-_eq"></a>CTimeSpan::operatore

Aggiunge e sottrae `CTimeSpan` un `CTimeSpan`oggetto a e da questo oggetto .

```
CTimeSpan& operator+=(CTimeSpan span) throw();
CTimeSpan& operator-=(CTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*Rotazione*<br/>
Valore da aggiungere `CTimeSpan` all'oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `CTimeSpan` aggiornato.

### <a name="remarks"></a>Osservazioni

Questi operatori consentono di aggiungere `CTimeSpan` e sottrarre un oggetto da e verso questo `CTimeSpan`oggetto .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#168](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_8.cpp)]

## <a name="ctimespanserialize64"></a><a name="serialize64"></a>CTimeSpan::Serialize64

> [!NOTE]
> Questo metodo è disponibile solo nei progetti MFC.

Serializza i dati associati alla variabile membro in o da un archivio.

```
CArchive& Serialize64(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*Ar*<br/>
Oggetto `CArchive` che si desidera aggiornare.

### <a name="return-value"></a>Valore restituito

Oggetto `CArchive` aggiornato.

## <a name="see-also"></a>Vedere anche

[asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)<br/>
[_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
