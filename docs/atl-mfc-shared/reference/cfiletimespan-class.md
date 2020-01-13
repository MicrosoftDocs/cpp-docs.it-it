---
title: Classe CFileTimeSpan
description: La classe di Active Template Library (ATL) e Microsoft Foundation Classes (MFC) CFileTimeSpan gestisce gli intervalli di tempo nelle unità FILETIME.
ms.date: 01/10/2020
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
ms.openlocfilehash: 89d95759b11ff7e52c2a8fa75cf94f7b7b81fa36
ms.sourcegitcommit: c3283062ce4e382aec7f11626d358a37caf8cdbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/13/2020
ms.locfileid: "75914386"
---
# <a name="cfiletimespan-class"></a>Classe CFileTimeSpan

Questa classe fornisce metodi per la gestione dei valori di data e ora relativi associati a un file.

## <a name="syntax"></a>Sintassi

```cpp
class CFileTimeSpan
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::CFileTimeSpan](#cfiletimespan)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[CFileTimeSpan::GetTimeSpan](#gettimespan)|Chiamare questo metodo per recuperare l'intervallo di tempo dall'oggetto `CFileTimeSpan`.|
|[CFileTimeSpan::SetTimeSpan](#settimespan)|Chiamare questo metodo per impostare l'intervallo di tempo dell'oggetto `CFileTimeSpan`.|

### <a name="public-operators"></a>Operatori pubblici

|Name|Descrizione|
|----------|-----------------|
|[Operatore CFileTimeSpan:: operator-](#operator_-)|Esegue la sottrazione su un oggetto `CFileTimeSpan`.|
|[CFileTimeSpan:: operator! =](#operator_neq)|Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.|
|[CFileTimeSpan:: operator +](#operator_add)|Esegue l'addizione su un oggetto `CFileTimeSpan`.|
|[CFileTimeSpan:: operator + =](#operator_add_eq)|Esegue l'addizione su un oggetto `CFileTimeSpan` e assegna il risultato all'oggetto corrente.|
|[&lt; CFileTimeSpan:: operator](#operator_lt)|Confronta due oggetti `CFileTimeSpan` per determinare il minore.|
|[&lt;CFileTimeSpan:: operator =](#operator_lt_eq)|Confronta due oggetti `CFileTimeSpan` per determinare l'uguaglianza o il minore.|
|[CFileTimeSpan:: operator =](#operator_eq)|Operatore di assegnazione.|
|[CFileTimeSpan:: operator-=](#operator_-_eq)|Esegue la sottrazione su un oggetto `CFileTimeSpan` e assegna il risultato all'oggetto corrente.|
|[CFileTimeSpan:: operator = =](#operator_eq_eq)|Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.|
|[&gt; CFileTimeSpan:: operator](#operator_gt)|Confronta due oggetti `CFileTimeSpan` per determinare il più grande.|
|[&gt;CFileTimeSpan:: operator =](#operator_gt_eq)|Confronta due oggetti `CFileTimeSpan` per determinare l'uguaglianza o il più grande.|

## <a name="remarks"></a>Note

La classe `CFileTimeSpan` fornisce metodi per gestire i periodi di tempo relativi nelle unità utilizzate dal file system. Queste unità vengono spesso usate nelle operazioni sui file, ad esempio quando è stato creato un file, l'ultimo accesso o l'ultima modifica. I metodi di questa classe vengono spesso usati insieme agli oggetti della [classe CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md) .

## <a name="example"></a>Esempio

Vedere l'esempio per [CFileTime:: Millisecond](../../atl-mfc-shared/reference/cfiletime-class.md#millisecond).

## <a name="requirements"></a>Requisiti di

**Intestazione:** atltime. h

## <a name="cfiletimespan"></a>CFileTimeSpan:: CFileTimeSpan

Costruttore.

```cpp
CFileTimeSpan() throw();
CFileTimeSpan(const CFileTimeSpan& span) throw();
CFileTimeSpan(LONGLONG nSpan) throw();
```

### <a name="parameters"></a>Parametri

\ *span*
Oggetto `CFileTimeSpan` esistente.

\ *nSpan*
Un periodo di tempo nelle unità FILETIME.

### <a name="remarks"></a>Note

È possibile creare l'oggetto `CFileTimeSpan` usando un oggetto `CFileTimeSpan` esistente o espresso come valore a 64 bit in unità di tempo di 100-nanosecondi. Per ulteriori informazioni, vedere [CFileTime](cfiletime-class.md). Il costruttore predefinito imposta l'intervallo di tempo su 0.

## <a name="gettimespan"></a>CFileTimeSpan:: GetTimeSpan

Chiamare questo metodo per recuperare l'intervallo di tempo dall'oggetto `CFileTimeSpan`.

```cpp
LONGLONG GetTimeSpan() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'intervallo di tempo nelle unità FILETIME di 100-nanosecondi. Per ulteriori informazioni, vedere [CFileTime](cfiletime-class.md).

