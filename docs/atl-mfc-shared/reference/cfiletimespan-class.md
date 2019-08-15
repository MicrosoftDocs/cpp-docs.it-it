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
ms.openlocfilehash: f9bb42ba4c142f671a83dcfa7e99cff940fff047
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491284"
---
# <a name="cfiletimespan-class"></a>Classe CFileTimeSpan

Questa classe fornisce metodi per la gestione dei valori di data e ora relativi associati a un file.

## <a name="syntax"></a>Sintassi

```
class CFileTimeSpan
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::CFileTimeSpan](#cfiletimespan)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::GetTimeSpan](#gettimespan)|Chiamare questo metodo per recuperare l'intervallo di tempo dall' `CFileTimeSpan` oggetto.|
|[CFileTimeSpan::SetTimeSpan](#settimespan)|Chiamare questo metodo per impostare l'intervallo di tempo dell' `CFileTimeSpan` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[Operatore CFileTimeSpan:: operator-](#operator_-)|Esegue la sottrazione su `CFileTimeSpan` un oggetto.|
|[CFileTimeSpan:: operator! =](#operator_neq)|Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.|
|[CFileTimeSpan:: operator +](#operator_add)|Esegue l'addizione `CFileTimeSpan` su un oggetto.|
|[CFileTimeSpan:: operator + =](#operator_add_eq)|Esegue l'addizione `CFileTimeSpan` su un oggetto e assegna il risultato all'oggetto corrente.|
|[Operatore CFileTimeSpan::&lt;](#operator_lt)|Confronta due `CFileTimeSpan` oggetti per determinare il minore.|
|[Operatore CFileTimeSpan::&lt;=](#operator_lt_eq)|Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il minore.|
|[CFileTimeSpan:: operator =](#operator_eq)|Operatore di assegnazione.|
|[CFileTimeSpan:: operator-=](#operator_-_eq)|Esegue la sottrazione su `CFileTimeSpan` un oggetto e assegna il risultato all'oggetto corrente.|
|[CFileTimeSpan:: operator = =](#operator_eq_eq)|Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.|
|[Operatore CFileTimeSpan::&gt;](#operator_gt)|Confronta due `CFileTimeSpan` oggetti per determinare il più grande.|
|[Operatore CFileTimeSpan::&gt;=](#operator_gt_eq)|Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il più grande.|

## <a name="remarks"></a>Note

Questa classe fornisce metodi per la gestione dei periodi di tempo relativi spesso riscontrati durante l'esecuzione di operazioni relative al momento in cui è stato creato un file, l'ultimo accesso o l'ultima modifica. I metodi di questa classe vengono spesso usati insieme agli oggetti della [classe CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md) .

## <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime:: Millisecond](../../atl-mfc-shared/reference/cfiletime-class.md#millisecond).

## <a name="requirements"></a>Requisiti

**Intestazione:** atltime. h

##  <a name="cfiletimespan"></a>CFileTimeSpan:: CFileTimeSpan

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

L' `CFileTimeSpan` oggetto può essere creato usando un oggetto `CFileTimeSpan` esistente o espresso come valore a 64 bit. Il costruttore predefinito imposta l'intervallo di tempo su 0.

##  <a name="gettimespan"></a>CFileTimeSpan:: GetTimeSpan

Chiamare questo metodo per recuperare l'intervallo di tempo dall' `CFileTimeSpan` oggetto.

```
LONGLONG GetTimeSpan() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'intervallo di tempo in millisecondi.

##  <a name="operator_-"></a>Operatore CFileTimeSpan:: operator-

Esegue la sottrazione su `CFileTimeSpan` un oggetto.

```
CFileTimeSpan operator-(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce un `CFileTimeSpan` oggetto che rappresenta il risultato della differenza tra due intervalli di tempo.

##  <a name="operator_neq"></a>CFileTimeSpan:: operator! =

Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.

```
bool operator!=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce true se l'elemento da confrontare non è uguale all' `CFileTimeSpan` oggetto; in caso contrario, false.

##  <a name="operator_add"></a>CFileTimeSpan:: operator +

Esegue l'addizione `CFileTimeSpan` su un oggetto.

```
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce un `CFileTimeSpan` oggetto contenente la somma dei due intervalli di tempo.

##  <a name="operator_add_eq"></a>CFileTimeSpan:: operator + =

Esegue l'addizione `CFileTimeSpan` su un oggetto e assegna il risultato all'oggetto corrente.

```
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTimeSpan` aggiornato contenente la somma dei due intervalli di tempo.

##  <a name="operator_lt"></a>Operatore CFileTimeSpan::&lt;

Confronta due `CFileTimeSpan` oggetti per determinare il minore.

```
bool operator<(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore (ovvero rappresenta un periodo di tempo più breve) del secondo; in caso contrario, FALSE.

##  <a name="operator_lt_eq"></a>Operatore CFileTimeSpan::&lt;=

Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il minore.

```
bool operator<=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore di (ovvero rappresenta un periodo di tempo più breve) o uguale al secondo; in caso contrario, FALSE.

##  <a name="operator_eq"></a>CFileTimeSpan:: operator =

Operatore di assegnazione.

```
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTimeSpan` aggiornato.

##  <a name="operator_-_eq"></a>CFileTimeSpan:: operator-=

Esegue la sottrazione su `CFileTimeSpan` un oggetto e assegna il risultato all'oggetto corrente.

```
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
Oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTimeSpan` aggiornato.

##  <a name="operator_eq_eq"></a>CFileTimeSpan:: operator = =

Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.

```
bool operator==(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali; in caso contrario, FALSE.

##  <a name="operator_gt"></a>Operatore CFileTimeSpan::&gt;

Confronta due `CFileTimeSpan` oggetti per determinare il più grande.

```
bool operator>(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (ovvero, rappresenta un periodo di tempo più lungo) del secondo; in caso contrario, FALSE.

##  <a name="operator_gt_eq"></a>Operatore CFileTimeSpan::&gt;=

Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il più grande.

```
bool operator>=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

*span*<br/>
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (ovvero, rappresenta un periodo di tempo più lungo) o uguale al secondo; in caso contrario, FALSE.

##  <a name="settimespan"></a>  CFileTimeSpan::SetTimeSpan

Chiamare questo metodo per impostare l'intervallo di tempo dell' `CFileTimeSpan` oggetto.

```
void SetTimeSpan(LONGLONG nSpan) throw();
```

### <a name="parameters"></a>Parametri

*nSpan*<br/>
Nuovo valore per l'intervallo di tempo in millisecondi.

## <a name="see-also"></a>Vedere anche

[FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime)<br/>
[Classe CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
