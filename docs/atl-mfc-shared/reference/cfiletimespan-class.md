---
title: Classe CFileTimeSpan
ms.date: 10/18/2018
f1_keywords:
- CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan::CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan::GetTimeSpan
- ATLTIME/ATL::CFileTimeSpan::SetTimeSpan
helpviewer_keywords:
- shared classes, CFileTimeSpan
- CFileTimeSpan class
ms.assetid: 5856fb39-9c82-4027-8ccf-8760890491ec
ms.openlocfilehash: 001e6ddc78a41e118949e9b750b78609f3ff9e92
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62235302"
---
# <a name="cfiletimespan-class"></a>Classe CFileTimeSpan

Questa classe fornisce metodi per la gestione dei relativo valori data e ora associati a un file.

## <a name="syntax"></a>Sintassi

```
class CFileTimeSpan
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::CFileTimeSpan](#cfiletimespan)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::GetTimeSpan](#gettimespan)|Chiamare questo metodo per recuperare l'intervallo di tempo dal `CFileTimeSpan` oggetto.|
|[CFileTimeSpan::SetTimeSpan](#settimespan)|Chiamare questo metodo per impostare l'intervallo di tempo del `CFileTimeSpan` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::operator-](#operator_-)|Esegue la sottrazione su un `CFileTimeSpan` oggetto.|
|[CFileTimeSpan::operator! =](#operator_neq)|Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.|
|[CFileTimeSpan::operator +](#operator_add)|Esegue l'addizione su un `CFileTimeSpan` oggetto.|
|[+ = CFileTimeSpan::operator](#operator_add_eq)|Esegue l'addizione su un `CFileTimeSpan` dell'oggetto e assegnare il risultato all'oggetto corrente.|
|[CFileTimeSpan::operator &lt;](#operator_lt)|Confronta due `CFileTimeSpan` oggetti per determinare il minore.|
|[CFileTimeSpan::operator &lt;=](#operator_lt_eq)|Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il minore.|
|[CFileTimeSpan::operator =](#operator_eq)|L'operatore di assegnazione.|
|[CFileTimeSpan::operator =](#operator_-_eq)|Esegue la sottrazione su un `CFileTimeSpan` dell'oggetto e assegnare il risultato all'oggetto corrente.|
|[CFileTimeSpan::operator ==](#operator_eq_eq)|Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.|
|[CFileTimeSpan::operator &gt;](#operator_gt)|Confronta due `CFileTimeSpan` oggetti per determinare il più grande.|
|[CFileTimeSpan::operator &gt;=](#operator_gt_eq)|Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il più grande.|

## <a name="remarks"></a>Note

Questa classe fornisce metodi per la gestione delle relativi periodi di tempo in genere rilevato quando si eseguono operazioni riguardanti quando un file è stato creato, l'ultimo accesso al o dell'ultima modifica. I metodi di questa classe vengono spesso utilizzati in combinazione con [classe CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md) oggetti.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [CFileTime::Millisecond](../../atl-mfc-shared/reference/cfiletime-class.md#millisecond).

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime. h

##  <a name="cfiletimespan"></a>  CFileTimeSpan::CFileTimeSpan

Costruttore.

```
CFileTimeSpan() throw();
CFileTimeSpan(const CFileTimeSpan& span) throw();
CFileTimeSpan(LONGLONG nSpan) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan` esistente.

*nSpan*<br/>
Un periodo di tempo in millisecondi.

### <a name="remarks"></a>Note

Il `CFileTimeSpan` oggetto può essere creato usando un oggetto esistente `CFileTimeSpan` dell'oggetto o espressa come valore a 64 bit. Il costruttore predefinito imposta l'intervallo di tempo su 0.

##  <a name="gettimespan"></a>  CFileTimeSpan::GetTimeSpan

Chiamare questo metodo per recuperare l'intervallo di tempo dal `CFileTimeSpan` oggetto.

```
LONGLONG GetTimeSpan() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'intervallo di tempo in millisecondi.

##  <a name="operator_-"></a>  CFileTimeSpan::operator -

Esegue la sottrazione su un `CFileTimeSpan` oggetto.

```
CFileTimeSpan operator-(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce un `CFileTimeSpan` oggetto che rappresenta il risultato della differenza tra due intervalli di tempo.

##  <a name="operator_neq"></a>  CFileTimeSpan::operator! =

Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.

```
bool operator!=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento di cui eseguire il confronto non è uguale al `CFileTimeSpan` oggetto; in caso contrario, FALSE.

##  <a name="operator_add"></a>  CFileTimeSpan::operator +

Esegue l'addizione su un `CFileTimeSpan` oggetto.

```
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce un `CFileTimeSpan` dell'oggetto che contiene la somma dell'ora di due intervalli.

##  <a name="operator_add_eq"></a>  + = CFileTimeSpan::operator

Esegue l'addizione su un `CFileTimeSpan` dell'oggetto e assegna il risultato all'oggetto corrente.

```
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'aggiornato `CFileTimeSpan` dell'oggetto che contiene la somma dell'ora di due intervalli.

##  <a name="operator_lt"></a>  CFileTimeSpan::operator &lt;

Confronta due `CFileTimeSpan` oggetti per determinare il minore.

```
bool operator<(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore di (vale a dire, rappresenta un periodo di tempo più breve) del secondo, in caso contrario, FALSE.

##  <a name="operator_lt_eq"></a>  CFileTimeSpan::operator &lt;=

Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il minore.

```
bool operator<=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore di (vale a dire, rappresenta un periodo di tempo più breve) o uguale al secondo, in caso contrario, FALSE.

##  <a name="operator_eq"></a>  CFileTimeSpan::operator =

L'operatore di assegnazione.

```
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'aggiornato `CFileTimeSpan` oggetto.

##  <a name="operator_-_eq"></a>  CFileTimeSpan::operator =

Esegue la sottrazione su un `CFileTimeSpan` dell'oggetto e assegna il risultato all'oggetto corrente.

```
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'aggiornato `CFileTimeSpan` oggetto.

##  <a name="operator_eq_eq"></a>  CFileTimeSpan::operator = =

Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.

```
bool operator==(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali, in caso contrario, FALSE.

##  <a name="operator_gt"></a>  CFileTimeSpan::operator &gt;

Confronta due `CFileTimeSpan` oggetti per determinare il più grande.

```
bool operator>(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (vale a dire, rappresenta un intervallo di tempo) del secondo, in caso contrario, FALSE.

##  <a name="operator_gt_eq"></a>  CFileTimeSpan::operator &gt;=

Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il più grande.

```
bool operator>=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (vale a dire, rappresenta un intervallo di tempo) o uguale al secondo, in caso contrario, FALSE.

##  <a name="settimespan"></a>  CFileTimeSpan::SetTimeSpan

Chiamare questo metodo per impostare l'intervallo di tempo del `CFileTimeSpan` oggetto.

```
void SetTimeSpan(LONGLONG nSpan) throw();
```

### <a name="parameters"></a>Parametri

*nSpan*<br/>
Il nuovo valore per l'intervallo di tempo in millisecondi.

## <a name="see-also"></a>Vedere anche

[FILETIME](/windows/desktop/api/minwinbase/ns-minwinbase-filetime)<br/>
[Classe CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