## <a name="operator_-"></a>Operatore CFileTimeSpan:: operator-

Esegue la sottrazione su un oggetto `CFileTimeSpan`.

```cpp
CFileTimeSpan operator-(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

\ *span*
Un oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce un oggetto `CFileTimeSpan` che rappresenta il risultato della differenza tra due intervalli di tempo.

## <a name="operator_neq"></a>CFileTimeSpan:: operator! =

Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.

```cpp
bool operator!=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

\ *span*
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'elemento da confrontare non è uguale all'oggetto `CFileTimeSpan`; in caso contrario, FALSE.

## <a name="operator_add"></a>CFileTimeSpan:: operator +

Esegue l'addizione su un oggetto `CFileTimeSpan`.

```cpp
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

\ *span*
Un oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce un oggetto `CFileTimeSpan` contenente la somma dei due intervalli di tempo.

## <a name="operator_add_eq"></a>CFileTimeSpan:: operator + =

Esegue l'addizione su un oggetto `CFileTimeSpan` e assegna il risultato all'oggetto corrente.

```cpp
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

\ *span*
Un oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTimeSpan` aggiornato contenente la somma dei due intervalli di tempo.

## <a name="operator_lt"></a>&lt; CFileTimeSpan:: operator

Confronta due oggetti `CFileTimeSpan` per determinare il minore.

```cpp
bool operator<(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

\ *span*
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore (ovvero rappresenta un periodo di tempo più breve) del secondo; in caso contrario, FALSE.

## <a name="operator_lt_eq"></a>&lt;CFileTimeSpan:: operator =

Confronta due oggetti `CFileTimeSpan` per determinare l'uguaglianza o il minore.

```cpp
bool operator<=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

\ *span*
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è minore di (ovvero rappresenta un periodo di tempo più breve) o uguale al secondo; in caso contrario, FALSE.

## <a name="operator_eq"></a>CFileTimeSpan:: operator =

Operatore di assegnazione.

```cpp
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```

### <a name="parameters"></a>Parametri

\ *span*
Un oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTimeSpan` aggiornato.

## <a name="operator_-_eq"></a>CFileTimeSpan:: operator-=

Esegue la sottrazione su un oggetto `CFileTimeSpan` e assegna il risultato all'oggetto corrente.

```cpp
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```

### <a name="parameters"></a>Parametri

\ *span*
Un oggetto `CFileTimeSpan`.

### <a name="return-value"></a>Valore restituito

Restituisce l'oggetto `CFileTimeSpan` aggiornato.

## <a name="operator_eq_eq"></a>CFileTimeSpan:: operator = =

Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.

```cpp
bool operator==(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

\ *span*
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali; in caso contrario, FALSE.

## <a name="operator_gt"></a>&gt; CFileTimeSpan:: operator

Confronta due oggetti `CFileTimeSpan` per determinare il più grande.

```cpp
bool operator>(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

\ *span*
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (ovvero, rappresenta un periodo di tempo più lungo) del secondo; in caso contrario, FALSE.

## <a name="operator_gt_eq"></a>&gt;CFileTimeSpan:: operator =

Confronta due oggetti `CFileTimeSpan` per determinare l'uguaglianza o il più grande.

```cpp
bool operator>=(CFileTimeSpan span) const throw();
```

### <a name="parameters"></a>Parametri

\ *span*
L'oggetto `CFileTimeSpan` da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il primo oggetto è maggiore di (ovvero, rappresenta un periodo di tempo più lungo) o uguale al secondo; in caso contrario, FALSE.

## <a name="settimespan"></a>  CFileTimeSpan::SetTimeSpan

Chiamare questo metodo per impostare l'intervallo di tempo dell'oggetto `CFileTimeSpan`.

```cpp
void SetTimeSpan(LONGLONG nSpan) throw();
```

### <a name="parameters"></a>Parametri

\ *nSpan*
Nuovo valore per l'intervallo di tempo in unità di tempo di 100-nanosecondi. Per ulteriori informazioni, vedere [CFileTime](cfiletime-class.md).

## <a name="see-also"></a>Vedere anche

\ [FILEtime](/windows/win32/api/minwinbase/ns-minwinbase-filetime)
[Classe CFileTime](cfiletime-class.md)\
\ [grafico della gerarchia](../../mfc/hierarchy-chart.md)
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
