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
ms.openlocfilehash: 3c80260c1f57e49a34b4e9f3331f4d0d69ab30ce
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62252533"
---
# <a name="ctimespan-class"></a>Classe CTimeSpan

Un periodo di tempo, che viene archiviato internamente come il numero di secondi nell'intervallo di tempo.

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
|[CTimeSpan::GetMinutes](#getminutes)|Restituisce un valore che rappresenta il numero di minuti nell'ora corrente (-59 e 59).|
|[CTimeSpan::GetSeconds](#getseconds)|Restituisce un valore che rappresenta il numero di secondi del minuto corrente (-59 e 59).|
|[CTimeSpan::GetTimeSpan](#gettimespan)|Restituisce il valore della `CTimeSpan` oggetto.|
|[CTimeSpan::GetTotalHours](#gettotalhours)|Restituisce un valore che rappresenta il numero totale di ore complete in questo `CTimeSpan`.|
|[CTimeSpan::GetTotalMinutes](#gettotalminutes)|Restituisce un valore che rappresenta il numero totale di minuti in questo `CTimeSpan`.|
|[CTimeSpan::GetTotalSeconds](#gettotalseconds)|Restituisce un valore che rappresenta il numero totale di secondi completati in questa `CTimeSpan`.|
|[CTimeSpan::Serialize64](#serialize64)|Serializza i dati da o verso un archivio.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operator + -](#operator_add_-)|Aggiunge e sottrae `CTimeSpan` oggetti.|
|[operator += -=](#operator_add_eq_-_eq)|Aggiunge e consente di sottrarre un `CTimeSpan` oggetti da e verso questo `CTimeSpan`.|
|[operatore = = < e così via.](#ctimespan_comparison_operators)|Confronta due valori di tempo relativo.|

## <a name="remarks"></a>Note

`CTimeSpan` non è una classe di base.

`CTimeSpan` funzioni di convertono secondi a varie combinazioni di giorni, ore, minuti e secondi.

Il `CTimeSpan` oggetto è archiviato in un **__time64_t** struttura, ovvero 8 byte.

Una classe complementare [CTime](../../atl-mfc-shared/reference/ctime-class.md), rappresenta un'ora assoluta.

Il `CTime` e `CTimeSpan` classi non sono progettate per la derivazione. Perché non sono presenti funzioni virtuali, le dimensioni di entrambe `CTime` e `CTimeSpan` oggetti corrisponde esattamente a 8 byte. La maggior parte delle funzioni membro sono inline.

Per altre informazioni sull'uso `CTimeSpan`, vedere gli articoli [data e ora](../../atl-mfc-shared/date-and-time.md), e [gestione del tempo](../../c-runtime-library/time-management.md) nel *Run-Time Library Reference*.

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime. h

##  <a name="ctimespan_comparison_operators"></a>  Operatori di confronto CTimeSpan

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

*span*<br/>
Oggetto da confrontare.

### <a name="return-value"></a>Valore restituito

Questi operatori confrontano due valori di tempo relativo. Restituiscono TRUE se la condizione è true. in caso contrario, FALSE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#169](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_1.cpp)]

##  <a name="ctimespan"></a>  CTimeSpan::CTimeSpan

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

*timeSpanSrc*<br/>
Oggetto `CTimeSpan` oggetto già esistente.

*time*<br/>
Oggetto **__time64_t** valore di ora, ovvero il numero di secondi nell'intervallo di tempo.

*lDays*, *nHours*, *nMins*, *nSecs*<br/>
Giorni, ore, minuti e secondi, rispettivamente.

### <a name="remarks"></a>Note

Tutti questi costruttori creano un nuovo `CTimeSpan` oggetto inizializzato con il relativo tempo specificato. Ogni costruttore è descritta di seguito:

- `CTimeSpan( );` Costruisce un valore non inizializzato `CTimeSpan` oggetto.

- `CTimeSpan( const CTimeSpan& );` Costruisce un `CTimeSpan` da un altro oggetto `CTimeSpan` valore.

- `CTimeSpan( __time64_t );` Costruisce un `CTimeSpan` dell'oggetto da un **__time64_t** tipo.

- `CTimeSpan( LONG, int, int, int );` Costruisce un `CTimeSpan` vincolata oggetto dai componenti con ogni componente per gli intervalli seguenti:

   |Componente|Intervallo|
   |---------------|-----------|
   |*lDays*|0-25.000 (circa)|
   |*nHours*|0-23|
   |*nMins*|0-59|
   |*nSecs*|0-59|

Si noti che la versione di Debug della libreria di classi Microsoft Foundation asserisce se uno o più dei componenti orario JE MIMO rozsah. È responsabilità dell'utente per convalidare gli argomenti prima della chiamata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#162](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_2.cpp)]

##  <a name="format"></a>  CTimeSpan::Format

Genera una stringa formattata che corrisponde a questo `CTimeSpan`.

```
CString Format(LPCSTR pFormat) const;
CString Format(LPCTSTR pszFormat) const;
CString Format(UINT nID) const;
```

### <a name="parameters"></a>Parametri

*pFormat*, *pszFormat*<br/>
Formattazione di un stringa simile al `printf` stringa di formattazione. Codici, preceduti da una percentuale di formattazione (`%`) accesso, viene sostituito dal corrispondente `CTimeSpan` componente. Altri caratteri nella stringa di formattazione vengono copiati senza modifiche alla stringa restituita. Il valore e il significato dei codici di formattazione per `Format` sono elencati di seguito:

- **%D** totale di giorni in questo `CTimeSpan`

- **%H** ore del giorno corrente

- **%M** minuti nell'ora corrente

- **%S** secondi del minuto corrente

- **%%** Segno di percentuale

*nID*<br/>
L'ID della stringa che identifica questo formato.

### <a name="return-value"></a>Valore restituito

Oggetto `CString` oggetto che contiene l'ora formattata.

### <a name="remarks"></a>Note

La versione di Debug della libreria controlla i codici di formattazione e indica se il codice non è incluso nell'elenco precedente.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#163](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_3.cpp)]

##  <a name="getdays"></a>  CTimeSpan::GetDays

Restituisce un valore che rappresenta il numero di giorni completati in questa `CTimeSpan`.

```
LONGLONG GetDays() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di giorni di 24 ore complete nell'intervallo di tempo. Questo valore può essere negativo se l'intervallo di tempo è negativa.

### <a name="remarks"></a>Note

Si noti che possono causare l'ora legale `GetDays` per restituire un risultato potenzialmente errato. Ad esempio, quando ora legale è in effetti, `GetDays` indica il numero di giorni compreso tra 1 aprile e l'1 maggio come 29, 30 non, poiché viene ridotto a un'ora e pertanto non viene considerato come un giorno completo di un giorno nel mese di aprile.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#164](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_4.cpp)]

##  <a name="gethours"></a>  CTimeSpan::GetHours

Restituisce un valore che rappresenta il numero di ore del giorno corrente (-23 e 23).

```
LONG GetHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di ore del giorno corrente. L'intervallo è compreso tra -23 e 23.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#165](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_5.cpp)]

##  <a name="getminutes"></a>  CTimeSpan::GetMinutes

Restituisce un valore che rappresenta il numero di minuti nell'ora corrente (-59 e 59).

```
LONG GetMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di minuti nell'ora corrente. L'intervallo è compreso tra -59 e 59.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetHours](#gethours).

##  <a name="getseconds"></a>  CTimeSpan::GetSeconds

Restituisce un valore che rappresenta il numero di secondi del minuto corrente (-59 e 59).

```
LONG GetSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero di secondi del minuto corrente. L'intervallo è compreso tra -59 e 59.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetHours](#gethours).

##  <a name="gettimespan"></a>  CTimeSpan::GetTimeSpan

Restituisce il valore della `CTimeSpan` oggetto.

```
__ time64_t GetTimeSpan() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il valore corrente del `CTimeSpan` oggetto.

##  <a name="gettotalhours"></a>  CTimeSpan::GetTotalHours

Restituisce un valore che rappresenta il numero totale di ore complete in questo `CTimeSpan`.

```
LONGLONG GetTotalHours() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale di ore complete nell'oggetto `CTimeSpan`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#166](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_6.cpp)]

##  <a name="gettotalminutes"></a>  CTimeSpan::GetTotalMinutes

Restituisce un valore che rappresenta il numero totale di minuti in questo `CTimeSpan`.

```
LONGLONG GetTotalMinutes() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale di minuti in questo `CTimeSpan`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetTotalHours](#gettotalhours).

##  <a name="gettotalseconds"></a>  CTimeSpan::GetTotalSeconds

Restituisce un valore che rappresenta il numero totale di secondi completati in questa `CTimeSpan`.

```
LONGLONG GetTotalSeconds() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce il numero totale di secondi completati in questa `CTimeSpan`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [GetTotalHours](#gettotalhours).

##  <a name="operator_add_-"></a>  CTimeSpan::operator +, -

Aggiunge e sottrae `CTimeSpan` oggetti.

```
CTimeSpan operator+(CTimeSpan span) const throw();
CTimeSpan operator-(CTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Il valore da aggiungere al `CTimeSpan` oggetto.

### <a name="return-value"></a>Valore restituito

Oggetto `CTimeSpan` oggetto che rappresenta il risultato dell'operazione.

### <a name="remarks"></a>Note

Questi due operatori consentono di addizione e sottrazione `CTimeSpan` oggetti da e verso tra loro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#167](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_7.cpp)]

##  <a name="operator_add_eq_-_eq"></a>  CTimeSpan::operator + =, =

Aggiunge e consente di sottrarre un `CTimeSpan` oggetti da e verso questo `CTimeSpan`.

```
CTimeSpan& operator+=(CTimeSpan span) throw();
CTimeSpan& operator-=(CTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Il valore da aggiungere al `CTimeSpan` oggetto.

### <a name="return-value"></a>Valore restituito

Aggiornato `CTimeSpan` oggetto.

### <a name="remarks"></a>Note

Questi operatori consentono di addizione e sottrazione una `CTimeSpan` oggetti da e verso questo `CTimeSpan`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATLMFC_Utilities#168](../../atl-mfc-shared/codesnippet/cpp/ctimespan-class_8.cpp)]

##  <a name="serialize64"></a>  CTimeSpan::Serialize64

> [!NOTE]
>  Questo metodo è disponibile solo in progetti MFC.

Serializza i dati associati con la variabile membro in o da un archivio.

```
CArchive& Serialize64(CArchive& ar);
```

### <a name="parameters"></a>Parametri

*ar*<br/>
Il `CArchive` oggetto che si desidera aggiornare.

### <a name="return-value"></a>Valore restituito

Aggiornato `CArchive` oggetto.

## <a name="see-also"></a>Vedere anche

[asctime, _wasctime](../../c-runtime-library/reference/asctime-wasctime.md)<br/>
[_ftime, _ftime32, _ftime64](../../c-runtime-library/reference/ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](../../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](../../c-runtime-library/reference/localtime-localtime32-localtime64.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
